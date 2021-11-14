#include <iostream>
using namespace std;

int main() {
    char a[50];
    int i, num = 0, cnt = 0;

    cin >> a;
    for (i=0; a[i]!='\0'; i++) {
        if ('0'<=a[i] && a[i]<='9') {
            num = num * 10 + (a[i]-48);
        }
    }
    for (i=1; i<=num; i++) {
        if (num%i == 0) cnt++;
    }

    cout << num << endl << cnt << endl;

    return 0;
}
