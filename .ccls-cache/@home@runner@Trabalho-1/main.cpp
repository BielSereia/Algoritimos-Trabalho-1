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
  // receber mil reais e titular
  if (escolha == 1) {
    cout << "Parabéns!\n";
    cout << "Seu contrato foi assinado! O técnico deseja boa sorte na "
            "caminhada e espera contar com você no decorrer da temporada. \n";

    cout << "Após alguns meses de treino, suas chuteiras estão desgatadas. "
            "Você deseja comprar outra?\n";
    cout << " Isso custará $500\n";
    cout << "1 - Sim\n";
    cout << "2 - Não\n";

    cin >> escolha;
    // chuteiras novas
    if (escolha == 1) {
      cout << " Após você se destacar com bastante gols na ultima temporada "
              "sendo um dos principais jogadores do clube e da liga, o clube "
              "renovou o seu contrato.\n";
      cout << " Novo salário: $3.000. \n";
      cout << " A cada jogo que passa, o interesse de outros clubes em contar "
              "com o seu futebol aumenta, com isso chega uma proposta do clube "
              "Vasco da Gama para você.\n";
      cout << "1 - Aceitar a proposta do Vasco.\n";
      cout << "2 - Recusar a proposta do Vasco.\n";

      cin >> escolha;
      // proposta do vasco aceita
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
        // Se recusar entrar para o vasco

        cout << " Com os seu corpo descansado e o seu auge fisico e técnico, o "
                "seu time chega a final da Copa do Brasil, um campeonato "
                "importantissimo e que renderá ao clube cerca de 70 milhões de "
                "reais caso seja campeão. \n";
        cout << " A partida começa, você nervoso começa os primeiros minutos "
                "do jogo muito mal, porem depois você consegue se ajeitar na "
                "partida.\n";
        cout << " Fim de jogo, 0 a 0 contra a equipe do São Paulo, a partida "
                "será decidida nos penaltis, ambas torcidas estão nervosas \n";
        cout << " Chegou a sua hora de bater o penalti, se você acertar o seu "
                "time é campeão, se perder seu time perde o titulo. \n";
        cout << "Aonde você deseja bater?\n";
        cout << "1 - Direita do goleiro. \n";
        cout << "2 - No meio do Gol. \n";
        cout << "3 - Esquerda do goleiro. \n";

        cin >> escolha;

        if (escolha == 1 || escolha == 2) {
          cout << "PRA FORAAAAAAAAAAAAAA, A torcida adversaria vai a loucura, "
                  "a equipe do São Paulo acaba de conquistar o seu primeiro "
                  "titulo da Copa do Brasil. \n";
          cout << " Todos estão decepcionados com você, um jogador que estava "
                  "construindo uma historia linda no Marcilio Dias, errar um "
                  "penalti numa final jamais será esquecido pelos torcedores. "
                  "\n";
          cout
              << " No dia seguinte pós vice campeonato, a torcida e a midia "
                 "pedem para que você seja afastado do clube, pois foi "
                 "inamidissivel perder um penalti numa final de campeonato. \n";
          cout << " O clube, decepcionado, encerra o seu contrato. \n";
          cout << "Você muito frustrado encerra a sua carreira de futebol e "
                  "decreta aposentadoria";

          return 0;
        } else if (escolha == 3) {
          cout << "GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLLLLLLLLL, O CLUBE MARCILIO "
                  "DIAS É CAMPEÃO DA COPA DO BRASIL, UM TITULO HISTORICO PARA "
                  "O CLUBE.\n";
          cout << "A torcida louca, invade o campo e comemora o titulo junto "
                  "com o time.\n";
          cout << " Parabens jogador você se tornou idolo do Marcilio Dias, os "
                  "torcedores jamais esquecerão do que você fez pelo clube.\n";
          cout << " Feliz, você conclui que ciclos se encerram, e decide parar "
                  "de jogar futebol para entrar na diretoria do clube e ajudar "
                  "cada vez mais o time que você obteve uma paixão enquanto "
                  "jogador.\n";
          cout << " Este é o fim de sua carreira como jogador, mas apenas o "
                  "inicio como Diretor de futebol do Marcilio dias.\n";
          cout << " Fim de jogo. Você zerou o game, Parabens!\n";
          return 0;
        } else {
          cout << "Escolha Invalida!\n";
          return 0;
        }

        return 0;
      } else {
        cout << "Escolha Invalida!\n";
        return 0;
      }
    } else if (escolha == 2) {
      // Se escolher não comprar outra chuteira
      cout
          << "Após mais alguns meses, você tem uma queda técnica e amargamente "
             "fica no banco de reservas no decorrer da temporada.\n";
      cout << " Com a queda de rendimento e a frustração de estar no banco de "
              "reserva, você tem duas opções:\n";
      cout << "1 - Ir para uma festa com seus companheiros de equipe, para "
              "esquecer dos problemas profissinais e se divertir com os "
              "colegas de trabalho.\n";
      cout << "(+10 de entrosamento, faz com que você receba mais passes "
              "durante o jogo). \n";

      cout << "2 - Ficar em casa numa sexta feira a noite, e decidir focar "
              "mais no seu comportamento, focando apenas nos treinos e em sua "
              "nova dieta para assim assumir a titularidade da equipe.\n";

      cin >> escolha;

      // Se escolher ir para a festa
      if (escolha == 1) {
        cout << " Você aproveitou muito a noite com seus companheiros de "
                "time, porem você exagerou na bebida e na noitada. Você "
                "chegou atrasado no treino e praticamente não dormiu noite "
                "passada.\n";
        cout << " O técnico não gostou nenhum pouco de sua atitude e com "
                "isso você perde as chances que tinha para seguir como "
                "titular no time. -20 confiança\n";

        cout << " A temporada do seu time acabou, você foi pouquissimo "
                "aproveitado e decepciou bastante a diretoria do seu time, "
                "que frustrada, decidiu encerrar o seu contrato como "
                "profissional. Agora você está sem clube. \n";
        cout << " O Seu agente tenta, porém não consegue nenhum clube "
                "interessado em seu fuebol pelas suas recentes "
                "escolhas.\n";
        cout << " Este é o fim de sua carreira.\n";
        return 0;
      } else if (escolha == 2) {
        // se escolher treinar bastante

        cout << " Com o seu esforço, os seus resultados começam a aparecer, "
                "gols e assistencias nos ultimos jogos te inspiram a continuar "
                "focado e treinando.\n";
        cout << " Na ansiedade de ser o melhor jogador da liga e se isolar "
                "como artilheiro do campeonato, há duas opções nos dias de "
                "folga pós jogo: \n";
        cout << "1 - Deixar o dia de recuperação/descanso dos jogos para trás "
                "e ir até o seu limite físico\n";
        cout << "2 - Aproveitar o dia pós jogo com sua familia, tirar um tempo "
                "e sair com sua esposa e brincar com seu filho\n";

        cin >> escolha;

        // Se escolher treinar nos dias de folga.
        if (escolha == 1) {
          cout << " No seu limite fisico, você rompe o ligamento cruzado do "
                  "joelho direito e terá que passar por cirurgia, segundo o "
                  "médico, você ficará de 6 a 9 meses parado.\n";
          cout << " Uma temporada se passou desde a sua lesão, você tenta "
                  "voltar a jogar como antes mas não consegue os mesmos "
                  "resultados, com o seu contrato com o clube acabando, a "
                  "diretoria resolve não renovar o seu contrato e você fica "
                  "sem clube\n";
          cout << " O seu agente tenta,  porem não consegue achar clubes "
                  "interessados em contar com o seu futebol pós lesão. \n";
          cout << " Fim de carreira. \n";

          return 0;
        } else if (escolha == 2) {
          // Se escolher aproveitar os dias de folga com a familia
          cout << " Com os seu corpo descansado e o seu auge fisico e técnico, "
                  "o seu time chega a final da Copa do Brasil, um campeonato "
                  "importantissimo e que renderá ao clube cerca de 70 milhões "
                  "de reais caso seja campeão. \n";
          cout << " A partida começa, você nervoso começa os primeiros minutos "
                  "do jogo muito mal, porem depois você consegue se ajeitar na "
                  "partida.\n";
          cout
              << " Fim de jogo, 0 a 0 contra a equipe do São Paulo, a partida "
                 "será decidida nos penaltis, ambas torcidas estão nervosas \n";
          cout << " Chegou a sua hora de bater o penalti, se você acertar o "
                  "seu time é campeão, se perder seu time perde o titulo. \n";
          cout << "Aonde você deseja bater?\n";
          cout << "1 - Direita do goleiro. \n";
          cout << "2 - No meio do Gol. \n";
          cout << "3 - Esquerda do goleiro. \n";

          cin >> escolha;

          if (escolha == 1 || escolha == 2) {
            cout << "PRA FORAAAAAAAAAAAAAA, A torcida adversaria vai a "
                    "loucura, a equipe do São Paulo acaba de conquistar o seu "
                    "primeiro titulo da Copa do Brasil. \n";
            cout << " Todos estão decepcionados com você, um jogador que "
                    "estava construindo uma historia linda no Marcilio Dias, "
                    "errar um penalti numa final jamais será esquecido pelos "
                    "torcedores. \n";
            cout << " No dia seguinte pós vice campeonato, a torcida e a midia "
                    "pedem para que você seja afastado do clube, pois foi "
                    "inamidissivel perder um penalti numa final de campeonato. "
                    "\n";
            cout << " O clube, decepcionado, encerra o seu contrato. \n";
            cout << "Você muito frustrado encerra a sua carreira de futebol e "
                    "decreta aposentadoria";

            return 0;
          } else if (escolha == 3) {
            cout << "GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLLLLLLLLL, O CLUBE MARCILIO "
                    "DIAS É CAMPEÃO DA COPA DO BRASIL, UM TITULO HISTORICO "
                    "PARA O CLUBE.\n";
            cout << "A torcida louca, invade o campo e comemora o titulo junto "
                    "com o time.\n";
            cout << " Parabens jogador você se tornou idolo do Marcilio Dias, "
                    "os torcedores jamais esquecerão do que você fez pelo "
                    "clube.\n";
            cout << " Feliz, você conclui que ciclos se encerram, e decide "
                    "parar de jogar futebol para entrar na diretoria do clube "
                    "e ajudar cada vez mais o time que você obteve uma paixão "
                    "enquanto jogador.\n";
            cout << " Este é o fim de sua carreira como jogador, mas apenas o "
                    "inicio como Diretor de futebol do Marcilio dias.\n";
            cout << " Fim de jogo. Você zerou o game, Parabens!\n";
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
        cout << "Escolha Invalida.\n";
        return 0;
      }
      return 0;
    } else {
      cout << "Escolha Invalida!\n";
      return 0;
    }

  } else if (escolha == 2) {
    // receber dois mil e banco
    cout << "Parabéns!\n";
    cout << " Seu contrato foi assinado! O técnico deseja boa sorte na "
            "temporada e espera contar com você no decorrer dos jogos. \n";
    cout << " Nos ultimos meses você nao vem sendo utilizado da maneira que "
            "gostaria, nem sendo relacionado para os jogos, quando relacionado "
            "com pouca minutagem nos jogos e poucas vezes como titular\n ";
    cout << " Com as decisões do treinador você está "
            "descontente e possui duas escolhas: \n";

    cout << " 1 - Focar apenas no treino, se abstendo da sua vida pessoal, "
            "focando apenas no profissional e se doando 100% nos treinos. \n";
    cout << "  -10 vida social\n";
    cout << "  +20 habilidde\n";

    cout << " 2 - Aproveitar que está sendo pouco utilizado e aproveitar o "
            "seu salario nas madrugadas de itajai, deixando de lado os "
            "treinos e focando pouco nos jogos.\n";

    cout << "Qual a sua escolha ?\n";
    cin >> escolha;
    // focar no treino
    if (escolha == 1) {
      cout << " Com o seu esforço, os seus resultados começam a aparecer, gols "
              "e assistencias nos ultimos jogos te inspiram a continuar focado "
              "e treinando.\n";
      cout << " Na ansiedade de ser o melhor jogador da liga e se isolar como "
              "artilheiro do campeonato, há duas opções nos dias de folga pós "
              "jogo: \n";
      cout << "1 - Deixar o dia de recuperação/descanso dos jogos para trás e "
              "ir até o seu limite físico\n";
      cout << "2 - Aproveitar o dia pós jogo com sua familia, tirar um tempo e "
              "sair com sua esposa e brincar com seu filho\n";

      cin >> escolha;

      if (escolha == 1) {
        cout << " No seu limite fisico, você rompe o ligamento cruzado do "
                "joelho direito e terá que passar por cirurgia, segundo o "
                "médico, você ficará de 6 a 9 meses parado.\n";
        cout << " Uma temporada se passou desde a sua lesão, você tenta voltar "
                "a jogar como antes mas não consegue os mesmos resultados, com "
                "o seu contrato com o clube acabando, a diretoria resolve não "
                "renovar o seu contrato e você fica sem clube\n";
        cout << " O seu agente tenta,  porem não consegue achar clubes "
                "interessados em contar com o seu futebol pós lesão. \n";
        cout << " Fim de carreira. \n";
        return 0;
      } else if (escolha == 2) {
        // Se escolher aproveitar os dias de folga com a familia

        cout << " Com os seu corpo descansado e o seu auge fisico e técnico, o "
                "seu time chega a final da Copa do Brasil, um campeonato "
                "importantissimo e que renderá ao clube cerca de 70 milhões de "
                "reais caso seja campeão. \n";
        cout << " A partida começa, você nervoso começa os primeiros minutos "
                "do jogo muito mal, porem depois você consegue se ajeitar na "
                "partida.\n";
        cout << " Fim de jogo, 0 a 0 contra a equipe do São Paulo, a partida "
                "será decidida nos penaltis, ambas torcidas estão nervosas \n";
        cout << " Chegou a sua hora de bater o penalti, se você acertar o seu "
                "time é campeão, se perder seu time perde o titulo. \n";
        cout << "Aonde você deseja bater?\n";
        cout << "1 - Direita do goleiro. \n";
        cout << "2 - No meio do Gol. \n";
        cout << "3 - Esquerda do goleiro. \n";

        cin >> escolha;

        if (escolha == 1 || escolha == 2) {
          cout << "PRA FORAAAAAAAAAAAAAA, A torcida adversaria vai a loucura, "
                  "a equipe do São Paulo acaba de conquistar o seu primeiro "
                  "titulo da Copa do Brasil. \n";
          cout << " Todos estão decepcionados com você, um jogador que estava "
                  "construindo uma historia linda no Marcilio Dias, errar um "
                  "penalti numa final jamais será esquecido pelos torcedores. "
                  "\n";
          cout
              << " No dia seguinte pós vice campeonato, a torcida e a midia "
                 "pedem para que você seja afastado do clube, pois foi "
                 "inamidissivel perder um penalti numa final de campeonato. \n";
          cout << " O clube, decepcionado, encerra o seu contrato. \n";
          cout << "Você muito frustrado encerra a sua carreira de futebol e "
                  "decreta aposentadoria";

          return 0;
        } else if (escolha == 3) {
          cout << "GOOOOOOOOOOOOOOOOOOOOOOOOLLLLLLLLLLLLL, O CLUBE MARCILIO "
                  "DIAS É CAMPEÃO DA COPA DO BRASIL, UM TITULO HISTORICO PARA "
                  "O CLUBE.\n";
          cout << "A torcida louca, invade o campo e comemora o titulo junto "
                  "com o time.\n";
          cout << " Parabens jogador você se tornou idolo do Marcilio Dias, os "
                  "torcedores jamais esquecerão do que você fez pelo clube.\n";
          cout << " Feliz, você conclui que ciclos se encerram, e decide parar "
                  "de jogar futebol para entrar na diretoria do clube e ajudar "
                  "cada vez mais o time que você obteve uma paixão enquanto "
                  "jogador.\n";
          cout << " Este é o fim de sua carreira como jogador, mas apenas o "
                  "inicio como Diretor de futebol do Marcilio dias.\n";
          cout << " Fim de jogo. Você zerou o game, Parabens!\n";
          return 0;
        } else {
          cout << "Escolha Invalida!\n";
          return 0;
        }
      } else {
        cout << "Escolha Invalida!\n";
        return 0;
      }
    } else if (escolha == 2) {
      // festa
      cout << "Nessa noite, os seus companheiros de time irão a uma festa "
              "essa noite e te convidaram para ir, disseram que a noitada "
              "não é a mesma sem a sua companhia. Você deseja ir? Com isso "
              "você ganhará +10 de entrosamento (faz com que você se adapte "
              "melhor ao time e receba mais passes no jogo) \n";

      cout << "1 - Sim\n";
      cout << "2 - Não\n";

      cin >> escolha;

      if (escolha == 1) {
        cout << " Você aproveitou muito a noite com seus companheiros de "
                "time, porem você exagerou na bebida e na noitada. Você "
                "chegou atrasado no treino e praticamente não dormiu noite "
                "passada.\n";
        cout << " O técnico não gostou nenhum pouco de sua atitude e com "
                "isso você perde as chances que tinha para seguir como "
                "titular no time. -20 confiança\n";

        cout << " A temporada do seu time acabou, você foi pouquissimo "
                "aproveitado e decepciou bastante a diretoria do seu time, "
                "que frustrada, decidiu encerrar o seu contrato como "
                "profissional. Agora você está sem clube. \n";
        cout << " O Seu agente tenta, porém não consegue nenhum clube "
                "interessado em seu fuebol pelas suas recentes "
                "escolhas.\n";
        cout << "Fim de carreira";
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
          cout << " Com o seu esforço, os seus resultados começam a aparecer, "
                  "gols e assistencias nos ultimos jogos te inspiram a "
                  "continuar focado e treinando.\n";
          cout << " Na ansiedade de ser o melhor jogador da liga e se isolar "
                  "como artilheiro do campeonato, há duas opções nos dias de "
                  "folga pós jogo: \n";
          cout << "1 - Deixar o dia de recuperação/descanso dos jogos para "
                  "trás e ir até o seu limite físico\n";
          cout << "2 - Aproveitar o dia pós jogo com sua familia, tirar um "
                  "tempo e sair com sua esposa e brincar com seu filho\n";

          cin >> escolha;
          // lesão
          if (escolha == 1) {
            cout << " No seu limite fisico, você rompe o ligamento cruzado do "
                    "joelho direito e terá que passar por cirurgia, segundo o "
                    "médico, você ficará de 6 a 9 meses parado.\n";
            cout << " Uma temporada se passou desde a sua lesão, você tenta "
                    "voltar a jogar como antes mas não consegue os mesmos "
                    "resultados, com o seu contrato com o clube acabando, a "
                    "diretoria resolve não renovar o seu contrato e você fica "
                    "sem clube\n";
            cout << " O seu agente tenta,  porem não consegue achar clubes "
                    "interessados em contar com o seu futebol pós lesão. \n";
            cout << " Fim de carreira. \n";
            return 0;
          } else if (escolha == 2) {
            // descanso
            cout << " Com os seu corpo descansado e o seu auge fisico e "
                    "técnico, o seu time chega a final da Copa do Brasil, um "
                    "campeonato importantissimo e que renderá ao clube cerca "
                    "de 70 milhões de reais. \n";
            cout << " Começa a partida, você nervoso começa os primeiros "
                    "minutos do jogo muito mal, porem depois você consegue se "
                    "ajeitar na partida.\n";
            cout << " Fim de jogo, 0 a 0 contra a equipe do São Paulo, a "
                    "partida será decidida nos penaltis, ambas torcidas estão "
                    "nervosas \n";
            cout << " Chegou a sua hora de bater o penalti, se você acertar o "
                    "seu time é campeão, se perder seu time perde o titulo. \n";
            cout << "1 - bater na direita.\n";
            cout << "2 - bater no meio.\n";
            cout << "3- bater na esquerda.\n";
            cin >> escolha;
            if (escolha == 1 || escolha == 2) {
              cout << "Infelizmente o goleiro defende o penalti, levando o seu "
                      "time a ser eliminado do campeonato.\n";
              cout << "Com o péssimo acontecimento, sua carreira de atléta "
                      "profissional chega ao fim.\n";

              return 0;
            } else if (escolha == 3) {
              // Se escolher esquerda

              cout << "Você acerta o gol, e seu time saí como campeão do "
                      "campeonato.\n";
              cout << "Olhando para sua história, você vê tudo o que "
                      "aconteceu, e "
                      "decide se aposentar como um campeão.\n";

              return 0;
            }
          } else {
            cout << "Escolha Invalida!\n";
            return 0;
          }
        } else if (escolha == 2) {
          cout << " Sem sede de vitória e ambição profissional, você acaba nem "
                  "sendo mais relacionado para os jogos.\n";
          cout << " Pelo custo alto do seu salário e sem previsão de retorno "
                  "profissional, você acaba sendo uma das piores contratações "
                  "da história do Marcilio Dias. \n";
          cout << " Fim de temporada pelo Marcilio Dias, o clube optou por não "
                  "renovar o seu contrato. \n";
          cout << " O seu agente tenta algum clube interessado, porem não "
                  "obtem retorno. \n";
          cout << " Fim de carreira. \n";
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

  cout << " No time do Vasco, você jogará como zagueiro.\n";
  cout << " Depois de algum tempo treinando, você finalmente entra em campo.\n";
  cout << " No final da partida, você realiza uma entrevista pós jogo no qual "
          "o seu time sofreu uma goleada para o maior rival.\n";
  cout << " Na entrevista você: \n";
  cout << "1 - Detonar o seu time, e expõe briga com o técnico. \n";
  cout << "2 - Exalta o time adversário, e elogia o seu time.\n";

  cin >> escolha;

  // Se escolher detonar o time adversário
  if (escolha == 1) {
    cout << "A diretoria do clube não gostou de seu comportamento durante a "
            "entrevista.\n";
    cout << "Tanto a diretoria quanto o técnico decidiram te deixar no banco "
            "por 6 jogos.\n";
    cout << "Os 6 jogos se passm, e você volta ao campo.\n";
    cout << "Durante a partida, você dá um carrinho no atleta do outro time, e "
            "acab sendo expulso do jogo.\n";
    cout << "Pela falta de comportamento, e o péssimo equilibrio psicológico, "
            "o clube decide encerrar seu contrato, chegando assim, ao fim de "
            "sua carreira.\n";

    return 0;
  } else if (escolha == 2) {
    // Se escolher exaltar o time adversário

    cout << "Pela ótima entrevista dada, você fica bem reconhecido pelas "
            "outras pessoas.\n";
    cout << "Durante a semana, você se dedica 100% aos treinos. (+10% de "
            "habilidade)";

    cout << "Depois dessa longa semana de treinos, você conversa com o técnico "
            "pedindo para trocar de posição.\n";
    cout << "O técnico aceita e te da duas opções:\n";
    cout << "1 - Atacante.\n";
    cout << "2 - Meio de Campo.\n";

    cin >> escolha;

    // Se escolher trocar para atacante
    if (escolha == 1) {
      cout << "Nos treinos e durante os jogos, você enfrenta bastante "
              "dificuldade para essa adaptação, não conseguindo mais entregar "
              "o mesmo resultado.\n";
      cout << "Apesar das dificuldades, você continua querendo jogar como "
              "atacante, e se dedica cada vez mais, mas mesmo assim, tem a "
              "possibilidaade de ser substituido e acabar com sua carreira.\n";
      cout << "Dois meses se passam, e você acaba sendo substituido, e por não "
              "ter mis psicológico para continuar, você desiste da sua "
              "carreira.\n";

      return 0;
    } else if (escolha == 2) {
      // Se escolher trocar para Meio de Campo

      cout
          << "Durante dois anos, você continuou jogando nessa posição, e pelo "
             "grande destaque, você é chamado para jogar na Europa pelo PSG.\n";
      cout << "1 - Para aceitar jogar pelo PSG.\n";
      cout << "2 - Para recusar o convite de jogar pelo PSG.\n";

      cin >> escolha;

      // Se escolher jogar pelo psg
      if (escolha == 1) {
        cout << "O clube te recepciona muito bem, e a partir de agora você irá "
                "jogar de meio campo pelo PSG.\n";
        cout << "Com grandes jogos, você se torna um icone do PSG, "
                "conquistando tudo que sempre sonhou.\n";
        cout << "Se passaram 4 anos, e você decide se aposentar.\n";

        return 0;
      } else if (escolha == 2) {
        // Se escolher não jogar pelo PSG

        cout << "O tempo passou e você não pode mais continuar no vasco, visto "
                "que já não tem mais o destaque que tinha antes.\n";
        cout << "Infelizmente, sua carreira acaba por aqui.\n";

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
    cout << "Escolha Incorreta!\n";
    return 0;
  }
}

int real() {
  int escolha;

  cout << "Na proposta do Real Madrid, há duas posições para você jogar:\n";
  cout << "1 - Jogar de Goleiro, salario de $100.000 \n";
  cout << "2 - Jogar de Meio Campo, salario de $150.000\n";

  cin >> escolha;

  if (escolha == 1) {
    // goleiro
    cout
        << " Você chega no clube, começa a treinar e se destaca facilmente, o "
           "técnico conta com você como reserva imediato do goleiro titular.\n";
    cout << " 6 meses após a sua contratação o goleiro titular se machuca e "
            "você terá que assumir a titularidade em alguns jogos importantes. "
            "\n";
    cout << " Na partida contra o Barcelona, numa semi final da Copa do Rei, o "
            "zagueiro do seu time comete um penalti. \n";
    cout << " Todos confiam em você, pois você sempre se destacou nos treinos "
            "e chegou a hora de você mostrar o seu valor. \n";
    cout << " Gavi irá bater o penalti, para qual lado você deseja pular? \n";
    cout << "1 - Pular para esquerda.\n";
    cout << "2 - Ficar no meio do gol.\n";
    cout << "3 - Pular para direita.\n";

    cin >> escolha;

    if (escolha == 1) {
      // defesa
      cout << " QUE BELA DEFESA! praticamente defendeu a bola que ia no "
              "ângulo, todos estão impressionados com você.\n";
      cout << " Você segue como titular do time, fazendo belas partidas e "
              "deixando por vezes o goleiro titular no banco\n";
      cout << " Entretanto, há um pulga atrás da sua orelha que por volta e "
              "meia te incomoda bastante em relação a sua carreira. \n";
      cout << " Decida:\n";
      cout << "1 - Mesmo indo muito bem como goleiro do Real Madrid, o seu "
              "sonho sempre foi jogar no ataque. \n";
      cout << "2 - Continuar como goleiro mesmo não tendo certeza que isso te "
              "levará a felicidade profissional. \n";

      cin >> escolha;

      if (escolha == 1) {
        cout << " Mesmo indo bem no gol, você conclui que não há motivos para "
                "seguir em um caminho que não seja o seu sonho.\n";
        cout << "Agora você está jogando como atacante. \n";
        cout << " Passado 6 meses da troca de posição, você segue sem atuar "
                "pelo Real Madrid como atacante, pois não se destacou o "
                "suficiente para eliminar a conconrrecia no time. \n";
        cout << "Insatisfeito com isso, você decide trocar de time. Seu agente "
                "te liga e agora você é o novo reforço do Clube Marcilio Dias. "
                "\n";

        return marcilio();
      } else if (escolha == 2) {
        cout << "Mesmo inseguro de seu futuro, você segue como goleiro.\n";
        cout << " Você deseja comprar luvas novas para aprimorar a sua "
                "técnica?\n";
        cout << "($-15.000).\n";
        cout << "1 - Comprar as luvas.\n";
        cout << "2 - Não comprar as luvas.\n";

        cin >> escolha;
        // compra das luvas
        if (escolha == 1) {
          cout << " Você se destaca e agora é goleiro absoluto do Real Madrid, "
                  "desbancando a titularidade do goleiro antigo e deixando ele "
                  "no banco de reserva.\n";
          cout << " Hoje é dia de convocação para a Copa do Mundo, você assite "
                  "a TV esperançoso para a sua convocação, até que então você "
                  "é chamado.\n";
          cout << " Como goleiro titular do Brasil, você fecha o gol em "
                  "momentos decisivos e leva o brasil para a final da copa do "
                  "mundo. \n";
          cout << " Brasil sai na frente no placar, Brasil 1 x 0 Argentina. \n";
          cout << " No ultimo lance do jogo, o zagueiro comete um penalti e "
                  "você terá que defender. \n";
          cout << " Messi na bola, ele olha friamente para o fundo dos seus "
                  "olhos, com o olhar de quem vai fazer o gol e levar a "
                  "Argentina para mais um titulo mundial. \n";
          cout
              << " Para qual lado você deseja pular para defender o penalti?\n";

          cout << "1 - Pular para direita.\n";
          cout << "2 - Ficar no meio.\n";
          cout << "3 - Pular para esquerda.\n";

          cin >> escolha;

          if (escolha == 1) {
            cout << " Grita o narrador: QUE DEFESA ESPETACULAR MEUS AMIGOS, "
                    "ESSE GOLEIRO ELE É INCRIVEL, UM MONSTRO SAGRADO, BOTANDO "
                    "O MESSI EM SEU BOLSO E GUARDANDO, DEIXANDO O ARGENTINO "
                    "COM A PIOR CARA POSSIVEL PÓS PENALTI.\n";
            cout << " O juiz apita, e o Brasil é Hexa campeão mundial.\n";
            cout << " Você jamais será esquecido pelos brasileiros, você fez "
                    "uma bela historia com a amarelinha e se tornou um idolo "
                    "de uma geração. \n";
            cout << " Feliz pelos resultados obtidos, você decide se aposentar "
                    "e viver a sua vida como um ÍDOLO. \n";
            cout << " Fim de carreira. Parabens você zerou o game. \n";

            return 0;
          } else if (escolha == 2 || escolha == 3) {
            cout << "Grita com voz triste o narrador: "
                    "GOOOOOOOOOOOOLLLLLLLLLLLL, Messi, Messi, Messi, mais uma "
                    "vez fazendo a diferença em sua seleção, levando a "
                    "Argentina para os penaltis.\n";
            cout << " A argentina leva o jogo para os penaltis e acaba sendo "
                    "Campeã em cima do Brasil, um vexame jamais esquecido por "
                    "todos.";
            cout << " Com muitas ofensas e pressão em cima de você por não ter "
                    "defendido o penalti, você decide por se aposentar pois "
                    "não aguenta toda essa pressão. \n ";
            cout << " Fim de carreira. \n";

            return 0;
          } else {
            cout << "Escolha Invalida!\n";
            return 0;
          }

        } else if (escolha == 2) {
          // recusa das luvas
          cout << " O goleiro titular, se recupera de lesão e volta no seu "
                  "auge fisico e técnico, desbancando a sua titularidade.\n";
          cout << " Não surgem mais oportunidades como titular para você.\n";
          cout << " Fim de temporada, você não está mais sendo utilizado pelo "
                  "técnico e assim o clube decide não renovar o seu contrato, "
                  "com isso você está sem time atualmente.\n";
          cout << " O seu agente tenta, mas nao consegue encontrar times "
                  "interessados no seu futebol. \n";
          cout << " Fim de carreira.\n";

          return 0;
        } else {
          cout << "Escolha Invalida!\n";
          return 0;
        }
      }
    } else if (escolha == 2 || escolha == 3) {
      // gol adversario
      cout << " Gol de Gavi, o jogo termina 1 a 0 para o Barcelona e o seu "
              "time esta eliminado do campeonato. \n";
      cout << " A sua única oportunidade que você teve, foi desperdiçada. O "
              "técnico estava confiante que você faria um belo trabalho, mas "
              "acabou decepcionando. \n";
      cout << " O goleiro titular se recupera e volta a jogar normalmente. \n";
      cout << " Termina a temporada e com ela termina o seu contrato com o "
              "Real Madrid, eles decidem não renovar com seu contrato pois não "
              "vê mais futuro em você como goleiro.\n";
      cout << " O seu agente tenta algum clube interessado, porem não consegue "
              "achar clubes interessados.\n";
      cout << " Fim de carreira. \n";
      return 0;
    }
  } else if (escolha == 2) {
    // jogando de meia atacante
    cout << " Passado 6 meses de sua contratação você não está tendo espaço no "
            "time, mesmo dando tudo de si nos treinamentos o técnico já disse "
            "que não contará com você para o restante da temporada.\n";
    cout << " Diante dos fatos, você possui duas escolhas:\n";
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

  cout << " Bem vindo " << nome << "!\n";
  cout << "Ultimamente você se destacou nos campeonatos de várzea \n";
  cout << "Alguns olheiros te viram em campo, gostaram e você foi sondado por "
          "3 times.\n";
  cout << "Segue a lista dos clubes interessados: \n";
  cout << "1 - Marcilio Dias\n";
  cout << "2 - Vasco da Gama\n";
  cout << "3 - Real Madrid\n";

  int time;

  cout << "Digite o numero do time no qual deseja aceitar a proposta e iniciar "
          "a sua carreira \n";
  cin >> time;

  if (time == 1) {
    return marcilio();
  } else if (time == 2) {
    return vasco();
  } else if (time == 3) {
    return real();
  } else {
    cout << "Escolha Invalida!\n";
    return main();
  }
}