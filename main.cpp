#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

// 1.2.5 АЛГОРИТМ accumulate

int SvertkaAue (int a, int b) {
    return a * b;
}

double FoldDistance(double current_distance, pair<double, double> section) {
	return current_distance + section.first * section.second;
}

pair<double, double> FoldTimeAndDistance(pair<double, double> time_and_distance,
                                         pair<double, double> section) {
    double section_distance = section.first * section.second;
    return {time_and_distance.first + section.first,
            time_and_distance.second + section_distance};
}

int main () {
/*     vector<int> xs = {45, 50, 65, 20, 30, 40};
    int sum = accumulate(xs.begin(), xs.end(), 0);
    cout << sum << endl; */

    vector<int> numbers;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        numbers.push_back(value);
    }
// Алгоритм accumulate складывает все элементы вектора слева направо.
    int sum = accumulate(numbers.begin(),numbers.end(), 0);
    cout << sum;

//  Задаём свою функцию для свёртки (SvertkaAue)
    vector<int> multily = {4, 5, 10, 30, 2, 100};
// accumulate, чтобы найти произведение элементов вектора (где 1 - начальное значение)
    cout << accumulate(multily.begin(), multily.end(), 1, SvertkaAue) << endl;

// Найти путь человека, который двигался с разной скоростью на разных участках пути
    vector<pair<double, double>> section1{
        {1.0, 5}, {0.5, 8}, {2, 3.5}
    };
    double total_distance = accumulate(section1.begin(), section1.end(), 0.0, FoldDistance); // 0.0 - начальный путь
    cout << "Total distance: "s << total_distance << " km"s << endl;

// Изменим функцию свёртки, чтобы она накапливала не только расстояние, но и время. Вычисляем полный путь и время движения
    vector<pair<double, double>> sections{
        {1.0, 5}, {0.5, 8}, {2, 3.5}
    };
// С использованием accumulate вычисляется суммарное время и расстояние
    pair<double, double> time_and_distance = accumulate(
        sections.begin(), sections.end(), pair{0.0, 0.0}, FoldTimeAndDistance);
    cout << "Total time: "s << time_and_distance.first << " hours"s << endl;
    cout << "Total distance: "s << time_and_distance.second << " km"s << endl;
// Зная суммарные время и расстояние, вычислим среднюю скорость
    cout << "Average speed: "s << time_and_distance.second / time_and_distance.first << " km/h"s << endl;
}