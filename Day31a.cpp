#include <iostream>
using namespace std;

class FirstNonRepeating {
    char s[1000];

public:
    void input() {
        cin.getline(s, 1000);
    }

    void findChar() {
        int freq[256] = {0};

        for (int i = 0; s[i] != '\0'; i++)
            freq[(int)s[i]]++;

        for (int i = 0; s[i] != '\0'; i++) {
            if (freq[(int)s[i]] == 1) {
                cout << s[i];
                return;
            }
        }

        cout << -1;
    }
};

int main() {
    FirstNonRepeating f;
    f.input();
    f.findChar();
    return 0;
}
