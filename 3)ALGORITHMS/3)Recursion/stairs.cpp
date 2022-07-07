//1 jump or 2 jump -->how many ways to reach the top

int countDistinctWayToClimbStair(long long nStairs)
{
    //  Write your code here.
    //base case
    if(nStairs < 0)
        return 0;
    
    if(nStairs == 0)
        return 1;
    
    //R.C
    int ans = countDistinctWayToClimbStair(nStairs-1) 
        + countDistinctWayToClimbStair(nStairs-2);
    
    return ans;
}