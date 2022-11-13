#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> ump;

    for (auto x:nums)
    {
        ump[x]++;
    }
    for(auto i: ump) {
        if (i.second > nums.size()/2)
        {
            return i.first;
        }
    }
    return 0;
}

int main() {

    vector<int> vec;
    vecip(vec);

    cout<<"Ans is: "<<majorityElement(vec);

}