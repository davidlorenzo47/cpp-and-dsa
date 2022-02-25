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

string convertToTitle(int columnNumber) {
    string ans = "";
    columnNumber--;
    while (columnNumber >=0)
    {
        ans += ('A' + columnNumber%26);
        columnNumber /= 26;
        columnNumber--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {    

    int col;
    cout<<"Enter the column number: ";
    cin>>col;

    cout<<"Answer is: "<<convertToTitle(col);
    
    return 0;
}