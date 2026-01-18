#include <iostream>
using namespace std;

class StringRotation {
    char a[1000], b[1000], temp[2000];

    int length(char s[]) {
        int len = 0;
        while (s[len] != '\0') len++;
        return len;
    }

    bool isSubstring(char text[], char pat[]) {
        int n = length(text);
        int m = length(pat);

        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && text[i + j] == pat[j])
                j++;
            if (j == m)
                return true;
        }
        return false;
    }

public:
    void input() {
        cin.getline(a, 1000);
        cin.getline(b, 1000);
    }

    void check() {
        int len1 = length(a);
        int len2 = length(b);

        if (len1 != len2) {
            cout << "False";
            return;
        }

        int i = 0;
        for (; i < len1; i++)
            temp[i] = a[i];
        for (int j = 0; j < len1; j++)
            temp[i++] = a[j];
        temp[i] = '\0';

        if (isSubstring(temp, b))
            cout << "True";
        else
            cout << "False";
    }
};

int main() {
    StringRotation s;
    s.input();
    s.check();
    return 0;
}
