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

// In a deck of cards, each card has an integer written on it.

// Return true if and only if you can choose X >= 2 such that it is possible to split the entire deck into 1 or more groups of cards, where:

// Each group has exactly X cards.
// All the cards in each group have the same integer.
 

// Example 1:

// Input: deck = [1,2,3,4,4,3,2,1]
// Output: true
// Explanation: Possible partition [1,1],[2,2],[3,3],[4,4].

bool hasGroupsSizeX(vector<int>& deck) {
    unordered_map<int, int> maap;
    for(auto i:deck)    maap[i]++;
    int g = maap[deck[0]];

    for(auto i : maap){
        g = __gcd(g, i.second);
    }
    return g > 1;
}

int main()
{
    vector<int> vec;
    vecip(vec);
    display(vec);

    cout<<"Answer is: "<<hasGroupsSizeX(vec);      

	return 0;
}