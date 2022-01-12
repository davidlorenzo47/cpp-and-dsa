#include <iostream>
using namespace std;

// int main() {
//     int values[] = {10, 20, 30, 40}; //in values[], no need to specify how many values (values[4]) as cpp will understand how many elements will be there in the array

//     int anotherway[4];

//     anotherway[0] = 1;
//     anotherway[1] = 2;
//     anotherway[2] = 3;
//     anotherway[3] = 4;

//     cout<<values[0]<<endl;
//     cout<<values[1]<<endl;
//     values[2] = 500;    //  changing values of array
//     cout<<values[2]<<endl;
//     cout<<values[3]<<endl;

//     return 0;
    
// }

int main() {

    // int x=0, value;
    // int myArr[x];

    // cout<<"Enter how many values to be stored in the Array: ";
    // cin>>value;

    // cout<<"Enter the values: ";
    // for (int i = 0; i < value; i++)
    // {
    //     cin>>myArr[i];
    // }

    // cout<<endl<<"The Values are: ";

    // for (int i = 0; i < value; i++)
    // {
    //     cout<<myArr[i]<<" ";
    // }
    
    //  ***************************************pointers with array***********************************************************

    int thearray[] = {20, 40, 60, 80};
    int* p = thearray;  //p is pointer to array

    cout<<"Value got by DeReferencing: ";
    cout<<*p<<" ";
    cout<<*(p+1)<<" ";
    cout<<*(p+2)<<" ";
    cout<<*(p+3)<<" ";
    
    cout<<endl<<"Value got by Referencing: ";
    cout<<p<<" ";
    cout<<(p+1)<<" ";
    cout<<(p+2)<<" ";
    cout<<(p+3)<<" ";

    return 0;
}