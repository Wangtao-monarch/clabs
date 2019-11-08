#include<stdio.h>
int num1(int n){
    int count =0;
    while(n){
        ++count;
        n=(n-1)&n;
    }
    return count
}
int main(int argc,char const*argv[])
{
    char s;
    int num=0;
    while((s=getchar())!='\n'){
        num =num*10+s-'0';
    }
    printf("%d\n",num1(num));
    return 0;
}
