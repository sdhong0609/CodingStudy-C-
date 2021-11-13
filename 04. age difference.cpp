#include <iostream>
using namespace std;

int main() {
    int n, i, age, max=0, min=100;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> age;
        if (max < age) max = age;
        if (min > age) min = age;
    }
    cout << max-min << endl;
    return 0;
}
