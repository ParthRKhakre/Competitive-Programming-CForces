#include<bits/stdc++.h>
using namespace std;

void factor(int number){
    for(int i = 1;i<=number;i++){
        if(number % i == 0) cout<<i<<" ";
    }
}

set<int> optimal_factor(int number){
    set<int> st;
    for(int i = 1;i*i<=number;i++){
        if(number % i == 0){
            st.insert(i);
            st.insert(number/i);
        }
    }
    return st;
}

int main(){

    int number;
    cin>>number;

    set<int> st = optimal_factor(number);
    for(auto it:st) cout<<it<<" ";

    return 0;
}
