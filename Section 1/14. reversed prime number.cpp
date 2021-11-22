#include <iostream>
using namespace std;

int reverse(int x) {
    int r=0;
    while (x>0) {
        r = r*10 + x%10;
        x = x/10;
    }
    return r;
}

bool isPrime(int x) {
    int i;
    if (x==1) return false; // for exception when a user inputs 10, 100, 1000...
    for (i=2; i<x; i++) {
        if (x%i==0) return false;
    }
    return true;
}

int main() {
    int n, num, i;
    cin >> n;

    for(i=0; i<n; i++) {
        cin >> num;
        if (isPrime(reverse(num))) cout << reverse(num) << " ";
    }
    return 0;
}
