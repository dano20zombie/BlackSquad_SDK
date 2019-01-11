/*
#############################################################################################
# Black Squad (11.01.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SDK.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, dano20zombie
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

/*
# ========================================================================================= #
# Fix
# ========================================================================================= #
*/

#include <stdio.h>

/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

#define GObjects			0x141CAFB50
#define GNames				0x141CAF1D8

#define ProcessEvent_Index	68

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template< class T > struct TArray 
{ 
public: 
	T* Data; 
	int Count; 
	int Max; 

public: 
	TArray() 
	{ 
		Data = NULL; 
		Count = Max = 0; 
	}; 

public: 
	int Num() 
	{ 
		return this->Count; 
	}; 

	T& operator() ( int i ) 
	{ 
		return this->Data[ i ]; 
	}; 

	const T& operator() ( int i ) const 
	{ 
		return this->Data[ i ]; 
	}; 

	void Add ( T InputData ) 
	{ 
		Data = (T*) realloc ( Data, sizeof ( T ) * ( Count + 1 ) ); 
		Data[ Count++ ] = InputData; 
		Max = Count; 
	}; 

	void Clear() 
	{ 
		free ( Data ); 
		Count = Max = 0; 
	}; 
}; 

struct FNameEntry
{
	unsigned char	UnknownData00[0x14];
	wchar_t			Name[ 0x1 ];
};

struct FName 
{ 
	int				Index; 
	unsigned char	unknownData00[ 0x4 ]; 

	FName() : Index ( 0 ) {}; 

	FName ( int i ) : Index ( i ) {}; 

	~FName() {}; 

	FName(wchar_t* FindName)
	{
		static TArray< int > NameCache;

		for (int i = 0; i < NameCache.Count; ++i)
		{
			if (!wcscmp(this->Names()->Data[NameCache(i)]->Name, FindName))
			{
				Index = NameCache(i);
				return;
			}
		}

		for (int i = 0; i < this->Names()->Count; ++i)
		{
			if (this->Names()->Data[i])
			{
				if (!wcscmp(this->Names()->Data[i]->Name, FindName))
				{
					NameCache.Add(i);
					Index = i;
				}
			}
		}
	};

	static TArray< FNameEntry* >* Names()
	{
		return (TArray< FNameEntry* >*) GNames;
	};

	wchar_t* GetName()
	{
		return this->Names()->Data[Index]->Name;
	};

	bool operator == (const FName& A) const
	{
		return (Index == A.Index);
	};
}; 

struct FString : public TArray< wchar_t > 
{ 
	FString() {}; 

	FString ( wchar_t* Other ) 
	{ 
		this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

		if ( this->Count ) 
			this->Data = Other; 
	}; 

	~FString() {}; 

	FString operator = ( wchar_t* Other ) 
	{ 
		if ( this->Data != Other ) 
		{ 
			this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

			if ( this->Count ) 
				this->Data = Other; 
		} 

		return *this; 
	}; 
}; 

struct FScriptDelegate 
{ 
	unsigned char UnknownData00[ 0xC ]; 
}; 

/*
# ========================================================================================= #
# Includes
# ========================================================================================= #
*/

#include "SDK_HEADERS\Core_structs.h"
#include "SDK_HEADERS\Core_classes.h"
#include "SDK_HEADERS\Core_f_structs.h"
#include "SDK_HEADERS\Core_functions.h"
#include "SDK_HEADERS\Engine_structs.h"
#include "SDK_HEADERS\Engine_classes.h"
#include "SDK_HEADERS\Engine_f_structs.h"
#include "SDK_HEADERS\Engine_functions.h"
#include "SDK_HEADERS\GameFramework_structs.h"
#include "SDK_HEADERS\GameFramework_classes.h"
#include "SDK_HEADERS\GameFramework_f_structs.h"
#include "SDK_HEADERS\GameFramework_functions.h"
#include "SDK_HEADERS\Grip_structs.h"
#include "SDK_HEADERS\Grip_classes.h"
#include "SDK_HEADERS\Grip_f_structs.h"
#include "SDK_HEADERS\Grip_functions.h"
#include "SDK_HEADERS\Cognition_structs.h"
#include "SDK_HEADERS\Cognition_classes.h"
#include "SDK_HEADERS\Cognition_f_structs.h"
#include "SDK_HEADERS\Cognition_functions.h"
#include "SDK_HEADERS\IpDrv_structs.h"
#include "SDK_HEADERS\IpDrv_classes.h"
#include "SDK_HEADERS\IpDrv_f_structs.h"
#include "SDK_HEADERS\IpDrv_functions.h"
#include "SDK_HEADERS\XAudio2_structs.h"
#include "SDK_HEADERS\XAudio2_classes.h"
#include "SDK_HEADERS\XAudio2_f_structs.h"
#include "SDK_HEADERS\XAudio2_functions.h"
#include "SDK_HEADERS\GFxUI_structs.h"
#include "SDK_HEADERS\GFxUI_classes.h"
#include "SDK_HEADERS\GFxUI_f_structs.h"
#include "SDK_HEADERS\GFxUI_functions.h"
#include "SDK_HEADERS\WinDrv_structs.h"
#include "SDK_HEADERS\WinDrv_classes.h"
#include "SDK_HEADERS\WinDrv_f_structs.h"
#include "SDK_HEADERS\WinDrv_functions.h"
#include "SDK_HEADERS\OnlineSubsystemPC_structs.h"
#include "SDK_HEADERS\OnlineSubsystemPC_classes.h"
#include "SDK_HEADERS\OnlineSubsystemPC_f_structs.h"
#include "SDK_HEADERS\OnlineSubsystemPC_functions.h"
#include "SDK_HEADERS\CombatGame_structs.h"
#include "SDK_HEADERS\CombatGame_classes.h"
#include "SDK_HEADERS\CombatGame_f_structs.h"
#include "SDK_HEADERS\CombatGame_functions.h"
#include "SDK_HEADERS\combatgamecontent_structs.h"
#include "SDK_HEADERS\combatgamecontent_classes.h"
#include "SDK_HEADERS\combatgamecontent_f_structs.h"
#include "SDK_HEADERS\combatgamecontent_functions.h"
