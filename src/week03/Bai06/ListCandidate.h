#include <iostream>
#include <vector>

#include "Candidate.h"

using namespace std;

class ListCandidate {
   private:
    int n;
    vector<Candidate> candidates;  // Danh sách thí sinh

   public:
    // Hàm thêm thí sinh vào danh sách
    void addCandidate() {
        Candidate candidate;
        candidate.input();
        candidates.push_back(candidate);
    }

    // Hàm xuất thông tin các thí sinh có tổng điểm lớn hơn 15
    void showCandidatesWithTotalScoreAbove15() {
        cout << "\nDanh sach thi sinh co tong diem tren 15:\n";
        for (Candidate candidate : candidates) {
            if (candidate.getTotalScore() > 15) {
                candidate.output();
            }
        }
    }

    // Hàm tìm thí sinh có tổng điểm cao nhất
    Candidate findCandidateWithHighestTotalScore() {
        Candidate highestScorer;
        if (candidates.empty()) {
            return highestScorer;  // Danh sách rỗng
        }

        highestScorer = candidates[0];
        for (Candidate candidate : candidates) {
            if (candidate.getTotalScore() > highestScorer.getTotalScore()) {
                highestScorer = candidate;
            }
        }
        return highestScorer;
    }

    // Hàm sắp xếp danh sách thí sinh giảm dần theo tổng điểm
    void sortCandidatesByTotalScoreDescending() {
        quickSort(candidates, 0, candidates.size() - 1, true);
        cout << "Danh sach sau khi sap xep tang dan: ";
        for (size_t i = 0; i < candidates.size(); i++) {
            candidates[i].output();
        }

        cout << "\n";
    }

    void swap(Candidate* a, Candidate* b) {
        Candidate temp = *a;
        *a = *b;
        *b = temp;
    }

    // Partition function to rearrange elements around a pivot
    int partition(vector<Candidate>& arr, int low, int high, bool isSortDesc) {
        auto pivot = arr[high];  // Select last element as pivot
        int i = (low - 1);       // Index of smaller element

        for (int j = low; j <= high - 1; j++) {
            // Check if current element is smaller than the pivot
            if (isSortDesc) {
                if (arr[j].getTotalScore() >= pivot.getTotalScore()) {
                    i++;  // Increment index of smaller element
                    swap(&arr[i], &arr[j]);
                }
            } else {
                if (arr[j].getTotalScore() < pivot.getTotalScore()) {
                    i++;  // Increment index of smaller element
                    swap(&arr[i], &arr[j]);
                }
            }
        }
        swap(&arr[i + 1], &arr[high]);  // Place pivot at the correct position
        return (i + 1);
    }

    // Recursive function to implement Quick Sort
    void quickSort(vector<Candidate>& arr, int low, int high, bool isSortDesc) {
        if (low < high) {
            // pi is partitioning index, arr[p] is now at right place
            int pi = partition(arr, low, high, isSortDesc);

            // Recursively sort elements before and after partition
            quickSort(arr, low, pi - 1, isSortDesc);
            quickSort(arr, pi + 1, high, isSortDesc);
        }
    }

    void input() {
        cin >> n;
        for (size_t i = 0; i < n; i++) {
            this->addCandidate();
        }
    }
};
