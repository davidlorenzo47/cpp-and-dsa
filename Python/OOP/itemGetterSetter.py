import csv

class Item:
    pay_rate = 0.8 # The pay rate after 20% discount
    all = []
    def __init__(self, name: str, price: float, quantity=0):
        # Run validations to the received arguments
        assert price >= 0, f"Price {price} is not greater than or equal to zero!"
        assert quantity >= 0, f"Quantity {quantity} is not greater or equal to zero!"

        # Assign to self object
        self._name = name
        self.__price = price
        self.quantity = quantity

        # Actions to execute
        Item.all.append(self)

    @property
    def price(self):
        return self.__price
    
    def apply_discount(self):
        self.__price = self.__price * self.pay_rate

    #Encapsulation is the packing of data and functions that work on that data within a single object. By doing so, you can hide the internal state of the object from the outside. This is known as information hiding.
    def apply_increment(self, incrementValue):  #encapsulation in python
        self.__price = self.__price + self.__price*incrementValue


    #property decorator gives us control on what we can do once we get the attribute. Here, we made name as read only. We cannot change the name of the attribute once it is assigned.
    @property
    def name(self): #getter method
        return self.__name   #single underscore makes the variable private. However we can change its value outside class by writing variable name with underscore before it.
        #To make a varable completely not accessible outside the class, we have to write 2 underscores before the variable.

    @name.setter
    def ChangeName (self, value):   #setter method
        if len(value) > 10:
            raise Exception("The name is too long :(")
        else:
            print("You are trying to change a value...")
            self.__name = value
            print("Name changed Succseefully !!")

    def calculate_total___price(self):
        return self.__price * self.quantity

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
        return f"{self.__class__.__name__}('{self.name}', {self.__price}, {self.quantity})"
    

    #Abstraction: Hiding methods from user, so that they cannot access it.
    def __connect(self, server):
        pass

    def __bodyOfEmail(self):
        return f"""
        Hello,
        We have {self.quantity} {self.__name}.
        Do you want it?
        Regards,
        ...
        """
    
    def __send(self):
        pass

    def send_email(self):
        self.__connect('')
        self.__bodyOfEmail()
        self.__send()