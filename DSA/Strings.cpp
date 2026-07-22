#include<iostream>
#include<map>
using namespace std;

// Reverse A String

// class Solution{
//   public:
//   void reverseAString(string &s){
//     int start =0;
//     int end = s.length()-1;
//     while(start<end){
//       swap(s[start], s[end]);
//       start++;
//       end--;
//     }
//   }
// };


// Check Whether a String is palindrome or not

// class Solution{
//   public:
//   bool palindromeCheck(string s){
//     string temp = s;
//     int start = 0;
//     int end = temp.length()-1;
//     while(start<end){
//       swap(temp[start], temp[end]);
//       start++;
//       end--;
//     }
//     bool res = (temp==s)?  true:  false;
//     return res;
//   }
// };

// count vowels, consonants, spaces, digits

// class Solution{
//   public:
//   void countVowConSpaDig(string s){
//     int vowels = 0, consonants = 0, spaces = 0, digits = 0;
//     for(char ch: s){
//       if(
//         ch == 'A' || ch == 'E' ||  ch == 'I' ||  ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' ||  ch == 'i' ||  ch == 'o' ||  ch == 'u'
//       ) vowels++;
//       else if(isalpha(ch)) consonants++;
//       else if(isdigit(ch)) digits++;
//       else if(ch == ' ') spaces++;
//     }
//     cout<<"Vowels "<<vowels<<endl;
//     cout<<consonants<<endl;
//     cout<<spaces<<endl;
//     cout<<digits<<endl;
//   }
// };

// Frequency of Characters

// class Solution{
//   public:
//   void freqCountofEachChar(string s){
//     map<char,int>mp;
//     for(auto ch : s){
//       mp[ch]++;
//     }
//     for(auto x: mp){
//       cout<<x.first<<"->"<<x.second<<endl;
//     }
//   }
// };

  

int main(){
  string s = "banana";
  Solution s1;
  s1.freqCountofEachChar(s);
  return 0;
}