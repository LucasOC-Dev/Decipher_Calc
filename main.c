// Inclusão de Bibliotécas
#include <stdio.h> // Bibliotéca padrão C
#include <stdlib.h> // Bibliotéca padrão C
#include <locale.h> // Bibliotéca necessária para acentuar palavras em PT-BR
#include <math.h> // Bibliotéca necessária para realizar conjuntos de funções matemáticas
#include <conio.h>// Bibliotéca necessária para utilizar o comando getch() utilizado na validação dos dados inseridos pelo usuário
#include <ctype.h>// Bibliotéca necessária para utilizar o comando isdigit() utilizado na validação dos dados inseridos pelo usuário

//Declarações de Funções
void Digite(void); // Verifica o tipo de entrada pelo usuário
void Logo(void);	// Logomarca da Calculadora
void Menu(void);	// Opções do Menu
void Somatoria(void);	// Somatório
void LogPro(void);	// Lógica Proporsicional
void AnaCom(void);	// Análise Combinatória
void Saida(void);	// Frase de encerramento

//Declaração Variáveis Globais
int numero, i, j, k, n, p, q, fat, fat1, fat2, soma, rep, auxPerm, fatTot, valid, op_Menu;
float piF, eF, fF, kF;

//Declaração de ponteiro para o vetor
int* vetComb;
int* fatComb;

// Inicio do Program
int main()
{
	// Configura o Idioma para Português
	setlocale(LC_ALL, "Portuguese");
	// Inicio do Loop do Sistema até que o usuário selecione sair	
	do
	{
		system("cls");
		system("color 0F");
		//	Chamando Função da Logo e Nome da calculadora
		Logo();
		// Chamando Função do Menu
		Menu();
		// Chamando Função da Opção Escolhida
		switch (op_Menu)
		{
		case 1:
			Somatoria();
			break;
		case 2:
			LogPro();
			break;
		case 3:
			AnaCom();
			break;
		case 4:
			break;
		default:
			printf("\n\t\tOpção invalida, por favor selecione uma das opções acima.\n\n");
			system("pause");
			break;
		}
	} while (op_Menu != 4);
	Saida();
	return 0;
}
// Fim do Programa

// Inicio das Funções Complementares

// Função de Validação dos Dados Inseridos pelo Usuário
void digite(void)
{
	// Declaração de Variaveis
	char digitado[50];
	char c;
	int x = 0;
	// Inicio da Verificação de digitação
	do
	{
		c = _getch();
		if (isdigit(c) != 0)
		{
			digitado[x] = c;
			x++;
			printf("%c", c);
		}
		else if (c == 8 && x)
		{
			digitado[x] = '\0';
			x--;
			printf("\b \b");
		}
	} while (c != 13); // (código 13 na tabela ASCII é o Enter)

	digitado[x] = '\0';
	numero = atoi(digitado); // converte o valor digitado de char pra numeros
}

// Funcão Logomarca da Calculadora
void Logo(void)
{
	printf("\t --------------------------------------------------------------------------\n");
	printf("\t |                                                                        |\n");
	printf("\t |      @@                        @@                                      |\n");
	printf("\t |      @ @                       @ @                                     |\n");
	printf("\t |      @  @                      @  @                                    |\n");
	printf("\t |      @   @  @@@@@@@@@@@  @  @  @   @    @               @@             |\n");
	printf("\t |      @    @  @          @   @  @  @     @          @    @ @            |\n");
	printf("\t |      @     @  @        @    @  @ @      @         @     @  @           |\n");
	printf("\t |      @      @  @      @     @  @@       @  @@@@@@@@@@@  @   @          |\n");
	printf("\t |      @       @  @    @      @  @  @@@@@@@       @       @  @           |\n");
	printf("\t |      @      @  @      @     @  @  @     @  @@@@@@@@@@@  @ @            |\n");
	printf("\t |      @     @  @        @    @  @  @     @     @         @@ @           |\n");
	printf("\t |      @    @  @          @   @  @  @     @    @          @   @          |\n");
	printf("\t |      @   @  @@@@@@@@@@@  @  @  @  @     @               @    @         |\n");
	printf("\t |      @  @                                                     @        |\n");
	printf("\t |      @ @                    @          CALCULATOR              @       |\n");
	printf("\t |      @@                                                         @      |\n");
	printf("\t |                                                                        |\n");
	printf("\t --------------------------------------------------------------------------\n");
}

