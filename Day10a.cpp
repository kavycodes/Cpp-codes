#include <iostream>
using namespace std;

class FindDuplicate {
private:
    int arr[100];
    int n;

public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;

        cout << "Enter " << n << " elements (1 to " << n - 1 << "): ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void findDuplicate() {
        int xorAll = 0;

        for (int i = 0; i < n; i++)
            xorAll ^= arr[i];

        for (int i = 1; i <= n - 1; i++)
            xorAll ^= i;

        cout << "Duplicate number is: " << xorAll << endl;
    }
};

int main() {
    FindDuplicate obj;
    obj.input();
    obj.findDuplicate();
    return 0;
}
