/*
#############################################################################################
# Black Squad (01.02.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: combatgamecontent_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, dano20zombie
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class combatgamecontent.CombatProj_RL_AT4
// 0x0000 (0x03E8 - 0x03E8)
class ACombatProj_RL_AT4 : public ACombatProj_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 102179 ];

		return pClassPointer;
	};

};

UClass* ACombatProj_RL_AT4::pClassPointer = NULL;

// Class combatgamecontent.CombatProj_GL_M32
// 0x0000 (0x03F4 - 0x03F4)
class ACombatProj_GL_M32 : public ACombatProj_GrenadeLauncher
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 102209 ];

		return pClassPointer;
	};

};

UClass* ACombatProj_GL_M32::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_BASR_M107A1
// 0x0000 (0x1EB0 - 0x1EB0)
class ACombatWeapon_BASR_M107A1 : public ACombatWeaponBase_BASR
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125422 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_BASR_M107A1::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_BASR_M107A1_Att
// 0x0000 (0x0424 - 0x0424)
class ACombatWeapon_BASR_M107A1_Att : public ACBWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125427 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_BASR_M107A1_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_Scope_M107A1
// 0x0000 (0x0D54 - 0x0D54)
class UCombatWeaponRIS_Scope_M107A1 : public UCombatWeaponRISBase_Scope
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125430 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_Scope_M107A1::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_DMR_SCARH
// 0x0000 (0x1EB0 - 0x1EB0)
class ACombatWeapon_DMR_SCARH : public ACombatWeaponBase_DMR
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125440 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_DMR_SCARH::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_DMR_SCARH_Att
// 0x0000 (0x0424 - 0x0424)
class ACombatWeapon_DMR_SCARH_Att : public ACBWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125445 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_DMR_SCARH_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_IronSight_SCARH
// 0x0000 (0x0D08 - 0x0D08)
class UCombatWeaponRIS_IronSight_SCARH : public UCombatWeaponRISBase_IronSight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125448 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_IronSight_SCARH::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_LaserPoint
// 0x0000 (0x0CB4 - 0x0CB4)
class UCombatWeaponRIS_LaserPoint : public UCombatWeaponRISBase_LaserPoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125449 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_LaserPoint::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_FSW_GL_M32
// 0x0000 (0x1EB0 - 0x1EB0)
class ACombatWeapon_FSW_GL_M32 : public ACombatWeaponBase_FSW_GL
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125459 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_FSW_GL_M32::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_FSW_GL_M32_Att
// 0x0000 (0x0424 - 0x0424)
class ACombatWeapon_FSW_GL_M32_Att : public ACBWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125468 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_FSW_GL_M32_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_IronSight_M32
// 0x0000 (0x0D08 - 0x0D08)
class UCombatWeaponRIS_IronSight_M32 : public UCombatWeaponRISBase_IronSight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125471 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_IronSight_M32::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_FSW_RL_AT4
// 0x0000 (0x1EB0 - 0x1EB0)
class ACombatWeapon_FSW_RL_AT4 : public ACombatWeaponBase_FSW_RL
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125480 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_FSW_RL_AT4::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_FSW_RL_AT4_Att
// 0x0000 (0x0424 - 0x0424)
class ACombatWeapon_FSW_RL_AT4_Att : public ACBWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125485 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_FSW_RL_AT4_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_IronSight_AT4
// 0x0000 (0x0D08 - 0x0D08)
class UCombatWeaponRIS_IronSight_AT4 : public UCombatWeaponRISBase_IronSight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125488 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_IronSight_AT4::pClassPointer = NULL;

// Class combatgamecontent.CombatFrontEndInfo_Contents
// 0x0000 (0x04F0 - 0x04F0)
class ACombatFrontEndInfo_Contents : public ACombatFrontEndInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128126 ];

		return pClassPointer;
	};

};

UClass* ACombatFrontEndInfo_Contents::pClassPointer = NULL;

// Class combatgamecontent.CombatFrontEndHUD_Contents
// 0x0000 (0x05B4 - 0x05B4)
class ACombatFrontEndHUD_Contents : public ACombatFrontEndHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128128 ];

		return pClassPointer;
	};

};

UClass* ACombatFrontEndHUD_Contents::pClassPointer = NULL;

// Class combatgamecontent.CombatFrontEndLocalSoundGroup
// 0x0000 (0x01C0 - 0x01C0)
class UCombatFrontEndLocalSoundGroup : public UCombatFrontEndLocalSoundGroup_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128130 ];

		return pClassPointer;
	};

};

UClass* UCombatFrontEndLocalSoundGroup::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif