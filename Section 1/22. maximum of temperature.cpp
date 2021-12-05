#include <iostream>
using namespace std;

int main() {
    int n, k, tmp[100001], i, j, sum, max=-10000000;
    cin >> n >> k;
    for (i=1; i<=n; i++) {
        cin >> tmp[i];
    }

    for (i=1; i<=n-k+1; i++) {
        sum=0;
        for (j=i; j<=i+k-1; j++) {
            sum += tmp[j];
            if (max < sum) max = sum;
        }
    }

    cout << max << endl;

    return 0;
}
