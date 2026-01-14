#include <iostream>
using namespace std;

class Anagram {
    char a[1000], b[1000];

public:
    void input() {
        cin.getline(a, 1000);
        cin.getline(b, 1000);
    }

    int length(char s[]) {
        int len = 0;
        while (s[len] != '\0') len++;
        return len;
    }

    void check() {
        int len1 = length(a);
        int len2 = length(b);

        if (len1 != len2) {
            cout << "Not Anagram";
            return;
        }

        int count1[256] = {0};
        int count2[256] = {0};

        for (int i = 0; i < len1; i++) {
            count1[(int)a[i]]++;
            count2[(int)b[i]]++;
        }

        for (int i = 0; i < 256; i++) {
            if (count1[i] != count2[i]) {
                cout << "Not Anagram";
                return;
            }
        }

        cout << "Anagram";
    }
};

int main() {
    Anagram obj;
    obj.input();
    obj.check();
    return 0;
}
