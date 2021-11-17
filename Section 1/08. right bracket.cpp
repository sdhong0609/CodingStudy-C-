#include <iostream>
using namespace std;

int main() {
    char a[30];
    cin >> a;

    int i, cnt=0;
    for (i=0; a[i]!='\0'; i++) {
        if (a[i] == '(') cnt++;
        else cnt--;
        if (cnt<0) break;
    }

    if (cnt==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
