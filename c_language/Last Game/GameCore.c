#include "GameCore.h"
#include "ConsoleUtil.h"
#include "screen.h"
#include <stdio.h>
#include "gameObj.h"
#include <stdlib.h>

char move;
int result;
int health;
int gamestate;
char gameInput;
/*
* 0: 초기 화면
* 1: 게임 시작 화면
* 2: 게임 설명 화면
* 3. 게임 종료 알림 화면
*/

void BeginGame()
{
	gamestate = 0;

	SetCursorVisible(0);
}

void UpdateGame()
{
	if (gamestate == 0)
	{
		SetCursorPosition(0, 0);
		first_screen();
		Smile_Draw();
		char gameInput = '0';
		gameInput = getch();

		if (gameInput == '1')
		{
			gamestate = 1;
		}
		else if (gameInput == '2')
		{
			gamestate = 2;
		}
		else if (gameInput == '3')
		{
			gamestate = 3;
		}
		else
		{
			SetCursorPosition(0, 0);
			false_choice();
			sleep(700);
			gamestate = 0;
		}

	}
	else if (gamestate == 1)
	{
		SetCursorPosition(0, 0);
		game_start();
		sleep(5000);
		maingame();
		sleep(3000);
	}
	else if (gamestate == 2)
	{
		SetCursorPosition(0,0);
		how_to_play();
		char how_input = '0';
		how_input = getch();
		if (how_input == '1')
		{
			SetCursorPosition(0, 0);
			Game_Over();
			sleep(5000);
			SetCursorPosition(0, 0);
			gamestate = 0;
		}
		else if (how_input == '2')
		{
			SetCursorPosition(0, 0);
			gamestate = 0;
		}
	}
	else if (gamestate == 3)
	{
		SetCursorPosition(0, 0);
		exit_game();
		char Input = '0';
		Input = getch();
		if (Input == '1')
		{
			SetCursorPosition(0, 0);
			printendgame();
			sleep(2000);
			isGameRunning = 0;
		}
		else if (Input == '2')
		{
			SetCursorPosition(0, 0);
			gamestate = 0;
		}
	}
}

void maingame()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	printprolog();
	SetCursorPosition(30, 14);
	char chance = '0';
	chance = getch();
	if (chance == '1')
	{
		SetCursorPosition(0, 0);
		map_draw();
		sleep(5000);
		SetCursorPosition(0, 0);
		paper();
		sleep(3000);
		SetCursorPosition(0, 0);
		map_draw();
		SetCursorPosition(0, 0);
		moving();
		SetCursorPosition(30, 14);
	}
	else if (chance == '2')
	{
		SetCursorPosition(0, 0);
		ClearBuffer();
		printbedend();
		sleep(500);
		gamestate = 0;
	}
	else
	{
		SetCursorPosition(0, 0);
		false_choice();
		sleep(1000);
		SetCursorPosition(0, 0);
		maingame();
	}
}

