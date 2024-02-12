//Runtime=0ms, Memory=70.88mb
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int Right_Number = 0;
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {
            int Temp = Right_Number;
            if (arr[i] >= Right_Number) {
                Right_Number = arr[i];
            }
            if (i == n - 1) {
                arr[i] = -1;
            } else {
                arr[i] = Temp;
            }
        }
        return arr;
    }
};
