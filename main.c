// Inclus�o de Bibliot�cas
#include <stdio.h> // Bibliot�ca padr�o C
#include <stdlib.h> // Bibliot�ca padr�o C
#include <locale.h> // Bibliot�ca necess�ria para acentuar palavras em PT-BR
#include <math.h> // Bibliot�ca necess�ria para realizar conjuntos de fun��es matem�ticas
#include <conio.h>// Bibliot�ca necess�ria para utilizar o comando getch() utilizado na valida��o dos dados inseridos pelo usu�rio
#include <ctype.h>// Bibliot�ca necess�ria para utilizar o comando isdigit() utilizado na valida��o dos dados inseridos pelo usu�rio

//Declara��es de Fun��es
void Digite(void); // Verifica o tipo de entrada pelo usu�rio
void Logo(void);	// Logomarca da Calculadora
void Menu(void);	// Op��es do Menu
void Somatoria(void);	// Somat�rio
void LogPro(void);	// L�gica Proporsicional
void AnaCom(void);	// An�lise Combinat�ria
void Saida(void);	// Frase de encerramento

//Declara��o Vari�veis Globais
int numero, i, j, k, n, p, q, fat, fat1, fat2, soma, rep, auxPerm, fatTot, valid, op_Menu;
float piF, eF, fF, kF;

//Declara��o de ponteiro para o vetor
int* vetComb;
int* fatComb;

// Inicio do Program
int main()
{
	// Configura o Idioma para Portugu�s
	setlocale(LC_ALL, "Portuguese");
	// Inicio do Loop do Sistema at� que o usu�rio selecione sair	
	do
	{
		system("cls");
		system("color 0F");
		//	Chamando Fun��o da Logo e Nome da calculadora
		Logo();
		// Chamando Fun��o do Menu
		Menu();
		// Chamando Fun��o da Op��o Escolhida
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
			printf("\n\t\tOp��o invalida, por favor selecione uma das op��es acima.\n\n");
			system("pause");
			break;
		}
	} while (op_Menu != 4);
	Saida();
	return 0;
}
// Fim do Programa

// Inicio das Fun��es Complementares

// Fun��o de Valida��o dos Dados Inseridos pelo Usu�rio
void digite(void)
{
	// Declara��o de Variaveis
	char digitado[50];
	char c;
	int x = 0;
	// Inicio da Verifica��o de digita��o
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
	} while (c != 13); // (c�digo 13 na tabela ASCII � o Enter)

	digitado[x] = '\0';
	numero = atoi(digitado); // converte o valor digitado de char pra numeros
}

// Func�o Logomarca da Calculadora
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

// Fun��o Menu de Op��es
void Menu(void)
{
	printf("\n");
	printf("\t\t\t\t  -=[ Menu Principal ]=-\n");
	printf("\n");
	printf("\t\t\t\t[1] Somat�rio\n");
	printf("\t\t\t\t[2] L�gica Proposicional\n");
	printf("\t\t\t\t[3] An�lise Combinat�ria\n");
	printf("\t\t\t\t[4] Sair\n");
	printf("\n");

	printf("\t\t\t\tSelecione a op��o desejada: ");
	digite();
	op_Menu = numero;
	printf("\n");
}

