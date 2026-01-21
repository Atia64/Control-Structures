#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter a number:";
cin>>n;
int evensum=0,oddsum=0;
for(i=1;i<=n;i++){
    if(i%2==0){
        evensum=evensum+i;
    }
    else{
        oddsum=oddsum+i;
    }
}
cout<<"sum of even = "<<evensum<<endl;
cout<<"sum of odd = "<<oddsum<<endl;
return 0;
}
