#include <iostream>
using namespace std;

int main()
{
    // =================================================
    // ЗАДАНИЕ 1
    // С клавиатуры вводятся числа X, Y, Z
    // =================================================
    int X, Y, Z;

    cout << "Enter X Y Z: ";
    cin >> X >> Y >> Z;

    // каждое из чисел X и Y нечетное
    if (X % 2 != 0 && Y % 2 != 0)
    {
        cout << "condition is true" << endl;
    }
    else
    {
        cout << "condition is false" << endl;
    }

    // только одно из чисел X и Y меньше 20
    if ((X < 20 && Y >= 20) || (X >= 20 && Y < 20))
    {
        cout << "condition is true" << endl;
    }
    else
    {
        cout << "condition is false" << endl;
    }

    // хотя бы одно из чисел X и Y равно нулю
    if (X == 0 || Y == 0)
    {
        cout << "condition is true" << endl;
    }
    else
    {
        cout << "condition is false" << endl;
    }

    // каждое из чисел X, Y, Z отрицательное
    if (X < 0 && Y < 0 && Z < 0)
    {
        cout << "condition is true" << endl;
    }
    else
    {
        cout << "condition is false" << endl;
    }

    // только одно из чисел X, Y и Z кратно пяти
    int count = 0;

    if (X % 5 == 0)
    {
        count++;
    }

    if (Y % 5 == 0)
    {
        count++;
    }

    if (Z % 5 == 0)
    {
        count++;
    }

    if (count == 1)
    {
        cout << "condition is true" << endl;
    }
    else
    {
        cout << "condition is false" << endl;
    }

    // хотя бы одно из чисел X, Y, Z больше 100
    if (X > 100 || Y > 100 || Z > 100)
    {
        cout << "condition is true" << endl;
    }
    else
    {
        cout << "condition is false" << endl;
    }


    // =================================================
    // ЗАДАНИЕ 2
    // Клетка на шахматной доске определяется парой чисел
    // =================================================
    int a, b, c, d;

    cout << "\nEnter position A (a b): ";
    cin >> a >> b;

    cout << "Enter position B (c d): ";
    cin >> c >> d;

    // На поле positionA(a, b) расположена ладья.
    // Записать условие, при котором она угрожает полю positionB(c, d)
    if (a == c || b == d)
    {
        cout << "Rook: YES" << endl;
    }
    else
    {
        cout << "Rook: NO" << endl;
    }

    int dx = a - c;
    int dy = b - d;

    if (dx < 0)
    {
        dx = -dx;
    }

    if (dy < 0)
    {
        dy = -dy;
    }

    // На поле positionA(a, b) расположен слон.
    // Записать условие, при котором он угрожает полю positionB(c, d)
    if (dx == dy)
    {
        cout << "Bishop: YES" << endl;
    }
    else
    {
        cout << "Bishop: NO" << endl;
    }

    // На поле positionA(a, b) расположен король.
    // Записать условие, при котором он может одним ходом попасть на поле positionB(c, d)
    if (dx <= 1 && dy <= 1 && !(a == c && b == d))
    {
        cout << "King: YES" << endl;
    }
    else
    {
        cout << "King: NO" << endl;
    }

    // На поле positionA(a, b) расположен ферзь.
    // Записать условие, при котором он угрожает полю positionB(c, d)
    if ((a == c || b == d) || (dx == dy))
    {
        cout << "Queen: YES" << endl;
    }
    else
    {
        cout << "Queen: NO" << endl;
    }

    // На поле positionA(a, b) расположена белая пешка.
    // Записать условие, при котором она может одним ходом попасть на поле positionB(c, d)
    // при обычном ходе
    if (c == a && d == b + 1)
    {
        cout << "White pawn move: YES" << endl;
    }
    else
    {
        cout << "White pawn move: NO" << endl;
    }

    // когда она "бьет" фигуру или пешку соперника
    if (d == b + 1 && (c == a + 1 || c == a - 1))
    {
        cout << "White pawn attack: YES" << endl;
    }
    else
    {
        cout << "White pawn attack: NO" << endl;
    }


    // =================================================
    // ЗАДАНИЕ 3
    // Напечатать таблицу умножения
    // =================================================

    // Напечатать таблицу умножения на 7
    for (int i = 1; i <= 9; i++)
    {
        cout << i << " x 7 = " << i * 7 << endl;
    }

    // Напечатать таблицу умножения на N, которое вводится с клавиатуры
    int N;

    cout << "\nEnter N: ";
    cin >> N;

    for (int i = 1; i <= 9; i++)
    {
        cout << i << " x " << N << " = " << i * N << endl;
    }


    // =================================================
    // ЗАДАНИЕ 4
    // Найти и вывести на экран произведения
    // =================================================
    long long product;

    // произведение всех целых чисел от 8 до 15
    product = 1;

    for (int i = 8; i <= 15; i++)
    {
        product = product * i;
    }

    cout << "Product 8..15 = " << product << endl;

    // произведение всех целых чисел от a до 20
    int a1;

    cout << "Enter a: ";
    cin >> a1;

    product = 1;

    for (int i = a1; i <= 20; i++)
    {
        product = product * i;
    }

    cout << "Product a..20 = " << product << endl;

    // произведение всех целых чисел от 1 до b
    int b1;

    cout << "Enter b: ";
    cin >> b1;

    product = 1;

    for (int i = 1; i <= b1; i++)
    {
        product = product * i;
    }

    cout << "Product 1..b = " << product << endl;

    // произведение всех целых чисел от a до b
    int a2, b2;

    cout << "Enter a and b: ";
    cin >> a2 >> b2;

    product = 1;

    for (int i = a2; i <= b2; i++)
    {
        product = product * i;
    }

    cout << "Product a..b = " << product << endl;

    return 0;
}
