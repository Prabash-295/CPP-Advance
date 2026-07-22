#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// selection sort
// class Solution{
//   public:
// void selection_sort(vector<int>&v, int n){
//   for(int i=0;i<=n-2;i++){
//     int mini = i;
//     for(int j=i;j<=n-1;j++){
//       if(v[j]<v[mini]) mini = j;
//     }
//     swap(v[mini],v[i]);
//   }
// }
// };

// bubble sort
// class Solution{
//   public:
//   void bubble_sort(vector<int>&v, int n){
//     for(int i=n-1;i>=0;i--){
//       for(int j=0;j<=i-1;j++){
//         if(v[j]>v[j+1]){
//           swap(v[j],v[j+1]);
//         }
//       }
//     }
//   }
// };

// insertion sort
// class Solution{
//   public:
//   void insertion_sort(vector<int>&v, int n){
//     for(int i=0;i<n;i++){
//       int j=i;
//       while(j>0 && v[j-1]>v[j]){
//         swap(v[j-1],v[j]);
//         j--;
//       }
//     }
//   }
// };

// know theory of merge and quick sort 

int main(){
  // Solution s1;
  vector<int>v={13, 46, 24, 52, 20 ,9};
  int n = v.size();
  sort(v.begin(),v.end());
  // s1.insertion_sort(v,n);
  for(auto x: v){
    cout<<x<<" ";
  }
  return 0;
}