#include<iostream>
using namespace std;
//sum of numbers divisible by 3
int main(){
    int n;
    cout<<"Enter element:";
    cin>>n;
    int mul=1;
    for(int i=1;i<=n;i++){
        
    mul *=i;}
    
    cout<<mul<<"";
          return 0;
}