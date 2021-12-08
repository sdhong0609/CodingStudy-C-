#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, cnt=1, max=0;
    cin >> n;
    vector<int> a(n);

    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=0; i<n-1; i++) {
        if (a[i] <= a[i+1]) cnt++;
        else cnt=1;
        if (max < cnt) max = cnt;
    }

    cout << max << endl;
    return 0;
}
