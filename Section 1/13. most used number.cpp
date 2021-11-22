#include <iostream>
using namespace std;

int cnt[10];
int main() {
    int i, digit;
    char a[101];

    cin.getline(a, 101);
    for (i=0; a[i]!='\0'; i++) {
        digit = a[i]-48;
        cnt[digit]++;
    }

    int max=0, res=0;
    for (i=0; i<10; i++) {
        if (max<=cnt[i]) {
            max = cnt[i];
            res = i;
        }
    }

    cout << res << endl;
    return 0;
}
