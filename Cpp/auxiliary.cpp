#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main() {

    vector<int> lower, upper, nums;

    int size;
    int element, part;

    cout<<"Enter the size the array: ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element: ";
        cin>>element;
        nums.push_back(element);
    }

    cout<<"Enter the partition:";
    cin>>part;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i < part)
        {
            lower.push_back(nums[i]);
        }
        else
        {
            upper.push_back(nums[i]);
        }
        
    }
    
    
    vector<int> ans;
    for (int i = 0; i < nums.size()/2; i++)
    {
            ans.push_back(lower[i]);
            ans.push_back(upper[i]);
    }
    
    display(lower);
    display(upper);
    display(ans);

    return 0;
}