int main() {

    unsigned long long int l = 1.0;
    int size = 0;
    while (l) {
        l = l << 1;
        size++;
    }
    unsigned long long int max = 2 << (size - 1) - 1;
    printf("unsigned long long int is sizeof %d bit. The max is %llu ", size, max);
    return 0;
}
