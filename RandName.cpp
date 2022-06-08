#include <iostream>
#include <vector>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;


string randomName(int length) {

    char consonents[] = { 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z' };
    char vowels[] = { 'a','e','i','o','u','y' };

    string name = "";
    srand((int)time(0));
    int random = rand() % 2;
    int count = 0;

    for (int i = 0; i < length; i++) {

        if (random < 2 && count < 2) {
            name = name + consonents[rand() % 19];
            count++;
        }
        else {
            name = name + vowels[rand() % 5];
            count = 0;
        }

        random = rand() % 2;

    }

    return name;

}


int main() {

    cout << "Enter a name length: " << endl;

    int length;

    cin >> length;

    cout << randomName(length) << endl;

    return 0;

}