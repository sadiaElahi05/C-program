#include<stdio.h>
int front = 0, end = 0;
int Queue[10000];
void insert(int value){
    Queue[end++] = value;
}
int delete(){
    int v;
    if(front<end){
      v = Queue[front++];
      printf("delete value is:%d\n",v);
    }
    else{
        printf("Queue is Empty!! No value deleted\n\n");
    }
}
int isEmpty(){
    return (front>=end)?1:0;
}
void print(){
    int i;
    for(i=front;i<end; i++){
        printf("%d ", Queue[i]);
    }
    printf("\n");
}
int main(){
    int choice, v;
    while(1){
        printf("\n\n1. insert\n");
        printf("2. Delete\n");
        printf("3. isEmpty\n");
        printf("4. Print\n");
        printf("5. Exit\n");
        scanf("%d", &choice);
        printf("\n\n");
        if(choice == 1){
            printf("Enter an int value to insert:");
            scanf("%d", &v);
            insert(v);
        }else if(choice == 2){
            delete();
        }else if(choice == 3){
            v = isEmpty();
            if(v == 1){
                printf("Queue is Empty!!\n");
            }else{
                printf("Queue is not Empty!!\n");
            }
        }else if(choice == 4){
            printf("Printing queue...\n");
            print();
        }else if(choice == 5){
            break;
        }else{
            printf("Wrong Choice!\n\n");
        }
        printf("\n\n");
    }
    return 0;
}

