#include<iostream>
using namespace std;

class Father {
protected:
  float HofF;
public:
  void set_HofF(float x) { HofF = x;}
};

class Mother {
protected:
  float HofM;
public:
  void set_HofM(float x) { HofM = x;}
};

class Child : public Father, public Mother {
protected:
  float HofC;
public:
  float get_HofC() {return (HofF+HofM)/2;}
};

int main() {
  Child X;
  float F, M;
  cout<<"Enter Age of Mother and Father: ";
  cin>>F>>M;
  X.set_HofF(F);
  X.set_HofM(M);
  cout<<"Height of Child is: "<<X.get_HofC();
  return 0;
}
