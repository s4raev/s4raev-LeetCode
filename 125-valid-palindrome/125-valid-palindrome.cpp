class Solution {
public:
    bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;
    while(left < right) {
        while(isalnum(s[left]) == false || isalnum(s[right]) == false && left < right) {
            if (isalnum(s[left]) == false ) {left++;} 
            if (isalnum(s[right]) == false) {right--;}
            if (left - right > 0) {
                return true;
            }
        }
        if (s[left] - s[right] == 0 || tolower(s[left]) == tolower(s[right])) {
        left++;
        right--;
        } else {
            return false;
        }    
    }
    return true;    
}
};