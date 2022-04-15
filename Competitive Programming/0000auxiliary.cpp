#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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


int main()
{
    
    int a,b;
    cout<<"Enter the nums: ";
    cin>>a;
    cin>>b;

    float c = (float)a/b;
    cout<<c;

	return 0;
}