#include<iostream>
using namespace std;
int main() {
  int space,star;
  int counter;

  for(counter = 0 ; counter < 5; counter++) {
    for(space = 4; space > counter; space--)
      cout<<" ";
    for(star = 1; star <= (1 + counter*2); star++)
      cout<<"*";
    cout<<"\n";
  }
  return 0;
}
