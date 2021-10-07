#include<bits/stdc++.h>
using namespace std;

string isP(string str){
    int s=str.length();
    for(int i=0;i<s/2;i++){
        if(str[i]==str[s-i-1]){
            return "yes";
        }
    }
    return "no";
}

int main(){
    string str,rev;
    cin >> str;
    cout<< isP(str);
    return 0 ;
}




// OUTPUT: abcdef
// INPUT:  no

// OUTPUT: abcba
// INPUT:  yes
