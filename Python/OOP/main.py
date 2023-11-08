#here, we will use this file only to create objects

#inheritance is mechanism that allows us to reuse our code across classes.

from phone import Phone
from keyboardd import Keyboard

item2 = Phone("MyItem", 750, 1)
item1 = Keyboard("MyKeyboard", 200, 5)

item2.apply_increment(0.2)  #We are using inheritance here. Here Phone class is using methods from Item class.
# item1.ChangeName = "OtherItem"


# item2.send_email

item1.apply_discount()
item2.apply_discount()
print(item2.price)
print(item1.price)