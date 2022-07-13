//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_05_24_Dateiinfo	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 5/24/2022 8:19:23 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()
#define INFO printf("Die Datei %s wurde am %s um %s Uhr kompiliert\n",__FILE__,__DATE__,__TIME__);


//Functions
//**************************************************************************


int main(void)
{
	//Variables



	//Code
	INFO



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}