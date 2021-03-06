#include <stdio.h>
/*Напишете програма, която трябва да отпечатва две таблици една до друга (еквивалентно на таблица с 4 колони), 
едната запреобразуване от ярдове в метри, а другата за преобразуване от км в мили. Изходът трябва да използва 
стойности int, но можетеда използвате коефициенти за преобразуване с плаваща запетая 0,9144 (от ярдове до метри) и 1,609344 от миля до км */

/*add an exception for symbols*/
/*add invalid choice option*/

int main(){    
    float fYards = 0;  /*declaration only, initialisation comes with scanf */
    float fKms = 0;    
    unsigned char cChoice = 1; /*initialisation necessary for the while loop*/

    while (cChoice == 1)    {        
        printf("\nEnter yards: ");        
        scanf("%f", &fYards);
        printf("Enter KMs: ");        
        scanf("\n%f", &fKms);  
        if (fYards !=1 || fKms !=0){
            printf("Plese enter numbers only");
            break;
        }
        else if (fYards >= 0 && fKms >= 0)        {            
            float fYardsToMeters = fYards * 0.9144;            
            float fKmToMiles = fKms * 1.609344;  /*verify calculation */        
            printf("\n------------------------------------------\n");            
            printf("|  Yards  |  Meters || Kmeters |  Miles  |\n");            
            printf("------------------------------------------\n");            
            printf("| %7d | %7d || %7d | %7d |\n",                   
            (int)fYards, (int)(fYardsToMeters), (int)fKms, (int)(fKmToMiles));            
            printf("------------------------------------------\n");        
            }        else        {            
                printf("\nPlease enter only positive numbers\n");        }        
                printf("\nTo continue press 1\nTo stop press 0\n");        
                scanf("%d", &cChoice);    }
    return 0;}