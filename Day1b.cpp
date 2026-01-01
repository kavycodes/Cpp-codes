#include <iostream>
using namespace std;

class PalindromeArray {
private:
    int arr[100];
    int n;

public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;

        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void checkPalindrome() {
        bool isPalindrome = true;

        for (int i = 0; i < n / 2; i++) {
            if (arr[i] != arr[n - i - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome)
            cout << "Array is a palindrome" << endl;
        else
            cout << "Array is not a palindrome" << endl;
    }
};

int main() {
    PalindromeArray obj;
    obj.input();
    obj.checkPalindrome();
    return 0;
}
