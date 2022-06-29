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

int titleToNumber(string columnTitle) {

    int ans = 0;
    for (int i = 0; i < columnTitle.length(); i++)
    {
        ans = ans*26 + (columnTitle[i] - 'A' + 1);
    }
    return ans;
}

int main() {    

    string str;
    cout<<"Enter the column title: ";
    cin>>str;

    cout<<"Answer is: "<<titleToNumber(str);
    
    return 0;
}