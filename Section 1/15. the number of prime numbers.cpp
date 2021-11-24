#include <iostream>
using namespace std;

int main() {
    int n, i, j, cnt=0;
    bool isPrime;
    cin >> n;

    for (i=2; i<=n; i++) {
        isPrime = true;
        for (j=2; j*j<=i; j++) {
            if (i%j==0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cnt++;
    }
    cout << cnt << endl;

    return 0;
}
