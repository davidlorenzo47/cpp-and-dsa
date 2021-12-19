#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n, easy = 0, hard = 0;

    cin>>n;

    int s[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    } 

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 1)
        {
            hard++;
        }
        else
        {
            easy++;
        }       
    }

    if (hard >= 1)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
    
    
    
    return 0;
}