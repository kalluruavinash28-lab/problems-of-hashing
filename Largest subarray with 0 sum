class Solution {
  public:
    int maxLength(vector<int>& arr) {
       unordered_map<int,int> m;
       int n=arr.size();
       int sum=0;
       int maxi=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if (sum == 0) {
    maxi = i + 1;
}

            if(m.count(sum)){
                maxi=max(maxi,i-m[sum]);
            }else{
            m[sum]=i;
        }
            
        }
        return maxi;
    }
};
