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

int main()
{
    string s = "fly me  a     to   the moon  ";
    int a = 0;
    if (s[0] == ' ')
    {
        while (s[a] == ' ')
        {
            a++;
        }
    }
    s.erase(0, a);
    cout<<s;
    

     
    return 0;
}