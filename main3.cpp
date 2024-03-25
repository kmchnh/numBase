#include<iostream>
#include<random>

void game(int hum[], int com[], int& st, int& ba);


int main(){


int att = 5;
int st, ba;
int com[3];
int hum[3];

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dis(1, 9);

    for (int i = 0; i < 3; i++) {
    com[i] = dis(mt);
    }

while(true)
{

    std::cout << att << " chances left." << std::endl;
    std::cout << "Enter a guess: ";
    std::cin >> hum[0] >> hum[1] >> hum[2];

    att--;

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

    if(att == 0){
    std::cout << "You lose!" << std::endl;
    break;
    }
}    return 0;
}