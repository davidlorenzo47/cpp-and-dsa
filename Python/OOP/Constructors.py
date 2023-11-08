import csv

#Collection of methods with double underscores is called "Magic Methods".

class Item:

    after_discount = 0.8 #Amount to be paid after 20% Discount

    all = []

    #This method will be called by default when an object of this class is called.
    def __init__(self, name: str, price=0.0, quantity=0): #here only string is expected for name.

        #validations
        #assert keyword is used to for validations. If condition is false then we get AssertionError. We can also write our own message to be displayed when there is AssertionError. 
        assert price >= 0, f" Price {price} is not greater than 0!"
        assert quantity >= 0, f" Quantity {quantity} is not greater than 0!"

        # print(f"This is instance for: {name}")
        self.name = name    #dynamic arrtibute assignment, here name that is passed is assigned to the instance that is created.
        self.price = price
        self.quantity = quantity

        #Actions to execute
        Item.all.append(self)

    def total_price(self):
        return self.price * self.quantity
    

    def discount(self):
        self.price = self.price*self.after_discount #Accessing class level attribute "after_discount"

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

    def __repr__(self):
        return f"Item('{self.name}', '{self.price}', '{self.quantity}')"

        

Item.instantiate_from_csv()
print(Item.all)



# item1 = Item("Item1", 10, 50)
# # print(item1.total_price())

# item2 = Item("Item2", 20, 30)
# # print(item2.total_price())


# print(item1.name, item1.price, item1.quantity)
# print(item2.name, item2.price, item2.quantity)


# print("******************************")

# item1.discount()
# print(item1.name, item1.price, item1.quantity)

# item2.after_discount = 0.7
# item2.discount()
# print(item2.name, item2.price, item2.quantity)

# print("******************************")



# print(Item.after_discount)  #accessing class variable
# print(item1.after_discount) #accessing class variable from instance level.
# print(item2.after_discount) #accessing class variable from instance level.

# print(Item.__dict__) #Magic attribute, gives all attributes for class level.
# print(item1.__dict__) #Magic attribute, gives all attributes for instance level.
# print(item2.__dict__) #Magic attribute, gives all attributes for instance level.




# item1 = Item("Phone", 100, 1)
# item2 = Item("Laptop", 1000, 3)
# item3 = Item("Cable", 10, 5)
# item4 = Item("Mouse", 50, 5)
# item5 = Item("Keyboard", 75, 5)

# #Printing objects that are created
# print(Item.all)
# for instance in Item.all:
#     print(instance.name)