#include<iostream>
using namespace std;
int main(){
int n,i;
long long factorial=1;
cout<<"Enter any number:";
cin>>n;
if(n<0){
    cout << "Factorial of a negative nuber doesn't exist.";;
    }
    else{
        for(i=1;i<=n;i++){
            factorial=factorial*i;
        }
        cout<<"Factorial of "<<n<<" = "<<factorial;
    }

    return 0;
}
