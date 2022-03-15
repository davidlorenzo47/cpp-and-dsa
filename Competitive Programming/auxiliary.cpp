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

string kthDistinct(vector<string>& arr, int k) {
    unordered_map<string, int> ump;
    for (auto x:arr)
    {
        ump[x]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (ump[arr.at(i)] == 1)
        {
            k--;
        }
        if (ump[arr.at(i)] == 1 && k == 0)
        {
            return arr.at(i);
        }
    }
    return "";
}

int main()
{
    vector<string> arr;
    int l;

    vecip(arr);
    display(arr);

    cout<<"Enter the int: ";
    cin>>l;

    cout<<"Answer is: "<<kthDistinct(arr, l);

	return 0;
}