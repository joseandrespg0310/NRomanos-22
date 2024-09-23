// Trasformar entero a Romano.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()              
{
    int opcion;
   
    cout << "1 Cambiar a Romano";
    cout << "2 Determinar el mes ";
    cout << "3 Salir";
    cout << "Que ejercicio desea resolver"; cin >> opcion;
    switch (opcion)
    {
    case 1:
        cout << "****Número Romano****";
        /*Cambiar un numero entero a Romano */
        /*
        * M=1000
        * D=500
        * C=100
        * L=50
        * X=10
        * V=5
        * I=1
        */

        int numero, unidades, decenas, centenas, millares;
        cout << "Digite un numero"; cin >> numero;
        //numero 2152 == dividir el numero
        // 2000+100+50+2
        unidades = numero % 10;   numero = numero / 10;
        //2152 / 10 residuo = 2 unidades=2 numero=215
        decenas = numero % 10; numero = numero / 10;// residuo 5 = numero 21
        centenas = numero % 10;  numero = numero / 10;//2
        millares = numero % 10; numero = numero / 10;
        //millar = 2, numero=0
        switch (millares)
        {
        case 1:
            cout << "M";
            break;
        case 2:
            cout << "MM";
            break;
        case 3:
            cout << "MMM";

            break;
        }
        switch (centenas)
        {
        case 1:
            cout << "C";
            break;
        case 2:
            cout << "CC";
            break;
        case 3:
            cout << "CCC";
            break;

        case 4:
            cout << "CD";
            break;

        case 5:
            cout << "D";
            break;
        case 6:
            cout << "DC";
            break;
        case 7:
            cout << "DCC";
            break;
        case 8:
            cout << "DCCC";
            break;
        case 9:
            cout << "CM";
            break;

        }
        switch (decenas)
        {
        case 1:
            cout << "X";
            break;
        case 2:
            cout << "XX";
            break;
        case 3:
            cout << "XXX";
            break;

        case 4:
            cout << "XL";
            break;

        case 5:
            cout << "L";
            break;
        case 6:
            cout << "LX";
            break;
        case 7:
            cout << "LXX";
            break;
        case 8:
            cout << "LXXX";
            break;
        case 9:
            cout << "XC";
            break;
        }
        switch (unidades)
        {
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
        default:
            break;
        case 4:
            cout << "IV";
            break;

        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX"; /*9 X= 10 - 1=I IX*/
            break;
        }
        break;

     case 2:
         cout << "****Ejercicio de los meses**** ";
         int  opc2;
      
         cout << "(1) Enero-January ";
         cout << "(2) Febreo-February ";
         cout << "(3) Marzo-March ";
         cout << "(4) Abril-April ";
         cout << "(5) Mayo-May ";
         cout << "(6) Junio-June ";
         cout << "(7) Julio-July ";
         cout << "(8) Agosto-August ";
         cout << "(9) Septiembre-September ";
         cout << "(10) Octubre-October ";
         cout << "(11) Noviembre-November ";
         cout << "(12) Diciembre-December ";
         cout << " (13) Salir ";
         cout << "Digite un numero para analizar el mes"; cin >> opc2;
         switch (opc2)
         {
         case 1:
             cout << "Mes escogido Enero ";
             break;
         case 2:
             cout << "Mes escogido  Febrero";
             break;
         case 3:
             cout << "Mes escogido  Marzo";
             break;

         case 4:
             cout << "Mes escogido Abril ";
             break;
         case 5:
             cout << "Mes escogido Mayo";
             break;
         case 6:
             cout << "Mes escogido Junio";
             break;
         case 7:
             cout << "Mes escogido Julio";
             break;
         case 8:
             cout << "Mes escogido Agosto";
             break;
         case 9:
             cout << "Mes escogido Septiembre";
             break;
         case 10:
             cout << "Mes escogido Octubre";
             break;
         case 11:
             cout << "Mes escogido Noviembre";
             break;
         case 12:
             cout << "Mes escogido Diciembre ";
             break;
         case 13:
             cout << "Saliendo..";
             break;

         }
         break;
     case 3:
         int numeroo;
         cout << "Tabla de Multiplicar";
         /*Usamos do while para realizar la operacion que se realiza al menos una vez*/
         do
         {
             cout << "Ingresa el número que desaeas para ver su tabla de multiplicar"; cin >> numeroo;
         } while ((numeroo>0)||(numeroo<=10));

         for (int i = 1; i <=20; i++)
         {
             cout << "Tabla del" << numeroo << i << "*" << numeroo << "=" << numeroo * i ;
         }

         break;

    }
    
    
    
    return 0;
}


