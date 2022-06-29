#include <iostream>
using namespace std;

int Partition(int arr[], int s, int e) {
    int pivot = arr[e];
    int pIndex = s;

    for (int i = s; i < e; i++)
    {
        if (arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    int temp = arr[e];
    arr[e] = arr[pIndex];
    arr[pIndex] = temp;

    return pIndex;
}

void quickSort(int arr[], int s, int e) {
    //s = start index, e = end index
    if (s < e)
    {
        int p = Partition(arr, s, e);
        quickSort(arr, s, (p-1));   //recursive call for left partition
        quickSort(arr, (p+1), e);   //recursive call for right partition
    }
}

int main() {

    int myarr[5];

    cout<<"Enter the 5 elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>myarr[i];
    }
    
    cout<<"Before Quick sort: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<myarr[i]<<" ";
    }

    quickSort(myarr, 0, 4);
    cout<<"\nAfter Quick sort: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<myarr[i]<<" ";
    }

    return 0;
}