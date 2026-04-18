//while loop
/*#include<iostream>
using namespace std;
int main(){
    int x=100,count=0;
while(x%2==0){
    x=x/2;
    count++;
}
cout<<x<<endl;
cout<<count;
return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    int x;
for(x=100;x%2==0;x=x/2){
    cout<<x<<endl;
}
cout<<x;
return 0;
}
