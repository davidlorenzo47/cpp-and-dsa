#include <iostream>
using namespace std;

//in constructor we give value at first in the class and call the class in the main function.

//one class can have multiple constructors.
//making more than one constructor is called constructor overloading.

//constructor is a special member function.
class Complex{
    int a, b;
    public:
    //creating a constructor.
    //constructor is a special member function with same name as of the class. It is automatically invoked whenever an object is created.
    //It is used to initialize the objects of its class.

    // Complex(void);  //constructor declaration(name of class and constructor should be same).

    Complex(int x, int y){   //constructor overloading
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

// Complex :: Complex(void){   //default constructor as it takes no parameters.
//     a = 0;
//     b = 0;
// }

int main() {

    Complex c1(4,6);
    c1.printNumber();

    Complex c2(5,0);
    c2.printNumber();

    return 0;
}

/*
characteristics of constructors
1. It should declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.
*/