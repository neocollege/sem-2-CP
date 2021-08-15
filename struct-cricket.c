//Define a structure called cricket that will describe the following information –player name, country name best score, batting average. Develop a program that will store information of 25 cricket players around the world using this structure. Also display names of these cricketers in descending order with respect to their batting average. 

#include <stdio.h>
#include <string.h>

struct cricket {
    char name[30];
    char country[30];
    int bs;
    float ba;
    char temp[1];
};

void swap(float x, float y) {
    float temp = x;
    x=y;
    y=temp;
}

void main(){
    struct cricket p[25];
    printf("Enter the data of 25 players: \n");
    for(int i=0;i<25;i++){
        printf("Player %d",i+1);
        gets(p[i].temp);
        printf("Enter name: \n");
        gets(p[i].name);
        printf("Country: \n");
        gets(p[i].country);
        printf("Best Score: \n");
        scanf("%d",&p[i].bs);
        printf("Batting Average: \n");
        scanf("%f",&p[i].ba);
    }
    
    for(int i=0; i<24; i++){
        for(int j=0;j<24-i;j++)
            if(p[j].ba<p[j+1].ba)
                swap(p[j].ba,p[j+1].ba);
    }

    printf("Players according to descending order of batting average: \n");
    for(int i=0;i<25;i++){
        printf("Name of Player: ");
        puts(p[i].name);
        printf("Country: ");
        puts(p[i].country);
        printf("Best Score: %d\n",p[i].bs);
        printf("Batting Average: %f\n",p[i].ba);
        printf("\n");
    }
}