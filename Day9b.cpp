#include <iostream>
using namespace std;

class MissingNumber {
private:
    int arr[100];
    int n;

public:
    void input() {
        cout << "Enter value of n: ";
        cin >> n;

        cout << "Enter " << n - 1 << " elements: ";
        for (int i = 0; i < n - 1; i++)
            cin >> arr[i];
    }

    void findMissing() {
        int totalSum = n * (n + 1) / 2;
        int arraySum = 0;

        for (int i = 0; i < n - 1; i++)
            arraySum += arr[i];

        int missing = totalSum - arraySum;

        cout << "Missing number is: " << missing << endl;
    }
};

int main() {
    MissingNumber obj;
    obj.input();
    obj.findMissing();
    return 0;
}
