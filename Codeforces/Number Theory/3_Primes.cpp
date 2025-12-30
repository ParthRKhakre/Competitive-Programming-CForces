#include<bits/stdc++.h>
using namespace std;

bool is_prime(int number){
    if(number <= 1) return false;
    for(int i = 2;i*i<=number;i++){
        if(number % i == 0) return false;
    }
    return true;
}

int main(){

    int number;
    cin>>number;

    // Accepted Successfully
    if(is_prime(number-2)) cout<<"2 "<<number-2<<" ";
    else cout<<"-1";


    // Below code give TLE 
    // bool flag = true;
    // for(int i=2;i<number;i++){
    //     if(is_prime(i)&&is_prime(number-i)){
    //         cout<<i<<" "<<(number-i);
    //         flag = false;
    //         break;
    //     }
    // }
    // if(flag) cout<<-1;

    return 0;
}