#include <iostream>
using namespace std;

class CountAndSay {
public:
    void generate(int n) {
        char result[5000] = "1";

        for (int i = 1; i < n; i++) {
            char temp[5000];
            int index = 0;

            for (int j = 0; result[j] != '\0'; ) {
                char ch = result[j];
                int count = 0;

                while (result[j] == ch) {
                    count++;
                    j++;
                }

                temp[index++] = count + '0';
                temp[index++] = ch;
            }

            temp[index] = '\0';

            int k = 0;
            while (temp[k] != '\0') {
                result[k] = temp[k];
                k++;
            }
            result[k] = '\0';
        }

        cout << result << endl;
    }
};

int main() {
    int n;
    cin >> n;

    CountAndSay c;
    c.generate(n);
    return 0;
}
