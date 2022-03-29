#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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

vector<string> uncommonFromSentences(string s1, string s2) {
    vector<string> ans;
    unordered_map<string, int> maap;
    string s;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == ' ')
        {
            maap[s]++;
            i++;
            s.clear();
        }
        s += s1[i];
    }
    maap[s]++;
    s.clear();
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == ' ')
        {
            maap[s]++;
            i++;
            s.clear();
        }
        s += s2[i];
    }
    maap[s]++;
    for (auto i:maap)
    {
        if (i.second == 1)
        {
            ans.push_back(i.first);
        }
    }
    return ans;     
}

int main()
{
    string s,ss;

    cout<<"Enter first string: ";
    cin>>s;

    cout<<"Enter second string: ";
    cin>>ss;

    vector<string> ans = uncommonFromSentences(s, ss);

    cout<<"Answer is: ";
    display(ans);
    
	return 0;
}