#include<iostream>
using namespace std;
int main(){
int n,sum=0,i,j;
cout<<"Enter a number:";
cin>>n;
for(i=1;i<=n;i++){
        //int sum=0;
    for(j=1;j<=i;j++){
        sum=sum+j;
    }
    cout<<sum<<endl;
}
return 0;
}
