#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {

    //what is pointer? ------> data type which holds the address of other data type

    //put & before variable to get address; put * before variable to get value of that address

    int a = 3; //a is declared
    int*b;  //b is declared pointer
    b = &a; //b is given address of a
    cout<<"The address of a is "<<&a <<endl; 
    cout<<"The address of a is "<<b <<endl;

    cout<<"The address of b is "<<&b <<endl;
    cout<<"The value at address b is "<<*b <<endl;

    // pointer to pointer
    int** c = &b; // This is pointer to b which is pointer to a 
    cout<<"The address of b is "<<&b <<endl;
    cout<<"The address of b is "<<c <<endl;
    cout<<"The address of c is "<<*c <<endl;
    cout<<"The value at address c is "<<**c <<endl;

    return 0;
}