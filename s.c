#include<stdio.h>
#include<time.h>

int main(void) {

  FILE *text;
  text = fopen("prime_count.txt","w");
  
  time_t start, end;
  double result;
  
  int a, b, n;
  n=0;

  scanf("%d",&a);
  b=1;

  start =time (NULL);

  for(int i =2; i<=a; i++){
   do{
      b++;
    
    }while(i%b!=0);

  
    if(b!=i){
     printf("%d(은)는 %d라는 약수가 있으므로 소수가 아닙니다.\n", i, b);
     
    }else{
     fprintf(text,"%d, ",i);
      n++;
    }

    b=1;
  }

  printf("소수의 갯수는 %d입니다.\n",n);

  end = time(NULL); // 시간 측정 끝
  result = (double)(end - start);
  printf("출력 하는데 걸린 시간 :%f", result); //결과 출력
}