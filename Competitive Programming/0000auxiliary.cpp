#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

template <class T>
void vecip(vector<T> &v) {
    int size;
    int elements;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the elements for array: ";
        cin>>elements;
        v.push_back(elements);
    }
}

int sumBase(int n, int k) {
    vector<int> vec;
    vec.insert(vec.end(), 5, 1);
    while(n >= k) {
        int temp = n%k;
        vec.push_back(temp);
        n /= k;
    }
    return accumulate(vec.begin(), vec.end(), 0);
}

int main()
{ 

    int n = 34, k = 6;
    cout<<"Answer is: "<<sumBase(n, k);

	return 0;
}