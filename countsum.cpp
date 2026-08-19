#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0,count=0;
    cout<<"enter ur number: ";
    cin>>n;
    while(n>0){
        i=n%10;
        n=n/10;
        count++;
        sum=sum+i;
    }

cout<<"the count is: "<<count<<" and the sum is: "<<sum<<endl;
    return 0;
}