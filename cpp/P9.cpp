#include<iostream>
using namespace std;

int main() {
  int num, remain, rev = 0;
  int *ptrnum, *ptrrev;

  cout<<"Enter a number: ";
  cin>>num;

  ptrnum = &num;
  ptrrev = &rev;

  while(*ptrnum) {
    remain = *ptrnum%10;
    *ptrrev = *ptrrev*10 + remain;
    *ptrnum = *ptrnum/10;
  }
  cout<<"Reversed = "<<*ptrrev;
  return 0;
}
