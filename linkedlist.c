#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;

    struct node *next;
};

struct node *head=NULL,*id = NULL;

void begin();
void add();
void delete_el();
void display_list();
void clear();
void find();
void exit();


int main()
{
    int flag = 0,num;
    while (flag == 0){
        puts("--------------------------------------------");
        puts("\n\nThere are some commands of LinkedList:");
        puts("--------------------------------------------");
        puts("1.Create a first element of LinkedList");
        puts("2.Add element in the end of LinkedList");
        puts("3.Delete element from the end of LinkedList");
        puts("4.Show all elements of LinkedList");
        puts("5.Clear LinkedList");
        puts("6.Find element of LinkedList");
        puts("7.Exit");
        puts("--------------------------------------------");
        puts("\nChoose a command: ");
        scanf("%d",&num);
        puts("--------------------------------------------");
        if (num == 1){
            begin();
            continue;
        }
        if (num == 2){
            add();
            continue;
        }
        if (num == 4){
            display_list();
            puts("");
            continue;
        }
        if (num == 3){
            delete_el();
            continue;
        }
        if (num==7){
            break;
        }
        if (num == 5){
            clear();
            continue;
        }
        if (num == 6){
            find();
            continue;
        }


    }
     return 0;
}




void begin()
{
    struct node *a;
    int value;
    a = (struct node *) malloc(sizeof(struct node *));
    if(a == NULL)
    {
        puts("\nOVERFLOW");
        return;
    }
    else
    {
        puts("Enter the item\n");
        scanf("%d",&value);
        a->item = value;
        a->next = head;
        head = a;
        printf("Inserted\n");
    }


}

void display_list()
{
    struct node *a;
    a = head;
    if(a == NULL)
    {
        puts("Empty list");
        return;
    }
    else
    {
        puts("All items of list:");
        printf("start -> ");
        while (a!=NULL)
        {
            printf("%d -> ",a->item);
            a = a -> next;
        }
        puts("end");
    }
}
void delete_el(){
    struct node *a,*b;
    if(head == NULL)
    {
        printf("\nEmpty list");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        printf("\nDeleted: %d\n",head->item);
        free(head);

    }

    else
    {
        a = head;
        while(a->next != NULL)
        {
            b = a;
            a = a ->next;
        }
        b->next = NULL;
        printf("\nDeleted: %d\n",a->item);
        free(a);
    }
}

void add(){
    struct node *a,*b;
    int value;
    a = (struct node*)malloc(sizeof(struct node));
    if(a == NULL)
    {
        puts("\nOVERFLOW");
        return;
    }
    else
    {
        puts("Enter the item\n");
        scanf("%d",&value);
        a->item = value;
        if(head == NULL)
        {
            a -> next = NULL;
            head = a;
            printf("\nInserted");
        }
        else
        {
            b = head;
            while (b -> next != NULL)
            {
                b = b -> next;
            }
            b->next = a;
            a->next = NULL;
            printf("\nInserted");

        }
    }
}

void clear(){
    struct node *a,*b;
    a = head->next;
    while(a){
        b = a -> next;
        free(a);
        a = b;
    }
    free(b);
    free(head);
}

void find(){
    struct node *a;
    int value,i=0,flag;
    a = head;
    if(a == NULL)
    {
        puts("\nEmpty List\n");
        return;
    }
    else
    {
        puts("\nEnter the search item\n");
        scanf("%d",&value);
        while (a!=NULL)
        {
            if(a->item == value)
            {
                printf("Item founded at pos: %d ",i+1);
                flag=0;
            }
            else
            {
                flag=1;
            }
            i++;
            a = a -> next;
        }
        if(flag==1)
        {
            puts("Item not found\n");
        }
    }
}
