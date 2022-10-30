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

int arraySign(vector<int>& nums) {
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            return 0;
        }
        if (nums[i] < 0)
        {
            cnt++;
        }
    }
    if (cnt % 2 == 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> vec;
    vecip(vec);
    display(vec);

    cout<<" Answer is: "<<arraySign(vec);    

	return 0;
}