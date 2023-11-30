#include <stdio.h>//4¹ø ¹®Á¦

int main(void){
  int A[2][3]={{3,-5,4},{0,-7,-2}};
  int B[][3]={{-1,-2,6},{3,3,5}};
  int C[2][3]={0};

  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      C[i][j]=A[i][j]+B[i][j];
    }
  }

  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      printf("%d\t",C[i][j]);
    }
    printf("\n");
  }
}
