#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    string str;
    cin >> str;
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(isVowel(str[i])){
            count++;
        }
    }
    cout << count;
    return 0;
}


/*

INPUT: 
Harshit

OUTPUT: 
2

*/
