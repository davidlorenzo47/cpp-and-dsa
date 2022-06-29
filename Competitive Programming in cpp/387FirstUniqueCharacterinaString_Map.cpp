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

int firstUniqChar(string s) {
    
    unordered_map<char, int> map;
    for (int i = 0; i < s.length(); i++)
    {
        if (map.count(s[i]) == 0)
        {
            map[s[i]] = 1;  //adds new value to the map and sets key as one.
        }
        else
        {
            map[s[i]]++;    //increments the key by one.
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (map[s.at(i)] == 1)
        {
            return i;
        }
    }
    
    return -1;   
}

int main() {    

    string s;
    cout<<"Enter the string s: ";
    cin>>s;

    cout<<"Answer is: "<<firstUniqChar(s);
    
    return 0;
}