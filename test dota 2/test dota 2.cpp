#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int ball = 0;
    string a;
    cout << "Test dota 2. \nAre we starting? ? \n"; // Тест по доте 2. Начинаем?
    cin >> a;
    if (a == "yes") {
        cout << "Great, let's get started\n"; // Отлично начнем

        string b;
        cout << "The first question.\nAre you playing Dota 2?\n"; // Первый вопрос. Играешь в доту?
        cin >> b;

        if (b == "yes") {
            cout << "The second question\n"; // Второй вопрос
            ball += 1;
        }

        else {
            cout << "The second question\n"; // Второй вопрос
        }

        int c;
        cout << "How many characters are there in dota?\n"; //  Второй вопрос. Сколько персонажей  в дота?
        cin >> c;
        if (c == 124) {
            cout << "The third question\n"; // Третий вопрос
            ball += 1;
        }

        else {
            cout << "The third question\n"; // Третий вопрос
        }

        int d;
        cout << "Which attribute is superfluous\n1. Power\n2. Dexterity\n3. Smart\n3. Intelligence\n4. Universal\n"; // Какого атрибут лишний 1. Сила 2. Ловкость 3. Умный 3. Интеллект 4. Универсальны
        cin >> d;
        if (d == 3) {
            cout << "The fourth question\n"; // Четвертый вопрос
            ball += 1;
        }

        else {
            cout << "The fourth question\n"; // Четвертый вопрос
        }

        int e;
        cout << "Which position is superfluous?\n1 \n2 \n3 \n4 \n5 \n6\n"; // Какая позиция лишняя
        cin >> e;
        if (e == 6) {
            cout << "The fifth question\n"; // Пятый вопрос
            ball += 1;
        }

        else {
            cout << "The fifth question\n"; // Пятый вопрос
        }

        int f;
        cout << "How many main cards are there in dota 2\n 1. 3 \n 2. 4\n 3. 1\n"; // Сколько основных карт в дота 2
        cin >> f;
        if (f == 3) {
            cout << "The sixth question\n"; // Шестой вопрос
            ball += 1;
        }

        else {
            cout << "The sixth question\n"; // Шестой вопрос
        }

        string g;
        cout << "Which hero is one, but there are 5 of them?\n"; // Какой герой один, но их пять?
        cin >> g;
        if (g == "meepo") {
            cout << "The seventh question\n"; // Седьмой вопрос
            ball += 1;
        }

        else {
            cout << "The seventh question\n"; // Седьмой вопрос
        }

        string h;
        cout << "Which hero summons a copy of himself?\n"; // Какой герой может вызывать свою копию?
        cin >> h;
        if (h == "arc warden") {
            cout << "The eighth question\n"; // Восьмой вопрос
            ball += 1;
        }
        else {
            cout << "The eighth question\n"; // Восьмой вопрос
        }

        string i;
        cout << "What kind of bird hero is there in Dota 2?\n"; // Какой герой птица есть в дота 2?
        cin >> i;
        if (i == "phoenix") {
            cout << "The ninth question\n"; // Девятый вопрос
            ball += 1;
        }
        else {
            cout << "The ninth question\n"; // Девятый вопрос
        }

        string k;
        cout << "from which hero did zxc originate\n"; // От какого героя произошел zxc
        cin >> k;
        if (k == "shadow fiend") {
            cout << "The tenth and last question)\n"; // Десятый последний вопрос
            ball += 1;
        }
        else {
            cout << "The tenth and last question)\n"; // Десятый последний вопрос
        }

        string z = "";
        cout << "Where can I download dota 2 from =)\n"; // Откуда можно скачать dota 2 =)
        cin >> z;
        if (z == "steam") {
            cout << "You passed the survey. Let's summarize the results\n"; // Ты прошел опрос. Давай подведем результаты
            ball += 1;
            cout << "from 0 to 4 - Beginner\nfrom 4 to 7 - Amateur from\n7 to 10 professional\n"; // от 0 до 4 - Новичок от 4 до 7 - Любитель от 7 до 10 профессионал
            if (ball >= 1 && ball <= 5) {
                cout << "Your score " << ball << " Therefore you are a beginner" << endl;
            }
            else if (ball >= 4 && ball <= 8) {
                cout << "Your score " << ball << " Therefore, you are a novice amateur" << endl;
            }
            else if (ball >= 7 && ball <= 11) {
                cout << "Your score " << ball << " Therefore, you are a beginner professional" << endl;
            }
        }
        else {
            cout << "You passed the survey. Let's summarize the results\n"; // Ты прошел опрос. Давай подведем результаты
            ball += 1;
            cout << "from 0 to 4 - Beginner\nfrom 4 to 7 - Amateur from\n7 to 10 professional\n"; // от 0 до 4 - Новичок от 4 до 7 - Любитель от 7 до 10 профессионал
            if (ball >= 1 && ball <= 5) {
                cout << "Your score " << ball << " Therefore you are a beginner" << endl;
            }
            else if (ball >= 4 && ball <= 8) {
                cout << "Your score " << ball << " Therefore, you are a novice amateur" << endl;
            }
            else if (ball >= 7 && ball <= 11) {
                cout << "Your score " << ball << " Therefore, you are a beginner professional" << endl;
            }
        }

            

            
        }
    }


