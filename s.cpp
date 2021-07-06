#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;
struct date
{
    char daymon[6];
    int year;
};

class Student {
    char surname[30];
    char name[30];
    char patronymic[30];
    date t;
    char adr[30], fac[20];
    int kurs;
    int phone;
public:
    Student();
    void spisok1(int n, Student m[]);
    void spisok2(int n, Student m[]);
    void spisok3(int n, Student m[]);
};
Student::Student()
{
    cout << "Input surname : "; cin >> surname;
    cout << "Input name : "; cin >> name;
    cout << "Input otchestvo : "; cin >> patronymic;
    cout << "Input date of born\n"; cin >> t.daymon >> t.year;
    cout << "Input adr : "; cin >> adr;
    cout << "Input fac : "; cin >> fac;
    cout << "Input kurs : "; cin >> kurs;
    cout << "Input phone : "; cin >> phone;
    cout << endl;
}
void Student::spisok1(int n, Student m[])//список 1 
{
    cout << " Spisok 1 " << endl;
    for (int i = 0; i < n; i++)
    {
        if (m[i].fac == "economic")
        {
            cout << "Surname : " << m[i].surname << endl;
            cout << "Name : " << m[i].name << endl;
            cout << "Otchestvo : " << m[i].patronymic << endl;
            cout << "Was born : " << m[i].t.daymon << '.' << m[i].t.year << endl;
            cout << "Address : " << m[i].adr << endl;
            cout << "Phone : " << m[i].phone << endl;
            cout << "Fac : " << m[i].fac << endl;
            cout << "Kurs : " << m[i].kurs << endl;
            cout << "Phone : " << m[i].phone << endl;
            cout << endl;
        }

    }
}
void Student::spisok2(int n, Student m[])//список 2 
{
    cout << " Spisok 2 " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Surname : " << m[i].surname << endl;
        cout << "Name : " << m[i].name << endl;
        cout << "Otchestvo : " << m[i].patronymic << endl;
        cout << "Was born : " << m[i].t.daymon << '.' << m[i].t.year << endl;
        cout << "Address : " << m[i].adr << endl;
        cout << "Phone : " << m[i].phone << endl;
        cout << "Fac : " << m[i].fac << endl;
        cout << "Kurs : " << m[i].kurs << endl;
        cout << "Phone : " << m[i].phone << endl;
        cout << endl;
    }
}
void Student::spisok3(int n, Student m[])//список 3 
{
    cout << " Spisok 3 " << endl;
    for (int i = 0; i < n; i++)
    {
        if (m[i].t.year > 2000)
        {
            cout << "Surname : " << m[i].surname << endl;
            cout << "Name : " << m[i].name << endl;
            cout << "Otchestvo : " << m[i].patronymic << endl;
            cout << "Was born : " << m[i].t.daymon << '.' << m[i].t.year << endl;
            cout << "Address : " << m[i].adr << endl;
            cout << "Phone : " << m[i].phone << endl;
            cout << "Fac : " << m[i].fac << endl;
            cout << "Kurs : " << m[i].kurs << endl;
            cout << "Phone : " << m[i].phone << endl;
            cout << endl;
        }
    }
}
int main()
{
    int a = 0;
    int si = 0;
    int v = 5;
    int vi = 6;
    int ui = 7;
    int of = 8;
    int const n = 2;
    Student spis[n];
    for (int i = 0; i < n; i++)
    {
        spis[i] = Student();
    }
    spis->spisok1(n, spis);
    spis->spisok2(n, spis);
    spis->spisok3(n, spis);
    _getch();
    return 0;
}
