#include <iostream>
#include <string>

using namespace std;

struct tDisciplina{
    int matricula;
    string disciplina;
    float nota1;
    float nota2;
    float media;
};

struct tAluno{
    int matricula;
    string nome;
};

int main() {

  int i, j, cont = 0, op, mediaaux, mataux, posicao; 
  float maiormedia = 0;
  string nomeaux;
  const int qnt = 3;
  const int qnt2 = 12;
  
  tAluno aluno[qnt];
  tDisciplina disciplina[qnt2];

  cout<<"\nRegistro de alunos ";
  for(i = 0; i < qnt; i++){
    cout<<"\n\nDigite o nome do aluno: ";
    cin.ignore();
    getline(cin,aluno[i].nome);
    cout << "\nDigite a matricula do aluno: ";
    cin >> aluno[i].matricula;
  }
  
  for(i = 0; i < qnt; i++){
    cout<<"\n\nNome do aluno: " << aluno[i].nome;
    cout << "\nMatricula do aluno: " << aluno[i].matricula;
  }

  for(i = 0; i < qnt; i++){
    cout<<"\nDados da disciplina do aluno " << (i+1) << ": ";
    for(j = 1; j <= 4; j++){
        cout << "\nDigite a matricula do aluno: ";
        cin >> disciplina[cont].matricula;
        cout << "\nDigite o nome da disciplina: ";
        cin.ignore();
        getline(cin,disciplina[cont].disciplina);
        cout << "\nDigite nota 1 do aluno: ";
        cin >> disciplina[cont].nota1;
        cout << "\nDigite nota 2 do aluno: ";
        cin >> disciplina[cont].nota2;
        disciplina[cont].media = (disciplina[cont].nota1 + disciplina[cont].nota2) / 2;
        cont++;
    }
  }
do{
  cout << "---------MENU---------";
  cout << "1 – EXIBIR DADOS DE UM ALUNO";
  cout << "2 – EXIBIR MAIOR MEDIA";
  cout << "3 – EXIBIR MÉDIA DAS MÉDIAS POR ALUNO";
  cout << "4 – EXIBIR OS ALUNOS DE UMA DISCIPLINA";
  cout << "5 - SAIR";

  switch(op){
    case 1: 
      cout << "EXIBIR DADOS DE UM ALUNO";

      cout << "Digite a matricula do aluno: ";
      cin >> mataux;
      for(i=0; i < qnt; i++){
        if(mataux == aluno[i].matricula){
            cout << "\nNome: " << aluno[i].nome;
            for(j = 0; j < qnt2; j++){
              if(mataux==disciplina[j].matricula){
                  cout << "\nDisciplina: " << disciplina[j].disciplina;
                  cout << "\nNota 1: " << disciplina[j].nota1;
                  cout << "\nNota 2: " << disciplina[j].nota2;
                  cout << "\nMédia: " << disciplina[j].media;
              }
            }
        }
      }
    break;
    case 2:
      cout << "EXIBIR MAIOR MEDIA";

      for(i = 0; i > qnt2; i++){
        if(disciplina[i].media > mediaaux){
            mediaaux = disciplina[i].media;
            posicao = i;
            mataux = disciplina[i].matricula;
        }
      }
      for(i = 0; i < qnt; i++){
        if(mataux == aluno[i].matricula){
            nomeaux = aluno[i].nome;
        } 
      }
      cout << "\nA maior media eh do aluno: " << nomeaux;
      cout << "\n na disciplina " << disciplina[posicao].disciplina << "! ";
      cout << "\n\tSua média eh: " << mediaaux;
    break;
    case 3:
        cout<<"EXIBIR MÉDIA DAS MÉDIAS POR ALUNO";
        cont = 0;
        for(i = 0; i < qnt; i++){
            mediaaux = 0;
            cout<<"\n\n\tAluno: " << aluno[i].nome;
            cout<<"\n\tMatricula: " << aluno[i].matricula;
            for(j = 0; j <=4; j++){
                mediaaux += disciplina[cont].media;
                cont++;
            }
            cout << "\nMédia das medias do aluno: " << (mediaaux/4);
        }
    break;
    case 4:
      cout<<"EXIBIR OS ALUNOS DE UMA DISCIPLINA";
      cout<<"\n\nDigite o nome da disciplina: ";
      cin.ignore();
      getline(cin,nomeaux);
      for(i = 0; i < qnt2; i++){
        if(nomeaux == disciplina[i].disciplina){
          for(j=0; j < qnt; j++){
            if(disciplina[i].matricula == aluno[j].matricula){
              cout<<"\nNome: " << aluno[j].nome;
            }
          }
        }
      }
    break;
    default:
        cout<<"\nFim de programa!"; 
 } 
}while(op != 5);

}


/*11. Elabore um algoritmo que:
- Crie o registro tAluno: Registro tAluno:
nome: string
matriculaDoAluno: int
- Declare um vetor Alunos (3 posições de tAluno) e cadastre 3 alunos no vetor Alunos;
- Após o cadastro, escreva os dados de todos os alunos cadastrados;
- Crie o registro tDisciplina: Registro tDisciplina:
matriculaDoAluno: int
disciplina: string
nota1: float
nota2: float
media: float
Obs: o usuário não deverá
digitar o valor do campo media.
O sistema deverá calcular
automaticamente a média
aritmética das duas notas do
aluno e armazenar neste
campo.
- Crie o vetor Disciplinas (12 posições de tDisciplina) e cadastre, para cada um dos 3 alunos
existentes no vetor Alunos, 4 disciplinas com as respectivas informações. Lembre-se que a
matrícula do aluno tem que ser a mesma cadastrada no vetor Alunos.
- Informe o seguinte menu e proceda com a operação de acordo com a escolha do usuário:
MENU PRINCIPAL _
1 – EXIBIR DADOS DE UM ALUNO
2 – EXIBIR MAIOR MEDIA
3 – EXIBIR MÉDIA DAS MÉDIAS POR ALUNO
4 – EXIBIR OS ALUNOS DE UMA DISCIPLINA
5 – SAIR
- Se o usuário escolher a opção 1, pergunte qual a matrícula do aluno que ele deseja
consultar. Depois que ele informar, procure a matrícula procurada no vetor Alunos. Se
existir, mostre o nome do aluno. Em seguida, procure no vetor Disciplinas pelos dados
daquele aluno e mostre os três resultados.
- Se o usuário escolher a opção 2, procure no vetor disciplinas qual a matrícula do aluno que
possui maior média e escreva A DISCIPLINA E O NOME DO ALUNO.
- Se o usuário escolher a opção 3, mostre a média das médias por ALUNO, informando o
nome do aluno e a média aritmética de suas médias.
- Se o usuário escolher a opção 4, pergunte qual a disciplina que ele deseja consultar. Depois
que ele informar, procure e mostre todos os nomes dos alunos daquela disciplina.
- Se o usuário escolher 5, finalize o sistema.*/
