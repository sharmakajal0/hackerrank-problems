#include<iostream>

int minimum_distance(int arr[100000], int n);

int minimum_distance(int arr[100000], int n)
{
    int distance;
    int minimum_distance;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j] && i != j)
            {
                distance = abs(j - i);
                minimum_distance = distance;
                if (distance < minimum_distance)
                {
                    minimum_distance = distance;
                }
            }
        }   
    }
    return minimum_distance;
}

int main()
{
    int test_array[100000];
    int n;
    std :: cin >> n;
    for (int i = 0; i < n; i++)
    {
        std :: cin >> test_array[i];
    }
    
    std :: cout << minimum_distance(test_array, n) << std :: endl;

    return 0;
}
