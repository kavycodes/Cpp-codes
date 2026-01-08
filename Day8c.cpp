#include <iostream>
using namespace std;

class PairSum {
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

    void findPairs() {
        int target;
        cout << "Enter target sum: ";
        cin >> target;

        bool found = false;

        cout << "Pairs with sum " << target << ":" << endl;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target) {
                    cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                    found = true;
                }
            }
        }

        if (!found)
            cout << "No pairs found." << endl;
    }
};

int main() {
    PairSum obj;
    obj.input();
    obj.findPairs();
    return 0;
}
