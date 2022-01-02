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

    string address;

    cout<<"Enter the address:";
    cin>>address;

    vector<string> add(address.size()); 
    copy(address.begin(), address.end(), add.begin());

    for (int i = 0; i < address.size(); i++)
    {
        if (add[i] == ".")
        {
            add.insert(add.begin() + (i), 0);
            // address.insert(i+1, 1, '.');
            // address.insert(i+2, 1, ']');
        }
    }

        display(add);
    
    return 0;
}