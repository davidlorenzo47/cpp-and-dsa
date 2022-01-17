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

int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end() );
    nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
    
    if (nums.size() == 1 || nums.size() == 2)
    {
        return *max_element(nums.begin(), nums.end());
    }
    else
    {
        return nums[nums.size() - 3];
    } 
}

int main() {    

    vector<int> nums;

    vecip(nums);
    display(nums);

    cout<<thirdMax(nums);

    return 0;
}