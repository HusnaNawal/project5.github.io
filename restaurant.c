#include <stdio.h>			//header files
#include <ctype.h>
#include <windows.h>
#define TRUE 1
#define FALSE 0

void bfast();		// prototype's
void lunch();
void dinner();
void m_m();


int num;		//global variable
float price;
float total;
char choice;
int again;

void main()
{
	m_m();
}


void m_m()  // main menu screen
{
	int choice = TRUE;
	char ch;

	while(choice == TRUE) //local variable

	{


  printf("                Welcome to Husna Ismail Kitchen         \n ");
  printf("              +=================================+          \n\n");
  printf("  && Please select the meal that you would like to purchase. && \n\n");
  printf("\t\t      [A] Breakfast\n");
  printf("\t\t      [B] Lunch\n");
  printf("\t\t      [C] Dinner\n");
  printf("\t\t      [X] Exit\n\n");
  printf("Enter your choice here : ");
  scanf("%c", &ch);
  system("cls");


		   switch (toupper(ch))
    {
    case 'A':
        bfast();
        break;
    case 'B':
        lunch();
        break;
    case 'C':
        dinner();
        break;
    case 'X':
        choice==FALSE;;
        break;
    default: printf("\nOnly one of the above");

    }

	}

}
void bfast() //Breakfast Menu Screen
{
  int choice = 0; //local variables
  int quantity = 0;
  int again = 0;

  fflush(stdin);
  printf("                Welcome to Husna Ismail Kitchen         \n ");
  printf("            \t\t\t+=================================+          \n\n");
  printf("                  $  Breakfast Menu  $ \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Toast - RM 1.00\n");
  printf("\t\t   [2] Egg Muffin - RM 1.50\n");
  printf("\t\t   [3] Nasi Lemak - RM 2.00\n");


  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  total = 1.00 * quantity ;
	   printf("Your total amount is RM%.2f , Please pay at the counter\n\n\n ", total);
	   printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");

			 if (again == 1 )
				bfast();
			 else
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");

				}
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 1.50 * quantity ;
		  printf("Your total amount is RM%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");

			 if (again == 1 )
				bfast();
			 else if (again == 2 )
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");


				}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 2.00 * quantity ;
			  printf("Your total amount is RM%.2f , Please pay at the counter\n\n\n ", total);
		       printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			   scanf("%d", &again);
			   system("cls");

			  if (again == 1 )
				{
				bfast();
				 }
			  else
				  if (again == 2 )
				{
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");

					}
			  }
			  else
					if (choice != 1 , 2 , 3 )
						{
						fflush(stdin);
						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");

						}



    }

  }

void lunch() // Lunch Screen Menu
{
  int choice;  //local variables
  int quantity;
  int again;


  printf("                Welcome to Husna Ismail Kitchen         \n ");
  printf("              +=================================+          \n\n");
  printf("                   $  Lunch Menu  $ \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Fried Rice - RM 4.00\n");
  printf("\t\t   [2] Mee Goreng- RM 4.00\n");
  printf("\t\t   [3] Fish Head Curry with Rice - RM 5.00\n");

  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  total = 4.00 * quantity ;
	  printf("Your total amount is RM%.2f , Please pay at the counter\n\n\n ", total);
	  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			lunch();
		else
			if (again == 2 )
				m_m();
		else
			if (again != 1 , 2)
			{
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");

			}
		}
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 4.00 * quantity ;
		  printf("Your total amount is RM%.2f , Please pay at the counter\n\n\n ", total);
		  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			lunch();
		else
			if (again == 2 )
				m_m();
		else
			if (again != 1 , 2)
			{
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");

			}
		}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 5.00 * quantity ;
			  printf("Your total amount is RM%.2f , Please pay at the counter\n\n\n ", total);
			   {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else
					if (again == 2 )
						m_m();
				else
					if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");

					}
	           }
			  }

				 else
					 if (choice != 1 , 2 , 3)
						{
						fflush(stdin);
						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						lunch();
						}
	  }




}





void dinner() // Dinner Menu Screen
{
  int choice;  //local variables
  int quantity;
  int again;


  printf("                Welcome to Husna Ismail Kitchen         \n ");
  printf("              +=================================+          \n\n");
  printf("                    $  Dinner Menu  $ \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Chicken Chop - RM 6.50\n");
  printf("\t\t   [2] Spagetti - RM 5.50\n");
  printf("\t\t   [3] Chicken Burger - RM 3.00\n");

  printf("Enter your choice here : ");
  scanf("%d", &choice);

  if (choice == 1)
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  total = 6.50 * quantity ;
	  printf("Your total amount is RM%.2f , Please pay at the counter\n ", total);

		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
        {
            dinner();

        }
		else if (again == 2 )
        {
        m_m();

        }
		else if (again != 1 , 2)
			{
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");

			}

	    }

	else if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 5.50 * quantity ;
		  printf("Your total amount is RM%.2f , Please pay at the counter\n ", total);

			printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
			scanf("%d", &again);
			system("cls");

			if (again == 1 )
            {
               dinner();

            }
			else if (again == 2 )

            {
                m_m();

            }
			else if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");

				}
	        }

		  else if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 3.00 * quantity ;
			  printf("Your total amount is RM%.2f , Please pay at the counter\n\n\n ", total);

				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");

				if (again == 1 )
                {
                    dinner();

                }
				else if (again == 2 )
                {
                   m_m();

                }
				else if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");

				 }
			  }

				 else if (choice != 1 , 2 , 3)
						{
						fflush(stdin);
						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						dinner();
						}
		 }




