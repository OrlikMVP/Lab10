#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Rectangle {
    private:
        double x1, x2, y1, y2, dx, dy,r;
    public:
        // Конструктор с 4 параметрами
        Rectangle(double a, double b, double c, double d) : x1(a), x2(b), y1(c), y2(d)	{	}
        // Конструктор по умолчанию
        Rectangle(): x1(2), x2(5), y1(2), y2(0)	{	}
        ~Rectangle() { } // Деструктор

        void Input(); // метод ввода с клавиатуры
        void Result(); // метод вывода на экран
        void Peremeshenie(); // перемещение
        void size(); // изменение размера
        void Minimal(); // построение минимального
        void Cross(); // пересечение 2 прямоугольников
};
void Rectangle::Input() {
    cout << "Введите координату х левых точек" << endl;
    cin >> x1;
    cout << "Введите координату y верхних точек" << endl;
    cin >> y1;
    cout << "Введите координату х правых точек" << endl;
    cin >> x2;
    cout << "Введите координату y нижних точек" << endl;
    cin >> y2;
}

void Rectangle::Result() {
    cout << "Вы ввели следующие координаты прямоугольника:" << endl;
    cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
    cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
    cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
    cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
}
void Rectangle::Peremeshenie() {
    cout << " На сколько единиц вы хотите переместить прямоугольник по оси X ?" << endl;
    cin >> dx;
    cout << " На сколько единиц вы хотите переместить прямоугольник по оси Y ?" << endl;
    cin >> dy;
    cout << "Получились следующие координаты прямоугольника:" << endl;
    cout << " A:" << "(" << x1+dx << "," << y1+dy << ")" << endl;
    cout << " B:" << "(" << x2+dx << "," << y1+dy << ")" << endl;
    cout << " C:" << "(" << x2+dx << "," << y2+dy << ")" << endl;
    cout << " D:" << "(" << x1+dx << "," << y2+dy << ")" << endl;
}

