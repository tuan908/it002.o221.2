#include <iostream>
#include <string>

using namespace std;

class Candidate {
   private:
    string id;              // Mã thí sinh
    string name;            // Tên thí sinh
    string dob;             // Ngày tháng năm sinh
    float mathScore;        // Điểm thi Toán
    float literatureScore;  // Điểm thi Văn
    float englishScore;     // Điểm thi Anh

   public:
    // Hàm tạo không tham số
    Candidate() {
        id = "";
        name = "";
        dob = "";
        mathScore = 0;
        literatureScore = 0;
        englishScore = 0;
    }

    // Hàm tạo có tham số
    Candidate(string id, string name, string dob, float mathScore, float literatureScore,
              float englishScore) {
        this->id = id;
        this->name = name;
        this->dob = dob;
        this->mathScore = mathScore;
        this->literatureScore = literatureScore;
        this->englishScore = englishScore;
    }

    // Hàm nhập thông tin thí sinh
    void input() {
        cin.ignore();  // Xóa ký tự '\n' khỏi buffer cin
        getline(cin, id);
        getline(cin, name);
        getline(cin, dob);

        cin >> mathScore;
        cin >> literatureScore;
        cin >> englishScore;
    }

    // Hàm xuất thông tin thí sinh
    void output() {
        cout << "\nMa thi sinh: " << id << endl;
        cout << "Ten thi sinh: " << name << endl;
        cout << "Ngay thang nam sinh: " << dob << endl;
        cout << "Diem Toan: " << mathScore << endl;
        cout << "Diem Van: " << literatureScore << endl;
        cout << "Diem Anh: " << englishScore << endl;
    }

    // Hàm tính tổng điểm
    float getTotalScore() {
        return mathScore + literatureScore + englishScore;
    }
};
