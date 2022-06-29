#include <iostream>
using namespace std;
//using flag variable we ckeck if the array is sorted or not and hence we use less number of loops and the sorting algorithm is optimized 
void OptimizedBubbleSort(int a[]) {

    int flag = false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                flag = true;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
}

int main() {

    int myarr[5];

    cout<<"Enter the 5 elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>myarr[i];
    }
    
    cout<<"Before Bubble sort: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<myarr[i]<<" ";
    }

    OptimizedBubbleSort(myarr);
    cout<<"\nAfter sorting: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<myarr[i]<<" ";
    }

    return 0;
}