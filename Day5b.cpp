#include <iostream>
using namespace std;

class KadaneAlgorithm {
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

    void findMaxSubarraySum() {
        int maxSum = arr[0];
        int currentSum = arr[0];

        for (int i = 1; i < n; i++) {
            currentSum = max(arr[i], currentSum + arr[i]);
            maxSum = max(maxSum, currentSum);
        }

        cout << "Maximum Subarray Sum: " << maxSum << endl;
    }
};

int main() {
    KadaneAlgorithm obj;
    obj.input();
    obj.findMaxSubarraySum();
    return 0;
}
