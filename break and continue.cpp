//CONTINUE STATEMENT
#include<iostream>
using namespace std;
int main(){
int i;
for(i=1;i<=25;i++){
    if(i%5==0){
        if(i==20){
        continue;
        }
        cout<<i <<" ";
    }
}
return 0;
}
//BREAK STATEMENT
#include<iostream>
using namespace std;
int main(){
int i;
for(i=1;i<=25;i++){
    if(i%5==0){
        if(i==20){
        break;
        }
        cout<<i <<" ";
    }
}
return 0;
}
