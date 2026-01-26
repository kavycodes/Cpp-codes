#include <iostream>
using namespace std;

class MaxRectangle {
    int a[10][10];
    int r, c;

    int maxHistogram(int h[]) {
        int st[20];
        int top = -1;
        int maxArea = 0;
        int i = 0;

        while (i < c) {
            if (top == -1 || h[st[top]] <= h[i]) {
                st[++top] = i++;
            } else {
                int tp = st[top--];
                int area = h[tp] * (top == -1 ? i : i - st[top] - 1);
                if (area > maxArea)
                    maxArea = area;
            }
        }

        while (top != -1) {
            int tp = st[top--];
            int area = h[tp] * (top == -1 ? i : i - st[top] - 1);
            if (area > maxArea)
                maxArea = area;
        }

        return maxArea;
    }

public:
    void input() {
        cin >> r >> c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
    }

    void findMaxRectangle() {
        int h[10];
        for (int j = 0; j < c; j++)
            h[j] = 0;

        int result = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == 0)
                    h[j] = 0;
                else
                    h[j] += 1;
            }

            int area = maxHistogram(h);
            if (area > result)
                result = area;
        }

        cout << result;
    }
};

int main() {
    MaxRectangle m;
    m.input();
    m.findMaxRectangle();
    return 0;
}

