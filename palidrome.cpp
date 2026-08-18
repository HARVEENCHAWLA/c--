#include<iostream>
using namespace std;
int main()
{
int n,r,m,rev=0;
cout<<"enter your number: "<<endl;
cin>>n;
m=n;
while(n>0){
    r=n%10;
    n=n/10;
    rev=rev*10+r;
}
if(rev==m){
    cout<<"the number is a palindrome.";
}
else{
    cout<<"the number is not a palindrome.";
}
    return 0;
}