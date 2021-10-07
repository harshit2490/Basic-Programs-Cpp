----------------------------------( Up Left )----------------------------------
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
         }
        cout << endl;
    }
    return 0;
}

/*
INPUT: 
5

OUTPUT: 
* 
* * 
* * * 
* * * * 
* * * * * 


----------------------------------( Down Left )----------------------------------
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
INPUT: 
5

OUTPUT: 
* * * * * 
* * * * 
* * * 
* * 
*  


----------------------------------( Up Right )----------------------------------
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int space = n - 1;
    int star = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=space; j++){
            cout << "  ";
        }
        for(int j=1; j<=star; j++){
            cout << "* ";
        }
        cout << endl;
        space--;
        star++;
    }
    return 0;
}

/*
INPUT: 
5

OUTPUT: 
        * 
      * * 
    * * * 
  * * * * 
* * * * *  


----------------------------------( Down Right )----------------------------------
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int star = n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout << "  ";
        }
        for(int j=1; j<=star; j++){
            cout << "* ";
        }
        cout << endl;
        star--;
    }
    return 0;
}

/*
INPUT: 
5

OUTPUT: 
* * * * * 
  * * * * 
    * * * 
      * * 
        *
-----------------------------------------------------------------------------------
