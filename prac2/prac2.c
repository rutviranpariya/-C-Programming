#include <stdio.h>

int main() {

    float length = 70.0;
    float breadth = 90.0;


    float area = length * breadth;


    float perimeter = 2 * (length + breadth);


    printf("The area of the park is: %.2f square meters\n", area);
    printf("The perimeter of the park is: %.2f meters\n", perimeter);

    return 0;
}
