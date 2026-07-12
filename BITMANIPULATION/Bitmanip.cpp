#include<iostream>
using namespace std;

//Check Even Or Odd
string checkEvenOrOdd(int n){
  if(n&1) return "odd";
  return "even";
}

// Check Bit is on or not
string CheckBit(int n, int k){
  int mask = (1<<k);
  if(n&mask) return "Bit is on";
  return "Bit is Off";
}


// Set Bit on
int SetBit(int n, int k){
  int mask = (1<<k);
  return (n|mask);
}


// Clear Bit to off
int ClearBit(int n, int k){
  int mask = ~(1<<k);
  return (n&mask);
}


// Toggle
int toggleBit(int n, int k){
  int mask = (1<<k);
  return (n^mask);
}

// count set bits
int countSetBits(int n){
  int count = 0;
  while(n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

// swap nibbles
unsigned char swapNibbles(unsigned char x){
  unsigned char lower = x&15;
  unsigned char upper = x&240;
  lower = lower<<4;
  upper = upper>>4;
  unsigned char result = lower | upper;
  return result;
}

int  a = 40;
int main(){
  unsigned char c = 172;
  int a = 10;
  {
    int a = 20;
    cout<<"Inside brasis: "<<a<<endl;
  }
  cout<<"Inside main: "<<a<<endl;
  cout<<"Global scope: "<<::a;
  return 0;
}