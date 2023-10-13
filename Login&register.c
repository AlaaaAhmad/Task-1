#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define Number 50
typedef struct 
{
    char username[30];
    char password[30];
}Users;
 Users AllUsers[Number];

int cnt = 0; 
void signUp()
{
    Users newUser; 
    char username[30];
    printf("Please, Enter a user name\n");
    scanf("%s", newUser.username);
    for (int i = 0; i < cnt; i++ ) 
    {
        if (AllUsers[i].username == newUser.username) 
        {
            printf("User name already exists, Try again\n");
        } 
    }
    printf("Please, enter a password\n"); 
    scanf("%s", newUser.password); 
    cnt++; 
    AllUsers[cnt] = newUser; 
    printf("Successfully Registered\n"); 
    
}
void signIn()
{
    printf("Please, Enter your user name\n"); 
    char trailName[30]; 
    char trailPass[30];
    scanf("%s", &trailName); 
    printf("Please, Enter your password\n"); 
    scanf("%s", &trailPass); 
    for (int i = 0; i < cnt; i++) 
    {
        if (AllUsers[cnt].username == trailName && AllUsers[cnt].password == trailPass)  
        {
            printf("Log in Succeeded\n"); 
        }
    }
    printf("Log in Failed\n"); 
    
}
int main()
{

   int op; 
   int cnt = 0; 
   bool flag = true;
   while (flag)
   {
   printf("Please Choose one operation\n");
   printf("1- Sign Up\n");
   printf("2- Sign in\n");
   printf("3- Exit \n");
    scanf("%d", &op); 
   if (op == 1) 
   {
       signUp();
   }
   else if (op == 2) 
   {
       signIn();
   }
   else if (op == 3)
   {
       printf("Thanks!\n");
       flag = false; 
   }
   else 
   {
       printf("Invalid Choice!\n");
   }
 
   }
   
  
   
   
}