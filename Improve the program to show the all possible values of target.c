#include <stdio.h>
#include <stdlib.h>

void findPairs(int* nums, int numsSize, int target);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* nums = malloc(size * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target sum: ");
    int target;
    scanf("%d", &target);

    printf("All pairs of indices whose values add up to %d:\n", target);
    findPairs(nums, size, target);

    free(nums);

    return 0;
}

void findPairs(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j);
            }
        }
    }
}
