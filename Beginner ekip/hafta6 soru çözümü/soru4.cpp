/*You are given a large integer represented as an integer array digits, where each digits[i] is the i.th digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0’s.
Increment the large integer by one and return the resulting array of digits.

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].


Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].


Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();  // digits'in uzunluğunu al
        for (int i = n - 1; i >= 0; i--) {  // sondan başa doğru dön
            if (digits[i] == 9) {  // eğer 9 ise
                digits[i] = 0;  // 0 yap
            } else {  // değilse
                digits[i]++;  // arttır
                return digits;  // digits'i döndür
            }
        }
        digits.insert(digits.begin(), 1);  // digits'in başına 1 ekle
        return digits;  // digits'i döndür
    }
};

int main() {
    Solution s;
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 3, 2, 1};
    vector<int> v3 = {9};

    vector<int> res1 = s.plusOne(v1);
    vector<int> res2 = s.plusOne(v2);
    vector<int> res3 = s.plusOne(v3);
    
    for (int i = 0; i < res1.size(); i++) {
        cout << res1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < res2.size(); i++) {
        cout << res2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < res3.size(); i++) {
        cout << res3[i] << " ";
    }
    cout << endl;

    return 0;
}