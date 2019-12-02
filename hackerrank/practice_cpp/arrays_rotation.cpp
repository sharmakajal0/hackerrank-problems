#include<iostream>

void leftRotatebyOne(int arr[1000000], int n);

int leftRotate(int arr[1000000], int d, int n);

void printArray(int arr[1000000], int size);

void leftRotatebyOne(int arr[1000000], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

int leftRotate(int arr[1000000], int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        leftRotatebyOne(arr, n);
    }

    return 0;
}

void printArray(int arr[1000000], int size)
{
    for (int i = 0; i < size; i++)
    {
        std :: cout << arr[i] << " ";
    }
    std :: cout << std :: endl;
}

int main()
{
    int n, d;
    int arr[1000000];
    std :: cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        std :: cin >> arr[i];
    }
    leftRotate(arr, d, n);
    printArray(arr, n);

    return 0;
}
