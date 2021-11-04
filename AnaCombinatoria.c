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
