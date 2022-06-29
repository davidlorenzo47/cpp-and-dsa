#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int tribonacci(int n) {
    int ans = 0;
    if (n <= 0)
    {
        return n;
    }
    if (n == 2)
    {
        return 1;
    }

    int n1 = 0, n2 = 1, n3 = 1;
    for (int i = 3; i <= n; i++)
    {
        ans = n1 + n2 + n3;
        n1 = n2;
        n2 = n3;
        n3 = ans;
    }
    return ans;
}

int main() {

    int n;
    cin>>n;
    cout<<tribonacci(n);

    return 0;
}