#include <iostream>

computeTopScores()

int main() {
    int participants;
    std::cin >> participants;

    int top_scores[3] = {0, 0, 0};

    // Find top scores
    for (int i = 0; i < participants; i++) {
        int score;
        std::cin >> score;

        if (score > top_scores[0]) top_scores[0] =
    }

    return 0;
}