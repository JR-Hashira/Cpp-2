// Jerome Reaux Jr.
// 1/28/2024
// Object Oriented Programming I


#include <iostream>
#include <string>

using namespace std;

// My display
void Intro() {
    cout << "Hello to the Great Ninja vs Pirate War!\n";
    cout << "We need you to pick the winning side\n";
}

 // The class with the specifer and variables
class Character {
    
    // public class properties
public:
    string name;
    int age;

     // private class properties
private:
    int hp;

public:
    // Getter for hp
    int getHealth() const {
        return hp;
    }

    // Setter for hp
    void setHealth(int health) {
        // Ensure health is non-negative
        if (health >= 0) {
            hp = health;
        } else {
            cout << "Error: Health cannot be negative.\n";
        }
    }
};

// Pirate Inheritance Class from Character class
class Pirate : public Character {
public:
    void UseCannon() {
        cout << "She's gonna blow!!!\n";
    }

    void printHealth() const {
        cout << "Health: " << getHealth() << endl;
    }
};

// Ninja Inheritance Class from Character class
class Ninja : public Character {
public:
    void UseChakra() {
        cout << "Fire Style: Fireball Jutsu!!\n";
    }

    void printHealth() const {
        cout << "Health: " << getHealth() << endl;
    }
};

string role;

int main() {
    
     // Calling my display from outside the main
    Intro();

   // Object for the Character class
    Character player;

// access to attrictubes of the class
    cout << "\n\nBefore we get started, what is your name?\n";
    cin >> player.name;

    cout << player.name;
    cout << " huh? Lastly, what is your age?\n";
    cin >> player.age;

    cout << "\n\nWhich side will you aid in the war? (Ninja/Pirate)\n";
    cin >> role;

    
// If player chooses team Ninja
    if (role == "Ninja" || role == "ninja") {
        cout << "The ninja clan thanks you for aiding them in battle\n";
        cout << "You singlehandedly won the war, stories were told how you gathered chakra and yelled ";
        cout << "Fire Style: Fireball Jutsu!!\n";
        cout << "\nWiping them all away, just like that the pirates were no more\n";
        cout << "The tale of " << player.name << " will forever be a legend";
    } 
     // If player chooses Team Pirate
    else if (role == "Pirate" || role == "pirate") {
        cout << "The pirates thank you for aiding them in battle\n";
        cout << "You singlehandedly won the war, stories were told how you held your cannon and yelled ";
        cout << "She's gonna blow!!!\n";
        cout << "\nWiping them all away, just like that the ninjas were no more";
        cout << "The tale of " << player.name << " will forever be a legend";
    } 
    
    // Player doesn't choose a team
    else {
        cout << "Since you chose not to interfere, both teams take each other out\n The end.";
    }

    return 0;
}
