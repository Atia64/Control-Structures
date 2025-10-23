#include<iostream>
using namespace std;
int main(){
int num,originalNum,remainder,reversed=0;
cout<<"Enter a number:";
cin>>num;
originalNum=num;
while(num!=0){
    remainder=num%10;
    reversed=reversed*10+remainder;
    num=num/10;
}
if(originalNum==reversed){
    cout<<originalNum<<" is palindrome"<<endl;
}
else{
    cout<<originalNum<<" is not palindrome";
}
return 0;
}
