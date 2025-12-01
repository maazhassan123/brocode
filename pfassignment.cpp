#include <iostream>
using namespace std;

void displayMap(int n, int row, int col) {
    cout << "\n   ";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << i << "  ";
        for (int j = 0; j < n; j++) {
            if (i == row && j == col)
                cout << "X ";
            else
                cout << "- ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    int row, col;
    int choice = 0;

    cout << "=======================================\n";
    cout << "          TREASURER MAP PROGRAM\n";
    cout << "=======================================\n";

    
    do {
        cout << "Enter map size (5 - 9): ";
        cin >> n;
        if (n < 5 || n > 9)
            cout << "Invalid size! Please enter again.\n";
    } while (n < 5 || n > 9);

    // Step 2: Input and validate initial coordinates
    do {
        cout << "Enter starting row (0 - " << n - 1 << "): ";
        cin >> row;
        cout << "Enter starting column (0 - " << n - 1 << "): ";
        cin >> col;
        if (row < 0 || row >= n || col < 0 || col >= n)
            cout << "Invalid coordinates! Try again.\n";
    } while (row < 0 || row >= n || col < 0 || col >= n);

    // Step 3: Display initial map
    displayMap(n, row, col);

    // Step 4: Menu-driven program
    while (choice != 4) {
        cout << "\n================ MENU ================\n";
        cout << "1) Update treasure coordinates\n";
        cout << "2) Shift X left or right\n";
        cout << "3) Shift X up or down\n";
        cout << "4) Exit Program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // Update treasure coordinates
            int newRow, newCol;
            do {
                cout << "Enter new row (0 - " << n - 1 << "): ";
                cin >> newRow;
                cout << "Enter new column (0 - " << n - 1 << "): ";
                cin >> newCol;
                if (newRow < 0 || newRow >= n || newCol < 0 || newCol >= n)
                    cout << "Invalid coordinates! Try again.\n";
            } while (newRow < 0 || newRow >= n || newCol < 0 || newCol >= n);

            row = newRow;
            col = newCol;
            displayMap(n, row, col);
            break;
        }

        case 2: {
            // Shift left or right
            int offset;
            cout << "Enter horizontal offset (+ for left, - for right): ";
            cin >> offset;

            int newCol = col - offset; // + means left, - means right
            if (newCol >= 0 && newCol < n) {
                col = newCol;
                displayMap(n, row, col);
            } else {
                cout << "Invalid move! Out of bounds.\n";
            }
            break;
        }

        case 3: {
            // Shift up or down
            int offset;
            cout << "Enter vertical offset (+ for down, - for up): ";
            cin >> offset;

            int newRow = row + offset; // + means down, - means up
            if (newRow >= 0 && newRow < n) {
                row = newRow;
                displayMap(n, row, col);
            } else {
                cout << "Invalid move! Out of bounds.\n";
            }
            break;
        }

        case 4:
            cout << "\nExiting Program... Thank you!\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
