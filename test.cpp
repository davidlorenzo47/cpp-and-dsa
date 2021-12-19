// #include <iostream>
// #include <cstdio>
// #include <cmath>
// #include <vector>
// #include <algorithm>
// #include <sstream>
// #include <cassert>
// #include <set>
// #include<map>
// #include <iomanip> 
// #include <numeric>
using namespace std;
// #define loop0(i,n) for(int i=0; i<n; i++) 
#include<bits/stdc++.h>
int main() {

    vector<string>str;
    vector<int>arr;
    int alpha = 65, d;
    string s;
    cin>>s;

    str.push_back(s);
    d = str.at(0) - 65;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<char(alpha);
            alpha++;
        }
        cout<<endl;
        
    }
    

    return 0;
}