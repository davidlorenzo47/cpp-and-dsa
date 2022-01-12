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

int numMatchingSubseq(string s, vector<string>& words) {
    
    int ans = 0;
    string sub;
    for (int i = 0; i < words.size(); i++)
    {
        sub = words[i];
        for (int j = 0; i < sub.length(); i++)
        {
            
        }
        
    }
    
}


int main() {    

    vector<string> words;
    vecip(words);
    display(words);

    string s;
    cout<<"Enter the string s: ";
    cin>>s;

    cout<<numMatchingSubseq(s, words);

    return 0;
}