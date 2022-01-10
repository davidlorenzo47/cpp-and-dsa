#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}

int main() {

    vector<int> vec;
    int size, element;

    cout<<"Enter the size of Vector: ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element: ";
        cin>>element;
        vec.push_back(element); //puts the element in the vector
    }

    //vec.pop_back();   deletes the element at the end of vector
    // vec.erase(vec.begin() + 1);  //Deletes the second element

    display(vec);

    // vector<int> :: iterator iter = vec.begin(); //will insert at begining
    // vec.insert(iter,7, 0);    //will insert "0" 7 times
    
    
    for (int i = 0; i < size; i++)
    {
        if (vec[i] == 0)
        {
            vec.insert(vec.begin() + (i+1), 0); //to insert at specific position a particualr value
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
    display(vec);

    return 0;
}