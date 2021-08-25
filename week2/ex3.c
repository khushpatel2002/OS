#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    int i;
    int nostar = atoi(argv[1]);
    for (i = 0; i <  nostar ; i++)
    {
        int j;
        int space =  nostar -i;
        for (int j = 0; j < space; j++) 
                putchar(' ');
        for (int j = 0; j < 2*i+1 ; j++) 
                putchar('*');
        putchar('\n');
    }
  return 0;
}