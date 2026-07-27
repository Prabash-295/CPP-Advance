#include<iostream>
using namespace std;


// template<typename T1, typename T2>
// T1 addSum(T1 a, T2 b){
//   return a + b;
// }


// int main(){
//   double a = 5.59;
//   int b = 1;
//   double res = addSum(a,b);
//   cout<<"The value through template is: "<<res; 
// }


// class dabba{
//   public:
//   int a;
//   void dabbaFunc(int x){
//     a = x;
//     cout<<a;
//   }
// };

int main(){

  // Exception handling
  
  int a = 100;
  int b = 0;
  try{
    if(b==0) throw "Divison by zero";
    cout<<a/b;
  }
  catch (const char *msg){
    cout<<msg<<" ";
  }


  return 0;
}
