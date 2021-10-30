#include <iostream>
#include <random>

using namespace std;

int main()
{
    // Learn our PC work with random numbers

    // World size
    const int wSizeX = 70;
    const int wSizeY = 40;



    // Our map
    char gMap[wSizeY][wSizeX];
    // Player map :3
    char pMap[wSizeY][wSizeX];

    // Chickens on the map :>
    const int chickensAmount = 10;
    int chickensX[chickensAmount];
    int chickensY[chickensAmount];

    // Player position :3
    int pPosX = wSizeX/2;
    int pPosY = wSizeY/2;

    // Player action :3
    char pAction = ' ';

    // Randomize chickens positions
    for (int chickenNumber=0; chickenNumber<chickensAmount; chickenNumber++) {
        chickensX[chickenNumber] = rand()%(wSizeX-1) + 1;
        chickensY[chickenNumber] = rand()%(wSizeY-1) + 1;
    }


    // Map Generation
    for (int y=0; y<wSizeY; y++) {
        for (int x=0; x<wSizeX; x++) {
            if (x == 0 ||
                y == 0 ||
                x == wSizeX - 1 ||
                y == wSizeY -1)

                gMap[y][x] = 't';
            else
            switch(rand()%20) {
                case 1: gMap[y][x] = 't'; break;
                case 2: gMap[y][x] = 's'; break;
                default: gMap[y][x] = '.';
            }
            pMap[y][x] = '*';
        }
    }

    while (true) {
        system ("cls"); // system("cls"); for mustdie

        // Update player map according to movement

        pMap[pPosY+1][pPosX] = gMap[pPosY+1][pPosX];
        pMap[pPosY-1][pPosX] = gMap[pPosY-1][pPosX];
        pMap[pPosY][pPosX+1] = gMap[pPosY][pPosX+1];
        pMap[pPosY][pPosX-1] = gMap[pPosY][pPosX-1];
        pMap[pPosY+1][pPosX+1] = gMap[pPosY+1][pPosX+1];
        pMap[pPosY-1][pPosX+1] = gMap[pPosY-1][pPosX+1];
        pMap[pPosY+1][pPosX-1] = gMap[pPosY+1][pPosX-1];
        pMap[pPosY-1][pPosX-1] = gMap[pPosY-1][pPosX-1];

        // Draw map on screen

        for (int y=0; y<wSizeY; y++) {
            for (int x=0; x<wSizeX; x++) {

                // If player at this point - just place player

                if (pPosX == x && pPosY == y) {
                    cout << "@";
                    continue;
                }

                // Check if there are chicken at this point
                // (one of them)

                bool chickenExists = false;
                if (pMap[y][x] != '*') { // Actually, draw only if there is no fog
                    for (int chickenNumber=0; chickenNumber<chickensAmount; chickenNumber++)
                        if (chickensX[chickenNumber] == x &&
                            chickensY[chickenNumber] == y) {
                            chickenExists = true;
                            break;
                            }
                }

                if (chickenExists)
                    cout << "\e[93mc\e[39m";
                else
                    // Draw all other elements on screen if there any
                    switch(pMap[y][x]) {
                        case 't': cout << "\e[32mt\e[39m"; break;
                        case 's': cout << "\e[94ms\e[39m"; break;
                        default: cout << pMap[y][x];
                    }
            }
            cout << endl;
        }

        // Ask player to make action

        cout << ">";
        cin >> pAction;

        // Process player action (movement for current time)

        switch(pAction) {
            case 'w': if (gMap[pPosY-1][pPosX] == '.') pPosY--; break;
            case 's': if (gMap[pPosY+1][pPosX] == '.') pPosY++; break;
            case 'a': if (gMap[pPosY][pPosX-1] == '.') pPosX--; break;
            case 'd': if (gMap[pPosY][pPosX+1] == '.') pPosX++; break;
            case 'i': system("cls");
                       cout << "Inventory: " << endl;



        }

        // Process chickens moves

        for (int chickenNumber=0; chickenNumber<chickensAmount; chickenNumber++) {
            int chickenPosY = chickensY[chickenNumber];
            int chickenPosX = chickensX[chickenNumber];
            if (rand()%1 == 0) { // Do chicken want to move?
                switch(rand()%4) { // Where chicken want to move?
                    case 0: if (gMap[chickenPosY-1][chickenPosX] == '.') chickensY[chickenNumber]--; break;
                    case 1: if (gMap[chickenPosY+1][chickenPosX] == '.') chickensY[chickenNumber]++; break;
                    case 2: if (gMap[chickenPosY][chickenPosX-1] == '.') chickensX[chickenNumber]--; break;
                    case 3: if (gMap[chickenPosY][chickenPosX+1] == '.') chickensX[chickenNumber]++; break;
                }
            }
        }
    }
}

