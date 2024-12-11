#include<stdio.h>
#include<stdlib.h>
int max;
int *q;
int rear=-1;
int front=0;
void insert(){
    int n;
    if(rear==max-1){
        printf("over flow\n");
        
    }
    else{
        printf("enter number to be insert");
        scanf("%d",&n);
        rear++;
        q[rear]=n;
    }
}
int delete(){
    int d;
    if(front>rear){
        printf("under flow");
        
    }
    else{
        d=q[front];
        return d;
    }
}
void display(){
    int i;
    if(front>rear){
        printf("under flow\n");
    }
    else{
        for(i=front;i>=rear;i--){
            printf("queue elments are %d\n",q[i]);
        }
    }
}
int main(){
    int choice,s;
    printf("enter max size   ");
    scanf("%d",&max);
    q=(int *)malloc(sizeof(int));
    while(1){
        printf("1.insert\n2.delete\n3.display\n");
         printf("enter choice  ");
        scanf("%d",&choice);
    switch(choice) {
        case 1:insert();
        break;
        case 2:s=delete();
        printf("deleted elment is %d\n",s);
        break;
        case 3:display();
        break;
        default:printf("invalid choice");
    }
    }
    return 0;
    
}
