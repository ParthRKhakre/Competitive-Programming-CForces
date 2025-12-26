#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int a[],int n,int search){
    for(int i = 0;i < n;i++){
        if(a[i] == search) return i; 
    }
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i = 0;i < n;i++) cin>>a[i];

    int x;
    cin>>x;

    int search = LinearSearch(a,n,x);
    cout<<"element found at index: "<<search<<" the element found is "<<a[search];
    return 0;
}