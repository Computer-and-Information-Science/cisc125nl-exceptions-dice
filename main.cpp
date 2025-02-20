#include "dice.h"
#include <iostream>
using namespace std;

int main () {

    // Create a dice object
    int n_dice;
    cout << "How many dice will we roll? ";
    cin >> n_dice;
    Dice my_dice(n_dice);

    // Output the dice roll result
    cout << my_dice.str() << endl;

    // Prompt for die index and display value on the requested die
    // Starting with die #1 as it is more user-friendly, but actual indexes start with 0
    int die_num;
    cout << "Enter die numbers 1 through " << n_dice << ". Enter 0 to quit.\n";
    do {
        cout << "Which die do you want to view? ";
        cin >> die_num;
        if (die_num) 
            cout << "The value on die " << die_num << " id " << my_dice.die(die_num - 1) << endl;
    } while (die_num);
}
