class Solution {
public:
    bool canAliceWin(int n) {
        int rem = 10;
        bool b = true;
        while (true) {
            if (n < rem)
                return !b;
            n -= rem;
            rem -= 1;
            b = !b;
        }
    }
};
