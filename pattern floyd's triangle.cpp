#include<iostream>
using namespace std;

int main(){
  int n;
  int num=1;
  cout<<"Enter the value of n:";
  cin>>n;
  
  for(int i=0;i<n;i++){
      for(int j=i+1;j>0;j--){
        cout<<num<<" ";
          num++;
      }
      cout<<endl;
  }
    return 0;
}