#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f1, *f2;
    // student
    char student[10];
    char name[17];
    int r_no;
    int phy_marks;
    int math_marks;
    int IP_marks;
    printf("Enter the filename :- ", student);
    scanf("%s", &student);
    f1 = fopen(student, "w");
    printf("Input section\n");
    printf("NAME\tRoll no\tphysicsM\tmathmark\tipmark\n");
    for (int i = 0; i < 2; i++)
    {
        printf("%d no student \n",i);
        fscanf(stdin, "%s\t%d\t%d\t%d\t%d", &name, &r_no, &phy_marks, &math_marks, &IP_marks);
        fprintf(f1, "%s %d %d %d %d", name, r_no, phy_marks, math_marks, IP_marks);
        fprintf(f1,"\n");
    }
    fclose(f1);
    fprintf(stdout,"\n\n");
    f2=fopen(student,"r");
    printf("NAME\tRoll no\tphysicsM\tmathmark\tipmark\n");
    for(int j=0;j<2;j++){
        fscanf(f2, "%s\t%d\t%d\t%d\t%d", &name, &r_no, &phy_marks, &math_marks, &IP_marks);
        fprintf(stdout,"%s %d %d %d %d", name, r_no, phy_marks, math_marks, IP_marks);
        fprintf(stdout,"\n");
    }
    fclose(f2);



    return 0;
}