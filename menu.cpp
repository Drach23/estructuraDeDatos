#include "menu.hpp"

using namespace std;
Menu::Menu() : numStudents(0),numTeachers(0) {}  // Inicializar el contador de estudiantes en 0

void Menu::start() {
    int option;
    do{
        cout<<"\tBienvenido"<<endl;
        cout<<"1. Ingresar un nuevo Alumno\n2.Ingresar un nuevo profesor\n3.Imprimir alumnos\n4.Imprimir profesores\n5.Salir\n opcion: ";
        cin>>option;
        switch (option) {
            case 1:{
                addStudent();
                break;
            }
            case 2:{
                addTeacher();
                break;
            }
            case 3:{
                showStudents();
                break;
            }
            case 4:{
                showTeachers();
            }
            case 5:{
                cout<<"Saliendo del programa"<<endl;
                system("pause");
                break;
            }
            default:{
                cout<<"seleccione una opcion valida";
            }
        }
    }while (option != 5);
}

void Menu::addStudent(){
    Date myDate;
    Name myName;
    int cant;
    string student;

    cout<<"\tBienvenido al registro de alumnos"<<endl;
    cout<<"Cuantos alumnos desea agregar: ";
    cin>>cant;
    cin.ignore();
    for (int i = numStudents; i < cant; ++i) {
        cout<<"\tIngresa los datos del alumno"<<endl<<endl;

        cout<<"Ingresa el codigo del alumno: ";
        getline(cin,student);
        students[i].setCode(student);

        cout<<"Apellido: ";
        getline(cin,student);
        myName.setLast(student);

        cout<<"Nombre: ";
        getline(cin,student);
        myName.setFirst(student);

        students[i].setName(myName);

        cout<<"Fecha de nacimiento (DD/MM/AAAA) incluyendo diagonales: ";
        getline(cin,student,'/');
        myDate.setDay(stoi(student));
        getline(cin,student,'/');
        myDate.setMonth(stoi(student));
        getline(cin,student);
        myDate.setYear(stoi(student));
        students[i].setBirthday(myDate);

        cout<<"Carrera: ";
        getline(cin,student);
        students[i].setCareer(student);

        cout<<"Fecha de inicio (DD/MM/AAAA) incluyendo diagonales: ";
        getline(cin,student,'/');
        myDate.setDay(stoi(student));
        getline(cin,student,'/');
        myDate.setMonth(stoi(student));
        getline(cin,student);
        myDate.setYear(stoi(student));

        students[i].setStartDate(myDate);

        cout<<"Promedio: ";
        getline(cin,student);
        students[i].setGrade(stof(student));
        cout<<endl<<endl;
        numStudents ++;
    }
}

void Menu::showStudents() {
    for (int i = 0; i < numStudents; ++i) {
        cout << students[i].toString() << endl;
    }
    cout << endl << endl;
}

void Menu::addTeacher() {
    Date myDate;
    Name myName;
    Subject myCourse;
    int cant;
    string teacher;

    cout<<"\tBienvenido al registro de profesores"<<endl;
    cout<<"Cuantos profesores desea agregar: ";
    cin>>cant;
    cin.ignore();
    for (int i = numTeachers; i < cant; ++i) {
        cout<<"\tIngresa los datos del profesor"<<endl<<endl;

        cout<<"Ingresa el codigo del profesor: ";
        getline(cin,teacher);
        teachers[i].setCode(teacher);

        cout<<"Apellido: ";
        getline(cin,teacher);
        myName.setLast(teacher);

        cout<<"Nombre: ";
        getline(cin,teacher);
        myName.setFirst(teacher);

        teachers[i].setName(myName);

        cout<<"Fecha de nacimiento (DD/MM/AAAA) incluyendo diagonales: ";
        getline(cin,teacher,'/');
        myDate.setDay(stoi(teacher));
        getline(cin,teacher,'/');
        myDate.setMonth(stoi(teacher));
        getline(cin,teacher);
        myDate.setYear(stoi(teacher));
        teachers[i].setBirthday(myDate);

        cout<<"\tDatos del curso que imparte: ";
        cout<<"Codigo del curso ";
        getline(cin,teacher);
        myCourse.setCode(teacher);
        cout<<"Nombre del curso: ";
        getline(cin,teacher);
        myCourse.setCourse(teacher);
        cout<<"Numero de creditos: ";
        getline(cin,teacher);
        myCourse.setCredits(stoi(teacher));
        cout<<"horario: ";
        getline(cin,teacher);
        myCourse.setSchedule(teacher);

        teachers[i].setCourse(myCourse);

        cout<<"Departamento: ";
        getline(cin,teacher);
        teachers[i].setDepartment(teacher);
        cout<<endl<<endl;
        numTeachers ++;
    }

}

void Menu::showTeachers() {
    for (int i = 0; i < numTeachers; ++i) {
        cout << teachers[i].toString() << endl;
    }
    cout << endl << endl;
}