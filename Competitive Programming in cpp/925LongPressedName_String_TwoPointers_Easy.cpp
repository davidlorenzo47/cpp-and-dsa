#include <iostream>
using namespace std;

bool isLongPressedName(string name, string typed) {
    
    int i = 0;
    for(char t:typed) {
        if (i < name.length() && name[i] == t)
        {
            i++;
        }
        else if (!(name[i-1] == t))
        {
            return false;
        }
    }                        
    return true;
}

int main() {

    string name, typed;

    cin>>name;
    cin>>typed;

    cout<<"Ans is: "<<isLongPressedName(name, typed);

    return 0;
}