class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size();
        int left=0,right=n-1;
        while(left<right)
        {
            if(A[left]%2==1 && A[right]%2==0)
            {
                swap(A[left],A[right]);
            }
            else if(A[left]%2==1)
            {
                right--;
            }
            else if(A[right]%2==0)
            {
                left++;
            }
            else
            {
                left++;
                right--;
            }
        }
        return A;
    }
};
