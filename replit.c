#include <stdio.h>

void insertionSort(int *a, int key){
  int n=0;
  int j=0;
  for(int i=0; i<key; i++){
    int temp=a[i+1];
    for(j=i; j>=0; j--){
      if(a[j]<temp){
        a[j+1]=temp;
        break;
      }else{
        a[j+1]=a[j];
      }
    }
    if(j==-1){
      a[j+1]=temp;
    }
  }
}

int main(void) {
  int a[]={5,8,4,7,9,2,6};
  int key=sizeof(a)/sizeof(int);

  insertionSort(a, key);
  for(int i=0; i<key; i++){
    printf("%d->", a[i]);
  }

  return 0;
}