#include <iostream>
using namespace std;

int main() {
  string nome;

  cout << "Insira seu nome para começar!\n";
  cin >> nome;

  cout << "Olá " << nome << "!\n";
  cout << "Ultimamente você se destacou nos campeonatos de várzea \n";
  cout << "Alguns olheiros te viram em campo, gostaram e você foi sondado por "
          "3 times.\n";
  cout << "Segue a lista dos clubes interessados: \n";
  cout << "1 - Marcilio Dias\n";
  cout << "2 - Real Madrid\n";
  cout << "3 - Vasco da Gama\n";

  int time;

  cout << "Digite o numero do time no qual deseja aceitar a proposta e iniciar "
          "a sua carreira \n";
  cin >> time;

  if (time == 1) {
    cout << "Ao escolher o time Marcilio Dias, você tem duas opções:\n";
    cout << "1 - Jogar como meio campista, recebendo um salário de mil reais, "
            "porém você é titular absoluto do time. \n";
    cout << "2 - Jogar como meio campista, recebendo um salário de dois mil "
            "reais, porém você terá concorrencia na vaga de titular e em "
            "alguns jogos você não será titular. \n";
    cout << "Qual você escolhe ?\n";

    int escolha;
    cin >> escolha;

    if (escolha == 1) {
      cout << "Parabéns " << nome << "!\n";
      cout << "Seu contrato foi assinado! O técnico deseja boa sorte na "
              "caminhada e espera contar com você na temporada. \n";
    } else if (escolha == 2) {
      cout << "Parabéns " << nome << "!\n";
      cout << "Seu contrato foi assinado! O técnico deseja boa sorte na "
              "caminhada e espera contar com você na temporada. \n";
      cout << "Nos ultimos jogos você nao veem sendo utilizado da maneira que "
              "queria, com pouca minutagem nos jogos e começando poucas vezes "
              "como titular. Com as decisões do treinador você está "
              "descontente e possui duas escolhas: \n";

      cout << "1 - Focar apenas no treino, se abstendo da sua vida pessoal, "
              "focando apenas no profissional e se doando 100% nos treinos. \n";
      cout << "  -10 vida social\n";
      cout << "  +20 habilidde\n";

      cout << "2 - Aproveitar que está sendo pouco utilizado e aproveitar o "
              "seu salario nas madrugadas de itajai, deixando de lado os "
              "treinos e focando pouco nos jogos.\n";

      cout << "Qual a sua escolha ?\n";
      cin >> escolha;

      if (escolha == 1) {

      } else if (escolha == 2) {
        cout << "Nessa noite, os seus companheiros de time irão a uma festa "
                "essa noite e te convidaram para ir, disseram que a noitada "
                "não é a mesma sem a sua companhia. Você deseja ir? Com isso "
                "você ganhará +10 de entrosamento (faz com que você se adapte "
                "melhor ao time e receba mais passes no jogo) \n";

        cout << "1 - Sim\n";
        cout << "2 - Não\n";

        cin >> escolha;

        if (escolha == 1) {
          cout << "Você aproveitou muito a noite com seus companheiros de "
                  "time, porem você exagerou na bebida e na noitada. Você "
                  "chegou atrasado no treino e praticamente não dormiu noite "
                  "passada.\n";
          cout << " O técnico não gostou nenhum pouco de sua atitude e com "
                  "isso você perde as chances que tinha para seguir como "
                  "titular no time. -20 confiança\n";

          cout << "A temporada do seu time acabou, você foi pouquissimo "
                  "aproveitado e decepciou bastante a diretoria do seu time, "
                  "que frustrada, decidiu encerrar o seu contrato como "
                  "profissional. Agora você está sem clube. \n";
          cout << "O Seu agente tenta, porém não consegue nenhum clube "
                  "interessado em seu fuebol pelas suas recentes "
                  "escolhas.\n";
          cout << "Este é o fim de sua carreira";
          return 0;
        } else if (escolha == 2) {
          cout << "O que você deseja fazer? \n";

          cout
              << "1 - Focar apenas no treino, se abstendo da sua vida pessoal, "
                 "focando apenas no profissional e se doando 100% nos treinos. "
                 "\n";
          cout << "  -10 vida social\n";
          cout << "  +20 habilidde\n";

          cout << "2 - Se conformar em ser reserva, aproveitando o tempo e o "
                  "salário com a familia.\n";

          cin >> escolha;

          if (escolha == 1) {
            cout << "Um tempo se passa, e você melhora, porém sente que precisa melhorar mais, consequentimente treinar mais.\n";
            cout << "Focado em melhorar, você fica em duvida entre:\n";
            cout << "1 - Treinar no seus dias de folga.\n";
            cout << "2 - Aproveitar seus dias de folga com a familia\n";

            cin >> escolha;

            if (escolha == 1) {
              cout << "Na tentativa de melhorar, você acaba forcando muito seu corpo, e se lesiona, precisando ficar 4 meses parado.\n";
              cout << "Com isso, o clube decide cancelar seu contrato, visto que estava dando só prejuizo.\n";
              return 0;
            }
            
          } else if (escolha == 2) {
            cout << "Conformado com a reserva e com as poucas entradas em "
                    "campo, assim fica até o final da temporada, e com o final "
                    "do contrato, o clube decide não renovar.\n";
            cout << "Por causa dos acontecimentos no clube, seu agente não "
                    "consegue encontrar nenhum outro clube interessado no seu "
                    "futebol, assim, chegando ao fim da sua carreira!\n";
            return 0;
          } else {
            cout << "Escolha Invalida!\n";
            return 0;
          }

        } else {
          cout << "Escolha Invalida!\n";
          return 0;
        }
      } else {
        cout << "Escolha Invalida!\n";
        return 0;
      }

    } else {
      cout << "Escolha Invalida!\n";
      return 0;
    }
  } else if (time == 2) {

  } else if (time == 3) {

  } else {
    cout << "Escolha Invalida!\n";
    return main();
  }
}