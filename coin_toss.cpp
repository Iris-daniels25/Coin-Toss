#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

class CoinToss {
private:
    int headsCount;  // Count of heads
    int tailsCount;  // Count of tails

public:
    // Constructor to initialize the counts
    CoinToss() {
        headsCount = 0;
        tailsCount = 0;
    }

    // Function to simulate a coin toss
    void coinToss() {
        int result = rand() % 2 + 1; // Generates 1 (heads) or 2 (tails)
        if (result == 1) {
            cout << "Heads" << endl;
            headsCount++;
        } else {
            cout << "Tails" << endl;
            tailsCount++;
        }
    }

    // Function to display the final results
    void displayResults() {
        cout << "\nTotal Heads: " << headsCount << endl;
        cout << "Total Tails: " << tailsCount << endl;

        if (headsCount > tailsCount) {
            cout << "Heads won!" << endl;
        } else if (tailsCount > headsCount) {
            cout << "Tails won!" << endl;
        } else {
            cout << "It's a tie!" << endl;
        }
    }
};

int main() {
    srand(time(0));  // Seed for random number generation

    CoinToss coinTossSimulator;
    int tosses;

    // Ask the user how many times to toss the coin
    cout << "How many times would you like to toss the coin? ";
    cin >> tosses;

    // Simulate the coin tosses
    for (int i = 0; i < tosses; i++) {
        coinTossSimulator.coinToss();
    }

    // Display the results
    coinTossSimulator.displayResults();

    return 0;
}
