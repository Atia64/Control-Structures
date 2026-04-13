#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter three number:";
cin>>a>>b>>c;
if(a<=b&&a<=c){
    if(b<=c){
        cout<<a<<" "<<b<<" "<<c;
    }
    else{
        cout<<a<<" "<<c<<" "<<b;
    }
}
else if(b<=c&&b<=a){
    if(c<=a){
        cout<<b<<" "<<c<<" "<<a;
    }
    else{
        cout<<b<<" "<<a<<" "<<c;
    }
}
else{
    if(a<=b){
        cout<<c<<" "<<a<<" "<<b;
    }
    else{
        cout<<c<<" "<<b<<" "<<a;
    }
}
return 0;
}
