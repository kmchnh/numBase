#include<iostream>

void game(int hum[], int com[], int& st, int& ba){


for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
    if (com[i] == hum[j]){
        if(i == j){
        st++;
    } else 
        ba++;
        }
    }
}
}
