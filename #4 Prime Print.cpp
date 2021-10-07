#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=2; i<n; i++){
        for(int j=2; j<i; j++){
            if(i%j == 0)
                break;
            else if (i == j+1)
                cout << i << " ";
        }
    }
    return 0;
}



// OUTPUT: 22
// INPUT:  3 5 7 11 13 17 19 
