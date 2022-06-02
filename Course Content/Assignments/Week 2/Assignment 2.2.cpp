#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum;
    for(int i=0; i<n; i++){
        int C, Q;
        cin >> C >> Q;
        sum+=C*Q;
    }
    cout << sum << endl;
    return 0;
}