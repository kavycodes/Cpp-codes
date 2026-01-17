#include <iostream>
using namespace std;

class LongestSubstring {
    char s[1000];

    int length() {
        int len = 0;
        while (s[len] != '\0') len++;
        return len;
    }

public:
    void input() {
        cin.getline(s, 1000);
    }

    void findLength() {
        int n = length();
        int lastIndex[256];

        for (int i = 0; i < 256; i++)
            lastIndex[i] = -1;

        int maxLen = 0;
        int start = 0;

        for (int i = 0; i < n; i++) {
            if (lastIndex[(int)s[i]] >= start)
                start = lastIndex[(int)s[i]] + 1;

            lastIndex[(int)s[i]] = i;

            int currLen = i - start + 1;
            if (currLen > maxLen)
                maxLen = currLen;
        }

        cout << maxLen << endl;
    }
};

int main() {
    LongestSubstring l;
    l.input();
    l.findLength();
    return 0;
}
