/**********************************************************************\
* Kurzbeschreibung: Uebung: 25.2.1
*
* Datum:       Autor:               Grund der Aenderung:
* 30.6.2021   Daniel Gran  Neuerstellung
\**********************************************************************/
#include <stdio.h>

//Maximale Spalten und Zeilengroesse
#define MAX 10

void matrixErmitteln(int* zeilen, int* spalten, int matrixNummer);
void getMatrixInhalt (float matrix[MAX][MAX], int zeilen, int spalten);
void printMatrix(float matrix[MAX][MAX], int zeilen, int spalten);
void matrizenmultiplikation(float matrixA[MAX][MAX], float matrixB[MAX][MAX], float matrixC[MAX][MAX], int s1, int z1, int s2);

int main (){
    printf("Matrizenmultiplikation\n");
    printf("-----------------------\n");
    int spalten1, spalten2, zeilen1, zeilen2;
    float matrixA[MAX][MAX], matrixB[MAX][MAX], matrixC[MAX][MAX];

    do{
        matrixErmitteln(&zeilen1, &spalten1, 1);
        matrixErmitteln(&zeilen2, &spalten2, 2);

        if(spalten1 != zeilen2){
            printf("Die Spaltenzahl der ersten Matrix muss gleich der Zeilenzahl der\n");
            printf("zweiten Matrix sein.\nBitte eingabe wiederholen.\n");
        }
    
    }while (spalten1 != zeilen2);

    printf("Eingabe der 1. Matrix\n");
    getMatrixInhalt (matrixA, zeilen1, spalten1);
    printf("Eingabe der 2. Matrix\n");
    getMatrixInhalt (matrixB, zeilen2, spalten2);

    matrizenmultiplikation(matrixA, matrixB, matrixC, spalten1, zeilen1, spalten2);

    printf("1. Matrix\n");
    printMatrix(matrixA, zeilen1, spalten1);
    printf("2. Matrix\n");
    printMatrix(matrixB, zeilen2, spalten2);
    printf("Ergebnismatrix\n");
    printMatrix(matrixC, zeilen1, spalten2);

    return 0;
}


void matrixErmitteln(int* zeilen, int* spalten, int matrixNummer){
    char c, ok, inputOK;

    do{
        printf("Zeilen, Spalten der %d. Matrix: ", matrixNummer);
        inputOK = scanf("%d,%d%c", zeilen, spalten, &c);
        ok = inputOK==3 && c== '\n';
        ok = ok && *zeilen>0 && *zeilen<MAX;
        ok = ok && *spalten>0 && *spalten<MAX;
        if(!ok){
            fflush(stdin);
            printf("Ihre Eingabe ist nicht korrekt!\n");
        }
    }while(!ok);
}


void getMatrixInhalt (float matrix[MAX][MAX], int zeilen, int spalten){
    for(int i = 1; i <= zeilen; i++){
        for(int j = 1; j <= spalten; j++){
            char c, ok, inputOk;
            float element;
            do{
                printf("Element %d,%d: ", i, j);
                inputOk = scanf("%f%c", &element, &c);
                ok = inputOk==2 && c=='\n';
                if(!ok){

                    fflush(stdin);
                    printf("Ihre Eingabe ist nicht korrekt!\n");
                }

            }while(!ok);
            matrix[i-1][j-1]=element;
        }
    }
}

void matrizenmultiplikation(float matrixA[MAX][MAX], float matrixB[MAX][MAX], float matrixC[MAX][MAX], int s1, int z1, int s2){
    for(int z = 0; z < z1; z++){
        for(int s = 0; s < s2; s++){
            matrixC[z][s] = 0;
            for(int i = 0; i < s1; i++){
                matrixC[z][s] += matrixA[z][i] * matrixB[i][s];
            }
        }
    }
}



void printMatrix(float matrix[MAX][MAX], int zeilen, int spalten){
    for(int i = 1; i <= zeilen; i++){
        for(int j = 1; j <= spalten; j++){
            printf("%10.2f", matrix[i-1][j-1]);
        }
        printf("\n");
    }
}
