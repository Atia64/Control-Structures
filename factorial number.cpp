#include<iostream>
using namespace std;
int main(){
int n,i,j;
cout<<"Enter a number:";
cin>>n;
int sum=0;
for(i=1;i<=n;i++){
        int fact=1;
    for(j=1;j<=i;j++){
        fact=fact*j;
    }
    cout<<i<<" Fatorial = "<<fact<<endl;
    sum=sum+fact;
}
cout<<"Sum of Factorial number ="<<sum;
return 0;
}
