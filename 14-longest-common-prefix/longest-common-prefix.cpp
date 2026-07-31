class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs.back();
        string result = "";
        int i;
        for (i = 0; i < first.size(); i++) {
            if ((i < last.size()) && (first[i] == last[i])) {
                result += first[i];
            } else {
                break;
            }
        }
        return result;
    }
};