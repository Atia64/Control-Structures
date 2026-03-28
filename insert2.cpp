#include<iostream>
using namespace std;
int main(){
int arr[10]={10,20,50,60};
int n=4,i,pos;
cout<<"Enter a position:";
cin>>pos;
int item1=30,item2=40;
for(i=n;i>pos;i--){
    arr[i+1]=arr[i-1];
}
arr[pos]=item1;
arr[pos+1]=item2;
n=n+2;
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}



