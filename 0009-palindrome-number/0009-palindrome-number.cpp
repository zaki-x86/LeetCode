class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        if (s.size() == 1)
            return true;
        if (s.size() == 2 && s[0] != s[1])
            return false;
        auto last_index = s.size() - 1;
        auto mid_index = s.size() % 2 == 0 ?
              (s.size() / 2) - 1
            : static_cast<int>(s.size() / 2);
        if (s.size() % 2 == 0 && s[mid_index] != s[mid_index + 1])
            return false;
        for (size_t i = 0; i < mid_index; ++i)
            if (s[i] != s[last_index - i])
                return false;
        return true;
    }
};