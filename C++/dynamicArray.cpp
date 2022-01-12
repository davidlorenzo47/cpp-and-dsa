#include <iostream>
using namespace std;

int main() {

    /*
    *****************************************User defined array input********************************************************
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"User defined input array is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    */

    int size;
    int *ptr;

    cout<<"Enter the size of the array: ";
    cin>>size;

    ptr = new int[size];

    cout<<"Enter the values to be stored: ";
    for (int i = 0; i < size; i++)
    {
        cin>>ptr[i];
    }
    
    cout<<"The values stored in the array are : ";
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i]<<" ";
    }

    return 0;
}