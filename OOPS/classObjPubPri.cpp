#include<iostream>
using namespace std;

class Student{
  public:
  string name="Prabash";
  int age=40;
  void printingVayasu(){
    cout<<"Age is: "<<age;
  };
};

int main(){
  Student s1;
  s1.printingVayasu();
}