#include <iostream>

using namespace std;

int main(){
    int r, s;
    cin>>r>>s;
    char a[r][s];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < s; ++j) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < r; ++j) {
            cout << a[j][i];
        }
        cout << endl;
    }
    return 0;
}