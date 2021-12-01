#include <iostream>
using namespace std;

int a[101];
int main() {
    int n, i, max=0, cnt=0;
    cin >> n;
    for (i=1; i<=n; i++) {
        cin >> a[i];
    }
    max = a[n];
    for (i=n-1; i>=1; i--) {
        if (max < a[i]) {
            max = a[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
