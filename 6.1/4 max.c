# include <stdio.h>
# include <conio.h>

void main() {
    int num1, num2, num3, num4;
    int min;

    printf("Enter four numbers separated by spaces: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    min = (num1 < num2) ? ((num1 < num3) ? ((num1 < num4) ? num1 : num4) : ((num3 < num4) ? num3 : num4))
                       : ((num2 < num3) ? ((num2 < num4) ? num2 : num4) : ((num3 < num4) ? num3 : num4));

    printf("Minimum number among  is: %d\n",  min);

    
}

