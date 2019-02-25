//
//  main.c
//  二分查找算法
//
//  Created by 陆敏 on 2019/2/25.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
typedef int ElementType;
ElementType arr[10] = {1,2,3,4,5,6,7,8,9,10};
int BinarySearch(ElementType *arr, ElementType k){
    int left,right,mid,NotFound = -1;
    left = 1;
    right = sizeof(arr)/sizeof(int);
    while (left <= right) {
        mid = (left + right)/2;
        if (k < arr[mid]) {
            right = mid -1;
        }else if (k > arr[mid]) {
            left = mid +1;
        }else return mid;
    }
    return NotFound;
}
int main(int argc, const char * argv[]) {
    int i = BinarySearch(arr, 3);
    printf("%d %d\n",i,arr[i]);
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
