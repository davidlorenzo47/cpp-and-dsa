#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string freqAlphabets(string s) {
    string ans = "";
    for (int i = s.length()-1; i >= 0; i--)
    {
        if (s[i] == '#')
        {
            int t = (s[i-2] - '0') * 10 + (s[i-1] -  '0');
            ans = char(t + 96) + ans;
            i -= 2;
        }
        else
        {
            ans = char((s[i]-'0') + 96) + ans;
        }
        cout<<ans<<" "<<i<<endl;
    }
    return ans;

    // int n = s.length(), i = 0;
    //     string ans = "";
    //     while(i < n)
    //         if(i + 2 < n && s[i + 2] == '#') {
    //             int ss = (s[i]-'0')*10 + (s[i+1]-'0');
    //             ans += char(ss+'a'-1);
    //             i += 3;
    //         }
    //         else {
    //             ans += char(s[i]-'0'-1+'a');
    //             i++;
    //         }
    // return ans;
}

int main()
{
    string s;

    cout<<"Enter the string s: ";
    cin>>s;

    cout<<"Answer is: "<<freqAlphabets(s);

    return 0;
}