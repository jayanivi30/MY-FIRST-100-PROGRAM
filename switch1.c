#include <stdio.h>

int main() {
  int choice;
  printf("RA2211042010055");
  printf("Enter choice : ");
  scanf("%d",&choice);
  switch(choice){
      case 1 :
      printf("One");
      break;
      case 2:
      printf("Two");
      break;
      case 3:
      printf("Three");
      break;
      default:
      printf("invalid");
  }

    return 0;
}
