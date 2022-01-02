#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <class T>
void display(vector<T> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

//1528. Shuffle String

int main() {

    string command;

    cout<<"Enter the string: ";
    cin>>command;

    string res;
    for (int i=0; i < command.length(); i++)
    {   
        if (command[i] == 'G')
        {
            res = res + 'G'; 
            
        }
        if (command[i] == '(' & command[i+1] == ')')
        {
            res = res + 'o';
            i++;
        }
        if (command[i] == '(')
        {
            res = res + 'a';
            res = res + 'l';
            i = i + 3;
        }        
    }
    cout<<res;

    return 0;
}