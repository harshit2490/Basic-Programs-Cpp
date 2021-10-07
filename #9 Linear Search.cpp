// Linear Search
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    int key,i;
    cin >> key;
    for(i=0; i<n; i++){
        if(key==arr[i]){
            cout<<"Found at index: "<<i;
            break;
        }
    }
    if(i==n){
        cout<<"Not present";
    }
    return 0;
}


/*
OUTPUT: 
6
2 3 4 5 6 7
5

INPUT:
Found at index: 3
*/
