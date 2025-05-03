#include <stdio.h>
int findMaxConsecutiveOnes (int *nums, int numsSize) {
    int cur, max=0;
    for (int  i =0; i<numsSize; i++) {
        if (*(nums+i)==1) {
            cur+=1;
        }
        else {
            if (cur>max) {
                max = cur;
            }
            else {
                continue;
            }
            cur=0;
        }
    }
    return max;
}
int main() {
    int nums[100];
    int numsSize=6;
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int x = findMaxConsecutiveOnes(nums, numsSize);
    printf("%d\n", x);
}