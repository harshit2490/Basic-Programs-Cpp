// Bubble Sort
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=1;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    while(count<n){
        for(int i=0; i<n-count; i++){
            if(arr[i] > arr[i+1]){
                int temp=arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


/*
INPUT: 
5
6 3 8 2 4

OUTPUT: 
2 3 4 6 8 
*/
