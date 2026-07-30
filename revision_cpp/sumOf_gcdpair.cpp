#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> 

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> prefix_gcd(n);

    int maxi = *max_element(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        // prefix_gcd[i] =   gcd(nums[i], maxi);
        // prefix_gcd[i] = std::gcd(nums[i], maxi);
    }

    sort(prefix_gcd.begin(), prefix_gcd.end());

    for (int i = 0; i < n; i++) {
        cout << prefix_gcd[i] << " ";
    }

    return 0;
}