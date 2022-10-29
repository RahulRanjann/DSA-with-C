#include<stdio.h>

int Add(int* a , int* b)
{
    int sum = *a+*b;
    return sum;

}

int main(int argc, char const *argv[])
{
    int num,num1;
    printf("Enter your first no. ");
    scanf("%d",&num);
    printf("Enter your second no.");
    scanf("%d",&num1);
    printf("The sum of the two no. is %d \n",Add(&num, &num1));
    return 0;
}
