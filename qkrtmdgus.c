#include <stdio.h>//1번 문제

int main(void) {
  int item;
  while(1){
    printf("출력하고 싶은 별 갯수를 적으시오.");
    scanf("%d",&item);
    for(int i=item; i>0; i--){
      for(int j=0; j<i; j++){
        printf("*");
      }
      printf("\n");
    }

  }
  return 0;
}
