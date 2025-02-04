#include <iostream>
#include <cstdlib>

using namespace std;
//Methods
void displayPile(int rocks[3], bool player);
int choosePile(int pile, int rocks[3]);
int chooseRocks(int pile, int rocks[3], int totalRocks);
bool determineWinner(int rocks[3], bool player);

int main()
{
    //Problem 1
    int rocks[3] = {3,5,8};
    int pile = 0;
    int rocksTake = 0;
    int totalRocks = rocks[0] + rocks[1] + rocks[2];
    bool player = true; //Player1 = true Player 2 = false
    //Looping until rocks <= 1
    do{
        //Player 1
        if (player == true){
            displayPile(rocks, player);
            //Choose pile
            pile = choosePile(pile, rocks);
            //Choose stone amount
            rocksTake = chooseRocks(pile, rocks, totalRocks);
            //Subtracting rocks from pile
            rocks[pile-1] -= rocksTake;
            //Reevaluating total rocks
            totalRocks = rocks[0] + rocks[1] + rocks[2];
            //Check if loser
            if(totalRocks <= 1){
                cout << "One stone left, Player 2 has lost!" << endl;
                break;
            }else{
                player = false;
            }
        //Player 2
        }else if(player == false){
             displayPile(rocks, player);
            //Choose pile
            pile = choosePile(pile, rocks);
            //Choose stone amount
            rocksTake = chooseRocks(pile, rocks, totalRocks);
            //Subtracting rocks from pile
            rocks[pile-1] -= rocksTake;
            //Reevaluating total rocks
            totalRocks = rocks[0] + rocks[1] + rocks[2];
            //Check if loser
            if(totalRocks <= 1){
                cout << "One stone left, Player 1 has lost!" << endl;
                break;
            }else{
                player = true;
            }
        }
        
    }while(totalRocks > 1);

    return 0;
}

void displayPile(int rocks[3], bool player){
    //Changing player number
    int playerNum = 0;
    if(player == true){
        playerNum = 1;
    }else{
        playerNum = 2;
    }

    cout << "Player " << playerNum << ":\n"
            "There are " << rocks[0] << " stones in pile 1.\n"
            "There are " << rocks[1] << " stones in pile 2.\n"
            "There are " << rocks[2] << " stones in pile 3." << endl;
    cout << "\n";
}
int choosePile(int pile, int rocks[3]){
    do{
        cout << "Choose a pile (1-3): "; cin >> pile;
        //Check if number is between 1-3
        if (pile < 1 || pile > 3){
            cout << "Incorrect response! Make sure number is in between 1-3" << endl;
        }
        //Check if pile has rocks
        if (rocks[pile-1] == 0){
            cout << "Incorrect response! This pile has no rocks left! Choose another..." << endl;
            
        }
    }while(rocks[pile-1] == 0);
    return pile;
}
//Choose Rocks Function
int chooseRocks(int pile, int rocks[3], int totalRocks){
    int rocksTake = 0;
    do{
        if(totalRocks == 1){
            cout << "There is only 1 rock left to take!" << endl;
            break;
        }else{
            cout << "Choose 1-3 stones: "; cin >> rocksTake;
            if (rocks[pile-1] < rocksTake){
            cout << "There are only " << rocks[pile-1] << " rocks left in this pile!" << endl;
            }
            if (rocksTake < 1 || rocksTake > 3){
            cout << "Incorrect response! Make sure number is in between 1-3" << endl;
            }
        }
        
    }while(rocks[pile-1] < rocksTake && (rocksTake < 1 || rocksTake > 3));
    return rocksTake;
}
