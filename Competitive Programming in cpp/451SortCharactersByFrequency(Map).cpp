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

bool sortByVal(const pair<char, int> &a, const pair<char, int> &b) 
{ 
    return (a.second < b.second); 
} 

string frequencySort(string s) {
    map<char, int> mp;
    for (auto x:s)
    {
        mp[x]++;    //putting elements in map
    }
    s.clear();
    vector<pair<char, int>> vec;
    map<char, int> :: iterator it2;
    for (it2=mp.begin(); it2!=mp.end(); it2++) 
    {
        vec.push_back(make_pair(it2->first, it2->second));
    }
    sort(vec.begin(), vec.end(), sortByVal); 
    for (int i = vec.size()-1; i >= 0; i--)
	{
		// cout << vec[i].first << ": " << vec[i].second << endl;   //to disply the key-value pair
        for (int j = 0; j < vec[i].second; j++)
        {
            s += vec[i].first;
        }
	}
    return s;
}

int main() {    

    string s;
    cout<<"Enter the string s: ";
    cin>>s;

    cout<<"Answer is: "<<frequencySort(s);
    
    return 0;
}