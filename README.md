# 🎨 C++ Color Guessing Game

A simple **console-based color guessing game written in C++**.

The program randomly selects one color from a list of five colors, and the player must guess the selected color. If the guess is incorrect, the player can keep trying until the correct color is entered.

## ✨ Features

* 🎨 Randomly selects a target color
* 🎯 Player guessing system
* 🔄 Unlimited attempts until the correct answer
* ✅ Correct/incorrect feedback
* 🔤 Case-insensitive input
* 🖥️ Console-based interface
* ⏱️ Short delay after an incorrect guess
* 🎲 Uses random number generation

## 🎨 Available Colors

The game randomly chooses one of these five colors:

```text
Red
Green
Blue
Yellow
Purple
```

## 🛠️ Technologies Used

* **C++**
* `iostream` — console input/output
* `cstdlib` — random number generation
* `ctime` — random seed generation
* `windows.h` — Windows `Sleep()` function

## 📁 Project Structure

```text
cpp-color-guessing-game/
│
├── colored_square.cpp
└── README.md
```

## ⚙️ Requirements

You need a C++ compiler capable of compiling Windows-specific code.

Recommended:

* **G++ / MinGW**
* **MSYS2 UCRT64**
* Windows operating system

> This program uses `windows.h`, so the current version is designed specifically for Windows.

## 🚀 How to Compile

Open a terminal in the project directory and run:

```bash
g++ color_guess.cpp -o color_guess
```

## ▶️ How to Run

On Windows:

```bash
./color_guess
```

Or:

```bash
color_guess.exe
```

If using MSYS2/UCRT64:

```bash
./color_guess.exe
```

## 🎮 How to Play

When the program starts, you will see:

```text
Guess the color (Red, Green, Blue, Yellow, Purple):
```

Enter one of the available colors.

For example:

```text
Guess the color (Red, Green, Blue, Yellow, Purple):
blue
```

If your guess is incorrect:

```text
Incorrect! Try again.
```

The program waits for one second and gives you another attempt.

If your guess is correct:

```text
Correct! The color was: Blue
```

The game then ends.

## 🔤 Case-Insensitive Input

The game accepts different capitalization styles.

For example, all of these are treated as the same input:

```text
Red
RED
red
rEd
ReD
```

This is achieved by converting the player's input to lowercase before comparing it.

## 🎲 Random Color Generation

The game uses:

```cpp
srand(static_cast<unsigned int>(time(0)));
```

to initialize the random number generator.

The target color is selected using:

```cpp
return static_cast<Color>(rand() % 5);
```

Since there are five colors, `rand() % 5` produces a value from:

```text
0 → 4
```

These values correspond to:

```cpp
enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    PURPLE
};
```

## 🧠 Concepts Demonstrated

This project demonstrates several fundamental C++ programming concepts:

* Variables
* Functions
* Enumerations (`enum`)
* `switch` statements
* Conditional statements
* `while` loops
* User input/output
* Strings
* Type casting
* Random number generation
* Time-based random seeds
* Character manipulation
* Windows-specific functions

## 🔄 Game Flow

```text
        Start Game
             │
             ▼
     Generate Random Color
             │
             ▼
       Ask Player to Guess
             │
             ▼
      Convert Input to Lowercase
             │
             ▼
       Compare With Target
          /       \
       Correct   Incorrect
          │         │
          ▼         ▼
       Game Over  Wait 1 Second
                    │
                    └──────► Guess Again
```

## 🔮 Future Improvements

Possible improvements include:

* 🏆 Add a score system
* ❤️ Add a limited number of attempts
* 📊 Track the number of guesses
* 🎚️ Add difficulty levels
* 🎨 Add more colors
* 🌈 Display actual colors in the terminal
* 🔊 Add sound effects
* 🏅 Add a high-score system
* 🔄 Add a replay option
* 🖥️ Create a graphical interface
* 🌐 Make the game cross-platform

## ⚠️ Platform Note

The current implementation includes:

```cpp
#include <windows.h>
```

and uses:

```cpp
Sleep(1000);
```

Therefore, this version is intended for **Windows**.

For Linux/macOS compatibility, `Sleep()` can be replaced with C++'s standard `<thread>` and `<chrono>` libraries.

## 👨‍💻 Author

**Naman Karna**

A beginner-friendly C++ project created to practice **random numbers, enums, loops, functions, and user input**.

## 📄 License

This project is intended for **educational and personal use**.
