// Selection Sort (Finding min() element in array)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
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

EXPLANATION: https://www.youtube.com/watch?v=dQa4A2Z0_Ro
*/
