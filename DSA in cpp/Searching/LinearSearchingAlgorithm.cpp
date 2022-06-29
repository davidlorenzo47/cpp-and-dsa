#include <iostream>
using namespace std;

void linearSearch(int a[], int n) {

    int temp = -1;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            cout<<"Element found at location: "<<i<<endl;
            temp = 0;
        }
        if (temp == -1)
        {
            cout<<"No Element found"<<endl;
        }
    }
}

int main() {

    int size;
    cin>>size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"User defined input array is ";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
    int arr[5] = {1,6,8,2,4};
    cout<<"Please enter the number to be searched: ";

    int num;
    cin>>num;

    linearSearch(arr, num);

    return 0;
}