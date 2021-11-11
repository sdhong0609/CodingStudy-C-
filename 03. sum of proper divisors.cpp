#include <iostream>
using namespace std;

int main() {
    int n, i, sum=0;
    cin >> n;
    
    for (i=1; i<n/2; i++) {
        if (n%i==0) {
            sum += i;
            cout << i << " + ";
        }
    }
    sum += i;
    cout << i << " = " << sum << endl;
    return 0;
}
