#pragma warning (disable : 4996)
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include "menu.h"
using namespace std;

void Menu::plsASE() {
    cout << "게임 진행을 위해서 전체화면으로 전환해 주세요(Alt+Shift+Enter)" << endl;
}

void Menu::texTxy(int y, int x) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

char Menu::mainMenu() {
    char rtn;
    texTxy(25, 0);

    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15) + 3) << right << "<2조 지렁이 게임>" << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 13)) << right << "┌───────────────┐" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15)) << right << "1. 게임시작" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15) - 1) << right << "2. RANKING" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15) - 3) << right << "3. 종료" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 13)) << right << "└───────────────┘" << endl;
    rtn = getch();
    system("cls");
    return rtn;
}
char Menu::startGameMenu() {
    char rtn;
    texTxy(25, 0);
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15)) << right << "-게임시작 메뉴" << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 13)) << right << "┌───────────────┐" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15)) << right << "1. 스테이지" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15)) << right << "2. 돌아가기" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 13)) << right << "└───────────────┘" << endl;
    rtn = getch();
    system("cls");
    return rtn;
}
char Menu::rankingMenu() {
    char rtn;
    texTxy(25, 0);
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15) - 2) << right << "-RAKING 메뉴" << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 13)) << right << "┌───────────────┐" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15) - 1) << right << "1. 랭킹출력" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15) + 1) << right << "2. 닉네임 검색" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 15) - 1) << right << "3. 돌아가기" << endl << endl;
    cout << setw((GetSystemMetrics(SM_CXSCREEN) / 13)) << right << "└───────────────┘" << endl;
    rtn = getch();
    system("cls");
    return rtn;
}
void Menu::menuMain() {
    char a;
    char rtn1, rtn2, rtn3;
    texTxy(25,0);
    plsASE();
    a = getch();
    system("cls");
    while (1) {
        rtn1 = mainMenu();
        while (rtn1 == '1') {
            rtn2 = startGameMenu();
            if (rtn2 == '2') { break; }
        }
        while (rtn1 == '2') {
            rtn3 = rankingMenu();
            if (rtn3 == '3') { break; }
        }
        if (rtn1 == '3') break;
    }
}
