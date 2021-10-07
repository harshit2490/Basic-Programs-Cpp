#include<bits/stdc++.h>
using namespace std;

int calF(int n){
    int res=1;
    for(int i=1; i<=n; i++){
        res = res*i;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    cout << calF(n);
    return 0;
}



// OUTPUT: 5
// INPUT:  120
