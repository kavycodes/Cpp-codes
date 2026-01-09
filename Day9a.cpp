#include <iostream>
using namespace std;

class SubarraySum {
private:
    int arr[100];
    int n;

public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;

        cout << "Enter " << n << " elements (non-negative): ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void findSubarray() {
        int target;
        cout << "Enter target sum: ";
        cin >> target;

        int start = 0, currentSum = 0;

        for (int end = 0; end < n; end++) {
            currentSum += arr[end];

            while (currentSum > target && start <= end) {
                currentSum -= arr[start];
                start++;
            }

            if (currentSum == target) {
                cout << "Subarray found from index "
                     << start << " to " << end << endl;
                return;
            }
        }

        cout << "No subarray found with given sum." << endl;
    }
};

int main() {
    SubarraySum obj;
    obj.input();
    obj.findSubarray();
    return 0;
}
