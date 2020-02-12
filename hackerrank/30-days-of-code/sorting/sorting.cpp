#include <bits/stdc++.h>

using namespace std;

// void swap(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int numSwaps = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-1;j++){
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                // swap(a[j], a[j + 1]);
                numSwaps++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[-1] << endl;
    return 0;
}

