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

bool checkRecord(string s) {
    // int absent = 0, late = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] == 'L')
    //     {
    //         late++;
    //         if (late > 2)   return false;
    //     }
    //     else
    //     {
    //         late = 0;
    //         if (s[i] == 'A')
    //         {
    //             absent++;
    //             if (absent > 1)   return false;
    //         }            
    //     }
    // }
    // return true;

    // return s.find("LLL")==string::npos && count(s.begin(),s.end(),'A')<=1;

    // int a = 0;
    //     for(int i = 0; i < s.size(); i++){
    //         if(i >= 2 && s[i] == 'L' && s[i - 1] == 'L' && s[i - 2] == 'L')
    //             return false;
    //         if(s[i] == 'A')
    //             a++;
    //     }
    // return a < 2;
}

int main()
{
    string s;

    cout<<"Enter the string s: ";
    cin>>s;

    cout<<"Answer is: "<<checkRecord(s);

	return 0;
}