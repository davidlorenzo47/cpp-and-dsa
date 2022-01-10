#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//1528. Shuffle String

int main() {

    vector<int> indices;
    int size, element;

    cout<<"Enter the size of the array: ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element: ";
        cin>>element;
        indices.push_back(element);
    }

    string s;

    cout<<"Enter the string: ";
    cin>>s;

    string res = s;
    for (int i = 0; i < indices.size(); i++)
    {
        res[indices[i]] = s[i]; //0th position of string s is taken. At 0th position of indices, the value is taken to point at that position of res string. From s, value is inserted to res accordingly.
    }

    cout<<res;    

    return 0;
}