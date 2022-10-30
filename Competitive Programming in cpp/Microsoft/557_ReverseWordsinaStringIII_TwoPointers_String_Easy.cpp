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

string reverseWords(string s) {
    string temp = "", ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        temp = s[i] + temp;
        if (s[i] == ' ')
        {
            temp.erase(0,1);    //0 is position, and 1 is character
            temp += " ";
            ans += temp;
            temp = "";
        }
    }
    ans+= temp;
    return ans;
}

int main()
{
    string s;

    getline(cin, s);
    cout<<reverseWords(s);

	return 0;
}