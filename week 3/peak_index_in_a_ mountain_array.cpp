class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int left=0,right=A.size()-1;

        int mid;

        while(left<=right)
        {
             mid=(left+right)/2;
            if(A[mid]>A[mid-1] && A[mid]>A[mid+1])
            {
                break;
            }
            else if(A[mid-1]<=A[mid] && A[mid]<=A[mid+1])
            {
                left=mid;
            }
            else
            {
                right=mid;
            }

        }
        return mid;
    }
};
