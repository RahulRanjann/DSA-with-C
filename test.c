#include <stdio.h>
// void main(){
//     int a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52};
//   int val = 41; // value to be searched
//   int n = sizeof(a) / sizeof(a[1]);
//   int m = sizeof(val);

//   printf("The n stores %d bytes of data.\n",n);// n is a integer type and 'a'
//   printf("%d\n",m);// 'm' is a integer data types  holds 4 byte .

// }

// int main(int argc, char const *argv[])
// {
//   int arr[5]={1,2,3,4,5};
//   printf("The array of fist no. is%d \n",arr);
//   printf("the array is%p\n",arr); // %p is for address of pointer
//   printf(" the array is %d",arr[0]);// this gives the value of first element of array
//   return 0;
// }

// int main(int argc, char const *argv[])
// {
//   int a, b;
//   printf("Enter 1st no.");
//   scanf("%d", &a);
//   printf("Enter 2st no.");
//   scanf("%d", &b);
//   int *p, q;
//   p = &a;
//   q = *p;

//   printf("Using point the value of a is %d \n", q);

//       printf( pro of the a and b %d", (a + b));

//   return 0;
// }


// int pro(int );
// void main(int argc, char const *argv[])
// {
//  printf("%d\n",pro(5));
  
// }

// int pro(int n)
// {
//     int m=1 ;
   

//    if (n==1)
//    {
//     return m = m*pro(n-1);
    
//    }

   

 
// }

// int main(int argc, char const *argv[])
// {
//     while(1)
//     {
//         printf("1");
//     }
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int a = 10; 

    int *p = &a;
    int ** ptr = &p;
    printf("%d\n", **ptr+1);
    printf("%d\n",&ptr);
    printf("%d\n",&p);
    printf("%d\n",&a);
    return 0;
}
