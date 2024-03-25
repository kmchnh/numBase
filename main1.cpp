#include<iostream>

void game(int hum[], int com[], int& st, int& ba);


int main(){
  
int st,ba;
int com[3];
int hum[3];

    std::cout << "Enter a answer: ";
    std::cin >> com[0] >> com[1] >> com[2];

while(true)
{

    std::cout << "Enter a guess: ";
    std::cin >> hum[0] >> hum[1] >> hum[2];

    st = 0;
    ba = 0;

    game(hum, com, st, ba);

    if(st != 3){
    std::cout << "Strikes: " << st << ", Balls: " << ba << std::endl;
    } 
    
    else if(st == 3){
    std::cout << "You win!" << std::endl;
    break;
    }
}    
}