#include <iostream>
#include <fstream>
#include "Player.hpp"

//function declarations
int main();
void mainMenu();
void newGame();
void conGame();
void settings();
void exitGame();

// function starts up the main menu
int main(){
    // starts the main menu up
    mainMenu();
    return 0;
}

// function for displaying and calling other menu functions
void mainMenu(){
    // probably move this to the new game and continue functions
    Player P;

    // variable to hold user's choice in current screen
    std::string option;

    while (true){
        //  display the screen with options====================================================
        //  temporary text for letting user select opening option.
        std::cout << "Please type for one of the following options: " << std::endl;
        std::cout << "Start a New Game: ng" <<std::endl;
        std::cout << "Continue an Existing Game: con" <<std::endl;
        std::cout << "Settings: op" <<std::endl;
        std::cout << "Exit Game: ex" <<std::endl;

        //  user input for selecting an option===========================
        std::cin >> option;

        if (option == "ng"){
            newGame();

        } else if (option == "con"){
            conGame();

        } else if (option == "op"){
            settings();

        } else if (option == "ex"){
            exitGame();
        }
    }
// don't think the program ever reaches here

}

void newGame(){
    std::string option;
    //start a "New Game"
    std::cout << "Chose new game." << std::endl;
    //choose a save file i guess
            
    std::cout << "pick a class" << std::endl;
    std::cin >> option;

    // std::ifstream fin(option);
    // std::string nextLine;
    // while (fin >> nextLine){

    // }
}

void conGame(){
    // continue an existing game ( multiple saves system?? )
    std::cout << "Chose to continue a current save." << std::endl;

    // need a way to go back to main menu
}

void settings(){
    // goes to options screen to change stuff
    std::cout << "Chose settings." << std::endl;

    // need a way to go back to main menu
}

//redundant??
void exitGame(){
    std::cout << "Chose to exit game." << std::endl;
    std::cout << "Game ended successfully" << std::endl;
    exit(0);
}




void classInfoInsert(std::string classChoice){
    
    if (classChoice == "Soldier"){
        std::ifstream fin("Soldier.txt");
    } else if (classChoice == "Pegasus Rider"){
        std::ifstream fin("Pegasus Rider.txt");
    }



}