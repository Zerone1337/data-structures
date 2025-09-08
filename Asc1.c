#include<stdio.h>

void A(int array[],int size);

void printarray(int ar[],int size);
int main(){
    int AR[]={3,7,4,8,11,10,30};
    int size=sizeof(AR)/sizeof(AR[0]);
    
    printf("sorted array:");
    A(AR,size);
        return 0;
}
//A() function to ascending the arr array[]
void A(int array[],int size){
    int item,i,j,z;
    if(size%2==0) {z=size/2;}
    else {z=(size-1)/2;}
    for(int i=0;i<z-1;i++){
        for(int j=0;j<z-i-1;j++){
            if(array[j]>array[j+1]){
                item=array[j];
                array[j]=array[j+1];
                array[j+1]=item;
            }
        }
    }
        for(int i=0;i<z;i++){
            for(int j=size-1;j>z;j--){
                if(array[j]>array[j-1]){
                    item=array[j];
                    array[j]=array[j-1];
                    array[j-1]=item;
                
                }}
    
  
 

} printarray(array,size);} 

void printarray(int ar[],int size){
    for(int i=0;i<size;i++){
        printf("\n%d",ar[i]);
    }
}