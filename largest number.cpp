#include<iostream>
using namespace std;
int main(){
int x,y,z;
cout<<"Enter x number:";
cin>>x;
cout<<"Enter y number:";
cin>>y;
cout<<"Enter z number:";
cin>>z;
if(y<x && z<x){
    cout<<" X number is largest"<<endl;
}
else if(x<y && z<y){
    cout<<" Y number is largest"<<endl;
}
else{
    cout<<" Z number is largest";
}
return 0;
}
