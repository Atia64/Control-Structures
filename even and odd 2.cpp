#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter a number:";
cin>>n;
cout<<"Even number :";
for(i=1;i<=n;i++){
    if(i%2==0){
    cout<<i<<" ";
    }
}
cout<<endl;
cout<<"Odd number :";
for(i=1;i<=n;i++){
    if(i%2!=0){
    cout<<i<<" ";
    }
}
return 0;
}
