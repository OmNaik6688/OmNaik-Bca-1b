#include <stdio.h>

void findDangerZones(int grid[10][10], int r, int c)
{
    int i, j;
    int found = 0;

    printf("\nDanger zone locations:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(grid[i][j] == 1)
            {
                printf("Danger at Row %d Column %d\n", i, j);
                found = 1;
            }
        }
    }

    if(found == 0)
    {
        printf("No danger zones found\n");
    }
}

int main()
{
    int matrix[10][10];
    int rows, cols;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter the matrix values (0 = Safe, 1 = Danger):\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    findDangerZones(matrix, rows, cols);

    return 0;
}