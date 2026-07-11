#include<iostream>
#include<vector>
#include"../product.h"
using namespace std;

// class
class Bank{
  private:
  int balance=100;

  public:
  void deposit(int amount){
    balance+=amount;
  }
  int getBalance(){
    return balance;
}
};


//struct
struct College{
  string name;
  int naacGrade;
};

//enumeration
enum Days{
  Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

enum Colours{
  Red =10 , Blue, Green, Pink
};

//unions
union Chgs{
  int i;
  double db;
};

// typedef int temp_t;

// using 

using temp = int;

int main(){
  temp a = 21;
  cout<<a;
  return 0;
}