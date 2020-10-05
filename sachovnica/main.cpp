#include <iostream>

using namespace std;

int main() {
    char riadok, stlpec;
    cin>>stlpec>>riadok;
    int s = stlpec -'A';
    int r = riadok-'0';
    int zvysok = 8-r;
    int out = s+1+zvysok*8;
    cout<<out<<endl;
    return 0;
}