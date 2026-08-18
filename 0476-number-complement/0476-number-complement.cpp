class Solution {
public:
    int findComplement(int num) {
        if (num == 1) {
            return 0;
        }
        int count = 0, temp = num;

        while (temp != 0) {
            temp /= 2;
            count++;
        }

        int arr[count], i = 0;
        while (num != 0) {
            arr[count - i - 1] = num % 2;
            num /= 2;
            i++;
        }

        for (int i = 0; i < count; i++) {
            if (arr[i] == 1) {
                arr[i] = 0;
            } else {
                arr[i] = 1;
            }
        }

        int ans = 0;
        for (int i = 0; i < count; i++) {
            ans += arr[count - 1 - i] * pow(2, i);
        }

        return ans;
    }
};