void moving()
{
	char move = '0';
	move = getch();
	if (move == 's')
	{
		SetCursorPosition(0, 0);
		map_draw();
		SetCursorPosition(1, 2);
		printf("   ");
		SetCursorPosition(1, 6);
		printf("^0^");
		SetCursorPosition(30, 14);
		sleep(2000);
		something();
		char battlechoice = '0';
		battlechoice = getch();
		if (battlechoice == '1')
		{
			SetCursorPosition(0, 0);
			battle_phase();
			if (gamestate != 0)
			{
				SetCursorPosition(0, 0);
				map_draw();
				SetCursorPosition(1, 2);
				printf("   ");
				SetCursorPosition(1, 6);
				printf("^0^");
				SetCursorPosition(30, 14);
				char second_move = '0';
				second_move = getch();
				if (second_move == 's')
				{
					SetCursorPosition(1, 6);
					printf("   ");
					SetCursorPosition(1, 10);
					printf("^0^");
					sleep(1000);
					anything();
					sleep(2000);
					battle_phase();
					if (gamestate != 0)
					{
						SetCursorPosition(0, 0);
						map_draw();
						SetCursorPosition(1, 2);
						printf("   ");
						SetCursorPosition(1, 10);
						printf("^0^");
						SetCursorPosition(30, 14);
						char third_move = '0';
						third_move = getch();
						if (third_move == 's' || third_move == 'd')
						{
							SetCursorPosition(1, 10);
							printf("   ");
							SetCursorPosition(7, 10);
							printf("^0^");
							SetCursorPosition(30, 14);
							sleep(1000);
							anything();
							sleep(2000);
							battle_phase();
							if (gamestate != 0)
							{
								SetCursorPosition(0, 0);
								map_draw();
								SetCursorPosition(1, 2);
								printf("   ");
								SetCursorPosition(7, 10);
								printf("^0^");
								SetCursorPosition(30, 14);
								char fourth_move = '0';
								fourth_move = getch();
								if (fourth_move == 'w')
								{
									SetCursorPosition(7, 10);
									printf("   ");
									SetCursorPosition(7, 6);
									printf("^0^");
									SetCursorPosition(30, 14);
									sleep(1000);
									anything();
									sleep(2000);
									battle_phase();
									if (gamestate != 0)
									{
										SetCursorPosition(0, 0);
										map_draw();
										SetCursorPosition(1, 2);
										printf("   ");
										SetCursorPosition(7, 6);
										printf("^0^");
										SetCursorPosition(30, 14);
										char fifth_move = '0';
										fifth_move = getch();
										if (fifth_move == 'w')
										{
											SetCursorPosition(0, 0);
											map_draw();
											SetCursorPosition(1, 2);
											printf("   ");
											SetCursorPosition(7, 2);
											printf("^0^");
											SetCursorPosition(30, 14);
											sleep(1000);
											anything();
											sleep(2000);
											battle_phase();
											if (gamestate != 0)
											{
												SetCursorPosition(0, 0);
												map_draw();
												SetCursorPosition(1, 2);
												printf("   ");
												SetCursorPosition(7, 2);
												printf("^0^");
												SetCursorPosition(30, 14);
												char sixth_move = '0';
												sixth_move = getch();
												if (sixth_move == 'd')
												{
													SetCursorPosition(7, 2);
													printf("   ");
													SetCursorPosition(14, 2);
													printf("^0^");
													sleep(1000);
													anything();
													sleep(2000);
													battle_phase();
													if (gamestate != 0)
													{
														SetCursorPosition(0, 0);
														map_draw();
														SetCursorPosition(1, 2);
														printf("   ");
														SetCursorPosition(14, 2);
														printf("^0^");
														SetCursorPosition(30, 14);
														char seventh_move = '0';
														seventh_move = getch();
														if (seventh_move == 'd')
														{
															SetCursorPosition(14, 2);
															printf("   ");
															SetCursorPosition(20, 2);
															printf("^0^");
															sleep(1000);
															anything();
															sleep(2000);
															battle_phase();
															if (gamestate != 0)
															{
																SetCursorPosition(0, 0);
																map_draw();
																SetCursorPosition(1, 2);
																printf("   ");
																SetCursorPosition(20, 2);
																printf("^0^");
																SetCursorPosition(30, 14);
																char eighth_move = '0';
																eighth_move = getch();
																if (eighth_move == 's')
																{
																	SetCursorPosition(1, 2);
																	printf("   ");
																	SetCursorPosition(20, 6);
																	printf("^0^");
																	sleep(1000);
																	anything();
																	sleep(2000);
																	battle_phase();
																	if (gamestate != 0)
																	{
																		SetCursorPosition(0, 0);
																		map_draw();
																		SetCursorPosition(1, 2);
																		printf("   ");
																		SetCursorPosition(20, 6);
																		printf("^0^");
																		SetCursorPosition(30, 14);
																		char ninth_move = '0';
																		ninth_move = getch();
																		if (ninth_move == 'a')
																		{
																			SetCursorPosition(20, 6);
																			printf("   ");
																			SetCursorPosition(14, 6);
																			printf("^0^");
																			SetCursorPosition(30, 14);
																			sleep(1000);
																			anything();
																			sleep(2000);
																			battle_phase();
																			if (gamestate != 0)
																			{
																				SetCursorPosition(0, 0);
																				map_draw();
																				SetCursorPosition(1, 2);
																				printf("   ");
																				SetCursorPosition(14, 6);
																				printf("^0^");
																				SetCursorPosition(30, 14);
																				char tenth_move = '0';
																				tenth_move = getch();
																				if (tenth_move == 's')
																				{
																					SetCursorPosition(14, 6);
																					printf("   ");
																					SetCursorPosition(21, 11);
																					printf("       ");
																					SetCursorPosition(23, 11);
																					printf("^0^");
																					sleep(1000);
																					treasure();
																					char last_choice = '0';
																					last_choice = getch();
																					if (last_choice == '1')
																					{
																						treasurebox();
																						lastbattle();
																						boss_battle();
																						if (gamestate != 0)
																						{
																							chainbreak();
																							sleep(5000);
																							gamestate = 0;
																						}
																					}
																					else if (last_choice == '2')
																					{
																						toolate();
																						gamestate = 0;
																					}
																				}
																				else
																				{
																					SetCursorPosition(0, 0);
																					obstacle();
																					sleep(3000);
																					gamestate = 0;
																				}
																			}
																		}
																		else
																		{
																			SetCursorPosition(0, 0);
																			obstacle();
																			sleep(3000);
																			gamestate = 0;
																		}
																	}
																}
																else
																{
																	SetCursorPosition(0, 0);
																	obstacle();
																	sleep(3000);
																	gamestate = 0;
																}
															}
														}
														else
														{
															SetCursorPosition(0, 0);
															obstacle();
															sleep(3000);
															gamestate = 0;
														}
													}
												}
												else
												{
													SetCursorPosition(0, 0);
													obstacle();
													sleep(3000);
													gamestate = 0;
												}
											}
										}
										else
										{
											SetCursorPosition(0, 0);
											obstacle();
											sleep(3000);
											gamestate = 0;
										}
									}
								}
								else
								{
									SetCursorPosition(0, 0);
									obstacle();
									sleep(3000);
									gamestate = 0;
								}
							}
						}
						else
						{
							SetCursorPosition(0, 0);
							obstacle();
							sleep(3000);
							gamestate = 0;
						}
					}
				}
				else
				{
					SetCursorPosition(0, 0);
					obstacle();
					sleep(3000);
					gamestate = 0;
				}
			}
		}
		else if (battlechoice == '2')
		{
			SetCursorPosition(0, 0);
			secondend();
			secondendmessage();
			sleep(2000);
			gamestate = 0;
		}
	}
	else
	{
		SetCursorPosition(0, 0);
		obstacle();
		sleep(3000);
		SetCursorPosition(0, 0);
		map_draw();
		moving();
	}
}

