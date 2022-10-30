#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "";

    getline(cin, s); //Takes input as whole sentence.
    s.erase(0,1); //0 is position, and 1 is character.

    cout<<s;


    return 0;
}
