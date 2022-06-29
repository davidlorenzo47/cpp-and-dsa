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

vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
       vector<int> ans;
        for (int i = 0; i < queries.size(); i++)
        {
            int temp = 0;
            for (int j = 0; j < points.size(); j++)
            {
                float dist = sqrt((pow(queries[i][0] - points[j][0],2))+pow(queries[i][1] - points[j][1],2));
                if (dist <= queries[i][2])
                {
                    temp++;
                }
            }
            ans.push_back(temp);    
        }
        return ans; 
    }

int main()
{
    int pts;
    cout<<"How many points? ";
    cin>>pts;
    vector<vector<int>> points(pts);
    for (int i = 0; i < pts; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            int x,y;
            cout<<"Enter x co-ordinate: ";
            cin>>x;
            points[i].push_back(x);

            cout<<"Enter y co-ordinate: ";
            cin>>y;
            points[i].push_back(y);
        }
    }

    int crl;
    cout<<"How many circles? ";
    cin>>crl;
    vector<vector<int>> queries(crl);
    for (int i = 0; i < crl; i++)
    {
        int x,y,r;
        for (int j = 0; j < 1; j++)
        {
            cout<<"Enter x co-ordinate: ";
            cin>>x;
            queries[i].push_back(x);

            cout<<"Enter y co-ordinate: ";
            cin>>y;
            queries[i].push_back(y);

            cout<<"Enter radius: ";
            cin>>r;
            queries[i].push_back(r);
        }
    }

    cout<<"Points vector: ";
    for (int i = 0; i < points.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < points[i].size(); j++)
        {
            cout<<points[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
    
    cout<<"Circles vector: ";
    for (int i = 0; i < queries.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < queries[i].size(); j++)
        {
            cout<<queries[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
    
    vector<int> ans = countPoints(points, queries);
    cout<<"Answer is: ";
    display(ans);
    
	return 0;
}