//15.	Insert an element in an array
#include <stdio.h>

insert(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }
}
int main()
{
    int a[1000], i, n, index, new1;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter index should be less than %d:", n);
    scanf("%d", &index);
    if (index < n)
    {

        printf("Enter new element : ");
        scanf("%d", &new1);

        printf("before  insertion :");
        insert(a, n);
        a[index] = new1;

        printf("\nafter   insertion :");
        insert(a, n);
    }
    return 0;
}
