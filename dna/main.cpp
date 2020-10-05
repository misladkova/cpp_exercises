#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n, j;
    cin>>n;
    vector <string> DNA(n);
    for (int i = 0; i < n; ++i) {
        cin>>DNA[i];
//        cout<<DNA[i]<<endl;
    }
    vector <int> pozicie(n);
    for (int i = 0; i < n; ++i) {
        cin>>pozicie[i];
//        cout<<pozicie[i]<<endl;
    }
    for (int i = 0; i < n; ++i) {
        j = pozicie[i];
//        cout<<"hg"<<j<<endl;
        cout<<DNA[j-1];
    }
    cout<<endl;
    return 0;
}