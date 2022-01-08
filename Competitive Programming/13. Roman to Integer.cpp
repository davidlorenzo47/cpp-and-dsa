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

int romanToInt(string s) {
    unordered_map<char, int> myMap = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

    int ans = myMap[s.back()];
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (myMap[s[i]] < myMap[s[i + 1]])
        {
            ans = ans - myMap[s[i]];    // for IV; I < V, so 5 - 1;
        }
        else
        {
            ans = ans + myMap[s[i]];
        }       
    }
    return ans;
}

int main() {

    // vector<int> numbers;

    // vecip(numbers);
    // display(numbers);

    string s;
    cout<<"Enter the stirng: ";
    cin>>s;

    cout<<romanToInt(s);

    return 0;
}