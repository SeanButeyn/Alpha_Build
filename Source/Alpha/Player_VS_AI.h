// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "Player_VS_AI.generated.h"

/**
 * 
 */
UCLASS()
class ALPHA_API APlayer_VS_AI : public AGameMode
{
	GENERATED_BODY()
private:
	//variables
	int int_Score;
	int int_CreepsLeft;
	int int_TowsLeft;
	int int_RoundsTot;
	int int_CurrRound;
	int int_Materials;
	int int_Prog;

public:
	//Destruction and Creation
	APlayer_VS_AI();
	~APlayer_VS_AI();

	//fetch functions
	int get_Score();
	int get_CreepsLeft();
	int get_TowsLeft();
	int get_RoundsTot();
	int get_CurrRound();
	int get_Materials();

	int get_Prog();

	//Set value functions
	void set_Score(int value);
	void set_CreepsLeft(int value);
	void set_TowsLeft(int value);
	void set_RoundsTot(int value);
	void set_CurrRound(int value);
	void set_Materials(int value);

	void set_Prog(int value);

	//Update every tick
	void onTick(float dx);

	//virtual void Tick(float dx) override;

	//Setup phase 
	void setup();

	//End Round
	void endRnd();
	
	
	
};
