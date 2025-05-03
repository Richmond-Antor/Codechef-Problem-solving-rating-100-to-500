#include<iostream>
#include<cmath> // For abs()
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> a >> b >> c >> d;

        int diff1 = abs(a - b);
        int diff2 = abs(c - d);

        if (diff1 < diff2) {
            cout << "First" << endl;
        } else if (diff2 < diff1) {
            cout << "Second" << endl;
        } else {
            cout << "Any" << endl;
        }
    }

    return 0;
}