// Função Menu de Opções
void Menu(void)
{
	printf("\n");
	printf("\t\t\t\t  -=[ Menu Principal ]=-\n");
	printf("\n");
	printf("\t\t\t\t[1] Somatório\n");
	printf("\t\t\t\t[2] Lógica Proposicional\n");
	printf("\t\t\t\t[3] Análise Combinatória\n");
	printf("\t\t\t\t[4] Sair\n");
	printf("\n");

	printf("\t\t\t\tSelecione a opção desejada: ");
	digite();
	op_Menu = numero;
	printf("\n");
}

// Função Somatório
void Somatoria(void)
{
	do
	{
		// Menu Somatório
		system("cls");
		system("color 03");
		Logo();
		printf("\n");
		printf("\t\t\t\t  -=[ Menu Somatório ]=-\n");
		printf("\n");
		printf("\t\t\t[1] Somatório de j=0 até n para Regra j\n");
		printf("\t\t\t[2] Somatório de j=0 até n para a Regra (-j)^(j+1)\n");
		printf("\t\t\t[3] Aproximação do Número Pi com Somatório até n\n");
		printf("\t\t\t[4] Aproximação do Neperiano por Somatório até n\n");
		printf("\t\t\t[5] Voltar ao Menu Principal\n");
		printf("\n");

		printf("\t\t\tSelecione a opção desejada: ");
		digite();
		op_Menu = numero;
		printf("\n");
		// Inicio dos cálculos de Somatória baseado na escolha do usuário
		switch (op_Menu)
		{
			// [1] Somatório de j=0 até n para Regra j
		case 1:
			soma = 0;
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\t\tDigite o valor de \"n\": ");
				digite();
				n = numero;
				if (n >= 1 && n <= 9999999)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			for (j = 0; j <= n; j++)
			{
				soma = soma + j;
			}
			// Exibição do valor calculado
			printf("\n\t\t\t[1] Somatório de j=0 até n=%d para regra j\n", n);
			printf("\n\t\t\tResultado:\t%d\n\n", soma);
			system("pause");
			break;
			// [2] Somatório de j=0 até n para a Regra (-j)^(j+1)
		case 2:
			soma = 0;
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\t\tDigite o valor de \"n\": ");
				digite();
				n = numero;
				if (n >= 1 && n <= 9999999)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			for (j = 0; j <= n; j++)
			{
				soma = soma + pow(-j, (j + 1));
			}
			// Exibição do valor calculado
			printf("\n\t\t\t[2] Somatório de j=0 até n=%d para a Regra (-j)^(j+1)\n", n);
			printf("\n\t\t\tResultado:\t%d\n\n", soma);
			system("pause");
			break;
			// [3] Aproximação do Número Pi com Somatório até n
		case 3:
			piF = 0;
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\t\tDigite o valor de \"n\": ");
				digite();
				n = numero;
				if (n >= 1 && n <= 9999999)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			for (kF = 0; kF <= n; kF++)
			{
				piF = piF + (8 / ((4 * kF + 1) * (4 * kF + 3)));
			}
			// Exibição do valor calculado
			printf("\n\t\t\t[3] Aproximação do Número Pi com Somatório até n=%d\n", n);
			printf("\n\t\t\tResultado:\t%f\n\n", piF);
			system("pause");
			break;
			// [4] Aproximação do Neperiano por Somatório até n
		case 4:
			eF = 1.0;
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\t\tDigite o valor de \"n\": ");
				digite();
				n = numero;
				if (n >= 1 && n <= 9999)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			for (i = 1; i <= n; i++)
			{
				fF = 1;
				for (j = 1; j <= i; j++)
				{
					fF = fF * j;
				}
				eF = eF + 1.0 / fF;
			}
			// Exibição do valor calculado
			printf("\n\t\t\t[4] Aproximação do Neperiano por Somatório até n=%d\n", n);
			printf("\n\t\t\tResultado:\t%f\n\n", eF);
			system("pause");
			break;
			// [5] Voltar ao Menu Principal
		case 5:
			break;
			// Validação caso nem uma das opções do menu for selecionada
		default:
			printf("\t\tOpção invalida, por favor selecione uma das opções acima.\n\n");
			system("pause");
			break;
		}
	} while (op_Menu != 5);
}

