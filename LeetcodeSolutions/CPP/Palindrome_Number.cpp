class Solution {
public:
    bool isPalindrome(int x) {
    long long int num, n, d, r = 0;
    num = x;
    //cin >> num;

    n = num;
    do
    {
        d = num % 10;
        r = (r * 10) + d;
        num = num / 10;
    } while (num != 0);

    cout << r << endl;

    if(n == r && n >= 0)
    {
        //cout << "Palindrome Number" << endl;
        return true;
    }

    else
        // cout << "Not a Palindrome Number" << endl;
        return false;
    }
};

