#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, r, sum=0, temp;
    cin >> n;
    temp = n;

    while(n > 0){
        r = n%10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    
    if(temp == sum){
        cout << "Armstrong";
    }
    else{
        cout << "Not Armstrong";
    }
    return 0;
}


// INPUT:  371
// OUTPUT: Armstrong
