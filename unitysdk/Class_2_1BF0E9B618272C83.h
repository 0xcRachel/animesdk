#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_484149DA56D65FCE.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_318;
class Class_1_37676B2FB4322E20;

#define CLASS_2_1BF0E9B618272C83_GET_PROPERTYREPOSITORY_OFFSET UNITYSDK_OFFSET(0x87828E0)
#define CLASS_2_1BF0E9B618272C83_METHOD_2_89A2ABB611014CDE_OFFSET UNITYSDK_OFFSET(0x8782BA0)
#define CLASS_2_1BF0E9B618272C83_METHOD_2_FECD23BF72D6D3DA_OFFSET UNITYSDK_OFFSET(0x8782900)
#define CLASS_2_1BF0E9B618272C83_SET_PROPERTYREPOSITORY_OFFSET UNITYSDK_OFFSET(0x87828F0)
#define CLASS_2_1BF0E9B618272C83__CTOR_OFFSET UNITYSDK_OFFSET(0x8782C30)

inline static constexpr unsigned int Class_2_1BF0E9B618272C83_TypeDefinitionIndex = 49806;

class Class_2_1BF0E9B618272C83 : public ::Class_1_484149DA56D65FCE
{
public:
	::Class_1_37676B2FB4322E20* _PropertyRepository_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BF0E9B618272C83__CTOR_OFFSET))(this);
	}

	::Class_1_37676B2FB4322E20* get_PropertyRepository()
	{
		return ((::Class_1_37676B2FB4322E20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BF0E9B618272C83_GET_PROPERTYREPOSITORY_OFFSET))(this);
	}

	::System::Void set_PropertyRepository(::Class_1_37676B2FB4322E20* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37676B2FB4322E20*))((::PBYTE)hIl2Cpp + CLASS_2_1BF0E9B618272C83_SET_PROPERTYREPOSITORY_OFFSET))(this, value);
	}

	::System::Void Method_2_FECD23BF72D6D3DA(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1BF0E9B618272C83_METHOD_2_FECD23BF72D6D3DA_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_318* Method_2_89A2ABB611014CDE(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_1BF0E9B618272C83_METHOD_2_89A2ABB611014CDE_OFFSET))(this, a1);
	}
};
