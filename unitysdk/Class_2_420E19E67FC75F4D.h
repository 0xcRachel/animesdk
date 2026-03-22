#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_75C90E178B164D38.h"

namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }

#define CLASS_2_420E19E67FC75F4D_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xEEB82C0)
#define CLASS_2_420E19E67FC75F4D_GET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0xEEB82A0)
#define CLASS_2_420E19E67FC75F4D_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xEEB82D0)
#define CLASS_2_420E19E67FC75F4D_SET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0xEEB82B0)
#define CLASS_2_420E19E67FC75F4D__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB82E0)

inline static constexpr unsigned int Class_2_420E19E67FC75F4D_TypeDefinitionIndex = 47827;

class Class_2_420E19E67FC75F4D : public ::Class_1_75C90E178B164D38
{
public:
	::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBindingMap_k__BackingField; // 0x28
	::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_420E19E67FC75F4D__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LittleGameLevelVarBindingMap* get_LevelVarBindingMap()
	{
		return ((::RPG::GameCore::LittleGameLevelVarBindingMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_420E19E67FC75F4D_GET_LEVELVARBINDINGMAP_OFFSET))(this);
	}

	::System::Void set_LevelVarBindingMap(::RPG::GameCore::LittleGameLevelVarBindingMap* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_2_420E19E67FC75F4D_SET_LEVELVARBINDINGMAP_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelLittleGameInfo* get_ContainerInfo()
	{
		return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_420E19E67FC75F4D_GET_CONTAINERINFO_OFFSET))(this);
	}

	::System::Void set_ContainerInfo(::RPG::GameCore::LevelLittleGameInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_420E19E67FC75F4D_SET_CONTAINERINFO_OFFSET))(this, value);
	}
};
