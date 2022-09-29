#include <iostream>
#include <cmath>

using namespace std;

struct Vector2User {
    float x = 0.0;
    float y = 0.0;
};

Vector2User vector1 = { -4.0, -1.0 };
Vector2User vector2 = { 0.0, -2.0 };
Vector2User vector3 = { 6.0, 1.0 };
Vector2User vector4 = { 2.0, 2.0 };

// AB
float longAB;
            
// DC       
float longDC;
            
// AD       
float longAD;
            
// BC       
float longBC;

void printVectorCoordinates(Vector2User vector) {
    cout << " (" << vector.x << ", " << vector.y << ", " << ")" << endl;
}

/*
    Cálculo de distancia de un vector en r3

    d = sqrt((x1 - x2)^2 + (y1 - y2)^2 + (z1 - z2)^2)
*/
float calculateDistanceFor(Vector2User from, Vector2User to)
{
    return sqrt(pow(to.x - from.x, 2) + pow(to.y - from.y, 2));
}

float calculateAreaForRegular(float width, float heigth) {
    return width * heigth;
}

int main()
{
    //Punto A
    cout << "Ingrese la Posicion 'X' del Vector 'A': ";
    cin >> vector1.x;

    system("cls");

    cout << "Ingrese la Posicion 'Y' del Vector 'A': ";
    cin >> vector1.y;

    system("cls");

    //Punto B
    cout << "Ingrese la Posicion 'X' del Vector 'B': ";
    cin >> vector2.x;

    system("cls");

    cout << "Ingrese la Posicion 'Y' del Vector 'B': ";
    cin >> vector2.y;

    system("cls");

    //Punto C
    cout << "Ingrese la Posicion 'X' del Vector 'C': ";
    cin >> vector3.x;

    system("cls");

    cout << "Ingrese la Posicion 'Y' del Vector 'C': ";
    cin >> vector3.y;

    system("cls");

    //Punto D
    cout << "Ingrese la Posicion 'X' del Vector 'D': ";
    cin >> vector4.x;

    system("cls");

    cout << "Ingrese la Posicion 'Y' del Vector 'D': ";
    cin >> vector4.y;

    system("cls");

    //Impresion de valores
    cout << "Vector1: ";
    printVectorCoordinates(vector1);

    cout << "Vector2: ";
    printVectorCoordinates(vector2);

    cout << "Vector3: ";
    printVectorCoordinates(vector3);
    
    cout << "Vector4: ";
    printVectorCoordinates(vector4);

    
     longAB = calculateDistanceFor(vector1, vector2);

     longDC = calculateDistanceFor(vector4, vector3);
    
     longAD = calculateDistanceFor(vector1, vector4);
    
     longBC = calculateDistanceFor(vector2, vector3);

    cout << "Distancia 1: " << longAB << endl;
    cout << "Distancia 2: " << longDC << endl;
    cout << "Distancia 3: " << longAD << endl;
    cout << "Distancia 4: " << longBC << endl;

    if (longAB == longDC)
    {
        if (longAD == longBC)
        {
            cout << "\nSe forma un cuadrilatero" << endl;

            float area = calculateAreaForRegular(longAB, longAD);

            cout << "\n El area del cuadrilatero es: " << area << endl;
        }
        else
        {
            cout << "\nNo se forma un cuadrilatero" << endl;
        }
    }
    else
    {
        cout << "\nNo se forma un cuadrilatero" << endl;
    }

    return 0;
}