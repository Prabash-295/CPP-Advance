#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
  int data;
  Node *next;

  public:
  Node(int value, Node* next1){
    data = value;
    next = next1;
  }

  Node(int value){
    data = value;
    next = nullptr;
  }
};

int main(){
  vector<int>v={ 8, 9, 56, 54, 35 };
  int n = v.size();
  Node *first = new Node(v[0],nullptr);
  Node *second = new Node(v[1],first);
  Node *third = new Node(v[1],second);
  cout<<third->next->data;
  return 0;
}