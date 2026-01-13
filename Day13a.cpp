#include <iostream>
using namespace std;

class RemoveDuplicates {
    char s[1000];

public:
    void input() {
        cin.getline(s, 1000);
    }

    void process() {
        int len = 0;
        while (s[len] != '\0') len++;

        int index = 0;

        for (int i = 0; i < len; i++) {
            bool found = false;
            for (int j = 0; j < index; j++) {
                if (s[i] == s[j]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                s[index] = s[i];
                index++;
            }
        }

        s[index] = '\0';
    }

    void display() {
        cout << s << endl;
    }
};

int main() {
    RemoveDuplicates r;
    r.input();
    r.process();
    r.display();
    return 0;
}
