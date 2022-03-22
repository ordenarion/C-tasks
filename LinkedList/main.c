#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//asdasdas
typedef struct Node{
    char item[100];
    struct Node *next;
}node;
node *head = NULL, *id = NULL;


void begin();
void add();
void delete();
void show();
void clear();
void find();


int main() {
    char enter[100];
    while (1) {
        printf("\n");
        printf("----------------There is some commands of List----------------\n");
        printf("1. Create List\n");
        printf("2. Add a new element to List\n");
        printf("3. Delete a last element of List\n");
        printf("4. Show all elements of List\n");
        printf("5. Clear List\n");
        printf("6. Find the element in List\n");
        printf("7. Exit\n");
        printf("--------------------------------------------------------------\n");
        printf("Enter the number of the command:");




        while (fgets(enter,100,stdin)==NULL && enter[0] != '\n');
        printf("--------------------------------------------------------------\n");
            if (strcmp(enter, "7\n") == 0) {
                printf("Goodbye\n");
                printf("--------------------------------------------------------------\n");
                exit(0);

            }
            else if (strcmp(enter, "1\n") == 0) {
                begin();
                continue;
            } else if (strcmp(enter, "2\n") == 0) {
                add();
                continue;
            } else if (strcmp(enter, "3\n") == 0) {
                delete();
                continue;
            } else if (strcmp(enter, "4\n") == 0) {
                show();
                continue;
            } else if (strcmp(enter, "5\n") == 0) {
                clear();
                continue;
            } else if (strcmp(enter, "6\n") == 0) {
                find();
                continue;
            } else {
                printf("Incorrect input. Try again");
                continue;
            }


            printf("Hello, World!\n");
            begin();
            find();
            show();
            clear();
            show();
        exit(0);
    }
    return 0;
}

void begin(){
    node *tmp;
    tmp = (node*)calloc(14, sizeof (node*));
    char value[100];
    if (tmp == NULL){
        printf("OVERFLOW!");
        return;
    }
    if (head == NULL){
        printf("Enter an element you want to be the first:");
        while (fgets(value,100,stdin)==NULL && value[0] != '\n') printf("\nEnter a correct string");
        strncpy(tmp->item,value,100);
        printf("List is created. Element is added.\n");
        printf("--------------------------------------------------------------\n");
    }
    else{
        printf("List has already created.\n");
        printf("Use another command.\n");
        printf("--------------------------------------------------------------\n");
    }
    tmp->next = NULL;
    head = tmp;
    id = head;
}

void add(){
    node *tmp;
    char value[100];
    tmp = (node*)calloc(14, sizeof (node*));
    if (tmp == NULL){
        printf("--------------------------------------------------------------\n");
        printf("OVERFLOW!\n");
        printf("--------------------------------------------------------------\n");
        return;
    }
    if (head == NULL){
        printf("List is empty.\nUse another command\n");
        printf("--------------------------------------------------------------\n");
        return;
    }
    printf("Enter an element you want to add:");
    while (fgets(value,100,stdin)==NULL && value[0] != '\n') printf("\nEnter a correct string");
    strncpy(tmp->item,value,100);
    tmp->next = NULL;
    id->next = tmp;
    id = tmp;
    printf("Element is added.\n");
    printf("--------------------------------------------------------------\n");
}

void delete(){
    node *tmp;
    tmp = head;
    if (head == NULL){
        printf("List is empty.");
        printf("--------------------------------------------------------------\n");
        return;
    }
    printf("Last element is deleted\n");
    printf("--------------------------------------------------------------\n");
    if (head->next == NULL){
        free(head);
        head = NULL;
        id = NULL;
        return;
    }
    while(tmp) {
        node *next;
        next = tmp->next;
        if (next == id){
            free(next);
            next = NULL;
            tmp->next = NULL;
            id = tmp;
            return;
        }
        tmp = next;
    }
}

void show(){
    if (head==NULL){
        printf("List is empty\n");
        printf("--------------------------------------------------------------\n");
        return;
    }
    node *tmp;
    tmp = head;
    printf("-------------------------Current List-------------------------\n");
    while(tmp){
        node *next;
        next = tmp->next;
        tmp->item[strlen(tmp->item)-1] = '\0';
        printf("%s",tmp->item);
        if (next != NULL){
            printf(" -> ");
        }
        tmp = next;
    }
    printf("\n--------------------------------------------------------------\n");
}

void clear(){
    node *tmp,*next;
    tmp = head->next;
    if (head==NULL){
        printf("List is empty");
        printf("\n--------------------------------------------------------------\n");
        return;
    }
    while (tmp){
        next = tmp->next;
        free(tmp);
        tmp -> next = NULL;
        tmp = next;
    }

    head -> next = NULL;
    free(head);
    head = NULL;

    printf("Now List is empty");
    printf("\n--------------------------------------------------------------\n");
}

void find(){
    node *tmp;
    tmp = head;
    char value[100];
    int res = 1;
    if (head==NULL){
        printf("List is empty");
        printf("\n--------------------------------------------------------------\n");
        return;
    }
    while (fgets(value,100,stdin)==NULL && value[0] != '\n') printf("\nEnter a correct string");
//    value[strlen(tmp->item)-1] = '\0';
    while (tmp != id){
        res++;
        if (strcmp(tmp->item,value) == 0){
            printf("Position of the element: %d",res);
            printf("\n--------------------------------------------------------------\n");
            return;
        }
        tmp = tmp -> next;
    }
    if ((strcmp(id->item,value) == 0)){
        printf("i = %d",res);
        return;
    }
    printf("Element is not found");
    printf("\n--------------------------------------------------------------\n");
}
