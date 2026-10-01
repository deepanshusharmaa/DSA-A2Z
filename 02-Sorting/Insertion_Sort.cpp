#include <iostream>
using namespace std;

void insertion_sort(int n, int arr[]) {

    for (int i = 1; i < n; i++) {

        int j = i;

        while (j > 0 && arr[j] < arr[j - 1]) {

            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}

int main() {

    int n;

    cout << "Enter no of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter number: ";
        cin >> arr[i];
    }

    cout << "Array before sorting:\n";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    insertion_sort(n, arr);

    cout << "\nArray after sorting\n";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
