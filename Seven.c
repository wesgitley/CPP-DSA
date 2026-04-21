#include <vector>
#include <cmath>

class Solution {
public:
    int solution(std::vector<int> &A) {
        int N = A.size();
        if (N == 0) return 0;

        int left = 0;
        int right = N - 1;
        int count = 0;

        while (left <= right) {
            // Skip duplicates from the left
            while (left < right && std::abs(A[left]) == std::abs(A[left + 1]))
                ++left;
            // Skip duplicates from the right
            while (left < right && std::abs(A[right]) == std::abs(A[right - 1]))
                --right;

            long long absLeft = std::llabs(A[left]);   // handle large negatives safely
            long long absRight = std::llabs(A[right]);

            if (absLeft == absRight) {
                ++left;
                --right;
            } else if (absLeft < absRight) {
                ++left;
            } else {
                --right;
            }
            ++count;
        }
        return count;
    }
};
