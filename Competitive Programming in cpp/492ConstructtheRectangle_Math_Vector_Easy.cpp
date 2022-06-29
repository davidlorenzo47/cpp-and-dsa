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

vector<int> constructRectangle(int area) {
    int temp = sqrt(area);
    while (area % temp != 0)
    {
        temp--;
    }
    return {area/temp, temp};
}

int main()
{
    int a;
	cout<<"Enter the area: ";
    cin>>a;
	
    vector<int> ans;
    ans = constructRectangle(a);
    display(ans);

	return 0;
}