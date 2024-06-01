#include "DonThuc.h"

class DaThuc {
   public:
    DonThuc* head;
    DonThuc* tail;
    DaThuc() {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insertTail(double heSo, int soMu) {
        DonThuc* node = new DonThuc(heSo, soMu);
        if (!this->head) {
            this->head = node;
        } else {
            this->tail->next = node;
        }

        this->tail = node;
    }

    void xuatDaThuc() {
        DonThuc* p;
        p = head;
        bool isHeadNode = true;
        auto isEmpty = 0;
        auto size = 0;
        while (p != NULL) {
            size++;
            p->xuatDonThuc(isHeadNode);
            isHeadNode = false;
            if (p->heSo == 0) {
                isEmpty++;
            }
            p = p->next;
        }
        if (isEmpty == size)
            cout << "0";
        cout << "\n";
    }

    DonThuc* getMiddle(DonThuc* head) {
        DonThuc* slow = head;
        DonThuc* fast = head->next;

        if (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    // Function to merge two sorted linked lists
    DonThuc* merge(DonThuc* left, DonThuc* right) {
        DonThuc* result = nullptr;
        DonThuc* temp = nullptr;

        while (left != nullptr && right != nullptr) {
            if (left->soMu > right->soMu) {
                if (result == nullptr) {
                    result = temp = left;
                } else {
                    temp->next = left;
                    temp = temp->next;
                }
                left = left->next;
            } else {
                if (result == nullptr) {
                    result = temp = right;
                } else {
                    temp->next = right;
                    temp = temp->next;
                }
                right = right->next;
            }
        }

        // Append remaining elements
        if (left != nullptr) {
            temp->next = left;
        } else if (right != nullptr) {
            temp->next = right;
        }

        return result;
    }

    // Recursive function to sort the linked list using merge sort
    DonThuc* mergeSort(DonThuc* head) {
        // Base case: If the linked list has 0 or 1 DonThuc, it's already sorted
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Find the middle DonThuc
        DonThuc* middle = getMiddle(head);

        // Split the linked list into two halves
        DonThuc* left = head;
        DonThuc* right = middle->next;
        middle->next = nullptr;

        // Recursively sort left and right halves
        left = mergeSort(left);
        right = mergeSort(right);

        // Merge the sorted halves
        return merge(left, right);
    }

    DaThuc* cong(DaThuc* b) {
        DaThuc* ans = new DaThuc();

        DonThuc* p = this->head;

        while (p != NULL) {
            auto heSoA = p->heSo;
            auto soMuA = p->soMu;

            bool timThay = false;

            DonThuc* p1 = b->head;
            while (p1 != NULL) {
                auto soMuB = p1->soMu;
                if (soMuA == soMuB) {
                    p1->heSo += heSoA;
                    timThay = true;
                }
                p1 = p1->next;
            }
            if (!timThay) {
                ans->insertTail(heSoA, soMuA);
            }
            p = p->next;
        }
        DonThuc* currentBDonThuc = b->head;
        while (currentBDonThuc != NULL) {
            if (currentBDonThuc->heSo != 0) {
                ans->insertTail(currentBDonThuc->heSo, currentBDonThuc->soMu);
            }
            currentBDonThuc = currentBDonThuc->next;
        }

        ans->head = mergeSort(ans->head);

        return ans;
    }

    DaThuc* tru(DaThuc* b) {
        DaThuc* ans = new DaThuc();

        DonThuc* p = this->head;

        while (p != NULL) {
            auto heSoA = p->heSo;
            auto soMuA = p->soMu;

            bool timThay = false;

            DonThuc* p1 = b->head;
            while (p1 != NULL) {
                auto soMuB = p1->soMu;
                if (soMuA == soMuB) {
                    p1->heSo -= heSoA;
                    timThay = true;
                }
                p1 = p1->next;
            }
            if (!timThay) {
                ans->insertTail(heSoA, soMuA);
            }
            p = p->next;
        }
        DonThuc* currentBDonThuc = b->head;
        while (currentBDonThuc != NULL) {
            if (currentBDonThuc->heSo != 0) {
                ans->insertTail(currentBDonThuc->heSo, currentBDonThuc->soMu);
            }
            currentBDonThuc = currentBDonThuc->next;
        }

        ans->head = mergeSort(ans->head);

        return ans;
    }
};
