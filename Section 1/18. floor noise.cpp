#include <iostream>
using namespace std;

int main() {
    int n, m, a, i, cnt=0, max=0;
    cin >> n >> m;
    for (i=0; i<n; i++) {
        cin >> a;
        if (m < a) cnt++;
        else cnt=0;
        if (max < cnt) max = cnt;
    }
    if (max == 0) cout << "-1" << endl;
    else cout << max << endl;
    return 0;
}
