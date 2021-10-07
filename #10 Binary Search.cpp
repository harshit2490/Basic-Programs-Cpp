// Binary Search
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int l=0, r=n-1, mid;
    while(r - l > 1){
        int mid = (r + l)/2;
        if(arr[mid] < key){
            l = mid + 1;
        }
        else{
            r = mid;
        }
    }
    if(arr[l] == key){
        cout << l;
    }
    else if(arr[r] == key){
        cout << r; 
    }
    else{
        cout << "Not Found";
    }
    return 0;
}


/*
OUTPUT: 
6
2 3 4 5 6 7
5

INPUT:
3 (Index Value)
*/
