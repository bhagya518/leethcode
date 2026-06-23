class Solution {
public:
    int maxArea(vector<int>& height) {

        int n=height.size();

        int i=0, j=n-1;
        int maxi=INT_MIN;
        int total=0;

        while(i<j){

            int h=min(height[i],height[j]);
            int w=j-i;

            total=h*w;
            maxi=max(maxi,total);

            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxi;
        
    }
};