#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>    //important library. DO EXPLORE !!!
using namespace std;

int main() {

    //function objects (functors): function wrapped in a class so that it is available like an object.

    int arr[] = {1,5,2,7,9,3,0,3};

    //sort(arr, arr+8); //sorts normally in ascending order.

    sort(arr, arr+8, greater<int>());   //here to the sort method, greater<int> function is passed which acts like an object.

    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    




    return 0;
}