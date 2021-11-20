#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i, tmp, cnt=0;
    for (i=1; i<=n; i++) {
        tmp = i;
        while (tmp > 0) {
            tmp = tmp/10;
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
