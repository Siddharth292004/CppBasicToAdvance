#include<stdio.h>
#define max 100
void main(){
    int a[100],s,i,f,t;
    float sum=0.0,mean,median;
    printf("ENTER THE SIZE OF ARRAY :");
    scanf("%d",&s);
    for(i=0;i<s;i++){
        printf("enter value : ");
        scanf("%d",&a[i]); 
    }
    for(i=0;i<s;i++){
        sum=sum+a[i];
    }
    mean=sum/2;
    for(i=0;i<s-1;i++){
        for(f=i+1;f<s;f++){
            if(a[i]>a[f]){
                t=a[i];
                a[i]=a[f];
                a[f]=t;

            }
        }
    }
    if(s%2==0){
        median=
    }
}