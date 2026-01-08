#include <iostream>
using namespace std;

class RearrangeArray {
private:
    int arr[100];
    int temp[100];
    int n;

public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;

        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void rearrange() {
        int pos[100], neg[100];
        int p = 0, q = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0)
                pos[p++] = arr[i];
            else
                neg[q++] = arr[i];
        }

        int i = 0, j = 0, k = 0;

        while (i < p && j < q) {
            temp[k++] = pos[i++];
            temp[k++] = neg[j++];
        }

        while (i < p)
            temp[k++] = pos[i++];

        while (j < q)
            temp[k++] = neg[j++];

        for (int x = 0; x < n; x++)
            arr[x] = temp[x];
    }

    void display() {
        cout << "Array after rearranging: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    RearrangeArray obj;
    obj.input();
    obj.rearrange();
    obj.display();
    return 0;
}
