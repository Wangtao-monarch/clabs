#include<stdio.h>
#include<ctype.h>
int getfloat(float *pf)
{
    int c,sign;

    while(isspace(c = getch()));

    if(!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1 : 1;

    if(c == '-' || c == '+') {
        c = getch();
    }

    for(*pf = 0; isdigit(c); c = getch()) {
        *pf = 10 * (*pf) + (c - '0');
    }
    *pf *= sign;

    int f,cnt;


    if(c == '.') {
        c = getch();
    }

    for(f = 0,cnt = 0; isdigit(c); c = getch()) {
        cnt++;
        f = 10 * f + (c - '0');
    }
    if(c != EOF) {
        ungetch(c);

        cnt++;
    if(cnt) {
        *pf += 1.0 * f / (cnt * 10);
    }


    return c;
}

int main()
{
    float f;
    getfloat(&f);
    printf("%f\n",f);
}
