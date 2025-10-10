#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("Size of data types (in bytes):\n");

    printf("char: %zu bytes\n", sizeof(char));
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("short int: %zu bytes\n", sizeof(short int));
    printf("long int: %zu bytes\n", sizeof(long int));
    printf("long long int: %zu bytes\n", sizeof(long long int));


    printf("\nRange of data types:\n");


    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("long long int: %lld to %lld\n", LLONG_MIN, LLONG_MAX);


    printf("double: %.10e to %.10e\n", DBL_MIN, DBL_MAX);

    return 0;
}
