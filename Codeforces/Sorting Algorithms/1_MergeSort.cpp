#include<bits/stdc++.h>
using namespace std;

void MergeSort(int a[],int low,int high){
    if(low == high) return ;
    int mid = low + high / 2;
    MergeSort(a,low,mid);
    MergeSort(a,mid+1,high);
    Merge(a,low,mid,high);
}

void Merge(int a[],int low,int mid,int high){

}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i = 0;i<n;i++) cin>>a[i];

    MergeSort(a,0,n-1);

    for(int i = 0;i < n;i++) cout<<a[i]<<" ";
    return 0;
}

