#include <iostream>
using namespace std;

class RadixSort {
private:
    int arr[100];
    int n;

    int getMax() {
        int mx = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > mx)
                mx = arr[i];
        return mx;
    }

    void countSort(int exp) {
        int output[100];
        int count[10] = {0};

        for (int i = 0; i < n; i++)
            count[(arr[i] / exp) % 10]++;

        for (int i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for (int i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        for (int i = 0; i < n; i++)
            arr[i] = output[i];
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
        int m = getMax();
        for (int exp = 1; m / exp > 0; exp *= 10)
            countSort(exp);
    }

    void display() {
        cout << "Array after Radix Sort: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    RadixSort obj;
    obj.input();
    obj.sort();
    obj.display();
    return 0;
}
