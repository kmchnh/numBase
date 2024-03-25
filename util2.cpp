#include<iostream>
#include<random>

int util(){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dis(1, 9);
}