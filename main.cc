/*---///
Nikita Orlov|2017|ASCIIRECTANGLE|C|orlovcs
*///---

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void widthiterator(int width, char c) {
  assert(c>=33 && c<=126 && c !=32); //asserts correct ascii values
  assert(width>=1); //asserts positive length
  int counter=0;
  while(counter!=width){
     printf("%c",c);
     counter++;
      
  }
}


void heightiterator(int width, int height, char c) {
  assert(c>=33 && c<=126 && c !=32); //asserts correct ascii values
  assert(width>=1 && height>=1); //asserts positive area
  int counter=0;
  while (counter!=height){
      widthiterator(width, c);
      printf("\n");
      counter++;
  }
}

int main(void) {
    int width = 1;
    int height = 1;
    char c;
    
    printf("Enter width \n");
    scanf(" %d", &width);
    while (width < 0){
            printf("Negative width try again \n");
            scanf(" %d", &width);
    }
    printf("Width is: %d \n", width);
    
    printf("Enter height \n");
    scanf(" %d", &height);
    while (height < 0){
            printf("Negative height try again \n");
            scanf(" %d", &height);
    }
    printf("Height is: %d \n", height);
    
    printf("Enter char \n");
    scanf(" %c", &c);
    printf("Char is: %c \n", c);
    
    printf("Drawing: \n");
    
    heightiterator(width, height, c);
	
	return 0;
}

