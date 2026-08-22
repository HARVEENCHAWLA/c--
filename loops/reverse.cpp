#include<iostream>
using namespace std;
int main()
{
int n,r,rev=0;
cout<<"enter your number: "<<endl;
cin>>n;
while(n>0){
    r=n%10;
    n=n/10;
    rev=rev*10+r;
}
cout<<"the number reversed is: "<<rev<<endl;

    return 0;
}