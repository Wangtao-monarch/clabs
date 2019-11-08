#include <stdio.h>
int main(void)
{
    unsigned int z,w;
    z = 1;
    w = 0;
    while (z>0)
    {
        z++;
    }
    printf("unsigned int max = %u\n",z-1);
    unsigned int n;
    n = z-1;
    do
    {
     n=n/2;
     w++;   
    } while (n>0);
    printf("The unsigned int bit is %d\n",w);
return 0;
}
