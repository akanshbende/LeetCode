// https://leetcode.com/problems/plus-one/

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size() - 1;
        for (int i = n; i >= 0; --i)
        {
            if (digits[i] != 9)
            {
                digits[i]++;
                break;
            }
            else
            {
                digits[i] = 0;
            }
        }
        if (digits[0] == 0)
        {
            vector<int> v(digits.size() + 1);
            v[0] = 1;
            return v;
        }

        return digits;
    }
};

/*
 if(i==n){
        digits[i]++;
      }
      if(digits[i]==10){
          digits[i]==0;
          if(i!=0){
              digits[i]++;
          }
          else{
            digits.push_back(0);
            digits[i] = 1;
            }
      }
*/