// Fun��o Somat�rio
void Somatoria(void)
{
	do
	{
		// Menu Somat�rio
		system("cls");
		system("color 03");
		Logo();
		printf("\n");
		printf("\t\t\t\t  -=[ Menu Somat�rio ]=-\n");
		printf("\n");
		printf("\t\t\t[1] Somat�rio de j=0 at� n para Regra j\n");
		printf("\t\t\t[2] Somat�rio de j=0 at� n para a Regra (-j)^(j+1)\n");
		printf("\t\t\t[3] Aproxima��o do N�mero Pi com Somat�rio at� n\n");
		printf("\t\t\t[4] Aproxima��o do Neperiano por Somat�rio at� n\n");
		printf("\t\t\t[5] Voltar ao Menu Principal\n");
		printf("\n");

		printf("\t\t\tSelecione a op��o desejada: ");
		digite();
		op_Menu = numero;
		printf("\n");
		// Inicio dos c�lculos de Somat�ria baseado na escolha do usu�rio
		switch (op_Menu)
		{
			// [1] Somat�rio de j=0 at� n para Regra j
		case 1:
			soma = 0;
			// Inser��o e valida��o dos dados inseridos
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			for (j = 0; j <= n; j++)
			{
				soma = soma + j;
			}
			// Exibi��o do valor calculado
			printf("\n\t\t\t[1] Somat�rio de j=0 at� n=%d para regra j\n", n);
			printf("\n\t\t\tResultado:\t%d\n\n", soma);
			system("pause");
			break;
			// [2] Somat�rio de j=0 at� n para a Regra (-j)^(j+1)
		case 2:
			soma = 0;
			// Inser��o e valida��o dos dados inseridos
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			for (j = 0; j <= n; j++)
			{
				soma = soma + pow(-j, (j + 1));
			}
			// Exibi��o do valor calculado
			printf("\n\t\t\t[2] Somat�rio de j=0 at� n=%d para a Regra (-j)^(j+1)\n", n);
			printf("\n\t\t\tResultado:\t%d\n\n", soma);
			system("pause");
			break;
			// [3] Aproxima��o do N�mero Pi com Somat�rio at� n
		case 3:
			piF = 0;
			// Inser��o e valida��o dos dados inseridos
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			for (kF = 0; kF <= n; kF++)
			{
				piF = piF + (8 / ((4 * kF + 1) * (4 * kF + 3)));
			}
			// Exibi��o do valor calculado
			printf("\n\t\t\t[3] Aproxima��o do N�mero Pi com Somat�rio at� n=%d\n", n);
			printf("\n\t\t\tResultado:\t%f\n\n", piF);
			system("pause");
			break;
			// [4] Aproxima��o do Neperiano por Somat�rio at� n
		case 4:
			eF = 1.0;
			// Inser��o e valida��o dos dados inseridos
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			for (i = 1; i <= n; i++)
			{
				fF = 1;
				for (j = 1; j <= i; j++)
				{
					fF = fF * j;
				}
				eF = eF + 1.0 / fF;
			}
			// Exibi��o do valor calculado
			printf("\n\t\t\t[4] Aproxima��o do Neperiano por Somat�rio at� n=%d\n", n);
			printf("\n\t\t\tResultado:\t%f\n\n", eF);
			system("pause");
			break;
			// [5] Voltar ao Menu Principal
		case 5:
			break;
			// Valida��o caso nem uma das op��es do menu for selecionada
		default:
			printf("\t\tOp��o invalida, por favor selecione uma das op��es acima.\n\n");
			system("pause");
			break;
		}
	} while (op_Menu != 5);
}

// Fun��o L�gica Proposicional
void LogPro(void)
{
	do
	{
		// Menu L�gica Proposicional
		system("cls");
		system("color 0E");
		Logo();
		printf("\n");
		printf("\t\t\t\t-=[ Menu L�gica Proposicional ]=-\n");
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

		printf("\t\t\tSelecione a op��o desejada: ");
		digite();
		op_Menu = numero;
		printf("\n");
		// Inicio dos c�lculos de L�gica Proposicional baseado na escolha do usu�rio. 
		switch (op_Menu)
		{
			// [1] ~ p
		case 1:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			if (p == 0)
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d, ~p = Verdadeiro.\n\n", p);
			}
			else
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d, ~p = Falso.\n\n", p);
			}
			system("pause");
			break;
			// [2] ~ q
		case 2:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			if (q == 0)
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para q = %d, ~p = Verdadeiro.\n\n", q);
			}
			else
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para q = %d, ~p = Falso.\n\n", q);
			}
			system("pause");
			break;
			// [3] p ^ q
		case 3:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			if (p & q)
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p ^ q = Verdadeiro.\n\n", p, q);
			}
			else
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p ^ q = Falso.\n\n", p, q);
			}
			system("pause");
			break;
			// [4] p v q
		case 4:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			if (p | q)
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p V q = Verdadeiro.\n\n", p, q);
			}
			else
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p V q = Falso.\n\n", p, q);
			}
			system("pause");
			break;
			// [5] p _v_ q
		case 5:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			if (p ^ q)
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p _V_ q = Verdadeiro.\n\n", p, q);
			}
			else
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p _V_ q = Falso.\n\n", p, q);
			}
			system("pause");
			break;
			// [6] p -> q
		case 6:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			if (p > q)
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p -> q = Falso.\n\n", p, q);
			}
			else
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p -> q = Verdadeiro.\n\n", p, q);
			}
			system("pause");
			break;
			// [7] p <-> q
		case 7:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
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
					printf("\nValor digitado invalido para este c�lculo, favor digitar somente [0]Falso ou [1]Verdadeiro.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			if (p == q)
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p <-> q = Verdadeiro.\n\n", p, q);
			}
			else
			{
				// Exibi��o do valor calculado
				printf("\n\t\tResultado: Para p = %d e q = %d, p <-> q = Falso.\n\n", p, q);
			}
			system("pause");
			break;
			// [8] Voltar ao Menu Principal
		case 8:
			break;
			// Valida��o caso nem uma das op��es do menu for selecionada
		default:
			printf("\t\tOp��o invalida, por favor Selecione uma das op��es acima.\n\n");
			system("pause");
			break;
		}
	} while (op_Menu != 8);
}

