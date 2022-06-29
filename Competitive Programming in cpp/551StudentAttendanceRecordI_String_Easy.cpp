#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// You are given a string s representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:

// 'A': Absent.
// 'L': Late.
// 'P': Present.
// The student is eligible for an attendance award if they meet both of the following criteria:

// The student was absent ('A') for strictly fewer than 2 days total.
// The student was never late ('L') for 3 or more consecutive days.
// Return true if the student is eligible for an attendance award, or false otherwise.

 

// Example 1:

// Input: s = "PPALLP"
// Output: true
// Explanation: The student has fewer than 2 absences and was never late 3 or more consecutive days.

bool checkRecord(string s) {
    int absent = 0, late = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            late++;
            if (late > 2)   return false;
        }
        else
        {
            late = 0;
            if (s[i] == 'A')
            {
                absent++;
                if (absent > 1)   return false;
            }            
        }
    }
    return true;

    // return s.find("LLL")==string::npos && count(s.begin(),s.end(),'A')<=1;

    // int a = 0;
    //     for(int i = 0; i < s.size(); i++){
    //         if(i >= 2 && s[i] == 'L' && s[i - 1] == 'L' && s[i - 2] == 'L')
    //             return false;
    //         if(s[i] == 'A')
    //             a++;
    //     }
    // return a < 2;
}

int main()
{
    string s;

    cout<<"Enter the string s: ";
    cin>>s;

    cout<<"Answer is: "<<checkRecord(s);

	return 0;
}