#include "ListCandidate.h"

int main() {
    ListCandidate list;

    // Nhập số lượng thí sinh
    list.input();

    list.showCandidatesWithTotalScoreAbove15();

    list.findCandidateWithHighestTotalScore().output();

    list.sortCandidatesByTotalScoreDescending();

    return 0;
}