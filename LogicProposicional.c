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
