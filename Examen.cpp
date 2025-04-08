#include <iostream>
#include <iomanip>
#include <cmath>
#include "Funciones.h"
using namespace std;
int main()
{
    imagen imagenes[3] = {
        { // inicio imagen 1
         {// inicio imagen R
          {21, 58, 1, 159, 108},
          {77, 218, 238, 254, 8},
          {171, 87, 49, 50, 48},
          {127, 244, 60, 141, 175},
          {112, 119, 186, 157, 128}},
         {// inicio imagen G
          {157, 128, 246, 51, 143},
          {234, 91, 169, 241, 117},
          {148, 173, 211, 52, 83},
          {212, 112, 202, 83, 206},
          {222, 59, 180, 194, 152}},
         {// inicio imagen B
          {159, 108, 146, 225, 7},
          {254, 18, 230, 143, 161},
          {50, 48, 187, 118, 221},
          {141, 175, 200, 146, 181},
          {157, 128, 246, 151, 143}}}, // fin imagen 1
        {                              // inicio imagen 2
         {                             // inicio imagen R
          {97, 211, 107, 18, 194},
          {84, 172, 158, 120, 87},
          {66, 121, 120, 253, 209},
          {130, 125, 153, 167, 253},
          {188, 186, 200, 208, 74}},
         {// inicio imagen G
          {130, 25, 153, 167, 253},
          {188, 186, 200, 208, 174},
          {247, 202, 115, 146, 170},
          {185, 115, 236, 125, 178},
          {226, 98, 144, 154, 223}

         },
         {// inicio imagen B
          {120, 253, 209, 29, 163},
          {153, 167, 253, 198, 151},
          {200, 208, 174, 198, 118},
          {115, 146, 170, 209, 182},
          {236, 125, 178, 174, 104}}}, // fin imagen 2
        {                              // inicio imagen 3
         {                             // inicio imagen R
          {175, 234, 246, 161, 99},
          {33, 228, 72, 151, 162},
          {177, 175, 104, 127, 191},
          {162, 47, 54, 66, 115},
          {171, 185, 14, 200, 124}},
         {// inicio imagen G
          {249, 94, 152, 32, 3},
          {215, 175, 234, 246, 161},
          {218, 133, 228, 12, 51},
          {230, 177, 175, 104, 127},
          {113, 162, 147, 154, 66}},
         {// inicio imagen B
          {113, 162, 147, 154, 66},
          {88, 171, 185, 114, 200},
          {250, 150, 153, 100, 160},
          {32, 243, 178, 156, 133},
          {233, 235, 147, 139, 120}}} // fin imagen 3
    }; // Fin inicialización de imágenes
    imagen grises;
    escarlarGrises(imagenes,grises);
    cout << "*** imagenes en escala de grise***" << endl;
    cout << endl;
    cout << "Impresion imagen" << "1" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.R[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Impresion imagen" << "1" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.R[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Impresion imagen" << "2" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.G[i][j] << ",";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Impresion imagen" << "3" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.B[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
    invertirColor(grises);
    cout << "*** imagenes invertidas***" << endl;
    cout << endl;
    cout << "Impresion imagen" << "1" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.R[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Impresion imagen" << "1" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.R[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Impresion imagen" << "2" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.G[i][j] << ",";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Impresion imagen" << "3" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.B[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
    transformarBinario(grises);
    cout << "*** imagenes invertidas***" << endl;
    cout << endl;
    cout << endl;
    cout << "imprimir imagenes transformada a binarios" << endl;
    cout << "Impresion imagen" << "1" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.R[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Impresion imagen" << "2" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.G[i][j] << ",";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Impresion imagen" << "3" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << grises.B[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
}
