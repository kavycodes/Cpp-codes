#include <iostream>
using namespace std;

class CyclicRotate {
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

    void rotateByOne() {
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--)
            arr[i] = arr[i - 1];

        arr[0] = last;
    }

    void display() {
        cout << "Array after cyclic rotation by one: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    CyclicRotate obj;
    obj.input();
    obj.rotateByOne();
    obj.display();
    return 0;
}
