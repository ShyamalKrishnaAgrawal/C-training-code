#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int RETURN_SUCCSSS = 0;

struct Node {
    int id;
    char name[25];
    int price;
    struct Node* next;
};


struct Node* insert (struct Node* head){

    // struct Node** store_head = &head;
    int in_id, in_price;
    char in_name[25];

    // Ask user data to be inserted
    printf("\n Input id= ");
    scanf("%d",&in_id);
    printf("\n Input name= ");
    scanf("%s",&in_name);
    printf("\n Input price= ");
    scanf("%d",&in_price);

    // while(head != NULL){
    //     head=head->next;
    // }

    struct Node* item = NULL;
    item = (struct Node*)malloc(sizeof(struct Node));
    item->id = in_id;
    strcpy(item->name, in_name);
    item->price = in_price;
    item->next = head;

    return (item);
}


struct Node* update (struct Node* head){
    struct Node** store_head = &head;
    int in_id, in_price;
    char in_name[25];
    char up[10];

    printf("\n Input id to be updated= ");
    scanf("%d",&in_id);

    while(head != NULL){
        if(head->id == in_id){

            printf("Please provide name and price to update \n name= ");
            scanf("%s",&in_name);
            printf("price =");
            scanf("%d",&in_price);

            strcpy(head->name, in_name);
            head->price = in_price;
            break;
        }
        head=head->next;
    }

    return (*store_head);
}


struct Node* delete (struct Node* head){
    struct Node** store_head = &head;
    int in_id,check=0;

    printf("\n Input id to be deleted= ");
    scanf("%d",&in_id);
    
    while(head->next!=NULL){
        if(head->next->id==in_id){
            head->next=head->next->next;
            check=1;
            break;
        }
        head=head->next;
    }

    if(check==0){
        if(head->id == in_id){
            head->next=NULL;
        }
        else{
            printf("id not present")
        }
    }

    return (*store_head);
}


void search (struct Node* head){
    struct Node** store_head = &head;
    int check=0;
    char in_name[25];

    printf("\n Input name to be searched= ");
    scanf("%s",in_name);
    
    while(head != NULL){
        if(strcmp(head->name,in_name) == 0){
            printf("id= %d, name= %s, price= %d",head->id,head->name,head->price);
            check = 1;
        }
        head=head->next;
    }

    if(check==0){
        printf("not found %s \n",in_name);
    }
}

struct Node* print123 (struct Node* head){
    struct Node** store_head = &head;
    
    while(head!= NULL){
        printf("\n id= %d, name= %s, price= %d \n",head->id,head->name,head->price);
        head=head->next;
    }

    return (*store_head);
}

int main() {
    int i = 0;
    struct Node* item = NULL;
    int ask;
    char c;

    item = (struct Node*)malloc(sizeof(struct Node));
    
    // First value assigned default
    item->id = 1;
    strcpy(item->name, "enco");
    item->price = 10000;
    item->next = NULL;
    print123(item);
    // whether user want to insert more before moving further.
    // printf("Want to insert= ");
    // scanf(" %c", &c);

    // while(c=='y') {
    //     item= insert(item->next);
    //     scanf(" %c",&c);
    // }

    // Ask user for data.
    printf(" Want to insert then input : 1 \n Want to delete then input : 2 \n Want to update 3 \n Want to search 4 \n Want to save 5 \n input= ");
    scanf("%d",&ask);

    // Ask user for data untill he would like to give it.
    while(ask != 6) {
        
        if(ask == 1) {
            item = insert(item);
        }
        else if(ask == 2) {
            item = delete(item);
        }
        else if(ask == 3) {
            item = update(item);
        }
        else if(ask == 4) {
            search(item);
        }
        else if(ask == 5) {
            FILE* fpointer1=fopen("list of mob.txt","w");
            while(item != NULL){
                fprintf(fpointer1,"%d, %s, %d\n",item->id,item->name,item->price);
                item=item->next;
            }
            fclose(fpointer1);
            break;
        }
        else {
            printf("invalid");
        }

        // print complete list
        print123(item);
        
        // Ask user for data.
        printf(" Want to insert then input : 1 \n Want to delete then input : 2 \n Want to update 3 \n Want to search 4 \n Want to save 5 \n input= ");
        scanf("%d",&ask);
    } // End while

    // printf("%d,%s,%d",item->id,item->name,item->price);
    
    return(RETURN_SUCCSSS);
}

