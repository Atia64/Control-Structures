/*#include<iostream>
using namespace std;
int main(){
int x=1;
while(x*2<1000){
    x=x*2;
}
cout<<x;
return 0;
}*/
#include<iostream>
using namespace std;
int main(){
int x=1;
for(x=1;x*2<1000;x=x*2){
    cout<<x<<" ";
}
cout<<x;
return 0;
}
