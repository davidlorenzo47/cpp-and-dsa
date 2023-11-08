from collections import defaultdict

class BankingSystem:
    def __init__(self):
        self.accounts = {}  # Stores account balances
        self.transaction_history = defaultdict(list)  # Stores transaction history for each account
        self.scheduled_transfers = {}  # Stores scheduled transfers and their expiration times
        self.transfer_counter = 1  # Counter to generate unique transfer IDs
        self.MS_IN_1_DAY = 86400000  # Milliseconds in a day

    def create_account(self, timestamp, account_id):
        self.accounts[account_id] = 0
        self.transaction_history[account_id] = [(timestamp, 0)]
        return "true"

    def deposit(self, timestamp, account_id, amount):
        if account_id in self.accounts:
            self.accounts[account_id] += int(amount)
            self.transaction_history[account_id].append((timestamp, int(amount)))
            return str(self.accounts[account_id])
        return ""

    def transfer(self, timestamp, source_account_id, target_account_id, amount):
        if source_account_id == target_account_id:
            return ""  # Source and target accounts are the same

        if source_account_id not in self.accounts or target_account_id not in self.accounts:
            return ""  # Source or target account doesn't exist

        amount = int(amount)
        if self.accounts[source_account_id] < amount:
            return ""  # Insufficient funds in the source account

        transfer_id = "transfer" + str(self.transfer_counter)
        self.transfer_counter += 1
        expiration_time = timestamp + self.MS_IN_1_DAY
        self.scheduled_transfers[transfer_id] = (source_account_id, target_account_id, amount, expiration_time)

        return transfer_id

    def accept_transfer(self, timestamp, account_id, transfer_id):
        if transfer_id in self.scheduled_transfers:
            source_account_id, target_account_id, amount, expiration_time = self.scheduled_transfers[transfer_id]
            if account_id == target_account_id:
                if timestamp <= expiration_time:
                    # Transfer is accepted
                    self.accounts[source_account_id] -= amount
                    self.accounts[target_account_id] += amount
                    self.transaction_history[source_account_id].append((timestamp, -amount))
                    self.transaction_history[target_account_id].append((timestamp, amount))
                    del self.scheduled_transfers[transfer_id]
                    return "true"
                else:
                    # Transfer has expired
                    del self.scheduled_transfers[transfer_id]
            return "false"
        return "false"

    def process_query(self, query):
        operation = query[0]
        timestamp = int(query[1])
        if operation == "CREATE_ACCOUNT":
            return self.create_account(timestamp, query[2])
        elif operation == "DEPOSIT":
            return self.deposit(timestamp, query[2], query[3])
        elif operation == "TRANSFER":
            return self.transfer(timestamp, query[2], query[3], query[4])
        elif operation == "ACCEPT_TRANSFER":
            return self.accept_transfer(timestamp, query[2], query[3])
        return ""

def bank_operations(queries):
    banking_system = BankingSystem()
    result = []
    for query in queries:
        result.append(banking_system.process_query(query))
    return result