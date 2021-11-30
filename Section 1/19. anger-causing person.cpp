#include <iostream>
using namespace std;

int a[101];
int main() {
    int n, i, j, cnt=0;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=0; i<=n-2; i++) {
        for (j=i+1; j<=n-1; j++) {
            if (a[i]<a[j]) break;
        }
        if (j==n) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
