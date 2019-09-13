#include<iostream>

int main() 
{
    int * a = new int[10];
    int temp[] = {1, 2 ,3 ,4, 5 , 6, 7, 8, 9, 10};

    for (int i=0; i< 10; i++) 
    {
        a[i] = temp[i];
    }

    a += 10;

    for(int i=0; i< 10; i++) 
    {
        std::cout << "temp[" << i << "] = " << temp[i] << ", a[" << (-i - 1) << "] = " << a[-i - 1] << std::endl;
    }

    return 0;
}
