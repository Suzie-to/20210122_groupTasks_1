#include <stdio.h>
#include <stdlib.h>

int main(){
  float fYards;
  float fKms;
  unsigned char cChoice = 1;
  int count=0;
  float* array = calloc(1, sizeof(int));
  while (cChoice == 1){ 
    printf("\nEnter yards: ");
    fflush(stdin);
    if (scanf("%f", &fYards) == 0 ){
      printf("Error\n");
      continue;
    }
    array[count]=fYards;
    exp:
    printf("Enter KMs: ");
    fflush(stdin);
    if (scanf("%f", &fKms) == 0 ){
      printf("Error\n");
      goto exp;
    }
    array[count+1]=fKms;
    if (fYards >= 0 && fKms >= 0){
      count+=2;
      array = realloc(array, count);
      printf("\n------------------------------------------\n");
      printf("|  Yards  |  Meters || Kmeters |  Miles  |\n");
      for (int j = 0; j < count; j+=2){
        float fYardsToMeters = array[j] * 0.9144;
        float fKmToMiles = array[j+1] / 1.609344;
        printf("------------------------------------------\n");
        printf("| %7d | %7d || %7d | %7d |\n",
        (int)array[j], (int)(fYardsToMeters), (int)array[j+1], (int)(fKmToMiles));   
      }
      printf("------------------------------------------\n");
    }else{
      printf("\nPlease enter only positive numbers\n");
      if (fYards<0){
        continue;
      }
      printf("yards = %.2f\n",fYards);
      goto exp;
    }
    newcChoice:
    fflush(stdin);
    printf("\nTo continue press 1\nTo stop press 0\n");
    if (scanf("%d", &cChoice)==0||cChoice>1||cChoice<0 ){
      printf("Invalid input");
      goto newcChoice;
    }
 
  }
  free(array);
  return 0;
}