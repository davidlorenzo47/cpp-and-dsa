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

int numberOfBeams(vector<string>& bank) {
    int prev = 0, res = 0;
    for (auto &r : bank) {
        int cur = count(begin(r), end(r), '1'); //used to count 1s in the string.
        if (cur) {  //this loop is used to skip strings with all 0s.
            res += prev * cur;
            prev = cur;
        }
    }
    return res;

    // int ans=0, pr=0;
    //     for(auto &s:bank){
    //         int cur=0;
    //         for(auto c:s) cur+= c=='1';
    //         if(cur==0) continue;
    //         ans+=cur*pr;
    //         pr=cur;
    //     }
    //     return ans;
}

int main()
{
    vector<string> bk;
    vecip(bk);
    display(bk);

    cout<<"Answer is: "<<numberOfBeams(bk);    

	return 0;
}