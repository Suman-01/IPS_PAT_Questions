#include <iostream>
#include <string>
using namespace std;

class zenz {
    public:
        int year;
        string col;
        string eng;
        float mil;
        zenz(int x, float y, string z, string w);
        void prt_dtls();
};
zenz::zenz(int x, float y, string z, string w){
    year = x;
    mil = y;
    col = z;
    eng = w;
}

void zenz::prt_dtls(){
    cout << "Year: " << year << endl;
    cout << "Mileage: " << mil << endl;
    cout << "Colour: " << col << endl;
    cout << "Engine: " << eng << endl;
}

int main(){
    int a;
    cin >> a;
    
    zenz car1(1990, 75.8, "Yellow", "Ab11");
    zenz car2(1995, 95.8, "Red", "Ab21");
    zenz car3(1993, 85.8, "Green", "Ab51");
    zenz car4(1994, 95.9, "Black", "Ab81");
    
    if (a==1){
        car1.prt_dtls();
    }
    else if (a==2){
        car2.prt_dtls();
    }
    else if (a==3){
        car3.prt_dtls();
    }
    else if (a==4){
        car4.prt_dtls();
    }
    else{
        cout << "Valid input required!";
    }
    return 0;
}