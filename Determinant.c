#include<stdio.h>
int main()
{
    printf("Enter a 3 row 3 col :\n");
    int a11,a12,a13,a21,a22,a23,a31,a32,a33;
    int result,a,b,c;
    int b1,b2,b3,b4,b5,b6;
    int c11,c12,c13,c21,c22,c23,c31,c32,c33;

    scanf("%d%d%d%d%d%d%d%d%d",&a11,&a12,&a13,&a21,&a22,&a23,&a31,&a32,&a33);
    b1=(a22*a33);
    b2=(-a23*a32);
    b3=(a21*a33);
    b4=(-a23*a31);
    b5=(a21*a32);
    b6=(-a22*a31);
    if(b1<0){
       b1=b1;
    }
    else{
     b1=+b1;
    }


        if(b2<0){
       b2=b2;
    }
    else{
     b2=+b2;
    }

        if(b3<0){
       b3=b3;
    }
    else{
     b3=+b3;
    }

        if(b4<0){
       b4=b4;
    }
    else{
     b4=+b4;
    }
        if(b5<0){
       b5=b5;
    }
    else{
     b5=+b5;
    }

        if(b6<0){
       b6=b6;
    }
    else{
     b6=+b6;
    }


   result = (a11*((a22*a33)-(a23*a32))) - (a12*((a21*a33)-(a23*a31))) + (a13*((a21*a32)-(a22*a31)));
    if(result!= 0){
   printf("\n\n= %d(%d %d) - %d(%d %d) +%d(%d %d)\n",a11,b1,b2,a12,b3,b4,a13,b5,b6);
   printf("Determinant is = %d\n\n\n",result);

   c11 = ((a22*a33)-(a23*a32));
   int x[18];
   x[0] = (a22*a33);
   x[1] = (-a23*a32);
   printf("\n\n\nCalculation a11 :\n");
   printf("     | %d\t%d|\n",a22,a23);
   printf("     | %d\t%d|\n",a32,a33);
   printf("a11 => (%d %d) = %d\n\n\n",x[0],x[1],c11);

   c12 = ((a21*a33)-(a23*a31));
    x[2] = (a21*a33);
    x[3] = (a23*a31);
   printf("\n\n\nCalculation a12 :\n");
   printf("     | %d\t%d|\n",a21,a23);
   printf("     | %d\t%d|\n",a31,a33);
   printf("a12 => (%d %d) = %d\n\n\n",x[2],x[3],c12);
   c13 = ((a21*a32)-(a22*a31));
    x[4] = (a21*a32);
    x[5] = (a22*a31);
   printf("\n\n\nCalculation a13 :\n");
   printf("     | %d\t%d|\n",a21,a22);
   printf("     | %d\t%d|\n",a31,a32);
   printf("a13 => (%d %d) = %d\n\n\n",x[4],x[5],c13);

   c21 = ((a12*a33)-(a13*a32));
    x[6] = (a12*a33);
    x[7] = (a13*a32);
   printf("\n\n\nCalculation a21 :\n");
   printf("     | %d\t%d|\n",a12,a13);
   printf("     | %d\t%d|\n",a32,a33);
   printf("a21 => (%d %d) = %d\n\n\n",x[6],x[7],c21);


   c22 = ((a11*a33)-(a13*a31));
    x[8] = (a11*a33);
    x[9] = (a13*a31);
   printf("\n\n\nCalculation a22 :\n");
   printf("     | %d\t%d|\n",a11,a13);
   printf("     | %d\t%d|\n",a31,a33);
   printf("a22 => (%d %d) = %d\n\n\n",x[8],x[9],c22);


   c23 = ((a11*a32)-(a12*a31));
    x[10] = (a11*a32);
    x[11] = (a12*a31);
   printf("\n\n\nCalculation a23 :\n");
   printf("     | %d\t%d|\n",a11,a12);
   printf("     | %d\t%d|\n",a31,a32);
   printf("a23 => (%d %d) = %d\n\n\n",x[10],x[11],c23);


   c31 = ((a12*a23)-(a13*a22));
    x[12] = (a12*a23);
    x[13] = (a13*a22);
   printf("\n\n\nCalculation a31 :\n");
   printf("     | %d\t%d|\n",a12,a13);
   printf("     | %d\t%d|\n",a22,a23);
   printf("a31 => (%d %d) = %d\n\n\n",x[12],x[13],c31);


   c32 = ((a11*a23)-(a13*a21));
    x[14] = (a11*a23);
    x[15] = (a13*a21);
   printf("\n\n\nCalculation a32 :\n");
   printf("     | %d\t%d|\n",a11,a13);
   printf("     | %d\t%d|\n",a21,a23);
   printf("a32 => (%d %d) = %d\n\n\n",x[14],x[15],c32);


   c33 = ((a11*a22)-(a12*a21));
    x[16] = (a11*a22);
    x[17] = (a12*a21);
   printf("\n\n\nCalculation a33 :\n");
   printf("     | %d\t%d|\n",a11,a12);
   printf("     | %d\t%d|\n",a21,a22);
   printf("a33 => (%d %d) = %d\n\n\n",x[16],x[17],c33);

printf("\n-------------------------------------------------------------------------\n");

   printf("                  | %d\t %d\t%d |\n",c11,-c12,c13);
   printf("A Co-factor       | %d\t %d\t%d |\n",-c21,c22,-c23);
   printf("                  | %d\t %d\t%d |\n",c31,-c32,c33);
printf("\n-------------------------------------------------------------------------\n");
    printf("                  | %d\t %d\t%d |\n",c11,-c21,c31);
    printf("A inverse-1 = 1/%d| %d\t %d\t%d |\n",result,-c12,c22,-c32);
    printf("                  | %d\t %d\t%d |\n",c13,-c23,c33);
    }else{
    printf("|A| = %d = 0 so, i can't solve the co-factor\n",result);
    }

    printf("\n\n\n\n\n\t\t\tCreated By Kamrul");
}

