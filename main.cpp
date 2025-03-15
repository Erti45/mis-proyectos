#include <iostream>

using namespace std;

int main()
{
    // string nombreMateria;
    // int CantAlumnos, CantProfes;
    float HorasMateria[20]={0};
    int AlumnosMateria[20]={0};
    int ProfesMateria[20]={0};

    int caca, maxHoras, materiaMax;
    int opcion,legajo, dia, mes, materia;

    bool salida = false;
    bool primerVuelta=true;
    float horas;



    cout << "Programa datos facultad utn"<< endl;
    system("pause");
    system("cls");

    do{
    switch(opcion){

    // INGRESO DE DATOS


    case 0:{
    legajo = 1;
    cout<< "El ingreso de datos termina cuando se ingresa un legajo = 0"<<endl;
     cout<< "-------------------------------------"<<endl;
    cout<< "ingrese los datos : "<<endl;

    while(legajo != 0){

    cout << "legajo"<<endl;
    cin >> legajo ;
    if(legajo == 0){
        opcion = 1;
        break;
    }
    /*cout << "dia"<<endl;
    cin >> dia ;
    cout << "mes"<<endl;
    cin >> mes ;*/
    cout << "materia"<<endl;
    cin >> materia;
    cout << "horas"<<endl;
    cin >> horas ;

    HorasMateria[materia-1]+=horas;

    }
    }
    maxHoras = HorasMateria[0];

    for(int i=0; i<20; i++){
            if(HorasMateria[i]>maxHoras){maxHoras = HorasMateria[i];
            materiaMax = i+1;}

            ;}
    //cout << "horas materia 1 >  "<<HorasMateria[1] <<endl;
    //cout << "horas materia 3 >  "<<HorasMateria[3] <<endl;
    //system("pause");
    //FIN WHILE PARA INGRESO DE DATOS

    //INICIO SWITCH O MENU


    case 1:{
    system("cls");
    cout<< "-------------------------------------"<<endl;
    cout<< "Ingrese 2 para ver las materias sin accesos"<<endl;
    cout<< "-------------------------------------"<<endl;
    cout<< "Ingrese 3 para ver las materias con mas horas"<<endl;
    cout<< "-------------------------------------"<<endl;
    cout<< "ingrese 4 para ver los ingresos por dia en marzo" <<endl;
    cout<< "-------------------------------------"<<endl;
    cout<< "ingrese 0 para volver a ingresar datos"<<endl;
    cout<< "-------------------------------------"<<endl;
    cout<< "ingrese 5 para salir"<<endl;
    cin>> opcion;
    if(opcion == 5){salida= true;
    break;}
    break;
    }

    case 2:{
    // VER MATERIAS SIN ACCESO / SIN HORAS
    // if vector de horas == 0 no tuvo acceso guardarla como materia sin acceso
    system("cls");
    cout << "VER MATERIAS SIN ACCESO / SIN HORAS"<< endl;
    for (int i = 0; i < 20; i++){
        if(HorasMateria[i]==0){cout<<"MATERIA : "<< i +1 << " !! no tuvo ingresos" <<endl;}
    }
    cout<< "para volver al menu"<<endl;
    system("pause");
    opcion =1;
    break;
    }

    case 3:{
    // MATERIA CON MAS HORAS EN TOTAL / EL VALOR MAS ALTO EN VECTOR HORAS
    system("cls");
    cout << "MATERIA CON MAS HORAS EN TOTAL"<< endl;
    cout<< materiaMax << " fue la materias con mas horas "<<endl;
    cout<< maxHoras << " horas "<<endl;
    cout<< "para volver al menu"<<endl;
    system("pause");
    opcion =1;
    break;
    }
    case 4:{
    system("cls");
    cout << "MATERIAS DIAS DE MARZO"<< endl;
    cout<< "para volver al menu"<<endl;
    system("pause");
    opcion =1;
    break;
    }
    default:{cout<< "opcion no valida";}
    }
    }while(salida == false);
    return 0;
}
