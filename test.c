#include<stdio.h>
void main(){
    int a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52};  
  int val = 41; // value to be searched  
  int n = sizeof(a) / sizeof(a[1]);
  int m = sizeof(val);

  printf("The n stores %d bytes of data.\n",n);// n is a integer type and 'a'
  printf("%d\n",m);// 'm' is a integer data types  holds 4 byte .

}