// Função Lógica Proposicional
void LogPro(void)
{
	do
	{
		// Menu Lógica Proposicional
		system("cls");
		system("color 0E");
		Logo();
		printf("\n");
		printf("\t\t\t\t-=[ Menu Lógica Proposicional ]=-\n");
		printf("\n");
		printf("\t\t\t[1] ~ p\n");
		printf("\t\t\t[2] ~ q\n");
		printf("\t\t\t[3] p ^ q\n");
		printf("\t\t\t[4] p v q\n");
		printf("\t\t\t[5] p _v_ q\n");
		printf("\t\t\t[6] p -> q\n");
		printf("\t\t\t[7] p <-> q\n");
		printf("\t\t\t[8] Voltar ao Menu Principal\n");
		printf("\n");

		printf("\t\t\tSelecione a opção desejada: ");
		digite();
		op_Menu = numero;
		printf("\n");
		// Inicio dos cálculos de Lógica Proposicional baseado na escolha do usuário. 
		switch (op_Menu)
		{
			// [1] ~ p
		case 1:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\tDigite o valor de \"p\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				p = numero;
				if (p == 0 || p == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			if (p == 0)
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d, ~p = Verdadeiro.\n\n", p);
			}
			else
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d, ~p = Falso.\n\n", p);
			}
			system("pause");
			break;
			// [2] ~ q
		case 2:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\tDigite o valor de \"q\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				q = numero;
				if (q == 0 || q == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			if (q == 0)
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para q = %d, ~p = Verdadeiro.\n\n", q);
			}
			else
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para q = %d, ~p = Falso.\n\n", q);
			}
			system("pause");
			break;
			// [3] p ^ q
		case 3:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\tDigite o Valor de \"p\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				p = numero;
				if (p == 0 || p == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			do
			{
				printf("\t\tDigite o valor de \"q\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				q = numero;
				if (q == 0 || q == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			if (p & q)
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p ^ q = Verdadeiro.\n\n", p, q);
			}
			else
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p ^ q = Falso.\n\n", p, q);
			}
			system("pause");
			break;
			// [4] p v q
		case 4:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\tDigite o Valor de \"p\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				p = numero;
				if (p == 0 || p == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			do
			{
				printf("\t\tDigite o Valor de \"q\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				q = numero;
				if (q == 0 || q == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			if (p | q)
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p V q = Verdadeiro.\n\n", p, q);
			}
			else
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p V q = Falso.\n\n", p, q);
			}
			system("pause");
			break;
			// [5] p _v_ q
		case 5:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\tDigite o Valor de \"p\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				p = numero;
				if (p == 0 || p == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			do
			{
				printf("\t\tDigite o valor de \"q\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				q = numero;
				if (q == 0 || q == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			if (p ^ q)
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p _V_ q = Verdadeiro.\n\n", p, q);
			}
			else
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p _V_ q = Falso.\n\n", p, q);
			}
			system("pause");
			break;
			// [6] p -> q
		case 6:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\tDigite o Valor de \"p\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				p = numero;
				if (p == 0 || p == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			do
			{
				printf("\t\tDigite o valor de \"q\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				q = numero;
				if (q == 0 || q == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			if (p > q)
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p -> q = Falso.\n\n", p, q);
			}
			else
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p -> q = Verdadeiro.\n\n", p, q);
			}
			system("pause");
			break;
			// [7] p <-> q
		case 7:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\tDigite o Valor de \"p\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				p = numero;
				if (p == 0 || p == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			do
			{
				printf("\t\tDigite o valor de \"q\" sendo [0]Falso, [1]Verdadeiro: ");
				digite();
				q = numero;
				if (q == 0 || q == 1)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\nValor digitado invalido para este cálculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			if (p == q)
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p <-> q = Verdadeiro.\n\n", p, q);
			}
			else
			{
				// Exibição do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p <-> q = Falso.\n\n", p, q);
			}
			system("pause");
			break;
			// [8] Voltar ao Menu Principal
		case 8:
			break;
			// Validação caso nem uma das opções do menu for selecionada
		default:
			printf("\t\tOpção invalida, por favor Selecione uma das opções acima.\n\n");
			system("pause");
			break;
		}
	} while (op_Menu != 8);
}

// Função Análise Combinatória
void AnaCom(void)
{
	do
	{
		// Menu Análise Combinatória
		system("cls");
		system("color 02");
		Logo();
		printf("\n");
		printf("\t\t\t\t-=[ Menu Análise Combinatória ]=-\n");
		printf("\n");
		printf("\t\t\t[1] Permutação Simples: P(n)\n");
		printf("\t\t\t[2] Arranjo Simples: A(n,k)\n");
		printf("\t\t\t[3] Combionação Simples: C(n,k)\n");
		printf("\t\t\t[4] Arranjo com Repetição: AR(n,k)\n");
		printf("\t\t\t[5] Combinação com Repetição: CR(n,k)\n");
		printf("\t\t\t[6] Permutação com Repetição: P(n,k1,...,kp)\n");
		printf("\t\t\t[7] Voltar ao Menu Principal\n");
		printf("\n");

		printf("\t\t\tSelecione a opção desejada: ");
		digite();
		op_Menu = numero;
		printf("\n");
		// Inicio dos cálculos de Análise Combinatória baseado na escolha do usuário
		switch (op_Menu)
		{
			// [1] Permutação Simples: P(n)
		case 1:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\t\tDigite o valor de n: ");
				digite();
				n = numero;
				if (n >= 1 && n <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			for (fat = 1; n > 0; n--)
			{
				fat = fat * n;
			}
			// Exibição do valor calculado
			printf("\n\t\t\t[1] Permutação Simples P(n)");
			printf("\n\t\t\tResultado:\t%d\n\n", fat);
			system("pause");
			break;
			// [2] Arranjo Simples: A(n,k)
		case 2:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\t\tDigite o valor de n: ");
				digite();
				n = numero;
				if (n >= 1 && n <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			do
			{
				printf("\t\t\tDigite o valor de k: ");
				digite();
				k = numero;
				if (k >= 1 && k <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			i = n - k;
			for (fat = 1; n > i; n--)
			{
				fat = fat * n;
			}
			// Exibição do valor calculado
			printf("\n\t\t\t[2] Arranjo Simples: A(n,k)");
			printf("\n\t\t\tResultado:\t%d\n\n", fat);
			system("pause");
			break;
			// [3] Combinação Simples: C(n,k)
		case 3:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\t\tDigite o valor de n: ");
				digite();
				n = numero;
				if (n >= 1 && n <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			do
			{
				printf("\t\t\tDigite o valor de k: ");
				digite();
				k = numero;
				if (k >= 1 && k <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			i = n - k;
			for (fat = 1; n > i; n--)
			{
				fat = fat * n;
			}
			for (fat2 = 1; k > 0; k--)
			{
				fat2 = fat2 * k;
			}
			soma = fat / fat2;
			// Exibição do valor calculado
			printf("\n\t\t\t[3] Combionação Simples: C(n,k)");
			printf("\n\t\t\tResultado:\t%d\n\n", soma);
			system("pause");
			break;
			// [4] Arranjo com Repetição: AR(n,k)
		case 4:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\t\tDigite o valor de n: ");
				digite();
				n = numero;
				if (n >= 1 && n <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			do
			{
				printf("\t\t\tDigite o valor de k: ");
				digite();
				k = numero;
				if (k >= 1 && k <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			soma = pow(n, k);
			// Exibição do valor calculado
			printf("\n\t\t\t[4] Arranjo com Repetição: AR(n,k)");
			printf("\n\t\t\tResultado:\t%d\n\n", soma);
			system("pause");
			break;
			// [5] Combinação com Repetição: CR(n,k)
		case 5:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\t\tDigite o valor de n: ");
				digite();
				n = numero;
				if (n >= 1 && n <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			do
			{
				printf("\t\t\tDigite o valor de k: ");
				digite();
				k = numero;
				if (k >= 1 && k <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			i = (n + k - 1);
			j = (n - 1);
			for (fat = 1; i > j; i--)
			{
				fat = fat * i;
			}
			for (fat2 = 1; k > 0; k--)
			{
				fat2 = fat2 * k;
			}
			soma = fat / fat2;
			// Exibição do valor calculado
			printf("\n\t\t\t[5] Combinação com Repetição: CR(n,k)");
			printf("\n\t\t\tResultado:\t%d\n\n", soma);
			system("pause");
			break;
			// [6] Permutação com Repetição: P(n,k1,...,kp)
		case 6:
			// Inserção e validação dos dados inseridos
			do
			{
				printf("\t\tDigite o total de elementos \"n\" para permutação com repetição: ");
				digite();
				n = numero;
				if (n >= 1 && n <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			do
			{
				printf("\n\t\tDigite a quantidade de elementos que se repetem \"k\": ");
				digite();
				rep = numero;
				if (rep >= 1 && rep <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// Início do processo de cálculo
			i = 0;
			vetComb = (int*)(malloc(rep * sizeof(int)));
			fatComb = (int*)(malloc(rep * sizeof(int)));
			for (auxPerm = 0; auxPerm < rep; auxPerm++)
			{
				// Inserção e validação do número de repetições de cada elemento
				do
				{
					printf("\n\t\tDigite quantas vezes o %d° elemento se repete:  ", auxPerm + 1);
					digite();
					vetComb[auxPerm] = numero;
					if (vetComb[auxPerm] >= 1 && vetComb[auxPerm] <= 10)
					{
						valid = 1;
					}
					else
					{
						valid = 0;
						printf("\n\t\tValor digitado invalido para este cálculo, favor digitar novamente.\n\n");
					}
				} while (valid == 0);
			}
			for (fat = 1; n > 0; n--)
			{
				fat = fat * n;
			}
			for (auxPerm = 0; auxPerm < rep; auxPerm++)
			{
				fat1 = vetComb[auxPerm];
				for (fat2 = 1; fat1 > 0; fat1--)
				{
					fat2 = fat2 * fat1;
				}
				fatComb[auxPerm] = fat2;
			}
			fatTot = 1;
			for (auxPerm = 0; auxPerm < rep; auxPerm++)
			{
				fatTot = fatTot * fatComb[auxPerm];
			}
			soma = fat / fatTot;
			// Exibição do valor calculado
			printf("\n\t\t[6] Permutação com Repetição: P(n,k1,...,kp)\n");
			printf("\n\t\tResultado:\t%d\n\n", soma);
			free(vetComb);
			free(fatComb);
			system("pause");
			break;
			// [7] Voltar ao Menu Principal
		case 7:
			break;
			// Validação caso nem uma das opções do menu for selecionada
		default:
			printf("\t\tOpção invalida, por favor selecione uma das opções acima.\n\n");
			system("pause");
			break;
		}
	} while (op_Menu != 7);
}

// Função Frase de encerramento
void Saida(void)
{
	system("cls");
	Logo();
	system("color 0C");
	printf("\n");
	printf("\t\t   -----------------------------------------------------\n");
	printf("\t\t   |          Programa Encerrado com Sucesso!          |\n");
	printf("\t\t   |    Obrigado por Utilizar Decipher Calculator      |\n");
	printf("\t\t   |   Precione Qualquer Tecla para Fechar a Janela.   |\n");
	printf("\t\t   -----------------------------------------------------\n");
	printf("\n");
	system("pause");
}