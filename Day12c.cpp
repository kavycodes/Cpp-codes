#include <iostream>
using namespace std;

class ReverseString {
    char s[1000];

public:
    void input() {
        cin.getline(s, 1000);
    }

    void reverse() {
        int len = 0;
        while (s[len] != '\0') len++;

        int i = 0, j = len - 1;
        while (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }

    void display() {
        cout << s << endl;
    }
};

int main() {
    ReverseString r;
    r.input();
    r.reverse();
    r.display();
    return 0;
}
