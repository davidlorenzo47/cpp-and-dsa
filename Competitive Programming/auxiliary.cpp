#include <iostream>
#include <bits/stdc++.h>
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

int minOperations(int n) {
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        vec.push_back((2*i) + 1);
    }
    int target = accumulate(vec.begin(), vec.end(), 0)/n;
    int ans = 0;
    for (int i = 0; i < n/2; i++)
    {
        ans  = ans + (target - vec[i]);
    }
    
    return ans;
    
}

int main() {    

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<minOperations(n);    

    return 0;
}