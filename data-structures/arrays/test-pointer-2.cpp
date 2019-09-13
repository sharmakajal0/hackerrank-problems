#include<iostream>

int main()
{
    int* pointer_variable = new int;
    std::cout << pointer_variable << std::endl;    // prints(0x55bfeb276e70)
    *pointer_variable = 2;
    int** pointer_to_pointer_variable = &pointer_variable;

    std::cout << **pointer_to_pointer_variable << std::endl;  // prints(2)
    std::cout << *pointer_variable << std::endl;  // prints(2)
    std::cout << pointer_variable << std::endl;//prints(0x55bfeb276e70)
    std::cout << pointer_to_pointer_variable << std::endl; // prints(0x7fffb40325e8) 
    std::cout << &pointer_variable << std::endl;  // prints(0x7fffb40325e8) 
    std::cout << *pointer_to_pointer_variable << std::endl;   // prints(0x55bfeb276e70)


    return 0;
}
