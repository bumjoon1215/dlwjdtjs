#include <stdio.h>

void sort_data(int *a, int n){
  int temp;
  for(int i=0; i<n; i++){
    for(int j=0; j<i; j++){
      if(a[i]<a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
}

int main(void) {
  int a[]={5,8,3,6,2,5,9,6,7};
  int n = sizeof(a)/sizeof(int);

  sort_data(a, n);

  for(int i=0; i<n; i++){
    printf("%d\t", a[i]);
  }
}
