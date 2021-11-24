#include <iostream>
#include <algorithm>
using namespace std;

int a[60], b[60];
int main() {
    char str[100];
    int i;

    cin.getline(str, 100);
    for (i=0; str[i]!='\0'; i++) {
        if ('A'<=str[i] && str[i]<='Z') {
            a[str[i]-64]++;
        } else a[str[i]-70]++;
    }
    cin.getline(str, 100);
    for (i=0; str[i]!='\0'; i++) {
        if ('A'<=str[i] && str[i]<='Z') {
            b[str[i]-64]++;
        } else b[str[i]-70]++;
    }
    for (i=1; i<=52; i++) {
        if (a[i]!=b[i]) {
            cout << "NO" << endl;
            exit(0);                // program exit
        }
    }
    cout << "YES" << endl;

    return 0;
}
