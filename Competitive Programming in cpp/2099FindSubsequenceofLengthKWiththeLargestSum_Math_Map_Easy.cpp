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

vector<int> maxSubsequence(vector<int>& nums, int k) {
    
    vector<int> v , temp = nums;
        sort(nums.begin() , nums.end());
        unordered_map<int,int> map;
        
        for(int index = 0 ; index < k ; index ++) map[nums[nums.size() - 1- index]]++; 
        for(auto it: temp) if(map[it]-- > 0)v.push_back(it);
    return v;
}

int main()
{
    vector<int> num;
    int k;

    vecip(num);
    display(num);

    cout<<"Enter the int: ";
    cin>>k;
    
    vector<int> ans = maxSubsequence(num, k);
    display(ans);

	return 0;
}