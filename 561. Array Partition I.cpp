class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> hashtable(20001,0);
        for(int i=0;i<nums.size();i++)
        {
            hashtable[num[i]+10000]++;
        }
        int sum=0, count=0, i=0;
        while(count<nums.size())
        {
            if(hashtable[i]==0){i++;}
            else {
                    if (count%2==0)
                    sum+=i-10000;
                    hashtable[i]--;
                    count++;
                 }
        }
        
        return sum;
        
        
    }
};