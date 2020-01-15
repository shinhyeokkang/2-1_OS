#include <stdio.h>

void transpose(int a[][8]);
void print_matrix(int a[][8], int row_size, int col_size);

int main(void)
{

	int a[8][8] = {{1,2,3,4,5,6,7,8},{11,22,33,44,55,66,77,88},{12,23,34,45,56,67,78,89},{1,2,3,4,5,6,7,8},{11,22,33,44,55,66,77,88},{12,23,34,45,56,67,78,89},{1,2,3,4,5,6,7,8},{11,22,33,44,55,66,77,88}};
        printf("Original matrix\n");
	print_matrix(a,8,8);
	printf("\n");

	printf("Transposed matrix\n");
        transpose(a);
        return 0;	
	}
void transpose(int a[][8]){
	int temp[8][8];
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			temp[j][i]=a[i][j];
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			a[i][j]=temp[i][j];
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++)
			printf("%2d ", a[i][j]);
		printf("\n");
	}
}
void print_matrix(int a[][8],int row_size, int col_size){
	int i,j;
	for(i=0;i< row_size; i++)
	{
		for(j=0;j< col_size; j++)
			printf("%2d ", a[i][j]);
		printf("\n");
	}

}
