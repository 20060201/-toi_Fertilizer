#include <iostream>
using namespace std;

int main() {
    int Height1 = 0; //高度 
    int Height2 = 0; //要求高度
    int Power = 0; //耐性
    int Day = 0;
    bool Yes = false;
    bool Exit = false;

    int Flower1[10] = {0,10,10,3,10,10,3,10,10,0};
    int Flower2[10] = {0,10,3,10,10,3,10,10,3,0};

    int i = 0;
    int j = 0;
    int k = 0;

    cin >> Height1 >> Height2 >> Power;

    do {
        Day ++;
        i = Day % 10;
        
        if (i == 0) {
            i = 10;
        }

        //1~10天
        if (Day <= 10) {
            if (Flower1[i - 1] > 0) {
                Height1 = Height1 + (Height1 / Flower1[i - 1]);
            }
        } else { //11以後
            if (Flower2[i - 1] > 0) {
                Height1 = Height1 + (Height1 / Flower2[i - 1]);
            }
        }

        if (Height1 >= Height2) {
            Exit = true;
            Yes = true;
        } else {
            j = (Day % 10);
            if (Day > 10 && j == 1) {
                Day -=1;
            }
        }

        if (Power <= 0) {
            Yes = false;
            Exit = true;
        }
    } while (Exit != true);

    if (Yes) {
        cout << "Day: " << Day << "\n";
    } else {
        cout << "unsalable";
    }

    return 0;
}