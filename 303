class NumArray {
public:
    vector<int>prenum;
    NumArray(vector<int>& nums) {
        prenum.resize(nums.size()+1);
        for(int i = 1; i < prenum.size(); i++)
        {
           // prenum[0] = 0;
            prenum[i] = prenum[i-1] + nums[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        return prenum[right+1] - prenum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
