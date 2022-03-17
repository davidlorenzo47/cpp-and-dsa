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

int countBalls(int lowLimit, int highLimit) {
    vector<int> ans;
    ans.insert(ans.end(), highLimit, 0); 
    for (int i = lowLimit; i <= highLimit; i++)
    {
        int temp = i, sum = 0;
        while (temp > 0)
        {
            sum += (temp%10);
            temp /= 10;
        }
        ans[sum]++;
    }
    return *max_element(ans.begin(), ans.end());
}

int main()
{
    int low,high;

    cout<<"Enter low: ";
    cin>>low;

    cout<<"Enter high: ";
    cin>>high;

    cout<<"Answer is: "<<countBalls(low, high);

	return 0;
}