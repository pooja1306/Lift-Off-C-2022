#include <stdio.h>

int main() {
     // Entering name
  char name[20];
    printf("ENTER YOUR NAME:");
    fgets(name,20,stdin);
    printf("NAME:%s\n",name);
    // Entering registration number
    char regdno[20];
    printf("ENTER YOUR REGISTRATION NUMBER:");
    fgets(regdno,20,stdin);
    printf("REGISTRATION NO:%s\n",regdno);
    // Entering branch
    char branch[30];
    printf("ENTER YOUR BRANCH:");
    fgets(branch,30,stdin);
    printf("Branch:%s\n",branch);
    // Entering hobbies
    char hobbies[30];
    printf("ENTER YOUR HOBBIES:");
    fgets(hobbies,30,stdin);
    printf("HOBBIES:%s\n",hobbies);
    return 0;
}