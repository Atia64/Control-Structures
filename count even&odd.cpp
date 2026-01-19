#include<iostream>
using namespace std;
int main(){
int i,n;
int even=0,odd=0;
cin>>n;
for(i=1;i<=n;i++){
    if(i%2==0){
        even++;
    }
    else{
        odd++;
    }
}
cout<<even<<endl;
cout<<odd;
return 0;

}
