
long long sumOfAllSubarraySum(vector<int>&nums){
    long long totalSum=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=nums[j];
            totalSum+=sum;
        }
    }
    return totalSum;
}
