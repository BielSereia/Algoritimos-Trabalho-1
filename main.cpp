#include <iostream>
using namespace std;

int marcilio() {
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
    cout << "Parabéns!\n";
    cout << "Seu contrato foi assinado! O técnico deseja boa sorte na "
            "caminhada e espera contar com você na temporada. \n";

    cout << "Após o primeiro mês de treino, suas chuteiras estão desgatadas. "
            "Você deseja comprar outra?\n";
    cout << "1 - Sim\n";
    cout << "2 - Não\n";

    cin >> escolha;

    if (escolha == 1) {
      cout << "Após se destacar bastante nos treinos e nos jogos durante a "
              "temporada, o clube decide renovar seu contrato e aumentando "
              "seu salário para três mil reais.\n";
      cout << "Cada vez mais, você vem se destacando, sendo mais notado por "
              "outros clubes.\n";
      cout << "Chegando até você uma proposta do Vasco da Gama.\n";
      cout << "1 - Aceitar entrar para o Vasco.\n";
      cout << "2 - Recusar entrar para o Vasco.\n";

      cin >> escolha;

      if (escolha == 1) {
        cout << "Após o seu primeiro jogo pelo Vasco, você dá uma entrevista "
                "pós jogo.\n";
        cout << "1 - Detonar o time adversário, expondo briga com técnico.\n";
        cout << "2 - Exaltar o time adversário, e elogia o seu time.\n";

        cin >> escolha;

        if (escolha == 1) {
          cout << "A diretoria do clube não gostou nem um pouco do seu "
                  "comportamento.\n";
          cout << "E com a falta de comportamento e péssimo equilibrio "
                  "psicológico, o clube decide encerrar o contrato.\n";
          cout << "Chegando assim, ao fim da sua carreira.\n";

          return 0;
        } else if (escolha == 2) {
          cout << "Mostrando ser uma pessoa de bom carater, os holofotes "
                  "começam a virar para você, alavancando sua carreira.\n";
          cout << "Você foca bastante nos treinos e em ser uma pessoa "
                  "melhorar, chegando ao ponto mais alto da sua carreira.\n";
          cout << "Completando com sucesso, o seu sonho!\n";

          return 0;
        } else {
          cout << "Escolha Invalida!\n";
          return 0;
        }
      } else if (escolha == 2) {
        cout << "Recusando o convite para o Vasco, a sua imagem fica manchada, "
                "você e seu agente até tenta resolver isso, mas não "
                "conseguem.\n";
        cout << "Deixando você apenas com a opção de continuar no Marcilio.\n";
        cout << "Como seu objetivo era evoluir, você acaba desistindo de seu "
                "sonho.\n";

        return 0;
      } else {
        cout << "Escolha Invalida!\n";
        return 0;
      }
    } else if (escolha == 2) {
      cout << "No treino, você não consegue desempenhar tão bem, e em campo, "
              "muito menos.\n";
      cout << "Então, o técnico decide te deixar no banco.\n";
      cout << "Chateado com a decisão do técnico, você decide ir em uma festa "
              "com seus colegas de equipe, para se divertir um pouco e "
              "esquecer do ocorrido.\n";
      cout << "Nessa noitada, você perde o controle, e bebe exageradamente.\n";
      cout << "No outro dia, você se atrasa para o treino, e chega bebado.\n";
      cout << "O técnico e o clube não gostam desse comportamento, e após uma "
              "descussão entre você a comissão tecnica, decidem te desligar do "
              "clube.\n";
      cout << "Chegando assim, ao fim da sua carreira.\n";

      return 0;
    } else {
      cout << "Escolha Invalida!\n";
      return 0;
    }

  } else if (escolha == 2) {
    cout << "Parabéns!\n";
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
      cout << "Para melhorar, você tem que escolher entre:\n";
      cout << "1 - Treinar no seus dias de folga.\n";
      cout << "2 - Aproveitar seus dias de folga com a familia\n";

      cin >> escolha;

      if (escolha == 1) {
        cout << "Na tentativa de melhorar, você acaba forcando muito seu "
                "corpo, e se lesiona, precisando ficar 4 meses parado.\n";
        cout << "Com isso, o clube decide cancelar seu contrato, visto "
                "que estava dando só prejuizo.\n";
        return 0;
      } else if (escolha == 2) {
        cout << "Aproveitando os dias de folga, você não consegue "
                "melhorar o tanto que gostaria, e chegando ao fim da "
                "temporada, o clube vê que seu desempenho não é um dos "
                "melhores, e acaba encerrando o contrato.\n";
        return 0;
      } else {
        cout << "Escolha Invalida!\n";
        return 0;
      }
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

        cout << "1 - Focar apenas no treino, se abstendo da sua vida pessoal, "
                "focando apenas no profissional e se doando 100% nos treinos. "
                "\n";
        cout << "  -10 vida social\n";
        cout << "  +20 habilidde\n";

        cout << "2 - Se conformar em ser reserva, aproveitando o tempo e o "
                "salário com a familia.\n";

        cin >> escolha;

        if (escolha == 1) {
          cout << "Um tempo se passa, e você melhora, porém sente que "
                  "precisa melhorar mais, consequentimente treinar mais.\n";
          cout << "Focado em melhorar, você fica em duvida entre:\n";
          cout << "1 - Treinar no seus dias de folga.\n";
          cout << "2 - Aproveitar seus dias de folga com a familia\n";

          cin >> escolha;

          if (escolha == 1) {
            cout << "Na tentativa de melhorar, você acaba forcando muito seu "
                    "corpo, e se lesiona, precisando ficar 4 meses parado.\n";
            cout << "Com isso, o clube decide cancelar seu contrato, visto "
                    "que estava dando só prejuizo.\n";
            return 0;
          } else if (escolha == 2) {
            cout << "Aproveitando os dias de folga, você não consegue "
                    "melhorar o tanto que gostaria, e chegando ao fim da "
                    "temporada, o clube vê que seu desempenho não é um dos "
                    "melhores, e acaba encerrando o contrato.\n";
            return 0;
          } else {
            cout << "Escolha Invalida!\n";
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
}

int vasco() {
  int escolha;

  cout << "No time do Vasco, você jogará como zagueiro.\n";
  cout << "Depois de algum tempo treinando, você finalmente entra em campo.\n";
  cout << "No final da partida, você realiza uma entrevista pós jogo.\n";
  cout << "Você pode: \n";
  cout << "1 - Detonar o time adversário, e expor uma discução que ocorreu "
          "entre você e seu técnico.\n";
  cout << "2 - Exalta o time adversário, e elogia o seu time.\n";

  cin >> escolha;

  if (escolha == 1) {
    cout << "A diretoria não gostou de seu comportamento na entrevista, então "
            "decide te colocar como reserva.\n";
    cout << "Após 6 jogos, você dá outra entrevista, e detona o time "
            "adversário, e falando sobre os problemas internos.\n";
    cout << "O clube, cansado disso, decide cancelar seu contrato.\n";
    cout << "E baseado nas suas ultimas ações, você e seu agente até tenta, "
            "mas nenhum outro clube se interessa por você, chegando assim, ao "
            "fim da sua carreira.\n";

    return 0;
  } else if (escolha == 2) {
    cout << "Após essa entrevista, as pessoas veem a boa pessoa que você é, te "
            "dando destaques nas redes sociais, alavancando cada vez mais sua "
            "carreira.\n";
    cout << "Tempo se passou e você continuou treinando e jogando, fazendo com "
            "que sua chuteira se desgatasse.\n";
    cout << "Deseja comprar uma nova ?\n";
    cout << "1 - Sim\n";
    cout << "2 - Não\n";

    cin >> escolha;

    if (escolha == 1) {
      cout << "Cada vez mais você vem se destacando, e se tornando um grande "
              "nome do futebol, e chega além da onde gostaria de chegar no "
              "inicio de sua jornada.\n";

      return 0;
    } else if (escolha == 2) {
      cout << "Depois de tanto destaque, você começa a perder rendimento nos "
              "treinos e nos campeonatos, sendo cada vez menos utilizado pelo "
              "técnico.\n";
      cout << "Com esses acontecimentos, você decide largar o futebol "
              "profissional, e viver agora só com o que conquistou com sua "
              "imagem.\n";

      return 0;
    } else {
      cout << "Escolha Invalida!\n";
      return 0;
    }
  }
}

int real() {
  int escolha;

  cout << "Na proposta do Real Madrid, você tem duas opções:\n";
  cout << "1 - Jogar de Goleiro.\n";
  cout << "2 - Jogar de Meio Campo.\n";

  cin >> escolha;

  if (escolha == 1) {
    cout << "Você passou um bom tempo treinando, até que chegou o grande dia "
            "que você entra em campo.\n";
    cout << "Durante a partida, o time adversário cobrará um penalti, onde "
            "você pode:\n";
    cout << "1 - Pular para esquerda.\n";
    cout << "2 - Ficar no meio.\n";
    cout << "3 - Pular para direita.\n";

    cin >> escolha;

    if (escolha == 1) {
      cout << "Bom trabalho, você defendeu o penalti!\n";
      cout << "Com o ótimo desempenho em campo, você está competindo com o "
              "goleiro titular pela vaga.\n";
      cout << "No próximo jogo, o técnico decide que você será o goleiro "
              "titular.\n";
      cout << "Fazendo defesas sensacionais, você se destaca muito\n.";
      cout << "1 - Mesmo se destacando bastante como goleiro, seu sonho sempre "
              "foi jogar de atacante.\n";
      cout << "2 - Quer continuar treinando como goleiro e ter uma carreira "
              "promissora.\n";

      cin >> escolha;

      if (escolha == 1) {
        cout << "Você conclui que agora não tem mais motivos para continuar em "
                "algo que não seja seu sonho.\n";
        cout << "Decide então jogar seu ultimo jogo como goleiro, e tentar "
                "mudar de posição.\n";
        cout << "Trocando para atacante, seu desempenho não é tão bom qunto a "
                "de goleiro, e então o técnico acaba não te colocando em "
                "campo.\n";
        cout << "Insatisfeito com isso, você decide trocar de time, se jutando "
                "ao clube Marcilio Dias.\n";

        return marcilio();
      } else if (escolha == 2) {
        cout << "Agora, como goleiro titular, está na hora de comprar suas "
                "luvas profissionais.\n";
        cout << "1 - Comprar as luvas.\n";
        cout << "2 - Não comprar as luvas.\n";

        cin >> escolha;

        if (escolha == 1) {
          cout << "Cada vez mais você se surpreende e surpreende os outros nos "
                  "treinos e quando está em campo, e sua carreira está melhor "
                  "que nunca.\n";
          cout << "Até que um dia seu agente te liga, dizendo que você foi "
                  "convocado para ser goleiro na copa do mundo.\n";
          cout << "Sem exitar, você aceita o convite, e executa com perfeição "
                  "tudo que faz em campo, chegando nas finais.\n";
          cout << "Durante a ultima partida da copa do mundo, o time "
                  "adversário cobra uma falta, que decidira o jogo.\n";
          cout << "Você pode:\n";
          cout << "1 - Pular para direita.\n";
          cout << "2 - Ficar no meio.\n";
          cout << "3 - Pular para esquerda.\n";

          cin >> escolha;

          if (escolha == 1) {
            cout << "Defendendo o penalti, seu time sai como campeão da copa "
                    "do mundo.\n";
            cout << "Feliz pelo seu desempenho em toda a carreira, você decide "
                    "se aposentar.\n";

            return 0;
          } else if (escolha == 2 || escolha == 3) {
            cout << "Infelizmente você não consegue defender o penalti.\n";
            cout << "Não sabendo lidar com seu erro, e com o hate recebido, "
                    "você decide se aposentar, chegando ao fim da sua "
                    "carreira.\n";

            return 0;
          } else {
            cout << "Escolha Invalida!\n";
            return 0;
          }

        } else if (escolha == 2) {
          cout << "Assim como quaqluer outro atléta, seu desempenho "
                  "infelizmente vem caindo.\n";
          cout << "O técnico vê essa queda no desempenho, e te decide deixar "
                  "no banco.\n";
          cout << "Como você não foi utilizado durante a ultima temporada, o "
                  "clube decide te desligar, chegando assim, ao fim da sua "
                  "carreira.\n";

          return 0;
        } else {
          cout << "Escolha Invalida!\n";
          return 0;
        }
      }
    } else if (escolha == 2 || escolha == 3) {
      cout << "Infelizmente você não defende o penalti.\n";
      cout << "Por pressão da torcida e por não responder suas expectativas, "
              "você fica abalado e decide encerrar sua carreira.\n";

      return 0;
    }
  } else if (escolha == 2) {
    cout << "Mesmo dando 100% nos treinos, o técnico decide não te colocar em "
            "campo nenhuma vez.\n";
    cout << "Então você pode:\n";
    cout << "1 - Se transferir para o Marcilio Dias.\n";
    cout << "2 - Desistir da carreira.\n";

    cin >> escolha;

    if (escolha == 1) {
      return marcilio();
    } else if (escolha == 2) {
      cout << "Você desiste da sua carreira.\n";
      return 0;
    } else {
      cout << "Escolha Invalida!\n";
      return 0;
    }
  } else {
    cout << "Escolha Invalida!\n";
    return 0;
  }
}

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
    return marcilio();
  } else if (time == 2) {
    return real();
  } else if (time == 3) {
    return vasco();
  } else {
    cout << "Escolha Invalida!\n";
    return main();
  }
}