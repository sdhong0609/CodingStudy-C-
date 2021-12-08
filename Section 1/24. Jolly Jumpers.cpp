#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n-1);

    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=0; i<n-1; i++) {
        b[i] = a[i]-a[i+1];
        if (b[i]<0) b[i] = -b[i];
    }
    sort(b.begin(), b.end());

    for (i=0; i<n-1; i++) {
        if (b[i]!=i+1) {
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return 0;
}
