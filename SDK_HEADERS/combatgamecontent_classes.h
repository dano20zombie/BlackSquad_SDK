/*
#############################################################################################
# Black Squad (11.01.2019) SDK
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 102177 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 102207 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125113 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125118 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_BASR_M107A1_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_Scope_M107A1
// 0x0000 (0x0E94 - 0x0E94)
class UCombatWeaponRIS_Scope_M107A1 : public UCombatWeaponRISBase_Scope
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125121 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125131 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125136 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_DMR_SCARH_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_IronSight_SCARH
// 0x0000 (0x0E48 - 0x0E48)
class UCombatWeaponRIS_IronSight_SCARH : public UCombatWeaponRISBase_IronSight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125139 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_IronSight_SCARH::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_LaserPoint
// 0x0000 (0x0DF4 - 0x0DF4)
class UCombatWeaponRIS_LaserPoint : public UCombatWeaponRISBase_LaserPoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125140 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125150 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125159 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_FSW_GL_M32_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_IronSight_M32
// 0x0000 (0x0E48 - 0x0E48)
class UCombatWeaponRIS_IronSight_M32 : public UCombatWeaponRISBase_IronSight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125162 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125171 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125176 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_FSW_RL_AT4_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_IronSight_AT4
// 0x0000 (0x0E48 - 0x0E48)
class UCombatWeaponRIS_IronSight_AT4 : public UCombatWeaponRISBase_IronSight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 125179 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127802 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127804 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127806 ];

		return pClassPointer;
	};

};

UClass* UCombatFrontEndLocalSoundGroup::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif