#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//hello

 struct Node{
  char *name;
  char *model;
  int seatingcapacity;
  float mileage;
  int enginecapacity;
  float price;
  struct Node *next;
};

struct Node1{
    char *name;
    char *model;
    int sales;
    float profit;
    struct Node1 *next;
};

struct Node2{
  char *name;
  float rating;
  struct Node2 *next;
};

struct payments1{
    long int Debit_Card_Number;
    int Month_of_Expiry1;
    int Year_of_Expiry1;
    int CVV1;
}u;

struct payments2{
    long int Credit_Card_Number;
    int Month_of_Expiry2;
    int Year_of_Expiry2;
    int CVV2;
}g;

void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}



void New_Customer()
{
struct Node *head=NULL;
struct Node *second=NULL;
struct Node *third=NULL;
struct Node *fourth=NULL;

head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
fourth = (struct Node*)malloc(sizeof(struct Node));

head->name="MercedesBenz";
head->model="C-Class";
head->seatingcapacity=5;
head->mileage=14.49;
head->enginecapacity=3982;
head->price=1.39;
head->next=second;

second->name="LandRover";
second->model="DiscoverySport";
second->seatingcapacity=7;
second->mileage=18;
second->enginecapacity=5980;
second->price=0.63;
second->next=third;

third->name="Jaguar";
third->model="XJ";
third->seatingcapacity=5;
third->mileage=12.9;
third->enginecapacity=2993;
third->price=1.01;
third->next=fourth;

fourth->name="Lamborghini";
fourth->model="aventador";
fourth->seatingcapacity=5;
fourth->mileage=7.69;
fourth->enginecapacity=6498;
fourth->price=5.01;
fourth->next=NULL;

     printf("These are the models in our showroom\n");
     printlist(head);
     printf("Enter the car number:\n");
     int num;
     scanf("%d",&num);
     int n;
     n=num;
     struct Node *ptr=head;
     int count=1;
     while(n>0)
     {
         if(count==num)
         {
            printf("The price of the car is : %f crores\n",ptr->price);
         }
        ptr=ptr->next;
        n--;
        count++;
     }
     payments();
     printf("Your payment is successful\n");
 }


void printlist(struct Node *n)
{
    int i=1;
    while(n!=NULL)
     {
        printf("\n                Car %d\n",i);
        printf("\n Name             : %s",n->name);
        printf("\n Model            : %s",n->model);
        printf("\n seating capacity : %d",n->seatingcapacity);
        printf("\n engine capacity  : %d cc",n->enginecapacity);
        printf("\n Mileage          : %f per liter",n->mileage);
        printf("\n cost             : %f crores\n",n->price);
        printf("\n-----------------------------------------\n");
        n=n->next;
        i++;
    }
}

void printlist1(struct Node1 *n)
{
    int i=1;
    while(n!=NULL)
    {
                   printf("\n                Car %d\n",i);
                   printf("\n Model %s from  %s \n",n->model,n->name);
                   printf("\n Number of sales for this particular model are %d \n",n->sales);
                   printf("\n profit obtained by selling this model is %f crores",n->profit);
                   printf("\n---------------------------------------\n");
                   n=n->next;
                   i++;
    }
}

void printlist2(struct Node2 *n)
{
    int i = 1;
    while(n != NULL)
     {
        printf("\n                   Salesmen:%d  \n",i);
        printf("\n Name -  %s",n->name);
        printf("\n Rating - %f",n->rating);
        printf("\n----------------------------------\n");
        n = n->next;
        i++;
    }
}

 void Existing_Customer()
 {
    int c;
    do
    {

    printf("Please select your choice\n1.Renew insurance\n2.Vehicle service\n3.Buy new car\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
      insurance();
      break;
    case 2:
      service();
      break;
    case 3: 
       New_Customer();
      break;
    default:
      printf("Enter the correct choice\n");
      break;
    }
     printf("Enter any integer to go to existing customer portal\nEnter -1 to exit \n");
        scanf("%d",&c);
    }while(c!=-1);
 }

void insurance()
{
    int i;
    printf("Select your choice\n");
    printf("1.For yearly renewal \n");
    printf("2.Claiming insurance\n");
    scanf("%d",&i);
    switch (i)
    {
        case 1:
          printf("Contact Mr xxxx Ph.no. xxxxxxxxxx");
          break;
        case 2:
          printf("Contact Mr xxxx Ph.no. xxxxxxxxxx");
          break;
    }
}

void service()
{
    int i;
    printf("Select your choice\n");
    printf("For regular service of vechile press 1\n");
    printf("For updates press 2\n");
    switch(i)
    {
        case 1:
         printf("Contact receptionist Ms.xxxxx,ph.no. xxxxxxxxxxxxx");
        case 2:
         printf("Contact in house mechanic Mr.Rahul tripathi,Ph.no.9876541345 ");
    }
}
int count = 0;
void employee_portal()
{
int i;
  if(count<1)
  {
    printf("Welcome to the employee portal of dunder mifflin corp.\n");
    count++;
    Password();
  }
 sales_and_profit();
}

int password=1234;
int *b=&password;

void Password()
{
  int id,pass,l,i;
  printf("ENTER YOUR USER ID\n");
  scanf("%d",&id);
  printf("ENTER YOUR PASSWORD\n");
  scanf("%d",&pass);

  if(pass==password)  //assuming the user knows this 1234 as password
  {
  	printf("Loading");
  	for(l=0;l<5;l++){
	  fordelay(100000000);
	  printf(" .");
	}
	printf(" .\n");
	employee_portal();
  }
  else
 {
 printf("Password is incorrect for trying again press 1\n ");
 printf("For password change press 2");
 scanf("%d",&i);
 if(i=1)
   Password();//caps p is used for function name
 if(i=2)
   change_password(); 
 }
}

