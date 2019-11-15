#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    char ch[50];
    int index = 0;
    while (1){
        char c = getchar();
        if (c == '\n'){
            break;
        }
        ch[index] = c;
        index++;
    }
    for (int k = 0; ch[k] != '\0'; ++k) {
        if (ch[k] == 'a' || ch == 'A')
            i++;
        if (ch[k] == '0') {
            j++;
        }
    }
    printf("The number of a is: %d and the number of 0 is : %d", i, j);
    return 0;
}
