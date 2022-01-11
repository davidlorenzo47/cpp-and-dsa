#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(vector<string> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main() {

    int num;
    cin>>num;
    cout<<num%2;
    
    return 0;
}