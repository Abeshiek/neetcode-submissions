class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int left = 0 ;
        int length = nums.size();
        
        for(int right = length - 1; right > 0; right--)
        {
           // cout<<"right: " << nums[right] << '\n';
            for(left = 0;left < right; left++)
            {
           //     cout<<"left: " << nums[left] << '\t';
                if(nums[left] == nums[right] )
                {
                    return true;
                }
            }
         //   cout <<'\n';
        }
        return false;
    }
};