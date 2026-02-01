#include <iostream>
using namespace std;

class BalancedParentheses {
    char s[1000];
    char st[1000];
    int top;

public:
    void input() {
        cin.getline(s, 1000);
        top = -1;
    }

    void check() {
        for (int i = 0; s[i] != '\0'; i++) {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[') {
                st[++top] = ch;
            } else if (ch == ')' || ch == '}' || ch == ']') {
                if (top == -1) {
                    cout << "False";
                    return;
                }

                char last = st[top--];

                if ((ch == ')' && last != '(') ||
                    (ch == '}' && last != '{') ||
                    (ch == ']' && last != '[')) {
                    cout << "False";
                    return;
                }
            }
        }

        if (top == -1)
            cout << "True";
        else
            cout << "False";
    }
};

int main() {
    BalancedParentheses b;
    b.input();
    b.check();
    return 0;
}
