#include<iostream>
#include<vector>
using namespace std;


// Find the number that appears once, and the other numbers twice
// class Solution{
//   public:
//   int singleArrivedElement(vector<int>&v){
//     int n = v.size();
//     for(int i=0;i<n;i++){
//       int count = 0;
//       for(int j=0;j<n;j++){
//         if(v[j]==v[i]){
//           count++;
//           if(count>1) break;
//         }
//       }
//       if(count == 1) return v[i];
//     }
//     return -1;
//   }
// };

// Count Maximum Consecutive One's in the array
// class Solution{
//   public:
//   int maximumConsecutiveOnes(vector<int>&v){
//     int maxi = 0;
//     int n = v.size();
//     for(int i=0;i<n;i++){
//       int count = 0;
//       for(int j=i;j<n;j++){
//         if(v[j]==1) {
//           count++;
//         maxi = max(count, maxi);
//         }
//         else count = 0;
//       }
//     }
//     return maxi;
//   }
// };

class solution{
  public:
  void moveALLZerosToTheEndOfTheArray(vector<int>&v){
    int n=v.size();
    int i, j =1;
    for(i=0;i<n;i++){
      if(v[i]==0){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        j++;
      }
    }
  }
};


int main(){
  vector<int>v={ 1, 0, 2, 3, 0 ,4, 0 ,1 };
  solution ans;
  ans.moveALLZerosToTheEndOfTheArray(v);
  for(auto x: v){
    cout<<x<<" ";
  }
  return 0;
}