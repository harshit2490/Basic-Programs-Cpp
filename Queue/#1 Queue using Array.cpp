/*
QUEUE OPERATIONS [[ Push from Back}, Pop from Front, Display{peek}, Empty ]]
TIME COMPLEXITY (Both in Worst & Average)
Enqueue(Push) -> O(1)  
DeQueue(Pop) -> O(1) 
Access -> O(n) 
Search -> O(n) 
*/
#include <bits/stdc++.h>
using namespace std;
#define n 20

class Queue{
    int* arr;
    int front;
    int back;    
public:
    Queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int val){
        if(back == n-1){
            cout << "Queue Overflow" << endl;
            return;
        }
        back++;
        arr[back] = val;

        if(front == -1){
            front++;
        }        
    }

    void pop(){
        if(front == -1 || front>back){
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
    }

    int display(){
        if(front == -1 || front>back){
            cout << "No elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front == -1 || front>back){
            cout << "No elements in queue" << endl;
            return true;
        }
        return false;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.display() << endl;
    q.pop();
    cout << q.display() << endl;
    q.pop();
    cout << q.display() << endl;
    q.pop();
    cout << q.display() << endl;
    q.pop();
    cout << q.empty() << endl;    
return 0;
}


/*
OUTPUT
1
2
3
4
No elements in queue
1

*/
