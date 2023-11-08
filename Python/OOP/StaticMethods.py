import csv

class Item:

    all = []

    #This method will be called by default when an object of this class is called.
    def __init__(self, name: str, price=0.0, quantity=0): #here only string is expected for name.

        #validations
        #assert keyword is used to for validations. If condition is false then we get AssertionError. We can also write our own message to be displayed when there is AssertionError. 
        assert price >= 0, f" Price {price} is not greater than 0!"
        assert quantity >= 0, f" Quantity {quantity} is not greater than 0!"

        self.name = name    #dynamic arrtibute assignment, here name that is passed is assigned to the instance that is created.
        self.price = price
        self.quantity = quantity

        #Actions to execute
        Item.all.append(self)

    def __repr__(self):
        return f"Item('{self.name}', '{self.price}', '{self.quantity}')"

    #This is a class method.
    #A decorator is a design pattern in Python that allows a user to add new functionality to an existing object without modifying its structure. Decorators are usually called before the definition of a function you want to decorate.
    @classmethod
    def instantiate_from_csv(cls):  #Here class is passed as first argument as a decorator is used.
        with open('items.csv', 'r') as f:
            reader = csv.DictReader(f)
            items = list(reader)
        for item in items:
            Item(
                name=item.get('name'),
                price=float(item.get('price')),
                quantity=int(item.get('quantity')),
            )

    #method to check is a number is integer or not.
    @staticmethod   #using a decorator
    def is_integer(num):
        if isinstance(num, float):
            return num.is_integer()
        elif isinstance(num, int):
            return True
        else:
            return False



print(Item.is_integer(7.2))