#include<iostream>
using namespace std;
int main(){
  // malloc

  int *ptr = (int*)malloc(sizeof(int));
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  *ptr = 50;
  cout<<"After modify: "<<*ptr<<endl;
  free(ptr);
  ptr = nullptr;
  cout<<"after moding into null: "<<ptr;

  return 0;
} 