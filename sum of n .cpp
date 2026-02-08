#include<iostream>
using namespace std;
int main(){
int num,i,sum=0,remainder;
cout<<"Enter a number : ";
cin>>num;
while(num!=0){
    remainder=num%10;
    sum=sum+remainder;
    num=num/10;
}
cout<<"Sum of number = "<<sum;
}
