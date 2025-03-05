class Solution {
public:
    long long coloredCells(int n) {
        long long u1=1;
        long long u=0;
        for (int i=0;i<n;i++)
        {
            u=u1+(i)*4;
            u1=u;
        }
        return u;
    }
};