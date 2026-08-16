#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>

using namespace std;

enum Color {RED, GREEN, BLUE, YELLOW, PURPLE};

Color getRandomColor() {
    return static_cast<Color>(rand() % 5);
}
string colorToString(Color color) {
    switch (color) {
        case RED: return "Red";
        case GREEN: return "Green";
        case BLUE: return "Blue";
        case YELLOW: return "Yellow";
        case PURPLE: return "Purple";
        default: return "Unknown";
    }
}
int main()
{
    srand(static_cast<unsigned int>(time(0)));

    Color targetColor = getRandomColor();
    string guess;
    while(true){
        system("cls");
        cout << "Guess the color (Red, Green, Blue, Yellow, Purple): "<< endl;
        cin >> guess;
        for(int i=0; i<guess.length(); i++){
            guess[i] = tolower(guess[i]);
        }
        if (guess == "red" && targetColor == RED ||
            guess == "green" && targetColor == GREEN ||
            guess == "blue" && targetColor == BLUE ||
            guess == "yellow" && targetColor == YELLOW ||
            guess == "purple" && targetColor == PURPLE) {
            cout << "Correct! The color was: " << colorToString(targetColor) << endl;
            break;
        } else {
            cout << "Incorrect! Try again." << endl;
            Sleep(1000);
        }
    }
    return 0;
}

