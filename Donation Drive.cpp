#include <iostream>
using namespace std;

int main(){
    int t, x, y;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> x >> y;
        if (x >= 1 && x <= 20 && y <= x && y <= 20) {
            cout << (x - y) << "\n";
        } else {
            cout << "Invalid input\n";
        }
    }
    return 0;
}




