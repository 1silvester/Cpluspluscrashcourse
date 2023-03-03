#include <iostream>
#include <cstdio>

enum class Race {
    Dinan,
    Teklan,
    Ivyn,
    Morian,
    Camite,
    Julian,
    Adian,
};


int main() {
    Race race = Race::Julian;

    switch(race) {
        case Race::Dinan: {
            printf("You work hard.");
        }
            break;
        case Race::Teklan: {
            printf("You are very strong.");
        }
            break;
        case Race::Ivyn: {
            printf("You are a great leader.");
        }
            break;
        case Race::Morian: {
            printf("My, how versatile you are!");
        }
            break;
        case Race::Camite: {
            printf("You're incredibly helpful.");
        }
            break;
        case Race::Julian: {
            printf("Anything you want!");
        }
            break;
        case Race::Adian: {
            printf("What an enigma");
        }
            break;
        default: {
            printf("Error: unknown race!");
        }
        }
    return 0;
}
