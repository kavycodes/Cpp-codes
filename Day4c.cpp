#include <iostream>
using namespace std;

class LinearSearch {
private:
    int arr[100];
    int n;

public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void search() {
        int key;
        cout << "Enter element to search: ";
        cin >> key;

        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                cout << "Element found at index " << i << endl;
                return;
            }
        }
        cout << "Element not found" << endl;
    }
};

int main() {
    LinearSearch obj;
    obj.input();
    obj.search();
    return 0;
}
