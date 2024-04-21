class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        ans=[]
        maxi=-10000000
        for i in range(len(candies)):
            if maxi<candies[i]:
                maxi=candies[i]

        for i in range(len(candies)):
            if candies[i]+extraCandies >= maxi:
                ans.append(True)
            else:
                ans.append(False)
        
        return ans
