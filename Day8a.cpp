#include <iostream>
using namespace std;

class CountOccurrence {
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

    void countElement() {
        int key, count = 0;

        cout << "Enter element to count: ";
        cin >> key;

        for (int i = 0; i < n; i++) {
            if (arr[i] == key)
                count++;
        }

        cout << "Number of occurrences of " << key << " = " << count << endl;
    }
};

int main() {
    CountOccurrence obj;
    obj.input();
    obj.countElement();
    return 0;
}
