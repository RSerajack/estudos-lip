//Expectativa de código
#include <cstring>
#include <iostream>

using namespace std;

#define MAX 50

void calculaNota(float num, int peso, char saida[MAX]) {

  float media = (num / peso) * 100;

  if (media > 94) {
    strcat(saida, "A+");
  } else if (media > 84) {
    strcat(saida, "A");
  } else if (media > 79) {
    strcat(saida, "B+");
  } else if (media > 69) {
    strcat(saida, "B");
  } else if (media > 59) {
    strcat(saida, "C");
  } else if (media > 49) {
    strcat(saida, "D");
  } else if (media > 39) {
    strcat(saida, "E");
  } else if (media > 10) {
    strcat(saida, "F");
  } else {
    strcat(saida, "F-");
  }
}

void separa_dscp_nota(char materia[MAX], char saida[MAX], int &peso) {
  char teste[MAX];
  int i = 0, tam = strlen(materia);
  bool flag = false;
  for (i = 0; i < tam; i++) {
    if (materia[i] == ',') {
      flag = true;
      break;
    }
    teste[i] = materia[i];
  }
  teste[i] = '\0';
  strcat(saida, teste);
  if (flag) {
    peso = (int)materia[tam - 2] - 48;
    peso *= 10;
    peso += (int)materia[tam - 1] - 48;
  }
}

int main() {
  float nota = 0;
  int peso = 100;
  char materia[MAX], aluno[MAX];

  while (true) {
    char resultado[MAX], disciplina[MAX];
    resultado[0] = '\0';
    disciplina[0] = '\0';

    cin >> nota;
    if (nota < 0)
      break;
    cin.ignore();
    cin.getline(aluno, MAX);
    cin.getline(materia, MAX);
    separa_dscp_nota(materia, resultado, peso);
    strcat(resultado, ": \n");
    strcat(resultado, aluno);
    strcat(resultado, " | Media: ");
    calculaNota(nota, peso, resultado);

    cout << resultado << endl;
  }

  return 0;
}
