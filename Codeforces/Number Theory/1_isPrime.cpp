#include<bits/stdc++.h>
using namespace std;

// TC : O(n)
bool isPrime(int x){

 if(x <= 1) return false;

    int i = 2,cnt = 0;   

    while(x % i != 0){
     i++,cnt++;
     if(i == x) break;
    } 

    if(cnt != 0) return true;
    else return false;
}

//

int main(){

    int x;
    cin>>x;

    int check = isPrime(x);
    cout<<check;
    return 0;
}