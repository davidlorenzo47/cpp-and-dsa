#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;

    cout<<"Enter the number: ";
    cin>>x;

    bool isPalindrome;
    int sum=0,r=0, temp=x;
    while (x > 0)
    {
        r = x % 10;
        sum=(sum*10)+r;    
        x=x/10;    
    }
    if (temp == sum)
    {
        isPalindrome = true;
    }
    else
    {
        isPalindrome = false;
    }
    cout<<isPalindrome;
    
    
    
    

    return 0;
}