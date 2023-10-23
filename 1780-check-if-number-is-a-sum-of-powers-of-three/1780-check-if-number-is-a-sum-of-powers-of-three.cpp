class Solution {
public:
    bool checkPowersOfThree(int n) {
    unordered_map<int,int> temp;
    int i=0;
    while(n>0)
    {
        int num=1;
        i=0;
        while(num<=n)
        {
            num=num*3;
            i++;
        }
        if(temp[i]!=1)
        temp[i]=1;
        else
        return false;
        num=num/3;
        cout<<num<<" ";
        n=n-num;
    }
    if(n==0)
    return true;
    else
    return false;
    }
};