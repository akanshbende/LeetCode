//
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int size= nums.size();
        int i=0;
        int j=size-1;
        int cnt=0;
            sort(nums.begin(),nums.end());

        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==k){
                cnt++;
                i++;
                j--;
            }
            else if(sum<k){
                i++;
            }else if(sum >k){
                j--;
            }
        }
        return cnt;
       
    }
};
// 112234
//[4,4,1,3,1,3,2,2,5,5,1,5,2,1,2,3,5,4]
//2

//[2,2,2,3,1,1,4,1]
//4