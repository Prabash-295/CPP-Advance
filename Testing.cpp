#include<iostream>
#include<string>
#include"Product.h"
using namespace std;

class Box{
  int length = 20;
  friend void show(Box &);
};

void show(Box &a){
  a.length=100;
  cout<<"Value inside function: "<<a.length<<endl;
};


int main(){
  Box b;
  show(b);
  
  return 0;
}