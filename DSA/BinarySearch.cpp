#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// Approach for finding x element index number (iterative approach)
// class Solution{
//   public: 
//   int bs(vector<int>&v, int target){
//     int low = 0, high = v.size()-1;
//     while(low<=high){
//       int mid = low + (high-low)/2;
//       if(v[mid]==target) return mid;
//       else if(v[mid]<target) low = mid + 1;
//       else high = mid -1 ; 
//     }
//     return -1;
//   }
// };

// Approach for finding x element index number (recursive approach)
// class Solution{
//   public:
//   int bs(vector<int>&v, int low, int high, int target){
//     if(low>high) return -1;
//     int mid  =  (low+high)/2;
//     if(v[mid]==target) return mid;
//     else if(v[mid]<target) return bs(v,mid+1, high, target);
//     else return bs(v,low, mid-1, target);
//   }
// };

// lower bound
// class Solution{
//   public:
//   int lowerboundd(vector<int>&v, int n, int target){
//     int ans = n;
//     int low = 0;
//     int high =  v.size()-1;
//     while(low<=high){
//       int mid = (low+high)/2;
//       if(v[mid]>=target){
//         ans = mid;
//         high = mid -1 ;
//       }
//       else low = mid +1;
//     }
//     return ans;
//   }
// };

// upper bound
// class Solution{
//   public:
//   int upperboundd(vector<int>&v, int n, int x){
//     int ans = n;
//     int low =0;
//     int high=n-1;
//     while(low<=high){
//       int mid = (low + high)/2;
//       if(v[mid]>x){
//         ans = mid;
//         high = mid -1 ;
//       }
//       else low = mid + 1;
//     }
//     return ans;
//   }
// };

// implement first  occur, last occur and peak element


int main(){
  // Solution s1;
  vector<int>v={ 2, 3, 6, 7 ,8 ,8 ,11, 11, 11, 12};
  // int n = v.size();
  // int target = 6;
  // int res = s1.upperboundd(v, n, target);
  // cout<< res;
  auto it = upper_bound(v.begin(),v.end(),6);
  cout<<it-v.begin();
  return 0;
}