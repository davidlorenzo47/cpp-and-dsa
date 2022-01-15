#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main() {

    int cust;

    cout<<"Enter how many customers:";
    cin>>cust;
    int amount;

    vector<vector<int>> accounts(cust);

    for (int i = 0; i < cust; i++)
    {
        int num;
        cout<<"Enter how many bank accounts for "<<(i+1)<<"th customer: ";
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            cout<<"Enter the amount for "<<(i+1)<<"th customer in "<<(j+1)<<"th bank acocunt:";
            cin>>amount;
            accounts[i].push_back(amount);
        }
    }

    for (int i = 0; i < accounts.size(); i++)
    {
        for (int j = 0; j < accounts[i].size(); j++)
        {
            cout<<accounts[i][j];
        }
        cout<<endl;   
    }    

    return 0;
}