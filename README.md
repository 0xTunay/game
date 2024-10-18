
## Tic Tac Toe in C - Play against the Computer

This project implements a simple Tic Tac Toe game in C where you can play against the computer.

### Features

* Play Tic Tac Toe against the computer AI.
* Choose between playing as X or O.
* Clear representation of the game board.
* User-friendly interface with turn prompts.
* Game ends when a player wins or the board is full.
* Basic AI logic for computer moves.

### Requirements

* C compiler (GCC, Clang, etc.)
* Basic understanding of C programming

### Getting Started

1. Clone or download the repository containing the C source code (`tic_tac_toe.c`).
2. Open a terminal and navigate to the directory containing the source code.
3. Compile the code using your C compiler:

```bash
gcc tic_tac_toe.c -o tic_tac_toe
```

This will create an executable file named `tic_tac_toe`.

4. Run the executable:

```bash
./tic_tac_toe
```

### How to Play

The game will prompt you to choose your symbol (X or O). After that, you can take turns placing your symbol on the board by entering the corresponding number for the position (1-9). 

The game board is displayed as a 3x3 grid with numbers assigned to each position. For example, entering "1" would place your symbol in the top left corner.

The computer will then make its move based on a simple AI logic. 

The game continues until either player wins by forming a horizontal, vertical, or diagonal line of their symbols, or the board is completely filled with no winner.

### Additional Notes

* This is a basic implementation and the computer AI can be further improved for a more challenging experience.
* You can modify the code to customize the game board representation, user prompts, or add features like difficulty levels.
* Refer to the `tic_tac_toe.c` file for the code implementation and detailed logic.

Feel free to explore and customize the code to learn more about C programming and game development.
