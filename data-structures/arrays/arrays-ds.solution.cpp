#include<iostream>


void print_array(int A[], int size);
void print_reverse(int A[], int size);
// void reverse_int_array(int A[], int size);
// void reverse_int_array_inplace(int A[], int size);

int main()
{
    int A[1000];
    int* pointer_to_A = &A[1000];
    int N, i;
    std::cin >> N;
    for(i = 0; i < N; ++i)
    {
        std::cin >> A[i];
    }

    print_array(A, N);
    std::cout << std::endl;

    print_reverse(A, N);

    std::cout << std::endl;
}

void print_array(int A[], int size) 
{
    for(int i = 0;i < size; ++i)
    {
        std::cout << A[i] << " ";
    }
}

void print_reverse(int A[], int size) 
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << A[size - i - 1] << " ";
    }
}
