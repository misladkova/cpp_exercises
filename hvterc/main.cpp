#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int dlzka_strany = 4 * n - 1;
    int dlzka_zaciatku;
    for (int i = 0; i < dlzka_strany; ++i) {
        if(dlzka_strany/2<i){
            dlzka_zaciatku = ((dlzka_strany-i) / 2)*2 + 1-1;
        }else{
            dlzka_zaciatku = (i / 2)*2 + 1;
//            cout<<"h";
        }
        for (int j = 0; j < dlzka_zaciatku; ++j) {
            if (j % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        int dlzka_stredu = dlzka_strany - (2 * dlzka_zaciatku);
        for (int j = 0; j < dlzka_stredu; ++j) {
            if (i % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        for (int j = 0; j < dlzka_zaciatku; ++j) {
            int pocitadlo = dlzka_zaciatku-j-1;
            if (pocitadlo % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}