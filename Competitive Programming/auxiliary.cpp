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

int lengthOfLastWord(string s) {
    reverse(s.begin(), s.end());
    int sp = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int a = 0;
        while (s[i] != ' ')
        {
            s.erase(a, 1);
            a++;
        }
        
        if (s[i] == ' ' && s[i+1] != ' ')
        {
            break;
        }
        sp++;
    }
    return sp;
}

int main() {    

    string s;
    cout<<"Enter the string s:";
    cin>>s;

    cout<<"Answer is: "<<lengthOfLastWord(s);
    
    return 0;
}