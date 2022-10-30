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
    string elements;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the elements for array: ";
        cin>>elements;
        v.push_back(elements);
    }
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    if(strs.size() == 1) return {{strs[0]}};
        
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> ump;
    for(int i = 0; i < strs.size(); i++) {
        string s = strs[i];
        sort(strs[i].begin(), strs[i].end());
        ump[strs[i]].push_back(s);
    }
    for(auto i = ump.begin(); i != ump.end(); i++) {
        ans.push_back(i -> second);
    }
    return ans;
}

int main()
{

    vector<string> vec;
    vecip(vec);

    vector<vector<string>> ans;
    ans = groupAnagrams(vec);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    



	return 0;
}