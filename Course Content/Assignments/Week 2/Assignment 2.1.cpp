#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int carry = 0;
    for(int i=0; i<n; i++){
        int A, B, sum ;
        cin >> A >> B;
        sum = A+B+carry;
        int d = sum%10;
        carry = sum/10;
        cout << d << endl;
    }
    return 0;
}