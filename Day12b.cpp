#include <iostream>
using namespace std;

int maxProduct(int nums[], int n) {
    int maxProd = nums[0];
    int minProd = nums[0];
    int ans = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < 0) {
            int temp = maxProd;
            maxProd = minProd;
            minProd = temp;
        }

        if (nums[i] > maxProd * nums[i])
            maxProd = nums[i];
        else
            maxProd = maxProd * nums[i];

        if (nums[i] < minProd * nums[i])
            minProd = nums[i];
        else
            minProd = minProd * nums[i];

        if (maxProd > ans)
            ans = maxProd;
    }

    return ans;
}

int main() {
    int nums[] = {2, 3, -2, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << maxProduct(nums, n) << endl;
    return 0;
}
