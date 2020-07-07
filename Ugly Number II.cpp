class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ans;
        ans.push_back(1);
        int i=0;
        int j=0;
        int k=0;
        while(ans.size()<n)
        {
            int temp1=ans[i]*2;
            int temp2=ans[j]*3;
            int temp3=ans[k]*5;
            int mn=min({temp1,temp2,temp3});
            ans.push_back(mn);
            if(mn==temp1) i++;
            if(mn==temp2) j++;
            if(mn==temp3)k++;
            
        }
         for(int x:ans)
         {
             cout<<x<<" " ;
             
         }
        return ans[n-1];
        
    }
};
