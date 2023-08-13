// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        unordered_map<char, int> m;
        int n = s.size();
        int maxLength = 0;
        int left = 0;
        for (int i = 0; i < n; ++i)
        {
            if (m.find(s[i]) != m.end())
            {
                left = max(left, m[s[i]]++);
            }
            m[s[i]] = i;

            maxLength = max(maxLength, i - left);
        }
        return maxLength;
    }
};