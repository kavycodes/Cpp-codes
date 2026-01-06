#include <iostream>
using namespace std;

class LeadersArray {
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

    void findLeaders() {
        int maxFromRight = arr[n - 1];
        cout << "Leaders in the array: " << maxFromRight << " ";

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxFromRight) {
                maxFromRight = arr[i];
                cout << maxFromRight << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    LeadersArray obj;
    obj.input();
    obj.findLeaders();
    return 0;
}
