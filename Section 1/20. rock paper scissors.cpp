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
        else if (a[i]==1 && b[i]==3) cout << "A" << endl;
        else if (a[i]==2 && b[i]==1) cout << "A" << endl;
        else if (a[i]==3 && b[i]==2) cout << "A" << endl;
        else cout << "B" << endl;
    }
    return 0;
}
