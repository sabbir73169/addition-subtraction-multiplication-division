#include <stdio.h>
void main()
{
    int a;
    printf("\nPress 1, Addition");
    printf("\nPress 2, substraction");
    printf("\nPress 3, multiplication");
    printf("\nPress 4,devide");
    printf("\nEnter your choice:");
    scanf("%d",&a);
        switch(a)
        {
        case 1:
            {
                int x,y,z;
                printf("Enter 2 Numbers:");
                scanf("%d%d",&x,&y);
                z=x+y;
                printf("Addition is:%d",z);
                break;
            }
        case 2:
            {
                int x,y,z;
                printf("Enter 2 Numbers:");
                scanf("%d%d",&x,&y);
                z=x-y;
                printf("Addition is:%d",z);
                break;
            }
        case 3:
            {
                int x,y,z;
                printf("Enter 2 Numbers:");
                scanf("%d%d",&x,&y);
                z=x*y;
                printf("Addition is:%d",z);
                break;
            }
        case 4:
            {
               int x,y,z;
               printf("Enter 2 numbers:");
               scanf("%d%d",&x,&y);
               z=x/y;
               printf("divided is:%d",z);
               break;
            }
        default:
            {
                printf("Input is Wrong");
            }
        }
getch();
}
