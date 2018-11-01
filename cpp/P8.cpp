#include<iostream>
using namespace std;

class ROOM {
  float area, volume;
public:
  cal(float l, float b) { area = l*b;}
  cal(float l, float b, float h) { volume = l*b*h;}
  display() { cout<<"Area = "<<area<<"\tVolume = "<<volume;}
};

int main() {
  ROOM X;
  X.cal(10.5,12.5);
  X.cal(10.5,12.5,8.2);
  X.display();
  return 0;
}
