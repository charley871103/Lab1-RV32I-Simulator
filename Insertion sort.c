#include <stdio.h>      //插入排序法(Insertion Sort)
void main(void) {
    int data[5]={2,3,7,4,1};
    int n=5;
	int i, j, temp;
	
    for (i = 1; i < n; i++) {    /* 當 i > n 表示已經做完 n 個資料的排序 */
        temp = data[i];
        for (j = i - 1; j >= 0 && data[j] > temp; j--) {
            data[j+1] = data[j];
        }
        data[j+1] = temp;
    }
    printf("資料排序後為\n");
    for(i=0; i<n; i++) {
        printf("%d ",data[i]);
    }
    printf("\n");
}
