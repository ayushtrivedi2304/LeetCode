class Solution {
public:
int dSum(int n)
{
    int s=0;
    while(n>0)
    {
        int d=n%10;
        s+=d;
        n/=10;
    }
    return s;
}
int dProd(int n)
{
    int p=1;
    while(n>0)
    {
        int d=n%10;
        p*=d;
        n/=10;
    }
    return p;
}
    bool checkDivisibility(int n) {
        int a=dSum(n);
        int b=dProd(n);
        return n % (a + b) == 0;
    }
};
