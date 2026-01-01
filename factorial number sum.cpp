#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter a number:";
cin>>n;
long long sum=0,fact=1;
for(i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+fact;
}
cout<<sum;
return 0;
}
