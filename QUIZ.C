#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
COORD coord={0,0}; // this is global variable
int points=0;
 void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord); //center of axis is set to the top left cornor of the screen
 }
void question(int);
void loading();
void table();
void menu();
void about();
int random();

int main()
{
    loading();
    return 0;
}
int random(){
srand(time(NULL));   // Initialization, should only be called once.
int r;
r= rand()%5;
return r;
}
void menu(){
    system("cls");
    table();
    int ch;
    gotoxy(30,12);
    printf("1] START GAME");
    gotoxy(30,13);
    printf("2] SCORE");
    gotoxy(30,14);
    printf("3] ABOUT GAME");
    gotoxy(30,15);
    printf("4] END");
    gotoxy(30,16);
    scanf("%d",&ch);
    if(ch==1){
        question(random());
    }else if(ch==2){

    }else if(ch==3){
        about();
    }else if(ch==4){
        exit(0);
    }else{
        gotoxy(30,18);
        printf("WORNG ENTRY");
        getch();
        menu();
    }

}


void about(){
    system("cls");
    gotoxy(30,10);
    printf("THIS GAME DEVELOPED BY FEST PVT LTD AND ALL COPY RIGHTS ARE RESERVED");
    gotoxy(35,11);
    printf("THANK YOU FOR PLAYING OUR GAME!!!");
    getch();
    menu();
}
void loading(){
    system("cls");
      gotoxy(50,9);
      printf("PLEASE WAIT");

    gotoxy(50,10);
    for(int i=1;i<=10;i++){
            Sleep(400);
        printf("%c",219);

    }
    menu();
}
void table(){
   int i;
   system("cls");
     gotoxy(90,9);
     printf("SCORE:");

    gotoxy(10,10);
    for(i=1;i<=100;i++){
        printf("%c",219);
    }

    for(i=1;i<=10;i++){
        gotoxy(10,10+i);
        printf("%c",219);
    }

     for(i=1;i<=10;i++){
        gotoxy(109,10+i);
        printf("%c",219);
    }

gotoxy(10,20);
   for(i=1;i<=100;i++){
        printf("%c",219);
    }

}


void question(int rad){

    int ch;
    system("cls");
    table();
    switch(rad){
    case 0:
        gotoxy(12,12);
        printf("Which is the fastest animal in the world?");
        gotoxy(12,13);
        printf("1] Rat");
        gotoxy(18,13);
        printf("2] Leopard");
         gotoxy(12,14);
        printf("3] Tiger");
         gotoxy(18,14);
        printf("4] Horse");
         gotoxy(12,15);
         scanf("%d",&ch);
        if(ch==2){
                points=points+1000;
                 gotoxy(16,16);
            printf("Correct!! You Won =%d$",points);
            getch();
            question(random());
        }else{
            gotoxy(16,16);
            printf("Incorrect!! You Lose");
            getch();
           menu();
        }
        break;
    case 1:
        gotoxy(12,12);
        printf("Which is the Tallest Himalaya in the world?");
        gotoxy(12,13);
        printf("1] Ganesh Himalaya");
        gotoxy(25,13);
        printf("2] Annapurna Himalaya");
         gotoxy(12,14);
        printf("3] K2 Himalaya");
         gotoxy(25,14);
        printf("4] Mt Everest");
         gotoxy(12,15);
         scanf("%d",&ch);
        if(ch==4){
                points=points+1000;
                 gotoxy(16,16);
            printf("Correct!! You Won =%d$",points);
            getch();
            question(random());
        }else{
            gotoxy(16,16);
            printf("Incorrect!! You Lose");
            getch();
            menu();
        }
        break;
    case 2:
        gotoxy(12,12);
        printf("Who is the PM of Nepal?");
        gotoxy(12,13);
        printf("1] Dr Sushan Shakya");
        gotoxy(25,13);
        printf("2] Dr Rambaran Yadav");
         gotoxy(12,14);
        printf("3] Puspa kamal Dahal");
         gotoxy(25,14);
        printf("4] KP Oli");
         gotoxy(12,15);
         scanf("%d",&ch);
        if(ch==4){
                points=points+1000;
                 gotoxy(16,16);
            printf("Correct!! You Won =%d$",points);
            getch();
            question(random());
        }else{
            gotoxy(16,16);
            printf("Incorrect!! You Lose");
            getch();
            menu();
        }
        break;
    case 3:
        gotoxy(12,12);
        printf("What is the Capital City of Nepal?");
        gotoxy(12,13);
        printf("1] Pokhara");
        gotoxy(25,13);
        printf("2] Hetauda");
         gotoxy(12,14);
        printf("3] Kathmandu");
         gotoxy(25,14);
        printf("4] Dharan");
         gotoxy(12,15);
         scanf("%d",&ch);
        if(ch==3){
                points=points+1000;
                 gotoxy(16,16);
            printf("Correct!! You Won =%d$",points);
            getch();
            question(random());
        }else{
            gotoxy(16,16);
            printf("Incorrect!! You Lose");
            getch();
            menu();
        }
        break;
    case 4:
        gotoxy(12,12);
        printf("How many district in Nepal?");
        gotoxy(12,13);
        printf("1] 77");
        gotoxy(25,13);
        printf("2] 75");
         gotoxy(12,14);
        printf("3] 76");
         gotoxy(25,14);
        printf("4] 73");
         gotoxy(12,15);
         scanf("%d",&ch);
        if(ch==1){
                points=points+1000;
                 gotoxy(16,16);
            printf("Correct!! You Won =%d$",points);
            getch();
            question(random());
        }else{
            gotoxy(16,16);
            printf("Incorrect!! You Lose");
            getch();
            menu();
        }
        break;
    case 5:
        gotoxy(12,12);
        printf("WGorkhali  Belongs to where?");
        gotoxy(12,13);
        printf("1] India");
        gotoxy(25,13);
        printf("2] England");
         gotoxy(12,14);
        printf("3] Nepal");
         gotoxy(25,14);
        printf("4] China");
         gotoxy(12,15);
         scanf("%d",&ch);
        if(ch==3){
                points=points+1000;
                 gotoxy(16,16);
            printf("Correct!! You Won =%d$",points);
            getch();
            question(random());
        }else{
            gotoxy(16,16);
            printf("Incorrect!! You Lose");
            getch();
            menu();
        }




    }

}