// Fun��o An�lise Combinat�ria
void AnaCom(void)
{
	do
	{
		// Menu An�lise Combinat�ria
		system("cls");
		system("color 02");
		Logo();
		printf("\n");
		printf("\t\t\t\t-=[ Menu An�lise Combinat�ria ]=-\n");
		printf("\n");
		printf("\t\t\t[1] Permuta��o Simples: P(n)\n");
		printf("\t\t\t[2] Arranjo Simples: A(n,k)\n");
		printf("\t\t\t[3] Combiona��o Simples: C(n,k)\n");
		printf("\t\t\t[4] Arranjo com Repeti��o: AR(n,k)\n");
		printf("\t\t\t[5] Combina��o com Repeti��o: CR(n,k)\n");
		printf("\t\t\t[6] Permuta��o com Repeti��o: P(n,k1,...,kp)\n");
		printf("\t\t\t[7] Voltar ao Menu Principal\n");
		printf("\n");

		printf("\t\t\tSelecione a op��o desejada: ");
		digite();
		op_Menu = numero;
		printf("\n");
		// Inicio dos c�lculos de An�lise Combinat�ria baseado na escolha do usu�rio
		switch (op_Menu)
		{
			// [1] Permuta��o Simples: P(n)
		case 1:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			for (fat = 1; n > 0; n--)
			{
				fat = fat * n;
			}
			// Exibi��o do valor calculado
			printf("\n\t\t\t[1] Permuta��o Simples P(n)");
			printf("\n\t\t\tResultado:\t%d\n\n", fat);
			system("pause");
			break;
			// [2] Arranjo Simples: A(n,k)
		case 2:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			i = n - k;
			for (fat = 1; n > i; n--)
			{
				fat = fat * n;
			}
			// Exibi��o do valor calculado
			printf("\n\t\t\t[2] Arranjo Simples: A(n,k)");
			printf("\n\t\t\tResultado:\t%d\n\n", fat);
			system("pause");
			break;
			// [3] Combina��o Simples: C(n,k)
		case 3:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
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
			// Exibi��o do valor calculado
			printf("\n\t\t\t[3] Combiona��o Simples: C(n,k)");
			printf("\n\t\t\tResultado:\t%d\n\n", soma);
			system("pause");
			break;
			// [4] Arranjo com Repeti��o: AR(n,k)
		case 4:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			soma = pow(n, k);
			// Exibi��o do valor calculado
			printf("\n\t\t\t[4] Arranjo com Repeti��o: AR(n,k)");
			printf("\n\t\t\tResultado:\t%d\n\n", soma);
			system("pause");
			break;
			// [5] Combina��o com Repeti��o: CR(n,k)
		case 5:
			// Inser��o e valida��o dos dados inseridos
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
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
			// Exibi��o do valor calculado
			printf("\n\t\t\t[5] Combina��o com Repeti��o: CR(n,k)");
			printf("\n\t\t\tResultado:\t%d\n\n", soma);
			system("pause");
			break;
			// [6] Permuta��o com Repeti��o: P(n,k1,...,kp)
		case 6:
			// Inser��o e valida��o dos dados inseridos
			do
			{
				printf("\t\tDigite o total de elementos \"n\" para permuta��o com repeti��o: ");
				digite();
				n = numero;
				if (n >= 1 && n <= 33)
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
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
					printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
				}
			} while (valid == 0);
			// In�cio do processo de c�lculo
			i = 0;
			vetComb = (int*)(malloc(rep * sizeof(int)));
			fatComb = (int*)(malloc(rep * sizeof(int)));
			for (auxPerm = 0; auxPerm < rep; auxPerm++)
			{
				// Inser��o e valida��o do n�mero de repeti��es de cada elemento
				do
				{
					printf("\n\t\tDigite quantas vezes o %d� elemento se repete:  ", auxPerm + 1);
					digite();
					vetComb[auxPerm] = numero;
					if (vetComb[auxPerm] >= 1 && vetComb[auxPerm] <= 10)
					{
						valid = 1;
					}
					else
					{
						valid = 0;
						printf("\n\t\tValor digitado invalido para este c�lculo, favor digitar novamente.\n\n");
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
			// Exibi��o do valor calculado
			printf("\n\t\t[6] Permuta��o com Repeti��o: P(n,k1,...,kp)\n");
			printf("\n\t\tResultado:\t%d\n\n", soma);
			free(vetComb);
			free(fatComb);
			system("pause");
			break;
			// [7] Voltar ao Menu Principal
		case 7:
			break;
			// Valida��o caso nem uma das op��es do menu for selecionada
		default:
			printf("\t\tOp��o invalida, por favor selecione uma das op��es acima.\n\n");
			system("pause");
			break;
		}
	} while (op_Menu != 7);
}

// Fun��o Frase de encerramento
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