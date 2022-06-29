#include <iostream>
using namespace std;

void insertionSort(int arr[]) {

    int j = 0;
    int key = 0;

    for (int i = 1; i < 5; i++)
    {
        key = arr[i]; //picking element after sorted sub array
        j = i-1;    //this is left of key
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];  //shifting elements to the right
            j = j-1;
        }
        arr[j+1] = key;
    }
    
}

int main() {

    int myarr[5];
    cout<<"Enter 5 integers in any order: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>myarr[i];
    }

    cout<<"Before sorting: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<myarr[i]<<" ";
    }

    insertionSort(myarr);

    cout<<"After sorting: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<myarr[i]<<" ";
    }
    
    

    return 0;
}