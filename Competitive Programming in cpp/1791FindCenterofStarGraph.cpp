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

int findCenter(vector<vector<int>>& edges) {

    //here using the first two rows itself, we can find the central node as it would be common in both the rows.
    if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])   //if first element of first row is equal to first or second element of second row then first element of first row is the answer.
    {
        return edges[0][0];
    }
    else    //else return second element of first row.
    {
        return edges[0][1];
    }
    return 0;
}

int main() {    

    int size;
    cout<<"Enter how many edges: ";
    cin>>size;
    int ele;

    vector<vector<int>> edges(size);

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the two nodes: ";
        for (int j = 0; j < 2; j++)
        {
            cin>>ele;
            edges[i].push_back(ele);
        }
    }

    cout<<"Answer is: "<<findCenter(edges);
    

    return 0;
}