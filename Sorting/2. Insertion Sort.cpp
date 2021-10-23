// Insertion Sort
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j] > current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=current;
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

EXPLANATION: https://www.youtube.com/watch?v=3GC83dh4cf0
*/
