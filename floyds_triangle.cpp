#include<iostream>

using namespace std;
int main(){
    int num = 1;
    int n = 4;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<" "<<num++;
        }
        cout<<endl;
    }
    return 0;
}
//  1
//  2 3
//  4 5 6
//  7 8 9 10