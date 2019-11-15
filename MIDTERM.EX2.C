int main()
{
    unsigned int a,b;
    double res;

    char c;

    a = 0;
    b = 0;

    while((c = getchar()) != ' ') {
        if(a == 0) a = c - '0';
        else {
            a = a*10 + c - '0';
        }
    }

    while((c = getchar()) != ' ') {
        if(b == 0) b = c - '0';
        else {
            b = b*10 + c - '0';
        }
    }

    c = getchar();
    int ok = 1;

    switch(c) {
    case '+' :
        res = a+b;
        break;
    case '-':
        res = a-b;
        break;
    case '*':
        res = a*b;
        break;
    case '/':
        if(b == 0) {
            puts("Error: connot divide a number  by 0");
            ok = 0;
            break;
        }
        res = 1.0*a/b;
        break;
    }

    if(ok) {
        printf("The expression has a value of : %.1f\n",res);
    }

    getchar();
    return 0;
}
