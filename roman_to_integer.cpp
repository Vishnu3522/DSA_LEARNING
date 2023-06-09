#include <iostream>
#include <string>
#include <map>

class Solution {
public:
    int romanToInt(std::string s) {
        std::map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int n = s.length();
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && mp[s[i]] < mp[s[i + 1]]) {
                sum -= mp[s[i]];
            } else {
                sum += mp[s[i]];
            }
        }
        
        return sum;
    }
};

int main() {
    Solution solution;
    std::string romanNumeral = "MCMXCIV";
    int decimalEquivalent = solution.romanToInt(romanNumeral);
    std::cout << "The decimal equivalent of " << romanNumeral << " is: " << decimalEquivalent << std::endl;
    
    return 0;
}
