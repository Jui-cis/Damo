#include<stdio.h>
struct contact
{
  char name[50];
  char email[50];
  char phone[50];

};


void addcontact()
{
    struct contact contact;
    FILE *file;
    file=fopen("contact.txt","a");
    if(file==NULL)
    {
        printf("OHH!!File does not exist");
    }
    else
    {
    printf("File is opened\n");
    printf("\n");
    getchar();
    printf("ENTER NAME : ");
    fgets(contact.name,sizeof contact.name,stdin);
    printf("ENTER E-MAIL: ");
    fgets(contact.email,sizeof contact.email,stdin);
    printf("ENTER PHONE : ");
    fgets(contact.phone,sizeof contact.phone,stdin);

    //printf(" %s%s%s\n",contact.name,contact.email,contact.phone);
    //write to the file
    fprintf(file,"%s%s%s",contact.name,contact.email,contact.phone);
    printf("Added to contract management system:\n");
    fclose(file);
    }


}
void displaycontacts()
{
    struct contact contact;
    FILE *file;
    file=fopen("contact.txt","r");
    if(file==NULL)
    {
        printf("OHH!!File does not exist");
    }
    else
    {
     int i;
    printf("contacts\n");
    while(fscanf(file," %[^\n] %[^\n] %[^\n]",contact.name,contact.email,contact.phone)!=EOF)
    {
     printf("Here are the details of person:- '%d'\n",i+1);
      printf("\tName = %s\n",contact.name);
      printf("\tPhone = %s\n",contact.email);
      printf("\tEmail = %s\n",contact.phone);
      printf("\n");
      i++;

    }

    fclose(file);
    }


}
int main()
{

 int choice;
 do
    {
    printf("contact management system\n");
    printf("1. ADD contact\n");
    printf("2. Display contact\n");
    printf("3.Exist\n");
    printf("Enter your coice:");
    scanf("%d",&choice);
    switch(choice)
    {case 1:
    addcontact();
    break;
    case 2:
    displaycontacts();
    break;
    case 3:
    printf("Exiting............ ");
    break;
    default:
        printf("OHHH INVALID CHOICE!!!!");
    }
    }
 while(choice !=3);


}




