#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    for(i=2; i<n; i++){
        if((n%i)==0){
            cout<<"Not Prime";
            break;
        }
    }
    if(i==n){
        cout<<"Is Prime";
    }
    return 0;
}



// OUTPUT: 5
// INPUT:  Is Prime
