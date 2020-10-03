//Question link : https://leetcode.com/problems/sort-array-by-parity-ii/

//Question : 922. Sort Array By Parity II

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> a, b, c;
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i] % 2 == 0)
            {
                a.push_back(A[i]);
            }
            else
            {
                b.push_back(A[i]);
            }
            
        }
        
        int j = 0, k = 0;
        for(int i = 0; i < A.size(); i++)
        {
            if(i % 2 == 0)
            {
                c.push_back(a[j]);
                j++;
            }
            else
            {
                c.push_back(b[k]);
                k++;
            }
        }
        return c;
    }
};
