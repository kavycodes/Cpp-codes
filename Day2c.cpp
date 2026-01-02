#include <iostream>
using namespace std;

class MergeSort {
private:
    int arr[100];
    int temp[100];
    int n;

    void merge(int low, int mid, int high) {
        int i = low, j = mid + 1, k = low;

        while (i <= mid && j <= high) {
            if (arr[i] <= arr[j])
                temp[k++] = arr[i++];
            else
                temp[k++] = arr[j++];
        }

        while (i <= mid)
            temp[k++] = arr[i++];

        while (j <= high)
            temp[k++] = arr[j++];

        for (int x = low; x <= high; x++)
            arr[x] = temp[x];
    }

    void mergeSort(int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            mergeSort(low, mid);
            mergeSort(mid + 1, high);
            merge(low, mid, high);
        }
    }

public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void sort() {
        mergeSort(0, n - 1);
    }

    void display() {
        cout << "Array after Merge Sort: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    MergeSort obj;
    obj.input();
    obj.sort();
    obj.display();
    return 0;
}
