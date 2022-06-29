#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

Example 1:

Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
*/

string sortSentence(string s) {
    vector<string>pos(10,"");
    for(int i=0; i<s.size(); i++){
        int j = i;
        string temp;
        while(!isdigit(s[j])){
            temp.push_back(s[j]);
            j++;
        }
        pos[s[j]-'0'] = temp;
        i = j+1;
    }
    string ans;
    for(int i=1; i<10; i++){
        if(pos[i].length()>0){
            ans+=pos[i];
            ans.push_back(' ');
        }
    }
    ans.pop_back();
    return ans;
}

int main()
{

    string s;
    cout<<"Enter the stirng s: ";
    cin>>s;

    cout<<"Answer is: "<<sortSentence(s);  

	return 0;
}