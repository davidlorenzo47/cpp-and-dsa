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

int maximumSwap(int num) {
    string s = to_string(num);
    for(int i=0;i<s.size()-1;i++)
    {
        int maximum=s[i]-'0',index=0;
        bool flag = false;
        for(int j=s.size()-1;j>i;j--)
        {
            if(s[j]-'0'>maximum)
            {
                index=j;
                flag=true;
                maximum=s[j]-'0';
            }
        }
        if(flag)
        {
            swap(s[i],s[index]);
            break;
        }
    }
    int ans = stoi(s);
    return ans; 

    /*
    string s=to_string(num);
    int n=stoi(s);
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            swap(s[i],s[j]);
            n=max(n,stoi(s));
            swap(s[i],s[j]);
        }
    }
    return n; 
    */	
}

int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;

	cout<<"Answer is: "<<maximumSwap(n);
	
	return 0;
}