#include<iostream>
using namespace std;

void input(int X[][5], int row, int col);
void multiply(int A[][5], int B[][5], int C[][5], int r1, int c1, int r2, int c2);
void display(int X[][5], int row, int col);

int main() {
  int A[5][5], B[5][5], C[5][5];
  int r1,c1,r2,c2;

  cout<<"Enter row and column of matrix A: ";
  cin>>r1>>c1;
  cout<<"Enter row and column of matrix B: ";
  cin>>r2>>c2;
  if(c1==r2) {
    cout<<"Enter elements of "<<r1<<"x"<<c1<<" matrix A\n";
    input(A, r1, c1);
    cout<<"Enter elements of "<<r2<<"x"<<c2<<" matrix B\n";
    input(B, r2, c2);
    multiply(A, B, C, r1, c1, r2, c2);
    display(C, r1, c2);
  }
  else
    cout<<"Number of row and column mismatch";
  return 0;
}

void input(int X[][5], int row, int col) {
  int i, j;
  for(i=0; i<row; i++) {
    for(j=0; j<col; j++) {
      cin>>X[i][j];
    }
  }
}

void multiply(int A[][5], int B[][5], int C[][5], int r1, int c1, int r2, int c2) {
  int i, j, k, sum = 0;
  for(i=0; i<r1; i++) {
    for(j=0; j<c2; j++) {
      sum = 0;
      for(k=0; k<c1; k++) {
        sum = sum + A[i][k]*B[k][j];
      }
      C[i][j] = sum;
    }
  }

}

void display(int X[][5], int row, int col) {
  int i, j;
  for(i = 0; i<row; i++) {
    for(j=0; j<col; j++) {
      cout<<X[i][j]<<"\t";
    }
    cout<<"\n";
  }
}
