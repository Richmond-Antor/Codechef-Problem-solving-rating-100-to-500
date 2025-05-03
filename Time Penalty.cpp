#include <iostream>
using namespace std;

int main() {
    int x, y;
    // Keep reading until x is in [1,150] and y is in [0,10]
    do {
        cin >> x >> y;
    } while (x < 1 || x > 150 || y < 0 || y > 10);

    cout << (x + y * 10) << endl;
    return 0;
}
