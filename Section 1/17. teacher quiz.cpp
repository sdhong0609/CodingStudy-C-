#include <iostream>
using namespace std;

bool isCorrect(int num, int answer) {
    if (answer == (1+num)*num/2) return true;
    else return false;
}
int correct[11];
int main() {
    int student, i, num, answer;
    cin >> student;
    for (i=0; i<student; i++) {
        cin >> num >> answer;
        if(isCorrect(num, answer)) correct[i]=1;
        else correct[i]=0;
    }
    for (i=0; i<student; i++) {
        if (correct[i]==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
