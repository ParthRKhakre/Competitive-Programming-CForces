#include<bits/stdc++.h>
using namespace std;

bool is_prime(int number){
    if(number <= 1) return false;
    bool flag = true;
    for(int i = 2;i<number;i++){
        if(number % i == 0){
            flag = false; 
            break; 
        }
    }
    return flag;
}

bool is_prime_optimal(int number){

    if(number<=1) return false;

    bool flag = true;
    for(int i=2;i*i<=number;i++){
        if(number % i == 0){
              flag = false;
              break;
        }
    }
    return flag;
}

int main(){

    int number;
    cin>>number;

    int result = is_prime_optimal(number);
    if(result) cout<<number<<" "<<"is prime";
    else cout<<"Not a prime";
    return 0;
}