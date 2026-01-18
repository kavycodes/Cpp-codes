#include <iostream>
using namespace std;

class GroupAnagrams {
    char words[10][100];
    char key[10][100];
    int n;

    void sortString(char s[]) {
        int len = 0;
        while (s[len] != '\0') len++;

        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (s[i] > s[j]) {
                    char t = s[i];
                    s[i] = s[j];
                    s[j] = t;
                }
            }
        }
    }

    int isPrinted(int idx, bool printed[]) {
        return printed[idx];
    }

public:
    void input() {
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++) {
            cin.getline(words[i], 100);
            int j = 0;
            while (words[i][j] != '\0') {
                key[i][j] = words[i][j];
                j++;
            }
            key[i][j] = '\0';
            sortString(key[i]);
        }
    }

    void group() {
        bool printed[10] = {false};

        for (int i = 0; i < n; i++) {
            if (printed[i]) continue;

            cout << words[i] << " ";
            printed[i] = true;

            for (int j = i + 1; j < n; j++) {
                int k = 0;
                while (key[i][k] != '\0' && key[j][k] != '\0' && key[i][k] == key[j][k])
                    k++;

                if (key[i][k] == '\0' && key[j][k] == '\0') {
                    cout << words[j] << " ";
                    printed[j] = true;
                }
            }
            cout << endl;
        }
    }
};

int main() {
    GroupAnagrams g;
    g.input();
    g.group();
    return 0;
}
