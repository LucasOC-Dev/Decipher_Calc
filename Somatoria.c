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