void battle_phase()
{
	SetCursorPosition(0, 0);
	battlescreen();
	battlechoose();
	attack();
	numberchoice();
	int first;
	int second;
	char first_choice = '0';
	first_choice = getch();
	srand(time(NULL));
	health = rand() % 100;
	if (first_choice == '1')
	{
		SetCursorPosition(0, 0);
		battlescreen();
		secondchoose();
		attack();
		numberchoice();
		char operator='0';
		int result = 0;
		first = 100;
		char second_choice = '0';
		second_choice = getch();
		srand(time(NULL));
		if (second_choice == '1')
		{
			second = 100;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			attack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			battlescene();
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				battlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				battlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				Game_Over();
				sleep(3000);
				gamestate = 0;
			}
		}
		else if (second_choice == '2')
		{
			second = 200;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			attack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			battlescene();
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				battlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				battlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				Game_Over();
				sleep(3000);
				gamestate = 0;
			}
		}
		else if (second_choice == '3')
		{
			second = 300;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			attack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			battlescene();
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				battlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				battlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				Game_Over();
				sleep(3000);
				gamestate = 0;
			}
		}
		else
		{
			SetCursorPosition(0, 0);
			battle_phase();
			first_choice = '1';
		}
	}
	else if (first_choice == '2')
	{
		first = 200;
		SetCursorPosition(0, 0);
		battlescreen();
		attack();
		secondchoose();
		numberchoice();
		char operator = '0';
		int result = 0;
		char second_choice = '0';
		second_choice = getch();
		srand(time(NULL));
		if (second_choice == '1')
		{
			second = 100;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			attack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			battlescene();
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				battlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				battlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				Game_Over();
				sleep(3000);
				gamestate = 0;
			}
		}
		else if (second_choice == '2')
		{
			second = 200;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			attack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			battlescene();
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				battlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				battlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				Game_Over();
				sleep(3000);
				gamestate = 0;
			}
		}
		else if (second_choice == '3')
		{
			second = 300;
			switch (rand() % 4)
			{
			case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			attack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			battlescene();
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				battlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				battlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				Game_Over();
				sleep(3000);
				gamestate = 0;
			}
		}
		else
		{
			SetCursorPosition(0, 0);
			battle_phase();
			first_choice = '1';
		}
		first = 200;
	}
	else if (first_choice == '3')
	{
		SetCursorPosition(0, 0);
		battlescreen();
		attack();
		secondchoose();
		numberchoice();
		char operator = '0';
		int result = 0;
		first = 300;
		char second_choice = '0';
		second_choice = getch();
		srand(time(NULL));
		if (second_choice == '1')
		{
			second = 100;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			attack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			battlescene();
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				battlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				battlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				Game_Over();
				sleep(3000);
				gamestate = 0;
			}
		}
		else if (second_choice == '2')
		{
			second = 200;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			attack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			battlescene();
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				battlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				battlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				Game_Over();
				sleep(3000);
				gamestate = 0;
			}
		}
		else if (second_choice == '3')
		{
			second = 300;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			attack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			battlescene();
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				battlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				battlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				Game_Over();
				sleep(3000);
				gamestate = 0;
			}
		}
		else
		{
			battle_phase();
			first_choice = '1';
		}
	}
	else
	{
		SetCursorPosition(0, 0);
		battle_phase();
	}
}

