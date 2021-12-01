#include <iostream>
using namespace std;

int a[101], b[101];
int main() {
    int n, i;
    cin >> n;
    for (i=1; i<=n; i++) {
        cin >> a[i];
    }
    for (i=1; i<=n; i++) {
        cin >> b[i];
    }
    for (i=1; i<=n; i++) {
        if (a[i]==b[i]) cout << "D" << endl;
        else if ((a[i]==3 && b[i]==1) || a[i]<b[i]) cout << "B" << endl;
        else if ((a[i]==1 && b[i]==3) || a[i]>b[i]) cout << "A" << endl;
    }
    return 0;
}
