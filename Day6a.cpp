#include <iostream>
using namespace std;

class SortedRotated {
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

    void check() {
        int count = 0;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1])
                count++;
        }

        if (arr[n - 1] > arr[0])
            count++;

        if (count <= 1)
            cout << "Array is sorted and rotated" << endl;
        else
            cout << "Array is NOT sorted and rotated" << endl;
    }
};

int main() {
    SortedRotated obj;
    obj.input();
    obj.check();
    return 0;
}
