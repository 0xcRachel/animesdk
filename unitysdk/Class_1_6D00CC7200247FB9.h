#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6D00CC7200247FB9_GET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x10C33570)
#define CLASS_1_6D00CC7200247FB9_GET_LOCKBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x10C33550)
#define CLASS_1_6D00CC7200247FB9_GET_PLAYERJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x10C33590)
#define CLASS_1_6D00CC7200247FB9_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x10C33510)
#define CLASS_1_6D00CC7200247FB9_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x10C33530)
#define CLASS_1_6D00CC7200247FB9_SET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x10C33580)
#define CLASS_1_6D00CC7200247FB9_SET_LOCKBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x10C33560)
#define CLASS_1_6D00CC7200247FB9_SET_PLAYERJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x10C335A0)
#define CLASS_1_6D00CC7200247FB9_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x10C33520)
#define CLASS_1_6D00CC7200247FB9_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x10C33540)
#define CLASS_1_6D00CC7200247FB9__CTOR_OFFSET UNITYSDK_OFFSET(0x10C335B0)

inline static constexpr unsigned int Class_1_6D00CC7200247FB9_TypeDefinitionIndex = 40947;

class Class_1_6D00CC7200247FB9 : public ::System::Object
{
public:
	::System::String* _PlayerJsonConfigPath_k__BackingField; // 0x10
	::System::String* _JsonConfigPath_k__BackingField; // 0x18
	::System::UInt32 _WorldLevel_k__BackingField; // 0x20
	::RPG::GameCore::SpecialAvatarType _Type_k__BackingField; // 0x24
	::System::Boolean _LockBattleInfo_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::SpecialAvatarType get_Type()
	{
		return ((::RPG::GameCore::SpecialAvatarType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::SpecialAvatarType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_TYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_WorldLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_WORLDLEVEL_OFFSET))(this);
	}

	::System::Void set_WorldLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_WORLDLEVEL_OFFSET))(this, value);
	}

	::System::Boolean get_LockBattleInfo()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_LOCKBATTLEINFO_OFFSET))(this);
	}

	::System::Void set_LockBattleInfo(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_LOCKBATTLEINFO_OFFSET))(this, value);
	}

	::System::String* get_JsonConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_JSONCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_JsonConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_JSONCONFIGPATH_OFFSET))(this, value);
	}

	::System::String* get_PlayerJsonConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_GET_PLAYERJSONCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_PlayerJsonConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D00CC7200247FB9_SET_PLAYERJSONCONFIGPATH_OFFSET))(this, value);
	}
};
