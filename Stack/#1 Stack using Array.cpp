// Stack Operation (push, pop, top, empty)
#include <bits/stdc++.h>
using namespace std;
#define n 5

class Stack{
private:
    int top;
    int arr[n];
public:
    Stack(){
        top = -1;
        for(int i=0; i<n; i++){
            arr[i]=0;
        }
    }

    bool isEmpty(){
        if(top == -1)
            return true;
        else
            return false;
    }

    bool isFull(){
        if(top==n-1)
            return true;
        else
            return false;
    }

    void push(int val){
        if(isFull()){
            cout << "stack overflow" << endl;
        }
        else{
            top++;        
            arr[top]=val; 
        }
    }

    int pop(){
        if(isEmpty()){
            cout << "stack underflow" << endl;
            return 0;    // have to return some value...
        }
        else{
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    int display(){
        for(int i=n-1; i>=0; i--){
            cout << arr[i] << " ";
        }
    }
// Other operations in stack
    int count(){
        return(top+1);
    }

    int searchValue(int index){
        if(isEmpty()){
            cout << "stack underflow" << endl;
            return 0;     
        }
        else{
            return arr[index];
        }
    }

    int changeValue(int index, int new_value){
        arr[index] = new_value;
    }
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.display() << endl;
    st.pop();
    cout << st.display() << endl;
    st.push(8);
    cout << st.display() << endl;
    
    // st.count();
    // st.searchValue(2);
    // st.changeValue(1,5);
    // cout << st.display() << endl;
    // cout << st.isEmpty() << endl;
    return 0;
}


/*
OUTPUT
0 4 3 2 1
0 0 3 2 1 
0 8 3 2 1 
0 8 3 5 1 

*/
