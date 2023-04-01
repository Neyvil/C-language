#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    int rno;
    char name[100];
}st;

int main(){
    st s1,s2,s3,s4;
  st stu[4]={s1,s2,s3,s4};
  st arr[4];
  for(int i=0;i<4;i++){

    scanf("%s",&stu[i].name);
    scanf("%d",&stu[i].rno);
  }

for(int i=0;i<=3;i++){
    arr[i]=stu[i];
}

for(int i=0;i<=3;i++){
    printf("%s\n",stu[i].name);
    printf("%d\n",stu[i].rno);

}

return 0;
}