#include<iostream>
#include<random>

void game(int hum[], int com[], int& st, int& ba);


int main(){
  
int st,ba;
int com[3];
int hum[3];

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dis(1, 9);

    std::cout << "Answer is: ";

    for (int i = 0; i < 3; i++) {
    com[i] = dis(mt);
    std::cout << com[i] << " ";
    }

    std::cout << std::endl;

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