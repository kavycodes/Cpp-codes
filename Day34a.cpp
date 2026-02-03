#include <iostream>
using namespace std;

class SmallestSubarray {
    int a[1000];
    int n, x;

public:
    void input() {
        cin >> n >> x;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void findLength() {
        int sum = 0;
        int minLen = n + 1;
        int start = 0;

        for (int end = 0; end < n; end++) {
            sum += a[end];

            while (sum > x) {
                int len = end - start + 1;
                if (len < minLen)
                    minLen = len;
                sum -= a[start];
                start++;
            }
        }

        if (minLen == n + 1)
            cout << 0;
        else
            cout << minLen;
    }
};

int main() {
    SmallestSubarray s;
    s.input();
    s.findLength();
    return 0;
}
