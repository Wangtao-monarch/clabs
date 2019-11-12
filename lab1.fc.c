#include<stdio.h>
int main()
{
    printf("TEMPERTURE\n");


    float fahr,celsius;
    int lower,upper,step;

    lower=0;
    upper=100;
    step=5;

    celsius=lower;
    printf("celsius\tfahr\n");
    while(celsius<=upper){
        fahr=(9.0*celsius)/5.0+32.0;
        printf("%3.0f%6.1f\n",celsius,fahr);
        celsius=celsius+step;
    }
}
