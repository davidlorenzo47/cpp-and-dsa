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

bool isIsomorphic(string s, string t) {
    
        unordered_map<char,char> mp, mpp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]=t[i];
    }
    for(int i=0;i<s.size();i++)
    {
        mpp[t[i]]=s[i];
    }
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        ans+=mp[s[i]];
    }
    string anss;
        for(int i=0;i<s.size();i++)
    {
        anss+=mpp[t[i]];
    }
    cout<<"String for s: "<<ans<<endl;
    cout<<"String for t: "<<anss<<endl;
    cout<<"Map of string s ("<<s<<"): ";
    for (auto i:mp) //check if frequency is one.
    {
        cout<<i.first<<" "<<i.second<<endl;    //if frequency is one then add that element to sum.
    }cout<<endl<<"Map of string t ("<<t<<"): ";;
    for (auto i:mpp) //check if frequency is one.
    {
        cout<<i.first<<" "<<i.second<<endl;    //if frequency is one then add that element to sum.
    }
    if(ans==t && anss==s)
        return true;
    return false;
    
    
}

int main() {    

    string s, t;
    cout<<"Enter String s: ";
    cin>>s;
    cout<<"Enter string t: ";
    cin>>t;

    cout<<"Answer is: "<<isIsomorphic(s,t);
    
    return 0;
}