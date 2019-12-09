#include<stdio.h>

int strindexlast(char *s,char *t)
{
    int i,j,k;
    int idx = -1;

    for(i=0;s[i];++i) {
        for(j=i,k=0;t[k] && s[j] == t[k];j++,k++)
            ;
        if(k > 0 && t[k] == 0) {
            idx = i;
        }
    }

    return idx;
}

int main()
{
    char s[] = "asd";
    char t[] = "a";

    printf("%d\n",strindexlast(s,t));
}