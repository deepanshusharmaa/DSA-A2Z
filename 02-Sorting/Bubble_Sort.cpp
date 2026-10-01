#include <iostream>
using namespace std;

void bubble_sort(int n, int arr[]) {

    for (int i = n - 1; i >= 1; i--) {

        int Swapped = 0;

        for (int j = 0; j < i; j++) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                Swapped = 1;
            }
        }

        if (Swapped == 0)
            break;
    }

    cout << "\nArray after sorting\n";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
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

    bubble_sort(n, arr);

    return 0;
}
