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
