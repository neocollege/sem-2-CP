//Define a structure called cricket that will describe the following information –player name, country name best score, batting average. Develop a program that will store information of 25 cricket players around the world using this structure. Also display names of these cricketers in descending order with respect to their batting average. 

#include <stdio.h>
#include <string.h>

struct cricket {
    char name[30];
    char country[30];
    int bs;
    float ba;
};
typedef struct cricket ct;

void main(){
    ct p[25],temp;
    printf("Enter the data of 25 players: \n");
    for(int i=0;i<10;i++){
        printf("Player %d\n",i+1);
        printf("Enter name: \n");
        gets(p[i].name);
        printf("Country: \n");
        gets(p[i].country);
        printf("Best Score: \n");
        scanf("%d",&p[i].bs);
        printf("Batting Average: \n");
        scanf("%f",&p[i].ba);
    }
    
    for(int i=0; i<9; i++){
        for(int j=0;j<9-i;j++)
            if(p[j].ba<p[j+1].ba){
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
    }

    printf("Players according to descending order of batting average: \n");
    for(int i=0;i<10;i++){
        printf("Name of Player: ");
        puts(p[i].name);
    }
}
