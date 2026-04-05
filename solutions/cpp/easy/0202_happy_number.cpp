#include <unordered_set>
#include <iostream>
class Solution {
public:
    bool isHappy(int n) {
        std::unordered_set<int> seen_nums;

        while (not seen_nums.count(n)) {
            seen_nums.insert(n);
            int number = n;
            n = 0;

            while (number > 0) {
                int digit = number % 10;
                number /= 10;
                n += digit * digit;
            }

        }
        return n == 1;
    }
};

int main() {
    Solution sol;
    std::cout << sol.isHappy(2) << "\n";
    return 0;
}