#include <iostream>
using namespace std;

class Atoi {
    char s[1000];

public:
    void input() {
        cin.getline(s, 1000);
    }

    void convert() {
        int i = 0, sign = 1, num = 0;

        while (s[i] == ' ') i++;

        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        while (s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');
            i++;
        }

        cout << sign * num << endl;
    }
};

int main() {
    Atoi a;
    a.input();
    a.convert();
    return 0;
}
