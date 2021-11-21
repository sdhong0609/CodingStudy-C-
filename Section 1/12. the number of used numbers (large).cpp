#include <iostream>
using namespace std;

int main() {
    int n; // number
    int cumulativeNum=0; // 0, 9, 99, 999, 9999 ...
    int cnt=1; // 1, 2, 3, 4, 5 ...
    int theNumberOfCntDigits=9; // 9(1-9), 90(10-99), 900(100-999), 9000(1000-9999) ...
    int res=0; // result
    cin >> n;
    
    while(cumulativeNum + theNumberOfCntDigits < n) {
        res += cnt*theNumberOfCntDigits; // 1*9 + 2*90 + 3*900 + 4*9000 ...
        cumulativeNum += theNumberOfCntDigits; // 9 + 90 + 900 + 9000 ...
        cnt++;
        theNumberOfCntDigits *= 10;
    }
    
    res += (n - cumulativeNum)*cnt;
    cout << res << endl;
    return 0;
}
