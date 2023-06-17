#include <iostream>
using namespace std;

class expense {
public:
  int emi;
  int edu;

  expense(int emi1, int edu1) {
    emi = emi1;
    edu = edu1;
  }

  expense operator+(const expense& other) {
    return expense(emi + other.emi, edu + other.edu);
  }

  int get_emi() { return emi; }

  int get_edu() { return edu; }
};

int main() {
  int emi_may, edu_may;
  int emi_june, edu_june;
  cin >> emi_may;
  cin >> emi_june;
  cin >> edu_may;
  cin >> edu_june;
  
  expense may(emi_may, edu_may);
  expense june(emi_june, edu_june);

  expense total_emi = may + june;
  cout << "Total EMI: " << total_emi.get_emi() << endl;

  int total_education = may.get_edu() + june.get_edu();
  cout << "Total education expense: " << total_education << endl;

  return 0;
}
