#include<stdio.h>
int main(){
    int array[10],x;
    int y,temp,num;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    for(x=0; x<num; x++){
        printf("array[%d]=\t",x);
        scanf("%d",&array[x]);
    }
    
    for(x=0; x<num-1; x++){  
        for(y=x+1;y<num; y++){
            if(array[x]>array[y]){
                temp=array[x];
                array[x]=array[y];
                array[y]=temp;
            }
        }
    }
printf("Selection Sort \n");
for(x=0; x<num; x++){
        printf("array[%d]=\t%d\n",x,array[x]);
    }
    
    return 0;
}
