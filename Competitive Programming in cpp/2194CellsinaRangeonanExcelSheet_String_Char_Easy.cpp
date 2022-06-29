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

vector<string> cellsInRange(string s) {
    vector<string> ans(0);
    char letter = s[0];
    char num = s[1];
    while (letter <= s[3])
    { 
        ans.push_back({letter,num});
        num++;
        if (num > s[4])
        {
            letter++;
            num = s[1];
        }  
    }
    return ans;
}

int main()
{
    string s;
    cout<<"Enter the string s: "; // K1:L2
    cin>>s;
    vector<string> ans = cellsInRange(s);
    display(ans);

	return 0;
}