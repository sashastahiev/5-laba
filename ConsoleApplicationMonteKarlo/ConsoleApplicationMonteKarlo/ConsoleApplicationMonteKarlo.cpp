// ConsoleApplicationMonteKarlo.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <ctime>
#include <thread>

using namespace std;

bool independ(double* x, double* y, double* z, int r) {
    bool ind = true;
    for (int i = 0; i < r; i++)
        if (x[i] == x[r] && y[i] == y[r] && z[i] == z[r])
            ind = false;
    return ind;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    const int f = 100000;
    int count = 0;
    long double res;
    long double m = f;
    double* x = new double[f];
    double* y = new double[f];
    double* z = new double[f];
    for (int i = 0; i < f; i++) {
        x[i] = (rand() % 700) * pow(-1, rand() % 2) / 100;
        y[i] = (rand() % 700) * pow(-1, rand() % 2) / 100;
        z[i] = (rand() % 700) * pow(-1, rand() % 2) / 100;
        while (!independ(x, y, z, i)) {
            x[i] = (rand() % 700) * pow(-1, rand() % 2) / 100;
            y[i] = (rand() % 700) * pow(-1, rand() % 2) / 100;
            z[i] = (rand() % 700) * pow(-1, rand() % 2) / 100;
        }
        //cout << i << ") = " << x[i] << " " << y[i] << " " << z[i] << endl;
    }
    for (int i = 0; i < f; i++) {
        if (36 <= pow(x[i], 2) + pow(y[i], 2) + pow(z[i], 2) &&
            144 >= pow(x[i], 2) + pow(y[i], 2) + pow(z[i], 2) &&
            -sqrt((pow(x[i], 2) + pow(y[i], 2)) / 3) <= z[i] &&
            -sqrt((pow(x[i], 2) + pow(y[i], 2)) / 15) >= z[i] &&
            y[i] >= 0 && -sqrt(3) * x[i] >= y[i])
            count++;
    }
    cout << "count = " << count << endl;
    res = count / m;
    cout << res << "\n";
    cout << endl;
    delete[] x;
    delete[] y;
    delete[] z;
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    std::cout << "time to sum = " << diff.count() << "s\n";
}
 

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
