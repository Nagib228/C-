#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 1.2.3 АЛГОРИТМЫ count И count_if

bool IsPositive(int x) {
    return x > 0;
}

// count - сколько раз конкретный элемент встречается в контейнере
int main () {
    const vector<int> xs = {1, 2, 1, 1, 5};
    cout << count(xs.begin(), xs.end(), 1) << endl;  //Количество единиц в веторе xs
//Функции begin и end в коде означают, что операция проводится над всем содержимым вектора.
    const vector<string> escapees = {"cat"s, "dog"s, "parrot"s, "cat"s, "rat"s, "parrot"s, "cat"s, "dog"s};
    cout << count(escapees.begin(), escapees.end(), "parrot"s);


//count_if принимает третьим аргументом не значение, а ссылку на функцию и считает значения в контейнере, для которых эта функция возвращает true
    int num_positive = count_if(xs.begin(), xs.end(), IsPositive);
    cout << num_positive << endl;
}