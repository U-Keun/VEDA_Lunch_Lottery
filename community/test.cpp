#include <iostream>
#include "community.h"
#include "../utility/fileIO.h"

using namespace std;

int main() {
    // Community ��ü ����
    Community community;

    // �л� �����͸� �ҷ����� ���
    cout << "�л� �����͸� �ҷ��ɴϴ�..." << endl;
    auto studentsData = community.loadStudents();

    cout << "�ҷ��� �л� ������:" << endl;
    for (const auto& row : *studentsData) {
        for (const auto& item : row) {
            cout << item << " ";
        }
        cout << endl;
    }

    // ���� ��Ƽ ���� �� ���
    cout << "���� ��Ƽ�� �����մϴ�..." << endl;
    vector<vector<string>> party = community.makeParty();

    // ������ ��Ƽ�� ���Ͽ� ����
    cout << "��Ƽ ����� ���Ͽ� �����մϴ�..." << endl;
    community.saveParty();

    return 0;
}

//g++ -g -std=c++17 -o test.exe test.cpp community.h community.cpp  <- �������Ҷ� �̰ɷ�!