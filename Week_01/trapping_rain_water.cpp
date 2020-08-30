
class Solution {
public:
    int trap(vector<int>& height) {
        //双指针
        int leftindex=0;
        int rightindex= height.size()-1;
        
        int rightmax=0;
        int leftmax=0;
        
        int are=0;

        //夹逼
        while(leftindex < rightindex){
            if(height[leftindex]>height[rightindex]){
                if(height[rightindex]>rightmax){
                    rightmax=height[rightindex];
                }else{
                    are+=rightmax-height[rightindex];
                }
                rightindex--;
            }else{
                 if(height[leftindex]>leftmax){
                     leftmax=height[leftindex];
                 }else{
                     are+=leftmax-height[leftindex];
                 }
                 leftindex++;
            }
        }
        return are;
    }
};