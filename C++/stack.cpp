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

int calPoints(vector<string>& ops) {

    int val1 = 0, val2 = 0, ans = 0;
    stack<int> mstk;

    for (string i:ops)
    {
        if (i == "C")
        {
            mstk.pop();
        }
        else if(i == "D")
        {
            mstk.push(mstk.top()*2);
        }
        else if (i == "+")
        {
            val1 = mstk.top();
            mstk.pop();
            val2 = mstk.top();
            mstk.push(val1);
            mstk.push(val1 + val2);
        }
        else
        {
            mstk.push(stoi(i));
        }
    }
    while (mstk.size() != 0)
    {
        ans = ans + mstk.top();
        mstk.pop();
    }
    return ans;    
}

int main() {

    vector<string> ops;

    vecip(ops);
    display(ops);

    cout<<calPoints(ops);

    return 0;
}