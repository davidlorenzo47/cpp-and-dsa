#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    //List is like container
template <class T>
void display(list<T> &v) {
    list<int> :: iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}

int main() {

    list<int> list1;    //list of 0 length
    list<int> list2(3); //list if size 7

    list1.push_back(5); //puts 5 in list named "list1"
    list1.push_back(15);
    list1.push_back(25);
    list1.push_back(35);
    list1.push_back(45);

    display(list1);
    
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 55;
    iter++;
    *iter = 65;
    iter++;

    list1.sort();   //sorting the list
    display(list1);

    list1.pop_front();  //removes the element from the front.
    display(list1);

    list1.remove(25);   //removes the element. Just specify the value to be removed from the list.
    display(list1);

    display(list2);

    list1.merge(list2); //merging the list
    display(list1);

    list1.reverse();    //reversing the list
    display(list1);

    return 0;
}