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

vector<int> addToArrayForm(vector<int>& num, int k) {

    for (int i = num.size()-1; i>0 &&k>0; i--)
    {
        num[i] += k;
        k=num[i]/10;
        num[i]%=10;
    }
    while (k>0)
    {
        num.insert(num.begin(), k%10);
        k/=10;
    }
    return num;        
}

int main() {    

    vector<int> num;
    vecip(num);
    display(num);
    int k;
    cout<<"Enter the value of k:";
    cin>>k;

    vector<int> ans;
    ans = addToArrayForm(num, k);
    display(ans);

    return 0;
}