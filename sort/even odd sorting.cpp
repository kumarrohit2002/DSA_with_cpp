#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void InsertionSort(int arr[], int n) {
    int eve_idx_Arr[n / 2];
    int odd_idx_Arr[n / 2];
    int eve_idx = 0, odd_idx = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            eve_idx_Arr[eve_idx++] = arr[i];
        } else {
            odd_idx_Arr[odd_idx++] = arr[i];
        }
    }
    insertionSort(even_idx_Arr, n / 2);
    insertionSort(odd_idx_Arr, n / 2);
    eve_idx = 0;
    odd_idx = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] = eve_idx_Arr[n/2 - 1 - eve_idx++];
        } else {
            arr[i] = odd_idx_Arr[oddIndex++];
        }
    }
}
int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    InsertionSort(arr, N);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

