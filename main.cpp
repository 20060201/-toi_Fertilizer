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

//
//
// 天數                基數  高度 
//  1.		            -     10 
//  2.		            10 	  11 
//  3.	(使用神奇肥料)	 10    12 
//  4.		             3 	  16 
//  5.		            10 	  17 
//  6.	(使用神奇肥料)	 10    18 
//  7.		             3 	  24 
//  8.		            10 	  26 
//  9.	(休假) 	        10 	  28 
//  10.	(休假)	        -     28 
//  11.	(開店&顧客拜訪)	 -     28 
//  12.	(使用神奇肥料)	 10    30 
//  13.		             3 	  40 
//  14.		            10 	  44 
//  15.	(使用神奇肥料)	 10    48 
//  16.		             3 	  64 
//  17.		            10 	  70 
//  18.	(使用神奇肥料)	 10    77 
//  19.	(休假)	         3 	 102 
//  20.	(休假)	        -    102 
//  21.	(開店&顧客拜訪)	 -    102 
//  22.	(使用神奇肥料)	 10   112 
//  23.		             3 	 149 
//  24.		             10  163 
//  25.	(使用神奇肥料)	 10   179 
//  26.		             3 	 238 
//  27.		            10 	 261 
//  28.	(使用神奇肥料)	 10   287 
//  29.	(休假)	         3 	 382 
//  30.	(休假)	        -  	 382 
//  31.	(開店&顧客拜訪)	 -    382 
//  32.	(使用神奇肥料)	 10   420 