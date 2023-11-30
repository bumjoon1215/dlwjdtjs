#include <stdio.h>//3¹ø ¹®Á¦

int main(void){
  int a[]={5,8,3,6,2,5,9,6,7};
  int b = sizeof(a)/sizeof(int);
  int temp;

  for(int i=0; i<b; i++){
    for(int j=0; j<i; j++){
      if(a[i]<a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  for(int i=0; i<b; i++){
    printf("%d->",a[i]);
  }
}
