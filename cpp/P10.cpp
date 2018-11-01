#include<iostream>
using namespace std;

int main() {
  int divisor, divident;
  cout<<"Enter divident and divisor: ";
  cin>>divident>>divisor;
  try {
    if(divisor == 0) throw 0;
    cout<<"Division = "<<divident/divisor;
  }
  catch(int i) {
    if(i==0) cout<<"Exception caught: DIVIDE BY ZERO";
  }
  return 0;
}
