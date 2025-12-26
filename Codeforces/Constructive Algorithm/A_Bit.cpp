// Constructive and Implementation
// Implementation problems are problems that require a lot of programming and debugging skills
// Constructive algorithm is a method that both determines if a solution exists and contructs it explicitly

// 1.Bit++
#include<bits/stdc++.h>
using namespace std;

bool statementCheck(string statement){
    if(statement == "++X" || statement == "X++") return true;
    else false;
}

int main(){

    int x = 0,n;
    cin>>n;

    while(n--){
        string statement;
        cin>>statement;

        if(statementCheck(statement)) x++;
        else x--;    
    }

    cout<<x<<"\n";
    return 0;
}