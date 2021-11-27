#include <iostream>
using namespace std;

int arr[101];
int main() {
    int n, m, i, cnt=0, max=0;
    cin >> n >> m;
    for (i=0; i<n; i++) {
        cin >> arr[i];
        if (arr[i]>m) cnt++;
        else {
            if (max < cnt) max = cnt;
            cnt=0;
        }
    }
    cout << max << endl;
    return 0;
}
