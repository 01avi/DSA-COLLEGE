
#include <stdio.h>
int one(){
    int a[10];
    int n,l,b,index,ans;
    printf("enter size of array");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("enter base address");
    scanf("%d",&l);
    printf("enter size per byte");
      scanf("%d",&b);
      printf("enter index");
        scanf("%d",&index);
        ans= l+(b*index);
           printf("ans is %d",ans);
}
int two(){
    /*Address of A[I][J] = B + W * ((I – LR) * N + (J – LC))  

I = Row Subset of an element whose address to be found,
J = Column Subset of an element whose address to be found,
B = Base address,
W = Storage size of one element store in an array(in byte),
LR = Lower Limit of row/start row index of the matrix(If not given assume it as zero),
LC = Lower Limit of column/start column index of the matrix(If not given assume it as zero),
N = Number of column given in the matrix.*/
int I,J,B,W,LR,LC,N,RESULT ;
printf("enter value of I,J,B,W,LR,LC,N");
scanf("%d %d %d %d %d %d %d",&I,&J,&B,&W,&LR,&LC,&N);
RESULT= B + (W * ((I - LR) * N + (J - LC)));
printf("answer is %d",RESULT);
   
}
int main() {
    int n;
    printf("enter the operation for 1d enter 1 and 2 for 2d  ");
    scanf("%d",&n);
    switch(n){
        case 1:
        one();
        break;
          case 2:
        two();
        break;
        default:
        printf("wrong choice");
    }
    return 0;
}