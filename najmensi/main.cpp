#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin>> x >> y >> z;
    if(x<y) {
        if (x < z){
            cout << x << endl;
        }
    }
    if(y<x) {
        if (y < z) {
            cout << y << endl;
        }
    }
    if(z<x){
        if(z<y) {
            cout << z << endl;
        }
    }
    if(x==y){
        if(x<z) {
            cout << x << endl;
        }
    }
    if(x==z) {
        if (x < y) {
            cout << x << endl;
        }
    }
    if(y==z){
        if(y<x){
            cout<< y <<endl;
        }
    }
    if(x==y){
        if(y==z) {
            cout << x << endl;
        }
    }
    return 0;
}