int main() {    int x = 10;    int *ptr = &x;    *ptr = 20;    printf("%d\n", x);    free(ptr); //Error: free()ing a pointer that was not allocated with malloc(), calloc() or realloc() }