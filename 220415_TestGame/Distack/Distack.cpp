#include <iostream>
#include <conio.h>
#include <Windows.h>

#define MAP_SIZE 10
//using namespace std;

int main()
{

#pragma region ����2

	/*
	�ܼ��� Ż�����
	10 * 10 ũ���� ���� �����Ѵ�. (2���� �迭)
	�÷��̾�(0,0)�� �����Ѵ�.
	Ż�������� �����Ѵ�.
	wasd Ű�Է��� ���� �÷��̾ �̵���Ų��.
	Ż�������� (0,0)�� �����ϰ� ���� ����
	O�� E�� �����ϸ� "Ż�⿡ �����߽��ϴ�." ���α׷� ����


	#O########
	##########
	##########
	##########
	##########
	##########
	##########
	######E###
	##########
	##########		#:�� O:�÷��̾� E: Ż������

	system("cls"); -�ܼ�â ����
*/

	srand(time(NULL));

	char map[MAP_SIZE][MAP_SIZE];
	int stageCount = 0;
	int monsterCount = 0;
	int monsterX[50]; int monsterY[50]; int monsterHp = 50;
	int playerX; int playerY;  int playerHP = 10; int dice = 0;
	int potionCount = 0; int dropPotionCount; int dropPotionX = -1; int dropPotionY = -1;
	int exitX; int exitY;
	int inputKey;
	bool checkLoop;
	int dummy = 0;




#pragma region LoadingScreen
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G  ." << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	Sleep(500);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G  .  ." << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	Sleep(500);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G  .  .  ." << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	Sleep(500);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G" << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	Sleep(500);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G  ." << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	Sleep(500);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G  .  ." << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	Sleep(500);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G  .  .  ." << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	Sleep(500);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G  " << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	Sleep(500);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G  ." << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	Sleep(500);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G  .  ." << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	Sleep(500);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\t\tN  O  W     L  O  A  D  I  N  G  .  .  ." << "\n\n" << std::endl;
	std::cout << "\t������������������������" << "\n\n" << std::endl;
	system("cls");
	Sleep(500);
#pragma endregion


#pragma region Maintitle
	std::cout << "                                ����      ��" << std::endl;
	std::cout << "                                ��    ��    ��" << std::endl;
	std::cout << "                                ��    ��    ��" << std::endl;
	std::cout << "                                ����      ��" << std::endl;
	std::cout << "  ������      ������          ��          ������      ��      ��" << std::endl;
	std::cout << "  ��                  ��            ��  ��        ��              ��    ��" << std::endl;
	std::cout << "  ������          ��            ����        ��              ����" << std::endl;
	std::cout << "          ��          ��          ��      ��      ��              ��    ��" << std::endl;
	std::cout << "  ������          ��          ��      ��      ������      ��      ��" << std::endl;
	std::cout << "\n\n\n\n\n\n\n\t\t\t\t -   Press  Any  Key   -" << std::endl;
	dummy = _getch();
#pragma endregion



	while (playerHP > 0) {

		system("cls");
		//�� ����
		for (int i = 0; i < MAP_SIZE; i++) {
			for (int j = 0; j < MAP_SIZE; j++) {
				map[i][j] = ' ';
			}
		}
		//���� �ʱ�ȭ
		checkLoop = 1;
		playerX = 0; playerY = 0;
		stageCount++;
		monsterCount = stageCount;
		exitX = rand() % (MAP_SIZE - 1) + 1; exitY = rand() % (MAP_SIZE - 1) + 1;
		playerHP += stageCount / 2;

		map[playerY][playerX] = 'O';
		map[exitY][exitX] = 'E';
		// ���� ����
		for (int i = stageCount; i > 0; i--) {
			monsterX[i] = rand() % (MAP_SIZE - 1) + 1; monsterY[i] = rand() % (MAP_SIZE - 1) + 1;
			if (map[monsterY[i]][monsterX[i]] != ' ')
				i++;
			else
				map[monsterY[i]][monsterX[i]] = 'M';
		}
		//���� ����
		dropPotionCount = rand() % 2;
		if (dropPotionCount > 0)
		{
			for (int i = dropPotionCount; i > 0; i--) {
				dropPotionX = rand() % (MAP_SIZE - 1) + 1; dropPotionY = rand() % (MAP_SIZE - 1) + 1;
				if (map[dropPotionY][dropPotionX] != ' ')
					i++;
				else
					map[dropPotionY][dropPotionX] = 'P';
			}
		}

		//stage ����





		std::cout << "\n\n\n\n\n\n\n\n\tS  T  A  G  E\n\n\n\t      " << stageCount << std::endl;
		Sleep(2000);

		while (checkLoop == 1)
		{
			//ȭ�� �ʱ�ȭ�� ��ǥ��
			system("cls");

			std::cout << "����Ű : wasd	O : �÷��̾�	P : ����\n����   : 2	E : Ż������	M : ����\n" << std::endl;

			map[exitY][exitX] = 'E';				//ȭ�鿡 Ż�ⱸ ǥ��
			for (int i = stageCount; i > 0; i--)	//ȭ�鿡 ���� ǥ��
				map[monsterY[i]][monsterX[i]] = 'M';

			//ȭ�鿡 �� ǥ��
			std::cout << "�� �� �� �� �� �� �� �� �� �� �� ��" << std::endl;
			for (int i = 0; i < MAP_SIZE; i++) {
				std::cout << "�� ";
				for (int j = 0; j < MAP_SIZE; j++) {
					std::cout << map[i][j] << " ";
				}
				std::cout << "��" << std::endl;
			}
			std::cout << "�� �� �� �� �� �� �� �� �� �� �� ��" << std::endl;
			//���� ǥ��
			std::cout << "\n���� " << stageCount << "�� �Դϴ�." << std::endl;
			std::cout << "���� ���� �� : " << monsterCount << std::endl;
			std::cout << "HP : " << playerHP << std::endl;
			std::cout << "���� ���� : " << potionCount << std::endl;

			//�÷��̾� ���� ��ġ �� �ʱ�ȭ
			map[playerY][playerX] = ' ';
			//�÷��̾� �ൿ
			switch (inputKey = _getch())
			{
			case 'w':
				if ((map[playerY - 1][playerX] == '#') || (playerY - 1 < 0))
					playerY = playerY;

				else
					playerY -= 1;

				break;

			case 'a':

				if ((map[playerY][playerX - 1] == '#') || (playerX - 1 < 0))
					playerX = playerX;

				else
					playerX -= 1;

				break;

			case 's':

				if ((map[playerY + 1][playerX] == '#') || (playerY + 1 > MAP_SIZE - 1))
					playerY = playerY;

				else
					playerY += 1;

				break;


			case 'd':

				if ((map[playerY][playerX + 1] == '#') || (playerX + 1 > MAP_SIZE - 1))
					playerX = playerX;

				else
					playerX += 1;

				break;
			case '2': //���� ���
				if (potionCount > 0) {
					playerHP += 5;
					potionCount--;
				}
				else {
					std::cout << "���� ������ �����ϴ�." << std::endl;
					continue;
				}
				break;
			default:
				continue;
			}

			for (int i = monsterCount; i > 0; i--) {
				map[monsterY[i]][monsterX[i]] = ' ';
			}

			//���� ���� Ȯ��
			for (int i = stageCount; i > 0; i--) {
				if ((playerX == monsterX[i]) && (playerY == monsterY[i])) {

					//����
					for (int text = 1; text <= 2; text++)
					{
						system("cls");
						for (int time = 0; time <= 1005000000; time++)
						{
							int demo = 1;
						}
						std::cout << "  ����                                   ��          " << std::endl;
						std::cout << "  ��   ��                                  ��          " << std::endl;
						std::cout << "  ��   ��                 ��        ��     ��   �����   " << std::endl;
						std::cout << "  ����    ���       �����  �����  �� ��       ��  " << std::endl;
						std::cout << "  ��   �� ��   ���       ��        ��     �� �������  " << std::endl;
						std::cout << "  ��   �� ��   ���       ��        ��     �� ��       " << std::endl;
						std::cout << "  ����    ���� ���    ���      ���  ��  ������  " << std::endl;
						for (int time = 0; time <= 1005000000; time++)
						{
							int demo = 1;
						}

					}
					while (monsterHp > 0 && playerHP > 0)
					{


						system("cls");
						std::cout << "���� : 1	���� : 2\n\n" << std::endl;
						std::cout << "����" << "\t\t\t�÷��̾�" << "\n" << std::endl;
						std::cout << "ü�� : " << monsterHp << "\t\tü�� : " << playerHP << std::endl;
						std::cout << "\t\tVS\t�ֻ��� : " << dice + 1 << std::endl;
						std::cout << "\t\t\t���� ���� : " << potionCount << std::endl;
						if (dice == 0)
						{
							std::cout << "\n\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
						}
						else if (dice == 1)
						{
							std::cout << "\n\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
						}
						else if (dice == 2)
						{
							std::cout << "\n\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
						}
						else if (dice == 3)
						{
							std::cout << "\n\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
						}
						else if (dice == 4)
						{
							std::cout << "\n\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
						}
						else if (dice == 5)
						{
							std::cout << "\n\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
							std::cout << "\t\t\t ���� " << std::endl;
						}


						switch (inputKey = _getch())
						{
						case '1': //����
							dice = rand() % 6;
							monsterHp -= dice * 10;
							break;
						case '2': //���� ���
							if (potionCount > 0) {
								playerHP += 5;
								potionCount--;
							}
							else {
								std::cout << "���� ������ �����ϴ�." << std::endl;
								continue;
							}
							break;

						default:
							continue;
						}

						if (monsterHp > 0) {
							playerHP -= rand() % 2 + 1;
						}
					}
					monsterCount--;
					monsterHp = 50;
					monsterX[i] = -1;
					monsterY[i] = -1;
				}
			}
			//���� ȹ��
			if (playerX == dropPotionX && playerY == dropPotionY) {
				potionCount++;
				dropPotionCount--;
				map[dropPotionY][dropPotionX] = ' ';
				dropPotionX = -1;
				dropPotionY = -1;
			}

			//Ż�ⱸ ���� �ൿ���� ����
			if (((playerX == exitX) && (playerY == exitY)) && monsterCount == 0)
				checkLoop = 0;
			//�÷��̾� ��� while�� ����
			if (playerHP <= 0) {
				system("cls");
				std::cout << "      ��������           ���         ��                �� �����������" << std::endl;
				std::cout << "  ���              ��       ��    ��       ���            ��� ��                  " << std::endl;
				std::cout << "  ���������         �������     ��  ��        ��  �� �����������" << std::endl;
				std::cout << "  ���    ���    ��     ��            ��   ��    ��    ��    �� ��                  " << std::endl;
				std::cout << "      ���          �� ��                �� ��      ���      �� �����������" << std::endl;
				std::cout << "\n\n" << std::endl;
				std::cout << "\n\n" << std::endl;
				std::cout << "      �������     ��                �� ����������� ����������    " << std::endl;
				std::cout << "    ��            ��     ��            ��   ��                   ��                ��  " << std::endl;
				std::cout << "  ��                ��     ��        ��     ����������� ����������    " << std::endl;
				std::cout << "    ��            ��         ��    ��       ��                   ��  �����          " << std::endl;
				std::cout << "      �������             ���         ����������� ��          �����  " << std::endl;
				dummy = _getch();
				checkLoop = 0;
			}
			//���� �÷��̾� ��ġ ǥ��
			map[playerY][playerX] = 'O';

		}

	}
	//���α׷� ����
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\t\t\t\t" << stageCount << "������������ Ŭ���� �ϼ̽��ϴ�.\n\n\n\n\n" << std::endl;
}