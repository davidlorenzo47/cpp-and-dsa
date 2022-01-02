#include <iostream>
using namespace std;

//here overloaded function is sum as it being used more than one time.

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int sum(float a, int b, int c, double d){
    return a+b+c+d;
}


int main() {

    cout<<"Overloaded function with 2 arguments: "<<sum(1,2)<<endl;
    cout<<"Overloaded function with 3 arguments: "<<sum(10,20,30)<<endl;
    cout<<"Overloaded function with 4 arguments: "<<sum(100, 200, 300, 400)<<endl;

    return 0;
}