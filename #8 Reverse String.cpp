#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n=str.length();
    for(int i=0; i<n/2; i++){
        swap(str[i], str[n-i-1]);
    }
    cout << str;
    return 0;
}



//-----------[OR USE BELOW FUNCTION]----------      
reverse(str.begin(), str.end());



//---------------[USING STACK]---------------          
void reverse(string &str)
{
    stack<int> s;
    for (char ch: str) {
        s.push(ch);
    }
    for (int i = 0; i < str.length(); i++){
        str[i] = s.top();
        s.pop();
    }
}
