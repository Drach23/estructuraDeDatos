#include "menu.hpp"
#include "exceptions.hpp"

using namespace std;
Menu::Menu() {}  // Inicializar el contador de estudiantes en 0

void Menu::start() {
    int option;
    bool isValidOption;
        do {
            cout << "\tBienvenido" << endl;
            cout<< "1.Ingresar un nuevo Alumno\n2.Ingresar un nuevo profesor\n3.Imprimir alumnos\n4.Imprimir profesores\n5.Salir\n opcion: ";
            isValidOption = bool(cin>>option);
            if (isValidOption) {
                switch (option) {
                    case 1: {
                        system("cls");
                        addStudent();
                        break;
                    }
                    case 2: {
                        system("cls");
                        addTeacher();
                        break;
                    }
                    case 3: {
                        system("cls");
                        showStudents();
                        break;
                    }
                    case 4: {
                        system("cls");
                        showTeachers();
                        break;
                    }
                    case 5: {
                        cout << "Saliendo del programa......." << endl;
                        system("pause");
                        break;
                    }
                    default: {
                        system("cls");
                        cout << "Ingresa una opcion valida" << endl;
                        system("pause");
                        system("cls");
                    }
                }
            }else{
                //para el manejo de errores en caso de ingreso de datos no valido.
                cin.clear();
                cin.ignore();
                cout<<"Ingresa una opcion numerica valida"<<endl;
                system("pause");
                system("clear");
            }
        } while (option != 5);
}

void Menu::addStudent(){
    Date myDate;
    Name myName;
    int cant;
    string student;
    bool isValidInput; //Bool necesario para validar el ingreso.


    cout<<"\tBienvenido al registro de alumnos"<<endl;
    cout<<"Cuantos alumnos desea agregar: ";
    isValidInput = bool(cin>>cant);

    if (isValidInput) {
        cin.ignore();
        system("cls");
        for (int i = 0; i < cant; ++i) {
            cout << "\tIngresa los datos del alumno" << endl << endl;

            cout << "Ingresa el codigo del alumno: ";
            getline(cin, student);
            students.push_back(Student());
            students.back().setCode(student);

            cout << "Apellido: ";
            getline(cin, student);
            myName.setLast(student);


            cout << "Nombre: ";
            getline(cin, student);
            myName.setFirst(student);

            students.back().setName(myName);

            cout << "Fecha de nacimiento (DD/MM/AAAA) incluyendo diagonales: ";
            getline(cin, student, '/');
            myDate.setDay(stoi(student));
            getline(cin, student, '/');
            myDate.setMonth(stoi(student));
            getline(cin, student);
            myDate.setYear(stoi(student));
            students.back().setBirthday(myDate);

            cout << "Carrera: ";
            getline(cin, student);
            students.back().setCareer(student);

            cout << "Fecha de inicio (DD/MM/AAAA) incluyendo diagonales: ";
            getline(cin, student, '/');
            myDate.setDay(stoi(student));
            getline(cin, student, '/');
            myDate.setMonth(stoi(student));
            getline(cin, student);
            myDate.setYear(stoi(student));

            students.back().setStartDate(myDate);

            cout << "Promedio: ";
            getline(cin, student);
            students.back().setGrade(stof(student));
            cout << endl << endl;
            system("cls");
        }
    }else{
        //para el manejo de errores en caso de ingreso de datos no valido.
        cin.clear();
        cin.ignore();
        system("cls");
        cout<<"Ingresa una cantidad valida"<<endl;
        system("pause");
        system("cls");
    }
}

void Menu::showStudents() {
    system("cls");
    cout<<"\tAlumnos registrados: "<<endl<<endl<<endl;
    for(const auto& student : students){
        cout<<student.toString()<<endl<<endl;
    }
    system("pause");
    system("cls");
}

void Menu::addTeacher() {
    Date myDate;
    Name myName;
    Subject myCourse;
    int cant;
    string teacher;
    bool isValidInput;

    cout << "\tBienvenido al registro de profesores" << endl;
    cout << "Cuantos profesores desea agregar: ";

    isValidInput = bool(cin >> cant);
    cin.ignore();
    if (isValidInput) {
        for (int i = 0; i < cant; ++i) {
            cout << "\tIngresa los datos del profesor" << endl << endl;

            cout << "Ingresa el codigo del profesor: ";
            getline(cin, teacher);
            teachers.push_back(Teacher());
            teachers.back().setCode(teacher);

            cout << "Apellido: ";
            getline(cin, teacher);
            myName.setLast(teacher);

            cout << "Nombre: ";
            getline(cin, teacher);
            myName.setFirst(teacher);

            teachers.back().setName(myName);

            cout << "Fecha de nacimiento (DD/MM/AAAA) incluyendo diagonales: ";
            getline(cin, teacher, '/');
            myDate.setDay(stoi(teacher));
            getline(cin, teacher, '/');
            myDate.setMonth(stoi(teacher));
            getline(cin, teacher);
            myDate.setYear(stoi(teacher));
            teachers.back().setBirthday(myDate);

            cout << "\tDatos del curso que imparte: ";
            cout << "Codigo del curso ";
            getline(cin, teacher);
            myCourse.setCode(teacher);
            cout << "Nombre del curso: ";
            getline(cin, teacher);
            myCourse.setCourse(teacher);
            cout << "Numero de creditos: ";
            getline(cin, teacher);
            myCourse.setCredits(stoi(teacher));
            cout << "horario: ";
            getline(cin, teacher);
            myCourse.setSchedule(teacher);

            teachers.back().setCourse(myCourse);

            cout << "Departamento: ";
            getline(cin, teacher);
            teachers.back().setDepartment(teacher);
            cout << endl << endl;
            system("cls");
        }

    }else{
        //para el manejo de errores en caso de ingreso de datos no valido.
        cin.clear();
        cin.ignore();
        cout<<"Ingresa una cantidad valida"<<endl;
        system("pause");
        system("clear");
    }
}

void Menu::showTeachers() {
    system("cls");
    cout<<"\tProfesores registrados: "<<endl<<endl<<endl;
    for(const auto& teacher : teachers){
        cout << teacher.toString()<<endl<<endl;
    }
    system("pause");
    system("cls");
}
