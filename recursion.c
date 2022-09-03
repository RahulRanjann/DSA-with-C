#include<stdio.h>

int main()
{
    printf("Enter a no. to print hello ")
    int i;
    scanf("%d", &i);
    return 0;
}

void printHW(int count)
{
    if (count == 0)
    { 
        return 0;
    }
    
    printf("hello world \n");
    printf(count-1);
}