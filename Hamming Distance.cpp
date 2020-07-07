class Solution {
public:
    int hammingDistance(int x, int y) {
        int xr = x^y;
        int count=0;
        for(int i=0;i<32;i++)
        {
            count+= (xr>>i)&1;
            
        }
        return count;
        
        
    }
};
