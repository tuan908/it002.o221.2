#include "week01/Exercise03/Exercise03.h"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    Fraction03 f;

    vector<Fraction03> l;

    for(int i = 0; i < n; i++) {
        f.input();
        l.push_back(f);
    }

    Fraction03 largest = f.findLargestFraction(l);

    largest.display();

    f.sort(l);

    for(auto element: l) {
        element.display();
    }

    return 0;
}