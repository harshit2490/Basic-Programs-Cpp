// Move all zeroes to end of array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,0,9,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 0;
    // sorting non zeros number first
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[x] = arr[i];                
            x++;
        }
    }
    // inserting zeros in remaining array space
    while(x < n){
        arr[x] = 0;
        x++;
    }
    // print array
    for(int i=0; i<n; i++){
        cout << arr[i];
        cout << " ";
    }
    return 0;
}

/* 
OUTPUT: 1 9 5 0 0 
*/
