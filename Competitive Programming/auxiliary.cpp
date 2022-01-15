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

vector<int> minOperations(string boxes) {

    vector<int> ans;
    int temp = 0;

    for (int i = 0; i < boxes.length(); i++)
    {
        for (int n = 0; n < boxes.length(); n++)
        {
            if (boxes[n] == '1')
            {
                temp  = temp + abs(i - n);
            }
        }
        ans.push_back(temp);
        temp = 0;
    }
    return ans;    
}

int main() {    

    string boxes;
    cout<<"Enter the stirng: ";
    cin>>boxes;

    vector<int> ans;
    ans = minOperations(boxes);

    display(ans);   

    return 0;
}