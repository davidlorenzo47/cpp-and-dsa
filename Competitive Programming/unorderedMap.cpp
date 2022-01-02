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

    vector<int> nums;
    cout<<"Enter the size of the array: ";
    int num, size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the num: ";
        cin>>num;
        nums.push_back(num);
    }

    vector<int> smallerNumbersThanCurrent(vector<int>& nums);
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        
    }
    

    return 0;
}