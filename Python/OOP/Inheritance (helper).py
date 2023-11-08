#When to use a static method and when to use a class method

#We will use a static method when we want to do something that is same for all the instances.

#Difference between static method and class method is that, for Static method, it is okay if we do not have first argument as self.

class Item:
    pay_rate = 0.8 # The pay rate after 20% discount
    all = []
    def __init__(self, name: str, price: float, quantity=0):
        # Run validations to the received arguments
        assert price >= 0, f"Price {price} is not greater than or equal to zero!"
        assert quantity >= 0, f"Quantity {quantity} is not greater or equal to zero!"

        # Assign to self object
        self.name = name
        self.price = price
        self.quantity = quantity

        # Actions to execute
        Item.all.append(self)

    def calculate_total_price(self):
        return self.price * self.quantity

    def apply_discount(self):
        self.price = self.price * self.pay_rate

    @classmethod
    def instantiate_from_csv(cls):
        with open('items.csv', 'r') as f:
            reader = csv.DictReader(f)
            items = list(reader)

        for item in items:
            Item(
                name=item.get('name'),
                price=float(item.get('price')),
                quantity=int(item.get('quantity')),
            )

    @staticmethod
    def is_integer(num):
        # We will count out the floats that are point zero
        # For i.e: 5.0, 10.0
        if isinstance(num, float):
            # Count out the floats that are point zero
            return num.is_integer()
        elif isinstance(num, int):
            return True
        else:
            return False

    def __repr__(self):
        return f"{self.__class__.__name__}('{self.name}', {self.price}, {self.quantity})"
    

class Phone(Item):
    def __init__(self, name: str, price: float, quantity=0, brokenPhones = 0 ):

        #Calling Super method to have access to all attributes/methods
        super().__init__(
            name, price, quantity
        )

        # Run validations to the received arguments
        assert brokenPhones >= 0, f"Broken Phones {brokenPhones} is not greater or equal to zero!"

        # Assign to self object
        self.brokenPhones = brokenPhones


phone1 = Phone("jscPhonev10", 500, 5, 1)
phone2 = Phone("jscPhonev10", 500, 5, 1)
print(phone1.calculate_total_price())
print(Item.all)
print(Phone.all)