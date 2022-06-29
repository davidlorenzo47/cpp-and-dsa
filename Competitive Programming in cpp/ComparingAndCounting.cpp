#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    string jewels, stones;

    cout<<"Enter the stones: ";
    cin>>stones;

    cout<<"Enter the jewels: ";
    cin>>jewels;

    int res = 0;
    for (int i = 0; i < jewels.size(); i++)
    {
         res = res + count(stones.begin(), stones.end(), jewels[i]);        
    }
    cout<<res;


    return 0;
}