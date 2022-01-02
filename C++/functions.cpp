#include <iostream>
using namespace std;


int sum(int a, int b) //    a =num1, b = num2 
{
    int c = a+b;
    return c;
}

int sub(int a, int b); //function prototyping (writing function after int main)
//"int sub(int, int)" is also acceptable

//"void function()" does not return anything

int main() {

    int num1, num2;

    cout<<"Enter first number"<<endl;
    cin>>num1;

    cout<<"Enter second number"<<endl;
    cin>>num2;

    //num1 and num2 are actual parameters

    cout<<"The sum is "<<sum(num1, num2)<<endl;   //value of sum is returned(which is )

    cout<<"The difference is "<<sub(num1,num2);
    return 0;
}

int sub(int a, int b) //    a =num1, b = num2 
{
    //formal parameters a and b will be taking values from num1 and num2
    int c = a-b;
    return c;
}