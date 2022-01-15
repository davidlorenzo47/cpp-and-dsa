#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//map is used to store key value pair. 
//map is an associative array.

int main() {

    /*
    ************************************Counting Frequency of Vector elements using map***********************************************
    vector<int> vec;

    vecip(vec);
    display(vec); 

    map<int, int> mp;

    for (auto x:vec)
    {
        mp[x]++;    //putting elements in map
    }

    for (auto i:mp) //check if frequency is one.
    {
        cout<<i.second<<" ";    //if frequency is one then add that element to sum.
    }
    */

    map<string, int> marks;

    marks["David"] = 90;
    marks["Ronald"] = 80;
    marks["Steve"] = 70;

    marks.insert({{"Paula", 95}, {"Richelle", 98}});

    map<string, int> :: iterator iter;
    for (iter = marks.begin(); iter!= marks.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    

    return 0;
}