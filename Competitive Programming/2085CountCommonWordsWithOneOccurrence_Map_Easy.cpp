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

int countWords(vector<string>& words1, vector<string>& words2) {
    int ans = 0;    
    unordered_map<string, int> ump;
    for (auto i:words1)
    {
        ump[i]++;   //putting elements in map
        if (ump[i] >= 2)    ump[i] = 100;   //if element appeared second time, set key as 100.
    }

    for (auto i:words2) 
    {
        ump[i]--;   //make key of all elements of vector words2 as 0.
    }

    for (auto i:ump)
    {
        if (i.second == 0)  
        {
            ans++;  //if key is 0, then the element appeared once in both the vectors.
        }
    }
    return ans;
}
int main()
{
    vector<string> wd,wds;

    vecip(wd);
    display(wd);

    vecip(wds);
    display(wds);

    cout<<"Answer is: "<<countWords(wd,wds);

	return 0;
}