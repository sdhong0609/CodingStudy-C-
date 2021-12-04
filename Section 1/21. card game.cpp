#include <iostream>
using namespace std;

int a[11], b[11];
int main() {
    int i, score_a=0, score_b=0, draw_cnt=0;
    for (i=1; i<=10; i++) {
        cin >> a[i];
    }
    for (i=1; i<=10; i++) {
        cin >> b[i];
    }
    for (i=1; i<=10; i++) {
        if (a[i]==b[i]) {
            score_a++;
            score_b++;
            draw_cnt++;
        } else if (a[i]>b[i]) {
            score_a += 3;
        } else if (a[i]<b[i]) {
            score_b += 3;
        }
    }
    cout << score_a << " " << score_b << endl;
    if (score_a>score_b) cout << "A" << endl;
    else if (score_a<score_b) cout << "B" << endl;
    else if (score_a==score_b) {
        for (i=10; i>=1; i--) {
            if (a[i]>b[i]) {
                cout << "A" << endl;
                break;
            } else if (a[i]<b[i]) {
                cout << "B" << endl;
                break;
            }
        }
        if (draw_cnt==10) cout << "D" << endl;
    }
    return 0;
}