void change_password()
{
	int new_password,a,ID;
    printf("Enter employee ID");
 	scanf("%d",&ID);
	printf("ENTER NEW PASSWORD");
 	scanf("%d",&new_password);
 	printf("ENTER AGAIN");
 	scanf("%d",&a);

 	if(new_password==a)
 	{
   	*b=new_password;
   	printf("Your password has been changed successfully");
   	}
   	else
   	{
     	printf("AN ERROR HAS OCCURED PLEASE TRY AGAIN");
     	change_password();
    }
}

void sales_and_profit()
{
   struct Node1 *head1=NULL;
   struct Node1 *second1=NULL;
   struct Node1 *third1=NULL;
   struct Node1 *fourth1=NULL;

   head1 = (struct Node1*)malloc(sizeof(struct Node1));
   second1 = (struct Node1*)malloc(sizeof(struct Node1));
   third1 = (struct Node1*)malloc(sizeof(struct Node1));
   fourth1 = (struct Node1*)malloc(sizeof(struct Node1));



   head1->name="MercedesBenz";
   head1->model="C-Class";
   head1->sales=10;
   head1->profit=1.4;
   head1->next=second1;

   second1->name="LandRover";
   second1->model="DisoverySport";
   second1->sales=13;
   second1->profit=0.3;
   second1->next=third1;

   third1->name="Jaguar";
   third1->model="XJ";
   third1->sales=5;
   third1->profit=1;
   third1->next=fourth1;

   fourth1->name="Lamborghini";
   fourth1->model="Aventador";
   fourth1->sales=3;
   fourth1->profit=0.5;
   fourth1->next=NULL;

struct Node2 *head2 = NULL;
struct Node2 *second2 = NULL;
struct Node2 *third2 = NULL;
struct Node2 *fourth2 = NULL;
head2 = (struct Node2*)malloc(sizeof(struct Node2*));
second2 = (struct Node2*)malloc(sizeof(struct Node2*));
third2 = (struct Node2*)malloc(sizeof(struct Node2*));
fourth2 = (struct Node2*)malloc(sizeof(struct Node2*));

head2->name = "Clark";
head2->rating = 3.8;
head2->next = second2;

second2->name = "Bruce";
second2->rating = 5;
second2->next = third2;

third2->name = "Alfred";
third2->rating = 3.67;
third2->next = fourth2;

fourth2->name = "Luthor";
fourth2->rating = 4.23;
fourth2->next = NULL;
    int c;
    int option;
    do{
    printf("\n Choose any one option :\n 1.Total Sales and Profits\n 2.Salesman's Rating \n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        printlist1(head1);
        break;
    case 2:
        printlist(head2);
        break;
    default:
        printf("\n Enter the correct option\n");
    }
    printf("\n press any integer to see the options again\n");
    printf("\n enter -1 to exit the loop");
    scanf("%d",&c);
    }while(c!=-1);
}

void payments()
{
    int option;
    printf("select any one of the payment options\n");
    printf("1.Debit Card\n 2.Credit Card\n 3.Cash\n");
    scanf("%d",&option);
    switch(option)
    {
case 1:
    printf("\n enter the card number");
    scanf("%ld",&(u.Debit_Card_Number));
    printf("\n enter the month of expiry");
    scanf("%d",&(u.Month_of_Expiry1));
    printf("\n enter the year of expiry");
    scanf("%d",&(u.Year_of_Expiry1));
    printf("\n enter CVV number");
    scanf("%d",&(u.CVV1));
    break;
case 2:
    printf("\n enter the card number");
    scanf("%ld",&(g.Credit_Card_Number));
    printf("\n enter the month of expiry");
    scanf("%d",&(g.Month_of_Expiry2));
    printf("\n enter the year of expiry");
    scanf("%d",&(g.Year_of_Expiry2));
    printf("\n enter CVV number");
    scanf("%d",&(g.CVV2));
    break;
case 3:
    printf("\n please go to the cash counter and pay in cash");
    break;
default:
    printf("Please choose the correct option\n");
    break;
}
}

void coustomer_portal(){
	
    printf("Please select the choice:\n1.Customer portal\n2.Employee portal\n");
    int option;
    scanf("%d",&option);
        switch(option)
        {
        case 1:
        printf("Please select your choice\n");
        int choice;
        printf("1.Existing customer\n2.New customer\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            Existing_Customer();
            break;
        case 2 :
            New_Customer();
            break;
        default:
            printf("Please select the correct choice\n");
            break;
        }
      }
}

void menu(void)
{   int choice,i=0;
    system("cls");
    system("color 9");
    printf("\n\n\t\t\tVehicle Dealership System");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Coustomer Portal\n\t\t2.Employee Portal\n\t\t3.Exit the program\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);
    system("cls");
	switch(choice)
    {
    	case 1:coustomer_portal();
        break;
        case 2:employee_portal();
        break;
        case 3:close();
        default:
            printf("Please select the in the options available\n");
            break;
    }
}


void close(void)
{
    printf("\n\n\n\nThis Project is developed by sandy corp.");
}

void main ()
{
    int c=0;
    do
    {
      menu();
      printf("Type in 1 to go to main menu and 0 to exit the program");
      scanf("%d",&c);
    }while(c!=0);
    close();
}


