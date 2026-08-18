#include<iostream>
using namespace std;
int main(){
    int n,i,count=0;
    cout<<"enter the number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }   
    }
    if(count==2){
        cout<<"it is a prime number"<<endl;
    }
    else{
         cout<<"it is not a prime number"<<endl;
    }
    return 0;
}