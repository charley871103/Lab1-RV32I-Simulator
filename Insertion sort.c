#include <stdio.h>      //���J�ƧǪk(Insertion Sort)
void main(void) {
    int data[5]={2,3,7,4,1};
    int n=5;
	int i, j, temp;
	
    for (i = 1; i < n; i++) {    /* �� i > n ��ܤw�g���� n �Ӹ�ƪ��Ƨ� */
        temp = data[i];
        for (j = i - 1; j >= 0 && data[j] > temp; j--) {
            data[j+1] = data[j];
        }
        data[j+1] = temp;
    }
    printf("��ƱƧǫᬰ\n");
    for(i=0; i<n; i++) {
        printf("%d ",data[i]);
    }
    printf("\n");
}
