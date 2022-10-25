#include <stdio.h>
#include <string.h>

void LOOP(char* c)
{
   
    while (*c != '\0')
    {
        printf("%s",*c);
        c++;
    }
    printf("\n");
    
}
int main() {
    char name[20] = "Rahul";
    LOOP(&name[0]);
   
   return 0;
}
