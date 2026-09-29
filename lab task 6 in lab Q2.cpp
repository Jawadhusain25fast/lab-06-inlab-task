#include <stdio.h>
int main(){
    int value, choice;
    printf("Enter appliance value = ");
    scanf("%d", &value);
    while (value != -1){
        printf("\n1. Turn Water Heater ON");
        printf("\n2. Turn Air Conditioner OFF");
        printf("\n3. Toggle Main Lights");
        printf("\n4. Check Security Camera");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                value=value|2;
                printf("Water Heater is ON\n");
                break;
            case 2:
                value=value&~4;
                printf("Air Conditioner is OFF\n");
                break;
            case 3:
                value=value^1;
                printf("Main Lights toggled\n");
                break;
            case 4:
                if (value&8){
                printf("Security Camera is ON\n");
                }
                else{
                printf("Security Camera is OFF\n");
                }
                break;
            default:
                printf("Invalid choice!\n");
        }
        printf("New Appliance Value: %d\n", value);
        if ((value & 2) && (value & 4)){
        printf("Warning: Overload Risk!\n");
        }
        else{
        printf("No Overload Risk.\n");
        }
        printf("\nEnter appliance value (-1 to exit): ");
        scanf("%d", &value);
    }
    printf("Program ended.\n");
    return 0;
}