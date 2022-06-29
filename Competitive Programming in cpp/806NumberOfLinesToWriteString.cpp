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

vector<int> numberOfLines(vector<int>& widths, string s) {
        int length = 0, line = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (length + widths[s[i]-'a']>100)
            {
                length = widths[s[i] - 'a'];
                line++;
            }
            else
            {
                length += widths[s[i] - 'a'];
            }
        }
        return {line,length};
}

int main() {    

    vector<int> vec;
    vecip(vec);
    display(vec);
    string s;
    cout<<"Enter the string s: ";
    cin>>s;

    vector<int> ans;
    ans = numberOfLines(vec, s);
    cout<<"Answer is: ";
    display(ans);
    
    return 0;
}