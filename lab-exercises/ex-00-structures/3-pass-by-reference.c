/// Debug the errors from given program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
  char name;
  int effort;
  float marks;
};
typedef struct student S;

void update_marks(struct student s1)
{
    if(s1->effort == 1)
    {
        if(s1->marks <=40)
            s1->marks =  s1->marks + s1->marks * 0.25;
    }
}

int main()
{
    S s1;
    strcpy(s1.name, "Vishwa");

    s1.marks = 30;
    s1.effort = 1;

    update_marks(&s1);

    printf("Student Details:\n");
    printf("Name: %s\nMarks: %f\n", s1.name, s1.marks);

    return 0;
}
