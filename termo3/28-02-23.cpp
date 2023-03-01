#include <iostream>
#include <stdio>
#include <string>

using namespace std;

class TAluno{
    char Nome[50], Disciplina[20];
    float Nota1, Nota2;
    int RA, Faltas;

public:
    void setRA(int valor);
    void setNome(char *texto);
    void setDisciplina(char *texto);
    void setNota1(float valor);
    void setNota2(float valor);
    void setFaltas(int valor);

    int getRa();
    char *getNome();
    char *getDisciplina();
    float getNota1();
    float getNota2();
    int getFaltas();

    float calcularMedia();
    void VerificarStatus();
    void PassarDeAno();
};

void TAluno::setRA(int valor){
    RA=valor;
}
void TAluno::setNome(char *texto){
    strcpy(Nome,texto);
}
void TAluno::setDisciplina(char *texto){
    strcpy(Disciplina, texto);
}
void TAluno::setNota1(float valor){
    Nota1 = valor;
}
void TAluno::setNota2(float valor){
    Nota2=valor;
}
void TAluno::setFaltas(int valor){
    Faltas = valor;
}

int TAluno::getRa(){
    return RA;
}
char* TAluno::getNome(){
    return Nome;
}
//o * é para retornar em vetor
char* TAluno::getDisciplina(){
    return Disciplina;
}
float TAluno::getNota1(){
    return Nota1;
}
float TAluno::getNota2(){
    return Nota2;
}
int TAluno::getFaltas(){
    return Faltas;
}