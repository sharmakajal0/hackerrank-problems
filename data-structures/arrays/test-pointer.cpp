#include<iostream>

int main()
{
    // short int * A = (short int *) malloc(sizeof(short int) * 5); // short int * A = 11
    short int * A = new short int[5];

    short int * B = new short int[7]; // short int * B = 21

    A[0] = 2; // A[0] = 0x0002 = 0b0000000000000010 = (0000 0000 0000 0010)

    *(A + 0) = 2; // A[0] = 0x0002 = 0b0000000000000010 = (0000 0000 0000 0010)

    A[4] = 78; // A[4] = 0x004E = 0b0000000001001110 = (0000 0000 0100 1110)

    *(A + 4) = 78; // A[4] = 0x004E = 0b0000000001001110 = (0000 0000 0100 1110)

    A[3] = 10; // A[3] = 0x000A = 0b0000000000001010 = (0000 0000 0000 1010)     ​

    // A + 4 = 11 + 2 * 4 = 19

    A[10] = 345; // B[5] = 0x0159 = 0b0000000101011001 = (0000 0001 0101 1001)

    short int * C = A + 3; // short int * C = 17;

    std::cout << C << std::endl; // prints "0x11"

    std::cout << *C << std::endl; // prints "10"

    std::cout << C[7] << std::endl; // prints "345"

    return 0;
}

