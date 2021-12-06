#include <iostream>
using namespace std;

int main() {
    int i, A[10], B[10], as=0, bs=0, lw=0; // as: A score, bs: B score, lw: last winner
    for (i=0; i<10; i++) {
        cin >> A[i];
    }
    for (i=0; i<10; i++) {
        cin >> B[i];
    }
    for (i=0; i<10; i++) {
        if (A[i]>B[i]) {
            as += 3;
            lw = 1;
        } else if (A[i]<B[i]) {
            bs += 3;
            lw = 2;
        } else {
            as += 1;
            bs += 1;
        }
    }
    cout << as << " " << bs << endl;
    
    if (as==bs) {
        if (lw==0) cout << "D" << endl;
        else if (lw==1) cout << "A" << endl;
        else cout << "B" << endl;
    } else if (as>bs) {
        cout << "A" << endl;
    } else cout << "B" << endl;
    
    return 0;
}
