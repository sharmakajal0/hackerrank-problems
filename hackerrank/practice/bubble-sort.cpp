#include<iostream>

using namespace std;

void print_array(int *arr, int size);

void bubble_sort_inplace(int *arr, int n) {
    int min = 100000000, max = -100000000;
    for(int i=0; i<n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int count_size = max - min + 1;
    int *counts = new int[count_size];
    print_array(counts, count_size);

    for(int i=0; i<count_size; i++) {
        counts[i] = 0;
    }

    for(int i=0; i<n; i++) {
        counts[arr[i] - min]++;
    }
    print_array(counts, count_size);
    int counter = 0;
    for(int i=0; i<count_size; i++) {
        for(int j=0; j<counts[i]; j++) {
            arr[counter++] = i + min;
        }
    }
}

void print_array(int *arr, int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 1, 2, 1, 3, 2};
    int n = 7;

    print_array(arr, n);
    bubble_sort_inplace(arr, n);
    print_array(arr, n);
    return 0;
}