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

int tribonacci(int n) {
    int ans = 0;
    if (n <= 0)
    {
        return n;
    }
    if (n == 2)
    {
        return 1;
    }

    int n1 = 0, n2 = 1, n3 = 1;
    for (int i = 3; i <= n; i++)
    {
        ans = n1 + n2 + n3;
        n1 = n2;
        n2 = n3;
        n3 = ans;
    }
    return ans;
}

int main() {

    // vector<int> numbers;

    // vecip(numbers);
    // display(numbers);

    int n;
    cin>>n;
    cout<<tribonacci(n);

    return 0;
}