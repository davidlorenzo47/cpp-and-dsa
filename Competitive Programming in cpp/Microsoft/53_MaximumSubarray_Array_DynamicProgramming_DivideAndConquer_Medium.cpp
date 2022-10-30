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

vector<int> twoSum(vector<int>& nums, int target) {
    int i=0, j=0;
    while (i < nums.size())
    {
        j = 0;
        while (j < nums.size())
        {
            if (i!=j)
            {
                if ((nums[i] + nums[j]) == target)
                {    
                    nums.clear();
                    nums.push_back(i);
                    nums.push_back(j);
                    break;
                }
            }
            j++;
        }
        i++;        
    }
        return nums;
    }

int main()
{
    vector<int> vec;
    int target;

    vecip(vec);

    cin>>target;

    vector<int> ans;
    ans = twoSum(vec, target);

    display(ans);   

	return 0;
}