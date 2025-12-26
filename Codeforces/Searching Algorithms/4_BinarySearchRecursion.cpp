#include<bits/stdc++.h>
using namespace std;

int BinarySearchRecursion(int a[],int low,int high,int search){
    int mid = low + high / 2;

    if(low == high) return low;

    if(a[mid] == search) return mid;
    else if(a[mid] < search) BinarySearchRecursion(a,mid+1,high,search);
    else BinarySearchRecursion(a,low,mid-1,search);
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i = 0;i < n;i++) cin>>a[i];

    int value;
    cin>>value;

    int search = BinarySearchRecursion(a,0,n,value);

    cout<<"index: "<<search<<" is "<<a[search];

    return 0;
}
