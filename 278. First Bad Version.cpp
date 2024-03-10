// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int left = 0, right = n;

        while(left<=right)
        {
            int mid = (left+right)/2;
            bool bad = isBadVersion(mid);

            if(bad)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return left;
    }
};