void boss_battle()
{
	SetCursorPosition(0, 0);
	battlescreen();
	battlechoose();
	bossattack();
	numberchoice();
	int first;
	int second;
	char first_choice = '0';
	first_choice = getch();
	health = 10000;
	if (first_choice == '1')
	{
		SetCursorPosition(0, 0);
		battlescreen();
		bossattack();
		secondchoose();
		numberchoice();
		char operator='0';
		int result = 0;
		first = 100;
		char second_choice = '0';
		second_choice = getch();
		srand(time(NULL));
		if (second_choice == '1')
		{
			second = 100;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			bossattack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				bossbattlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				bossbattlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				epitaph();
				sleep(5000);
				gamestate = 0;
			}
		}
		else if (second_choice == '2')
		{
			second = 200;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			bossattack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				bossbattlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				bossbattlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				epitaph();
				sleep(5000);
				gamestate = 0;
			}
		}
		else if (second_choice == '3')
		{
			second = 300;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			bossattack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				bossbattlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				bossbattlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				epitaph();
				sleep(5000);
				gamestate = 0;
			}
		}
		else
		{
			SetCursorPosition(0, 0);
			boss_battle();
			first_choice = '1';
		}
	}
	else if (first_choice == '2')
	{
		first = 200;
		SetCursorPosition(0, 0);
		battlescreen();
		bossattack();
		secondchoose();
		numberchoice();
		char operator = '0';
		int result = 0;
		char second_choice = '0';
		second_choice = getch();
		srand(time(NULL));
		if (second_choice == '1')
		{
			second = 100;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			bossattack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				bossbattlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				battlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				epitaph();
				sleep(5000);
				gamestate = 0;
			}
		}
		else if (second_choice == '2')
		{
			second = 200;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			bossattack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				bossbattlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				bossbattlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				epitaph();
				sleep(5000);
				gamestate = 0;
			}
		}
		else if (second_choice == '3')
		{
			second = 300;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			bossattack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				bossbattlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				bossbattlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				epitaph();
				sleep(5000);
				gamestate = 0;
			}
		}
		else
		{
			SetCursorPosition(0, 0);
			boss_battle();
			first_choice = '1';
		}
		first = 200;
	}
	else if (first_choice == '3')
	{
		SetCursorPosition(0, 0);
		battlescreen();
		bossattack();
		secondchoose();
		numberchoice();
		char operator = '0';
		int result = 0;
		first = 300;
		char second_choice = '0';
		second_choice = getch();
		srand(time(NULL));
		if (second_choice == '1')
		{
			second = 100;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			bossattack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				bossbattlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				bossbattlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				epitaph();
				sleep(5000);
				gamestate = 0;
			}
		}
		else if (second_choice == '2')
		{
			second = 200;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			bossattack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("몬스터의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				bossbattlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				bossbattlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				epitaph();
				sleep(5000);
				gamestate = 0;
			}
		}
		else if (second_choice == '3')
		{
			second = 300;
			switch (rand() % 4)
			{
				case 0:
					operator = '+';
					result = first + second;
					break;
				case 1:
					operator = '-';
					result = first - second;
					break;
				case 2:
					operator = '*';
					result = first * second;
					break;
				case 3:
					operator = '/';
					result = first / second;
					break;
			}
			SetCursorPosition(0, 0);
			battlescreen();
			bossattack();
			SetCursorPosition(5, 2);
			printf("선택된 연산기호는 '%c'", operator);
			sleep(1000);
			SetCursorPosition(5, 11);
			printf("당신은 ' %d '만큼의", result);
			SetCursorPosition(6, 13);
			printf("데미지를 입혔습니다.");
			sleep(1000);
			SetCursorPosition(4, 5);
			printf("보스의 체력은? ' %d '", health);
			SetCursorPosition(30, 14);
			sleep(1000);
			if (result > health)
			{
				SetCursorPosition(0, 0);
				battlewin();
				bossbattlewinscene();
				sleep(3000);
			}
			else
			{
				SetCursorPosition(0, 0);
				battlelose();
				bossbattlelosescene();
				sleep(3000);
				SetCursorPosition(0, 0);
				epitaph();
				sleep(5000);
				gamestate = 0;
			}
		}
		else
		{
			boss_battle();
			first_choice = '1';
		}
	}
	else
	{
		SetCursorPosition(0, 0);
		boss_battle();
	}
}