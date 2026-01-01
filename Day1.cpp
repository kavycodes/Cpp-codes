#include <iostream>
using namespace std;

class ArrayOps {
private:
    int arr[100];
    int n;

public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;

        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void removeDuplicates() {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    for (int k = j; k < n - 1; k++) {
                        arr[k] = arr[k + 1];
                    }
                    n--;
                    j--;
                }
            }
        }
    }

    void display() {
        cout << "Array after removing duplicates: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayOps obj;
    obj.input();
    obj.removeDuplicates();
    obj.display();
    return 0;
}
