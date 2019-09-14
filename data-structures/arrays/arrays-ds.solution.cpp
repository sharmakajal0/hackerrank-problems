#include<iostream>

void print_array(const char* array_name, int A[], int size);
void print_reverse(const char* array_name, int A[], int size);
int* reverse_int_array(const int array[], int array_size);
void reverse_int_array_inplace(int A[], int size);

int main()
{
    int A[1000];
    int N;
    std::cin >> N;
    for(int i = 0; i < N; ++i)
    {
        std::cin >> A[i];
    }

    print_array("A", A, N);
    std::cout << std::endl;

    print_reverse("A", A, N);
    std::cout << std::endl;
    
    int* returned_array = reverse_int_array(A, N);

    print_array("returned_array", returned_array, N);

    std::cout << std::endl;

    // A[] = [1, 2, 3, 4]
    reverse_int_array_inplace(A, N);
    print_array("A", A, N);
    
    std::cout << std::endl;

    return 0;
}
void print_array(const char* array_name, int A[], int size) 
{
    std::cout << array_name << ": ";
    for(int i = 0;i < size; ++i)
    {
        std::cout << A[i] << " ";
    }
}

void print_reverse(const char* array_name, int A[], int size) 
{
    std::cout << "reverse of " << array_name << ": ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << A[size - i - 1] << " ";
    }
}

int* reverse_int_array(const int* array, int array_size) 
{
    int *reversed_array = new int[array_size];

    for (int i = 0; i < array_size; ++i) 
    {
        reversed_array[i] = array[array_size - i - 1];
    }

    return reversed_array;
}

void reverse_int_array_inplace(int A[], int size)
{
    int start = 0;
    int end = size;
    int temp;
    int center = size/2;
    // A[] = [1, 2, 3, 4]
    for (int i = 0; i < center; i++) 
    {
        temp = A[start + i];
        A[start + i] = A[end - i - 1];
        A[end - i - 1] = temp;
    }
}

