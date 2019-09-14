#include<iostream>

#define DEBUG 1

void print_array(const char* array_name, int A[], int size);
void print_rotated_array(const char* array_name, int A[],int times_to_rotate, int size);
int* left_rotate(int A[], int array_size, int times_to_rotate);
void left_rotate_inplace(int A[], int array_size, int times_to_rotate);

int main(int argc, char* argv[])
{
    int A[1000000];
    int N, d;

    std::cin >> N >> d;
    for (int i = 0; i < N; i++) 
    {
        std::cin >> A[i];
    }

    print_array("A", A, N);

    std::cout << std::endl;

    print_rotated_array("A", A, d, N);

    std::cout << std::endl;

    int* left_rotated_A = left_rotate(A, N, d);

    print_array("A", left_rotated_A, N);

    std::cout << std::endl;

    left_rotate_inplace(A, N, d);
    print_array("A", A, N);

    std::cout << std::endl;

    return 0;
}

void print_array(const char* array_name, int A[], int size) 
{
    if (DEBUG)
    {
        std::cout << array_name << ": ";
    }

    for(int i = 0;i < size; ++i)
    {
        std::cout << A[i] << " ";
    }
}

void print_rotated_array(const char* array_name, int A[], int times_to_rotate, int array_size)
{
    if (DEBUG)
    {
        std::cout << "rotated array " << array_name << ": ";
    }
    
    for (int i = times_to_rotate; i < array_size; i++)
    {
        std::cout << A[i] << " ";
    }

    for (int i = 0; i < times_to_rotate; i++)
    {
        std::cout << A[i] << " ";
    }   
}

int* left_rotate(int A[], int array_size, int times_to_rotate)
{
    int* rotated_array = new int[array_size];
    // A[] = [1, 2, 3, 4, 5]
    // array_size = 5
    // times_to_rotate = 4

    for (int i = times_to_rotate; i < array_size; i++)
    {
        rotated_array[i - times_to_rotate] = A[i];
    }
    // rotated_array[] = [5, 0, 0, 0, 0]

    for (int i = 0; i < times_to_rotate; i++)
    {
        rotated_array[array_size + i - times_to_rotate] = A[i];
    }
    // rotated_array[] = [5, , , 1, 2] 3, 4

    return rotated_array;
}

void left_rotate_inplace(int A[], int array_size, int times_to_rotate)
{
    // A[] = [1, 2, 3, 4, 5]
    // array_size = 5
    // times_to_rotate = 4

    // A[] should be [5, 1, 2, 3, 4]
    int* temporaray_array = new int[times_to_rotate];
    
    for (int i = 0; i < times_to_rotate; i++)
    {
        temporaray_array[i] = A[i];
    }
    // temporary_array[] = [1, 2, 3, 4]

    for (int i = 0; i < times_to_rotate; i++)
    {
        A[i] = A[times_to_rotate + i + 1];
    }
    
    for (int i = times_to_rotate; i < array_size; i++)
    {
        A[array_size - i - 1] = A[times_to_rotate];
    }
    // 
}
