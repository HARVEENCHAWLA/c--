#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,r,m,sum=0;
cout<<"enter ur number:";
cin>>n;
m=n;

while(n>0){
r=n%10;
n=n/10;
sum=sum+pow(r,3);
}
if(sum==m){
    cout<<"it is an armstrong number"<<endl;

}
else{
    cout<<"it is not an armstrong number"<<endl;
}

    
    return 0;
}