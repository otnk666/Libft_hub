#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {
    // 正常なメモリ割り当てのテスト
    int *ptr1 = calloc(5, sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed: %s\n", strerror(errno));
    } else {
        printf("Memory allocated successfully\n");
        
        // 初期化の確認
        for (int i = 0; i < 5; i++) {
            if (ptr1[i] != 0) {
                printf("Memory not initialized to zero\n");
                break;
            }
        }
        
        // メモリリークの確認
        free(ptr1);
        printf("Memory freed successfully\n");
    }
    
    // メモリ割り当て失敗のテスト
    int *ptr2 = calloc(-1, sizeof(int)); // 負の値を渡す
    if (ptr2 == NULL) {
        printf("Memory allocation failed (negative size): %s\n", strerror(errno));
    } else {
        free(ptr2);
    }
    
    // サイズゼロのメモリ割り当てのテスト
    int *ptr3 = calloc(0, sizeof(int));
    if (ptr3 == NULL) {
        printf("Memory allocation failed (size zero): %s\n", strerror(errno));
    } else {
        printf("Memory allocated successfully (size zero)\n");
        free(ptr3);
    }
    
    // 複数回のメモリ割り当てのテスト
    int *ptr4 = calloc(10, sizeof(int));
    int *ptr5 = calloc(20, sizeof(int));
    if (ptr4 == NULL || ptr5 == NULL) {
        printf("Multiple memory allocations failed\n");
        if (ptr4 != NULL) {
            printf("First allocation failed: %s\n", strerror(errno));
            free(ptr4);
        }
        if (ptr5 != NULL) {
            printf("Second allocation failed: %s\n", strerror(errno));
            free(ptr5);
        }
    } else {
        printf("Multiple memory allocations successful\n");
        free(ptr4);
        free(ptr5);
    }
    
    return 0;
}