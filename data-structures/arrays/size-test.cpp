#include<iostream>

void array_argument_test(int array[]);

int main(int argc, char* argv[])
{
    int A[100000];

    std::cout << "sizeof(A): " << sizeof(A) << std::endl;
    array_argument_test(A);

    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;
    std::cout << "sizeof(int**): " << sizeof(int**) << std::endl;
    std::cout << "sizeof(int***): " << sizeof(int***) << std::endl;
    std::cout << "sizeof(char): " << sizeof(char) << std::endl;
    std::cout << "sizeof(char*): " << sizeof(char*) << std::endl;
    std::cout << "sizeof(char**): " << sizeof(char**) << std::endl;
    std::cout << "sizeof(float): " << sizeof(float) << std::endl;
    std::cout << "sizeof(float*): " << sizeof(float*) << std::endl;
    std::cout << "sizeof(float**): " << sizeof(float**) << std::endl;
    std::cout << "sizeof(long): " << sizeof(long) << std::endl;
    std::cout << "sizeof(long long): " << sizeof(long long) << std::endl;
    std::cout << "sizeof(long*): " << sizeof(long*) << std::endl;
    std::cout << "sizeof(long long*): " << sizeof(long long*) << std::endl;
    std::cout << "sizeof(short): " << sizeof(short) << std::endl;
    std::cout << "sizeof(short*): " << sizeof(short*) << std::endl;

    return 0;
}

void array_argument_test(int array[])
{
    std::cout << "sizeof(array): " << sizeof(array) << std::endl;
}

