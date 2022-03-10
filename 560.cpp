class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        int pre=0;
        mp[0]=1;
        //for(int i=0;i<nums.size();i++)
        for(auto &x : nums)
        {
            //pre += nums[i];
            pre += x;
            if(mp.find(pre-k)!=mp.end())
            {
                count += mp[pre-k];
            }
            mp[pre]++;
        }
        return count;
    }
};
/*
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int right=0;right<nums.size();++right)
        {
            int sum=0;
            for(int left=right;left>=0;--left)
            {
                sum += nums[left];
                if(sum==k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};*/
/*
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prenum;
        prenum.resize(nums.size()+1);
        for(int i =1; i<prenum.size();i++)
        {
            prenum[i]=prenum[i-1]+nums[i-1];
        }
        int count=0;
        for(int right=0;right<prenum.size();right++)
        {
            for(int left=right+1;left<prenum.size();left++)
            {
                if(prenum[left]-prenum[right]==k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};*/
