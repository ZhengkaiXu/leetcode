//
// Created by ZhengkaiXu on 2024/4/9.
//
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        if (x < 10) {
            return true;
        }
        if (x % 10 == 0) {
            return false;
        }
        // 首先计算x是几位数字
        int i = 1;
        int y = x;

        while (y / 10 > 0) {
            i++;
            y = y / 10;
        }

        std::string str = std::to_string(x);
        for(int j = 0; j < i;j++) {
            if (str[j] == str[i -1 - j]) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }
};