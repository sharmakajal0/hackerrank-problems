#include<iostream>

int main(int argc, char* argv[])
{
    int x = 3;
    int* pointer_to_x = &x;
    int** pointer_to_pointer_to_x = &pointer_to_x;
    int*** pointer_to_pointer_to_pointer_to_x = &pointer_to_pointer_to_x;

    std::cout << *pointer_to_x << std::endl;
    std::cout << pointer_to_x << std::endl;
    std::cout << &pointer_to_x << std::endl;
    std::cout << &x << std::endl;
    std::cout << **pointer_to_pointer_to_pointer_to_x << std::endl;
    std::cout << ***pointer_to_pointer_to_pointer_to_x << std::endl;

    return 0;
}

