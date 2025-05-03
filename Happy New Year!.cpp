#include<iostream>
using namespace std;

int main() {
    int x;

    do {
        cin >> x;
    } while (x < 0 || x > 23);
    cout << 24 - x;
    return 0;
}
