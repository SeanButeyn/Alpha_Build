// Fill out your copyright notice in the Description page of Project Settings.

#include "Alpha.h"
#include "Player_VS_AI.h"

//////////////////////////////////////////////////////////Creation and Destruction
APlayer_VS_AI::APlayer_VS_AI()
{
	int_Score = 0;
	int_CreepsLeft = 0;
	int_TowsLeft = 0;
	int_RoundsTot = 0;
	int_CurrRound = 1;
	int_Materials = 1000;
	int_Prog = 0;
}
APlayer_VS_AI::~APlayer_VS_AI()
{

}

///////////////////////////////////////////////////////Update Every frame
void APlayer_VS_AI::onTick(float dx)
{

	if (int_CurrRound <= int_RoundsTot)
	{
		//Setup Phase
		if (int_Prog == 0)
		{
			//if (timerSet == false)
			setup();
			//else if (timerSet == true && timer !=0)
			//tickDown(dx);
		}

		//Action phase First player
		else if (int_Prog == 1)
		{
			if (int_CreepsLeft == 0)
			{
				int_Prog = 2;
			}
			//Action phase Second Player/AI
			else if (int_Prog == 2)
			{
				if (int_CreepsLeft == 0)
				{
					int_CurrRound++;
					endRnd();
				}
			}
		}
		//update HUD displays
		//UpdateDisplay();

	}
}

///////////////////////////////////////////////////Set up phase intitiation
void APlayer_VS_AI::setup()
{
	set_Materials(1000);
	//set_Timer(100000);
}

/////////////////////////////////////////////////////End Round 
void APlayer_VS_AI::endRnd()
{
	if (int_CurrRound > int_RoundsTot)
		EndMatch();
	else
		setup();
}

////////////////////////////////Display update if I even need to which I don't think I do
/*
void GameMode::UpdateDisplay()
{
//will need the functions for displaying
}
*/


///////////////////////////////////////////////////////fetch functions
int APlayer_VS_AI::get_Score()
{
	return int_Score;
}
int APlayer_VS_AI::get_CreepsLeft()
{
	return int_CreepsLeft;
}
int APlayer_VS_AI::get_TowsLeft()
{
	return int_TowsLeft;
}
int APlayer_VS_AI::get_RoundsTot()
{
	return int_RoundsTot;
}
int APlayer_VS_AI::get_CurrRound()
{
	return int_CurrRound;
}
int APlayer_VS_AI::get_Materials()
{
	return int_Materials;
}

int APlayer_VS_AI::get_Prog()
{
	return int_Prog;
}

//////////////////////////////////////////////////Set value functions
void APlayer_VS_AI::set_Score(int value)
{
	int_Score = value;
}
void APlayer_VS_AI::set_CreepsLeft(int value)
{
	int_CreepsLeft = value;
}
void APlayer_VS_AI::set_TowsLeft(int value)
{
	int_TowsLeft = value;
}
void APlayer_VS_AI::set_RoundsTot(int value)
{
	int_RoundsTot = value;
}
void APlayer_VS_AI::set_CurrRound(int value)
{
	int_CurrRound = value;
}
void APlayer_VS_AI::set_Materials(int value)
{
	int_Materials = value;
}

void APlayer_VS_AI::set_Prog(int value)
{
	int_Prog = value;
}


