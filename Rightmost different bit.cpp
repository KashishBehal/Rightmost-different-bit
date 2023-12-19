class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        int a=1;
        bitset<32>c(m);
        bitset<32>d(n);
        for(int i=0;i<31;i++){
            if(c[i]^d[i]){
                return a;
               
            }
             a++;
        }
        return -1;
        
    }
};
