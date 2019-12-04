#include<iostream>
#include<vector>
#include<array>

int minimum_distances(int array[100000], int n);

int minimum_element(int* distances, int distances_length);

int minimum_element(int* distances, int distances_length)
{
    int min = distances[0];
    for (int i = 0; i < distances_length; i++)
    {
        if (min > distances[i])
        {
            min = distances[i];
        }
    }
    std :: cout << min;
    return 0;
}

int minimum_distances(int array[100000], int n)
{    
    std :: vector <int> distances; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i] == array[j] && i !=j)
            {
                int distance = j - i;
                if (distance < 0)
                {
                    distance = distance * (-1);
                }
                distances.push_back(distance);
            }
        }
    }

    int distances_length = distances.size();
    if (distances.size() > 0)
    {
        int minimum_value = minimum_element(distances, distances_length);
        std :: cout << minimum_value;
    }
    else
    {
        std :: cout << "-1";
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int test_array[100000];
    int n;
    std :: cin >> n;
    for (int i = 0; i < n; i++)
    {
        std :: cin >> test_array[i];
    }

    minimum_distances(test_array, n);
    
    return 0;
}
