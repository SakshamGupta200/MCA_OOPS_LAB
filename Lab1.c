#include <stdio.h>

// int main() {
//   int a[10],i;
//   printf("Enter 10 number : ");
   
//   for(i=1; i<=10; i++){
//       printf("Enter %d element :",i );
//       scanf("%d",&a[i]);
//   }
//   for(i=1; i<=10; i++){
//       printf(" i element is :");
//       printf("%d\n",a[i]);
//   }

//     return 0;
// }

// int main(){
//     int i,a[10];
//     printf("Enter 10 numbers :");
    
//   for(i=1; i<=10; i++){
//       printf("Enter %d element :",i );
//       scanf("%d",&a[i]);
//   }
//   for(i=10;i>0;i--){
//       printf("%d element is %d\n", i,a[i]);
//   }
//   return 0;
// }

int main(){
    
        int i,a[10];
    printf("Enter 10 numbers :");
    
  for(i=1; i<=10; i++){
      printf("Enter %d element :",i );
      scanf("%d",&a[i]);
  }
  printf("*************** Even Numbers ********************");
    for(i=1; i<=10; i++){
        if(a[i] % 2 == 0){
            
            printf("%d element is %d\n", i,a[i]);
        }
    }
    return 0 ;
    
    
}


int main(){
    
        int i,a[10],max;
    printf("Enter 10 numbers :");
    
  for(i=0; i<10; i++){
      printf("Enter %d element :",i );
      scanf("%d",&a[i]);
  }
  max = a[0];
  printf("*************** Max Number ********************");
    for(i=2; i<10; i++){
        if(max < a[i]){
            max = a[i];
        }
        
    }
    printf("Max = %d", max);
    return 0 ;
    
    
}


/* Online C Compiler and Editor */
#include <stdio.h>

int main(){
    
        int i,a[10],max,j;
    printf("Enter 10 numbers :");
    
  for(i=0; i<10; i++){
      printf("Enter %d element :",i );
      scanf("%d",&a[i]);
  }
printf("Enter the elemrnt index to delete :", j);
scanf("%d",&j);

for(i = 0; i<10; i++){
 if(a[i] == a[j]){
     for (i = j-1; i<10; i++){
         a[i] = a[i+1];
     }
 }    
}
for (i=0;i<9;i++){
    printf(a[i]);
}
    return 0 ;
    
    
}
