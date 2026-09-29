#include <stdio.h>
int main(){
    int age, category, day;
    int basePrice;
    float price;
    printf("Enter age =  ");
    scanf("%d",&age);
    while (age!=0){
        if (age>0){
            printf("\nSelect Movie Category:\n");
            printf("1. Regular (Rs. 500)\n");
            printf("2. 3D (Rs. 800)\n");
            printf("3. Premiere (Rs. 1200)\n");
            printf("Enter category: ");
            scanf("%d", &category);
            switch (category){
                case 1:
                    basePrice=500;
                    break;
                case 2:
                    basePrice=800;
                    break;
                case 3:
                    basePrice=1200;
                    break;
                default:
                    basePrice=0;
            }
            if (basePrice==0){
                printf("Invalid category!\n");
            }
            else{
                price=basePrice;
                if (age<13){
                    price=price*0.70;
                    printf("Child discount applied.\n");
                }
                else if (age>=60){
                    price=price*0.80;
                    printf("Senior discount applied.\n");
                }
                else{
                    printf("No age discount.\n");
                }
                printf("Enter day of month (1-31): ");
                scanf("%d",&day);
                if (day>=1&&day<=31){
                    if (day%5==0){
                        price=price-50;
                        printf("Bonus Day discount applied.\n");
                    }
                    if (price<100){
                        price=100;
                    }
                    printf("\n--- Ticket Receipt ---\n");
                    printf("Base Price: Rs. %d\n", basePrice);
                    printf("Final Price: Rs. %.2f\n", price);
                    printf("----------------------\n");
                }
                else{
                    printf("Invalid day!\n");
                }
            }
        }
        else{
            printf("Invalid age!\n");
        }
        printf("\nEnter age = ");
        scanf("%d", &age);
    }
    printf("Program ended.\n");
    return 0;
}


