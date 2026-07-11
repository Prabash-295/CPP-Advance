#include<iostream>
using namespace std;

//Check Even Or Odd
string checkEvenOrOdd(int n){
  if(n&1) return "odd";
  return "even";
}


int main(){
  int n;
  cin>>n;
  cout<<checkEvenOrOdd(n);
  return 0;
}