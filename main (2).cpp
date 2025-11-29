#include <iostream>
using namespace std;

int main() {
    int size = 15;
    int a[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter integer between -10 and 50 (inclusive): ";
        cin >> a[i];

        while (a[i] < -10 || a[i] > 50) {
            cout << "Invalid. Re-enter integer #" << (i + 1)
                 << " between -10 and 50 (inclusive): ";
            cin >> a[i];
        }
    }

    int choice = 0;
    do {
        cout << "\n==== MENU ====\n";
        cout << "2 - Find Largest Number\n";
        cout << "3 - Find Smallest Number\n";
        cout << "4 - Find Average of Numbers\n";
        cout << "5 - Display Array in Reverse Order\n";
        cout << "6 - Display Negative Numbers\n";
        cout << "7 - Display Odd Numbers\n";
        cout << "8 - Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 2) {
            int largest = a[0];
            for (int j = 1; j < size; j++) {
                if (a[j] > largest) largest = a[j];
            }
            cout << "Largest number = " << largest << "\n";

        } else if (choice == 3) {
            int smallest = a[0];
            for (int j = 1; j < size; j++) {
                if (a[j] < smallest) smallest = a[j];
            }
            cout << "Smallest number = " << smallest << "\n";

        } else if (choice == 4) {
            int sum = 0;
            for (int j = 0; j < size; j++) sum += a[j];
            double avg = (double)sum / size;
            cout << "Average = " << avg << "\n";

        } else if (choice == 5) {
            cout << "Array in reverse: ";
            for (int j = size - 1; j >= 0; j--) cout << a[j] << " ";
            cout << "\n";

        } else if (choice == 6) {
            bool hasNegative = false;
            cout << "Negative numbers: ";
            for (int j = 0; j < size; j++) {
                if (a[j] < 0) {
                    cout << a[j] << " ";
                    hasNegative = true;
                }
            }
            if (!hasNegative) cout << "(none)";
            cout << "\n";

        } else if (choice == 7) {
            bool hasOdd = false;
            cout << "Odd numbers: ";
            for (int j = 0; j < size; j++) {
                if (a[j] % 2 != 0) {
                    cout << a[j] << " ";
                    hasOdd = true;
                }
            }
            if (!hasOdd) cout << "(none)";
            cout << "\n";

        } else if (choice == 8) {
            cout << "Exiting. Goodbye!\n";

        } else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 8);

    return 0;
}
