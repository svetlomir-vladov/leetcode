#include <iostream>

class Solution {
public:
    bool isHappy(int n) {
        while (n > 2) {
            int number = n;
            n = 0;

            while (number > 0) {
                int digit = number % 10;
                number /= 10;
                n += digit * digit;
            }

        }
        return (n == 1) ? true : false;
    }
};

int main() {
    Solution sol;
    std::cout << sol.isHappy(3) << "\n";
    return 0;
}