#include <stdio.h>//1�� ����

int main(void) {
  int item;
  while(1){
    printf("����ϰ� ���� �� ������ �����ÿ�.");
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
