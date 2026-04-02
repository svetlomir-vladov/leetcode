#include <string>

class Solution {
public:
    int reverseBits(int n) {
        std::string result;

        for (int i = 0; i < 32; ++i) {
            result += std::to_string(n % 2);
            n /= 2;
        }

        return std::stoull(result, nullptr, 2);
    }
};
