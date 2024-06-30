#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const char* coin_toss(){
    return (rand()%2) == 0 ? "Heads" : "Tails";
}

int main(void){
    srand(time(NULL));

    int h_coin = 0;
    int t_coin = 0;
    char user_name[100];


    printf("Who are you?\n>");

    scanf("%s",user_name);
    printf("Hello, %s!\n",user_name);

    printf("Tossing a coin...\n");

    for(int i = 0; i < 3; i++){
        printf("Round %d:",i+1);
            const char* result = coin_toss();
            printf("%s\n",result);
            if(strcmp(result , "Heads")==0){
                h_coin++;
            }else{
                t_coin++;
            }
    }
    printf("Heads :%d  Tails :%d\n",h_coin,t_coin);

    if(h_coin > t_coin){
        printf("You won\n");
    }else{
        printf("You lost.\n");
    }

    return 0;
}