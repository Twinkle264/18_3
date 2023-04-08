#include <iostream>

using namespace std;

int n = 0, k = 0;

int countWays(int steps, int maxJump = 3) {
    int coutVariant = 0;

    if (steps <= maxJump) {
        for (int i = steps; i > 1; i--) {
            coutVariant += countWays(i - 1, i - 1);
        }
        return coutVariant + 1;
    } else {
        for (int i = steps; i > steps - maxJump; i--) {
            coutVariant += countWays(i - 1, maxJump);
        }
        return coutVariant;
    }
}

int main() {
    cout << "\tInput step number: ";
    cin >> n;
    cout << endl;
    cout << "\tInput the number of max jump: ";
    cin >> k;

    cout << endl;
    cout << "\tNumber of ways is " << countWays(n, k);

    return 0;
}
