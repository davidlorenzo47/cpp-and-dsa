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
     
int numberOfSteps(int num) {
    
    int steps = 0;
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            steps++;
        }
        else
        {
            num = num - 1;
            steps++;
        }
    }
    return steps;
}

int main() {    

    int num;

    cout<<"Entnter the number: ";
    cin>>num;

    cout<<numberOfSteps(num);

    return 0;
}