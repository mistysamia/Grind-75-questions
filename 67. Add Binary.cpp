class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size() - 1, m = b.size() - 1, carry = 0;
        string ans;
        int mx = max(n, m);

        while (n != mx) 
        {
            a.insert(0,1,'0');
            n++;
        }

        while (m != mx) 
        {
            b.insert(0,1,'0');
            m++;
        }

        while (n >= 0 && m >= 0) {
            if (a[n] == '1' && b[m] == '1') 
            {
                if (carry == 1)
                    ans += '1';
                else
                    ans += '0';
                carry = 1;
            } 
            else if ((a[n] == '1' && b[m] == '0') || (a[n] == '0' && b[m] == '1')) 
            {
                if (carry == 0)
                    ans += '1';
                else
                    ans += '0';
            } 
            else
            {
                if (carry == 1)
                    ans += '1';
                else
                    ans += '0';

                carry = 0;
            }
            n--, m--;
        }

        if (carry == 1)
            ans += '1';

        reverse(ans.begin(), ans.end());
        return ans;
    }
};