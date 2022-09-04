#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

void dz1_1()
{
    setlocale(0, "");
    cout << "Алексей";
}

void dz1_2()
{
    double x=0;
    double y=0;
    cout << "Enter x, y: ";
    if (cin >> x && cin >> y) {
        cout << "x + y = ";
        cout << x + y << endl;
        cout << "x - y = ";
        cout << x - y << endl;
        cout << "x * y = ";
        cout << x * y << endl;
        if (y != 0) {
            cout << "x / y = ";
            cout << x / y << endl;
        }
        else {
            cout << "Dividing by zero! Error";
        }
    }
    else {
        cout << "incorrect data in";
    }
}

void dz1_3()
{
    double b=0;
    double c=0;
    cout << " Enter the values b, c: " << endl;
    if (cin >> b && cin >> c) {
        if (b == 0) {
            if (c == 0) {
                cout << "x - any number";
            }
            else {
                cout << "no solution";
            }
        }
        else {
            if (c == 0) {
                c = -c;
            }
            cout << "x == " << -c / b << endl;
        }
    }
    else {
        cout << "incorrect data in";
    }
}

void dz1_4()
{
    double a=0;
    double b=0;
    double c=0;
    long double discriminant;
    cout << "Enter the values a,b,c:" << endl;
    if (cin >> a && cin >> b && cin >> c)
    {
        if (a == 0)
        {
            if (b == 0) {
                if (c == 0) {
                    cout << "x - any number";
                }
                else {
                    cout << "no solution";
                }
            }
            else {
                if (c == 0) {
                    c = -c;
                }
                cout << "x == " << -c / b << endl;
            }
        }
        else
        {
            discriminant = pow(b, 2) - 4 * a * c;
            if (discriminant>0) {
                cout << (-b - sqrt(discriminant)) / (2 * a) << " " << (-b + sqrt(discriminant)) / (2 * a) << endl;
            }
            else if (discriminant == 0) {
                cout << -b / (2 * a);
            }
            else {
                cout << "no solutions" << endl;
            }
        }
    }
    else
    {
        cout << "incorrect data in";
    }
}

void dz1_5() {
    bool curtains;
    bool daytime;
    bool lamp;
    cout << "Are the curtains open ? (1 - yes, 0 - no)" << endl;
    if (cin >> curtains) {
        cout << "Is it daytime now ?  (1 - yes, 0 - no)" << endl;
        if (cin >> daytime) {
            cout << "Is the lamp on?  (1 - yes, 0 - no)" << endl;
            if (cin >> lamp) {
                if (daytime && curtains or lamp) {
                    cout << "The room is bright" << endl;
                }
                else {
                    cout << "The room is dark" << endl;
                }
            }
            else {
                cout << "incorrect data in";
            }
        }
        else {
            cout << "incorrect data in";
        }
    }
    else {
        cout << "incorrect data in";
    }
}

int main()
{
   dz1_5();
}