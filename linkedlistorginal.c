#include <stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *hea=0;
struct node *temp,*newnode;


void createnodes()
{

    int  i,x,choice=1;
    temp=hea;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&x);
        newnode->data=x;
        newnode->next=NULL;

        if(temp==NULL)
            hea=temp=newnode;

        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("more !");
        scanf("%d",&choice);
    }



}
void insertbegin()
{
    int x;
    temp=hea;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("data ->");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=temp;
    hea=newnode;
}


void  insertlast()
{
int x;
temp=hea;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("last data->");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
    temp=temp->next;
    }
    temp->next=newnode;
    
}




void disp(struct  node **hed)
{
     temp=hea;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;

}
}





    

void main()
{
int a;
    createnodes();
    insertbegin();
   insertlast();
    disp(hea);
  a=  Length(hea);

}