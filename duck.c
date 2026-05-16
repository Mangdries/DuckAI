#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
  while(true) {
    printf(">");
    char a[3];
    if(fgets(a, sizeof a, stdin) != NULL) {
      if(strchr(a, '\n') == NULL) {
	      int ch;
	      while((ch = getchar()) != '\n' && ch != EOF);
      }
    }
    fflush(stdin);
    printf("You're right\n");
  }
}
