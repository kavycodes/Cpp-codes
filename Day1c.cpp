#include <iostream>
using namespace std;

class QuickSort {
private:
    int arr[100];
    int n;

    int partition(int low, int high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }

    void quickSort(int low, int high) {
        if (low < high) {
            int pi = partition(low, high);
            quickSort(low, pi - 1);
            quickSort(pi + 1, high);
        }
    }

public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;

        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void sort() {
        quickSort(0, n - 1);
    }

    void display() {
        cout << "Array after QuickSort: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    QuickSort obj;
    obj.input();
    obj.sort();
    obj.display();
    return 0;
}
