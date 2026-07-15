#include<iostream>
using namespace std;

// constructor 
class Student{
  public:
  string name="Prabash";
  int age=22;
  Student(){
    cout<<name<<" "<<age<<endl;
  }
  Student(string n){
    name = n;
    cout<<name<<endl;
  } 
  Student(string n, int a){
    name = n;
    age = a;
    cout<<name<<" "<<age<<endl;
  }
};
int main(){
  Student s1;
  Student s2("Nithin");
  Student s3("Varma", 25);
  Student s4;
  return 0;
}