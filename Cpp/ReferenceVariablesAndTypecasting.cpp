#include <iostream>
using namespace std;

int c = 50;

int main() {

    // int a, b, c;

    // cout<<"Enter the value of a :";
    // cin>>a;

    // cout<<"Enter the value of b :";
    // cin>>b;

    // c = a+ b;

    // cout<<"The sum of a and b stored in c is: "<<c<<endl;

    // cout<<"The global value of c is: "<<::c;


    // ****************************Reference Variables
    // int x = 50;

    // int &y = x; //y is reference to x

    // cout<<x<<endl<<y;

    //******************Typecasting eg: int to float (conversion of one data type to another)

    int a = 10;

    cout<<"Value of a is: "<<a<<" and Size of a is: "<<sizeof(a)<<""<<endl;

    cout<<"Value of a as typecasted from int to float is: "<<(float)a<<" and Size of a is: "<<sizeof(a)<<""<<endl;

    float b = 10.99;

    cout<<"Value of b as float is: "<<b<<" and value of b as typecasted to int is: "<<int(b);  

    return 0;
}