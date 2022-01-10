#include <iostream>
using namespace std;

int main() {

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