void Rectangle::size() {
    cout << " Во сколько раз изменяем размер прямоугольника ?" << endl;
    cin >> r;
    cout << "Получились следующие координаты прямоугольника:" << endl;
    cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
    cout << " B:" << "(" << x2*r << "," << y1 << ")" << endl;
    cout << " C:" << "(" << x2*r << "," << y2 << ")" << endl;
    cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;

}
void Rectangle::Minimal() {
    double x3 , x4 , y3 , y4 , x_min = x1, x_max = x1, y_min = y1,y_max = y1;
    cout << " 2 прямоугольник:" << endl;
    cout << "Введите координату х левых точек" << endl;
    cin >> x3;
    cout << "Введите координату y верхних точек" << endl;
    cin >> y3;
    cout << "Введите координату х правых точек" << endl;
    cin >> x4;
    cout << "Введите координату y нижних точек" << endl;
    cin >> y4;
    cout << endl;
    cout << "Вы ввели следующие координаты 1 прямоугольника:" << endl;
    cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
    cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
    cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
    cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
    cout << endl;
    cout << "Вы ввели следующие координаты 2 прямоугольника:" << endl;
    cout << " A:" << "(" << x3 << "," << y3 << ")" << endl;
    cout << " B:" << "(" << x4 << "," << y3 << ")" << endl;
    cout << " C:" << "(" << x4 << "," << y4 << ")" << endl;
    cout << " D:" << "(" << x3 << "," << y4 << ")" << endl;
    cout << endl;
    double A[4]= {x1,x2,x3,x4}, B[4]= {y1,y2,y3,y4};
    for(int i = 0; i < 4; i ++)
    {
        if(x_max < A[i])
        {
            x_max = A[i];
        }
    if(y_max < B[i])
        {
            y_max = B[i];
        }
    if(x_min > A[i])
        {
            x_min = A[i];
        }
    if(y_min > B[i])
        {
            y_min = B[i];
        }
    }
    cout <<" Наименьший прямоугольник содержащий оба предыдущих имеет следующие координаты: " << endl;
    cout << " A:" << "(" << x_min << "," << y_max << ")" << endl;
    cout << " B:" << "(" << x_max << "," << y_max << ")" << endl;
    cout << " C:" << "(" << x_max << "," << y_min << ")" << endl;
    cout << " D:" << "(" << x_min << "," << y_min << ")" << endl;
}
void Rectangle::Cross() {
    double x3 , x4 , y3 , y4 , x_min = x1, x_max = x1, y_min = y1,y_max = y1, x1_sred,x2_sred,y1_sred,y2_sred;
    cout << " 2 прямоугольник:" << endl;
    cout << "Введите координату х левых точек" << endl;
    cin >> x3;
    cout << "Введите координату y верхних точек" << endl;
    cin >> y3;
    cout << "Введите координату х правых точек" << endl;
    cin >> x4;
    cout << "Введите координату y нижних точек" << endl;
    cin >> y4;
    cout << endl;
    cout << "Вы ввели следующие координаты 1 прямоугольника:" << endl;
    cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
    cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
    cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
    cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
    cout << endl;
    cout << "Вы ввели следующие координаты 2 прямоугольника:" << endl;
    cout << " A:" << "(" << x3 << "," << y3 << ")" << endl;
    cout << " B:" << "(" << x4 << "," << y3 << ")" << endl;
    cout << " C:" << "(" << x4 << "," << y4 << ")" << endl;
    cout << " D:" << "(" << x3 << "," << y4 << ")" << endl;
    cout << endl;
    double A[4]= {x1,x2,x3,x4}, B[4]= {y1,y2,y3,y4};
    for(int i = 0; i < 4; i ++)
    {
        if(x_max < A[i])
        {
            x_max = A[i];
        }
    if(y_max < B[i])
        {
            y_max = B[i];
        }
    if(x_min > A[i])
        {
            x_min = A[i];
        }
    if(y_min > B[i])
        {
            y_min = B[i];
        }
    }


    for(int i = 0; i < 4; i ++)
    {
        if((A[i] != x_max) && (A[i] != x_min))
        {
            x1_sred = A[i];
            break;
        }
    }
    for(int i = 0; i < 4; i ++)
    {
        if((A[i] != x_max) && (A[i] != x_min) && (A[i] != x1_sred))
        {
            x2_sred = A[i];
            break;
        }
    }
    for(int i = 0; i < 4; i ++)
    {
        if((B[i] != y_max) && (B[i] != y_min))
        {
            y1_sred = B[i];
            break;
        }
    }
    for(int i = 0; i < 4; i ++)
    {
        if((B[i] != y_max) && (B[i] != y_min) && (B[i] != y1_sred))
        {
            y2_sred = B[i];
            break;
        }
    }
        cout <<" Прямоугольник на пересечении двух предыдущих имеет следующие координаты: " << endl;
cout << " A:" << "(" << x1_sred << "," << y2_sred << ")" << endl;
cout << " B:" << "(" << x2_sred << "," << y2_sred << ")" << endl;
cout << " C:" << "(" << x2_sred << "," << y1_sred << ")" << endl;
cout << " D:" << "(" << x1_sred << "," << y1_sred << ")" << endl;

}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Прямоугольники \n"
        "Справка: \n 1 - Ввод данных \n 2 - Вывод \n 3 - Перемещение \n 4 - изменение размера\n"
        " 5 - Минимальный прямоугольник содержащий 2 заданных\n 6 - Прямоугольник получившийся на пересечении 2 заданных\n 0 - выход\n" << endl;
    Rectangle ObjectA; // Создаем объект без параметров, то есть будет использован конструктор по умолчанию
    char Control;
        cout << ">";
        cin >> Control;


        switch (Control)
        {

            case '1':
                ObjectA.Input();
                cout << ">";
                cin >> Control;
            case '2':
                ObjectA.Result();
                cout << ">";
                cin >> Control;
            case '3':
                ObjectA.Peremeshenie();
                cout << ">";
                cin >> Control;
            case '4':
                ObjectA.size();
                cout << ">";
                cin >> Control;
            case '5':
                ObjectA.Minimal();
                cout << ">";
                cin >> Control;
            case '6':
                ObjectA.Cross();
                cout << ">";
                cin >> Control;
            case '0': break;
        }

return 0;
}