#include<iostream>
#include<cstring>
using namespace std;

class STUDENT {
  char Name[10];
  int age;
public:
  void set_data(char *x, int i) {strcpy(Name,x); age=i;}
  void get_data() { cout<<"Name = "<<Name<<"\t"<<"Age = "<<age<<endl;}
};

int main() {
  STUDENT A[3];
  char Name[10];
  int age, i;
  for(i=0; i<3 ;i++) {
    cout<<"Enter Name & Age of student "<<i+1<<":\n";
    cin>>Name>>age;
    A[i].set_data(Name,age);
  }
  cout<<"Details of Students:\n";
  for(i=0;i<3;i++) {
    A[i].get_data();
  }
  return 0;
}
