#include <iostream>

#define ll long long

using namespace std;

int main() {
    ll n;
    ll m;
    cin >> n >> m;
    ll a, b, c, j = n, x = 0, i = 0;
    cin >> a >> b >> c;
    while (true) {
        j = n + i;
        if (j % a == 0 || j % b == 0 || j % c == 0) {
            if (x == m - 1) {
                cout << j << "";
            } else {
                cout << j << " ";
            }
            x += 1;
        }
        if (x == m) {
            break;
        }
        i++;
    }
    cout << endl;
    return 0;
}