#include <stdio.h>

void bubble_Sort(int *a, int n){
  int temp=0;
  for(int i=n; i>0; i--){
    for(int j=0; j<n; j++){
      if(a[j]>a[j+1]){
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
      }
    }
  }
}

int main(void) {
  int a[]={5,8,4,7,9,2,6};
  int n=sizeof(a)/sizeof(int);

  bubble_Sort(a, n);

  for(int i=0; i<n; i++){
    printf("%d->", a[i]);
  }

  
  return 0;
}