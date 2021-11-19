#include <iostream>
using namespace std;

int digit_sum(int x) {
    int sum=0;
    while (x>0) {
        sum += x%10;
        x = x/10;
    }
    return sum;
}

int main() {
    int n, num, i, max=0, sum, res=0;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> num;
        sum = digit_sum(num);
        if (max < sum) {
            max = sum;
            res = num;
        } else if (max == sum) {
            if (res < num) res = num;
        }
    }
    cout << res << endl;

    return 0;
}
