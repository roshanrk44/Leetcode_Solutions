class Solution {
public:
     int maxArea(vector<int>& height) {
    int leftPointer = 0;
    int rightPointer = height.size() - 1;
    int maxi = 0;
    while (leftPointer < rightPointer) {
        int leftPointerHeight = height[leftPointer];
        int rightPointerHeight = height[rightPointer];
        int minHeight = min(leftPointerHeight, rightPointerHeight);
        int area = minHeight * (rightPointer - leftPointer);

        maxi = max(maxi, area);

        if (leftPointerHeight < rightPointerHeight)
            leftPointer++;
        else
            rightPointer--;
    }
    return maxi;
    }
};