#include <iostream>
using namespace std;

int main() {
    char arr[20];
    int year, age;
    cin >> arr;

    if (arr[7] == '1' || arr[7] == '2') {
        year = 1900 + (arr[0]-48)*10 + (arr[1]-48);
    } else {
        year = 2000 + (arr[0]-48)*10 + (arr[1]-48);
    }
    age = 2019 - year + 1;

    cout << age;
    if (arr[7] == '1' || arr[7] == '3') {
        cout << " M" << endl;
    } else {
        cout << " W" << endl;
    }
    return 0;
}
