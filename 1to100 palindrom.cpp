#include<iostream>
using namespace std;
int main(){
int n,originalnum,remainder,reversed;
cout<<"1 to 100 palimdron Number:";
for(n=1;n<=100;n++){
    originalnum=n;
    reversed=0;
    while(originalnum!=0){
        remainder=originalnum%10;
        reversed=reversed*10+remainder;
        originalnum=originalnum/10;
    }
    if(n==reversed){
        cout<<n<<" ";
    }

}
return 0;
}
