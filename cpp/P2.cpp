#include<iostream>
using namespace std;

int main() {
  int op1, op2, res = -1;
  char op;

  cout<<"Enter Expression: "; // in form of operand1, operator & operand2
  cin>>op1>>op>>op2;

  switch(op) {
    //Arithmetic
    case '+': res = op1+op2;
    break;
    case '-': res = op1-op2;
    break;
    case '*': res = op1*op2;
    break;
    case '/': res = op1/op2;
    break;
    case '%': res = op1%op2;
    break;
    //conditional
    case '?': res = (op1>op2) ? op1: op2;
    break;
    //Bit-wise AND
    case '&': res = op1&op2;
    break;
    //bit-wise OR
    case '|': res = op1|op2;
    break;
    //bit-wise X-OR
    case '^': res = op1^op2;
    break;
    default: cout<<"Invalid operator";
             exit(0);
  }
  cout<<op1<<op<<op2<<"="<<res;
  return 0;
}
