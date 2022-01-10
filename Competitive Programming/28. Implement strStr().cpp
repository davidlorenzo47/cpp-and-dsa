#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {

        // int n;
        // n = haystack.find(needle);
        return haystack.find(needle);     
        
}

int main() {

    string haystack, needle;
    cout<<"Enter the haystack: ";
    cin>>haystack;
    cout<<"Enter the needle: ";
    cin>>needle;

    cout<<strStr(haystack, needle);

    return 0;
}