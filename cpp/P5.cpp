#include<iostream>
#include<cstring>
using namespace std;

class EMP {
  char Name[10];
  float sal;
public:
  EMP(char *x);
  EMP(char *x, float y);
  ~EMP() {cout<<"Object "<<Name<<" Destroyed\n";}
};

EMP::EMP(char *x) {
  strcpy(Name,x);
  cout<<"object "<<Name<<" with no salary Created\n";
}

EMP::EMP(char *x, float y) {
  strcpy(Name,x); sal = y;
  cout<<"Object "<<Name<<" with salary "<<sal<<" Created\n";
}

int main() {
  {
  EMP Pankaj("Pankaj", 99999.10);
  }
  {
    EMP Girwar("Girwar");
  }
  {
    EMP Divyakant("Divyakant", 1200.25);
  }
return 0;
}
