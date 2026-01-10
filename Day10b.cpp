#include <iostream>
using namespace std;

class ArrayIntersection {
private:
    int arr1[100], arr2[100];
    int n1, n2;

public:
    void input() {
        cout << "Enter size of first array: ";
        cin >> n1;
        cout << "Enter " << n1 << " sorted elements: ";
        for (int i = 0; i < n1; i++)
            cin >> arr1[i];

        cout << "Enter size of second array: ";
        cin >> n2;
        cout << "Enter " << n2 << " sorted elements: ";
        for (int i = 0; i < n2; i++)
            cin >> arr2[i];
    }

    void findIntersection() {
        int i = 0, j = 0;
        bool found = false;

        cout << "Intersection elements: ";

        while (i < n1 && j < n2) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                found = true;
                i++;
                j++;
            }
            else if (arr1[i] < arr2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        if (!found)
            cout << "No common elements";

        cout << endl;
    }
};

int main() {
    ArrayIntersection obj;
    obj.input();
    obj.findIntersection();
    return 0;
}
