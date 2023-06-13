#include <iostream>
#include <string>

using namespace std;

class bank {
private:
    string name;
    int acc_num;
    double bal;

public:
    bank(const string& name1, int num, double inital) :
        name(name1), acc_num(num), bal(inital) {}

    string get_name() const {
        return name;
    }

    int get_num() const {
        return acc_num;
    }

    double get_bal() const {
        return bal;
    }

    friend void transfer(bank& send, bank& rec, double amt);
};

void transfer(bank& send, bank& rec, double amt) {
    if (send.bal < amt) {
        cout << "INVALID" << endl;
        return;
    }

    send.bal -= amt;
    rec.bal += amt;

    cout << "Transfer successfull" << endl;
}

int main() {
    string acc1_nm, acc2_nm;
    int acc1_no, acc2_no;
    double acc1_bal, acc2_bal;

    cout << "User 1:" << endl;
    cout << "Name: ";
    getline(cin, acc1_nm);

    cout << "Account Number: ";
    cin >> acc1_no;

    cout << "Balance: ";
    cin >> acc1_bal;
    cout << endl;

    cout << "User 2:" << endl;
    cout << "Name: ";
    getline(cin, acc2_nm);

    cout << "Account Number: ";
    cin >> acc2_no;

    cout << "Balance: ";
    cin >> acc2_bal;


    bank acc1(acc1_nm, acc1_no, acc1_bal);
    bank acc2(acc2_nm, acc2_no, acc2_bal);

    cout << "\nAccount 1 - Name: " << acc1.get_name()
        << ", Account Number: " << acc1.get_num()
        << ", Balance: " << acc1.get_bal() << endl;

    cout << "Account 2 - Name: " << acc2.get_name()
        << ", Account Number: " << acc2.get_num()
        << ", Balance: " << acc2.get_bal() << endl;

    double tran_amt;
    cout << "\nTransfer Amt.: ";
    cin >> tran_amt;

    transfer(acc1, acc2, tran_amt);

    cout << "\nAcc1 Name: " << acc1.get_name()
        << ", Acc1 Number: " << acc1.get_num()
        << ", Acc1 Balance: " << acc1.get_bal() << endl;

    cout << "Acc2 Name: " << acc2.get_name()
        << ", Acc2 Number: " << acc2.get_num()
        << ", Acc2 Balance: " << acc2.get_bal() << endl;

    return 0;
}
