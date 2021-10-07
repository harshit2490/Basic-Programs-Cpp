#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, b=1, c, sum=1;
    cin >> n;
    for(int i=2; i<n; i++){
        c = a + b;
        sum = sum + c;
        a = b;
        b =c;
    }
    cout << sum;
    return 0;
}



// OUTPUT: 5
// INPUT:  7
