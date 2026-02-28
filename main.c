#include <stdio.h>

int main() {
    int choice, num, p, t;
    float r, si, c, f;
    int i;

    while(1) {
        printf("\n=== C Toolkit ===\n");
        printf("1. Odd or Even\n");
        printf("2. Simple Interest\n");
        printf("3. Temperature Conversion\n");
        printf("4. Multiplication Table\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter number: ");
                scanf("%d", &num);
                if(num % 2 == 0)
                    printf("Even\n");
                else
                    printf("Odd\n");
                break;

            case 2:
                printf("Enter p t r: ");
                scanf("%d %d %f", &p, &t, &r);
                si = (p * t * r) / 100;
                printf("Simple Interest = %.2f\n", si);
                break;

            case 3:
                printf("Enter Celsius: ");
                scanf("%f", &c);
                f = (9.0/5.0)*c + 32;
                printf("Fahrenheit = %.2f\n", f);
                break;

            case 4:
                printf("Enter number: ");
                scanf("%d", &num);
                for(i=1; i<=10; i++)
                    printf("%d x %d = %d\n", num, i, num*i);
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
