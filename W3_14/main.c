#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);

int main()
{
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;

    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int i, j, current_digit, current_length;
    for (i=0; i<rowSize; i++){
        current_digit = data[i][0];
        current_length = 1;
        for (j=1; j<colSize; j++){
            if(current_digit == data[i][j])
                current_length++;
            else{
                printf("%d ", current_digit);
                printf("%d ", current_length);
                current_digit = data[i][j];
                current_length = 1;
            }
        }
        printf("%d ", current_digit);
        printf("%d ", current_length);
        printf("\n");
    }

}
