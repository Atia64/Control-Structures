#include<iostream>
using namespace std;
int main(){
int n,i,j,sum=0;
cout<<"Enter a number:";
cin>>n;
for(i=2;i<=n;i++){
    bool isprime=true;
    for(j=2;j<=i/2;j++){
        if(i%j==0){
            isprime=false;
        }
    }
    if(isprime){
        sum=sum+i;
    }
}
cout<<sum;
return 0;
}
