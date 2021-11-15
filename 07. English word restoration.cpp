#include <iostream>
using namespace std;

int main() {
    char a[100], b[100];
    cin.getline(a, 100);

    int i, p=0;
    for (i=0; a[i]!='\0'; i++) {
        if (a[i]!=' ') {
            if ('A'<=a[i] && a[i]<='Z') {
                b[p++] = a[i] + 32;
            } else {
                b[p++] = a[i];
            }
        }
    }
    b[p] = '\0';

    cout << b << endl;
    return 0;
}
