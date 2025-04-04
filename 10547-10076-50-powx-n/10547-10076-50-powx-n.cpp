class Solution {
public:
    double myPow(double x, int n) {
        long long m = n;
        double ans = 1;
        if (m < 0) {
            x = 1 / x;
            m = -m;
        }
        while (m > 0) {
            if (m % 2 == 1) {
                ans *= x;
                m--;
            } else {
                m /= 2;
                x = x * x;
            }
        }

        return ans;
    }
};
