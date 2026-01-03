#include <iostream>
using namespace std;

class CountingSort {
private:
    int arr[100];
    int output[100];
    int count[100];
    int n;

public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void sort() {
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max)
                max = arr[i];
        }

        for (int i = 0; i <= max; i++)
            count[i] = 0;

        for (int i = 0; i < n; i++)
            count[arr[i]]++;

        for (int i = 1; i <= max; i++)
            count[i] += count[i - 1];

        for (int i = n - 1; i >= 0; i--) {
            output[count[arr[i]] - 1] = arr[i];
            count[arr[i]]--;
        }

        for (int i = 0; i < n; i++)
            arr[i] = output[i];
    }

    void display() {
        cout << "Array after Counting Sort: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    CountingSort obj;
    obj.input();
    obj.sort();
    obj.display();
    return 0;
}
