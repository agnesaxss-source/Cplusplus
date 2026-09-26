
#include <iostream>
using namespace std;

int main() {

    //int i = 1;

    //while (i <= 100) {
    //    cout << i << endl;
    //    i++;
    //}



    /* int i = 1;

        while (i <= 200) {
            if (i % 2 == 0) {
                cout << i << " - even" << endl;
            }


            i++;
        }*/

    /*int N;
    int number;
    int sum = 0;
    int i = 1;
    int counteven = 0;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N) {
        cout << "Enter number " << i << ": ";
        cin >> number;

        if (number % 2 == 0) {
            sum = sum + number;
            counteven++;
        }

        i++;
    }

    if (counteven == 0) {
        cout << "You don't have any even numbers." << endl;
    }
    else {
        cout << "Sum of even numbers: " << sum << endl;
    }*/


    /*int number;
    int i = 1;
    int sum = 0;
    int average = 0;
    while (i <= 10) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        sum = sum + number;
        average = sum / 10;
        i++;
    }


    cout << "Sum:" << sum << endl;
    cout << "Average:" << average << endl;*/



    /*int i = 100;

    do {
        cout << i << " ";
        i--;
    } while (i >= 1);*/

    /*int number;
    int i = 1;
    int sum = 0;
    do {
        cout << "Enter number " << i << ": ";
        cin >> number;

        sum = sum + number;

        i++;

    } while (i <= 7);

    cout << "Sum: " << sum << endl;*/


   /* int sum = 0;

    for (int i = 1; i <= 12; i++) {
        sum = sum + i;
    }

    cout << "The clock strikes " << sum << " times." << endl;*/



int number;
int sum = 0;

for (;;) {
    cout << "Enter number: ";
    cin >> number;

    if (number == 0) {
        break;
    }

    sum = sum + number;
}

cout << "Sum: " << sum << endl;



        return 0;
    }



