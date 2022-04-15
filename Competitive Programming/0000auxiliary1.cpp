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

string freqAlphabets(string s) {
    string ans = "";
    for (int i = s.length()-1; i > 0; i--)
    {
        if (s[i] == '#')
        {
            int t = (s[i-2] - '0') * 10 + (s[i-1] -  '0');
            ans = char(t + 96) + ans;
            i--;
        }
        else
        {
            ans = char((s[i]-'0') + 96) + ans;
        }
    }
    return ans;

    // int n = s.length(), i = 0;
    //     string ans = "";
    //     while(i < n)
    //         if(i + 2 < n && s[i + 2] == '#') {
    //             int ss = (s[i]-'0')*10 + (s[i+1]-'0');
    //             ans += char(ss+'a'-1);
    //             i += 3;
    //         }
    //         else {
    //             ans += char(s[i]-'0'-1+'a');
    //             i++;
    //         }
    // return ans;
}

int main()
{
    
    

    return 0;
}