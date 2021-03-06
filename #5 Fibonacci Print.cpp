/*--------------------------(USING RECURSION)-----------------------*/
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if (n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}
int main (){
	int n;
    cin >> n;
	cout << fib(n);
	return 0;
}

// INPUT:  9
// OUTPUT: 34

/*------------------------(USING VARIABLES)---------------------*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a=0, b=1, c;
    cin >> n;
    cout <<a<<" "<<b<<" ";
    for(int i=2; i<n; i++){
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    return 0;
}

// INPUT:  0 1 1 2 3 
// OUTPUT: 5

/*--------------------------(USING ARRAY)-----------------------*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    cin >> n;
    arr[0]=0;
    arr[1]=1;
    cout <<arr[0]<<" "<<arr[1]<<" ";
    for(int i=2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2];
        cout << arr[i] << " ";
    }
    return 0;
}

// INPUT:  0 1 1 2 3 
// OUTPUT: 5
