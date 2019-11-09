#include<stdio.h>
#include<math.h>

int main()
{
  unsigned long int num, dupNum, sortNum = 0;
  int i, digitCounter;

  printf("Enter Non-Zero Positive Integer: ");
  scanf("%lu",&num);

  /* finding digits 1-9 in given number and
     constructing the sorted-digit number */
  for(i=9, digitCounter=0; i>0; i--)
  {
    dupNum = num;
    while(dupNum!=0){
      if(i == (dupNum%10)){
        digitCounter++;
        sortNum = sortNum + i*pow(10,digitCounter-1);
      }
      dupNum = dupNum/10;
    }
  }

  /* finding the digit 0 count in given number */
  digitCounter=0; dupNum = num;
  while(dupNum!=0){
    if((dupNum%10) == 0){
        digitCounter++;
    }
    dupNum = dupNum/10;
  }

  printf("Sorted Digit Number: ");
  /* generating all 0s in initial position of
     sorted-digit number using digitCounter */
  while(digitCounter>0){
    printf("0");
    digitCounter--;
  }
  /* presenting the rest sorted-sigits of the number */
  printf("%lu\n", sortNum);
  return 0;
}
