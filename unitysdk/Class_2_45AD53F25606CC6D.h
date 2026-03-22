#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

#define CLASS_2_45AD53F25606CC6D_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1116E270)
#define CLASS_2_45AD53F25606CC6D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1116E290)
#define CLASS_2_45AD53F25606CC6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1116E280)

inline static constexpr unsigned int Class_2_45AD53F25606CC6D_TypeDefinitionIndex = 51120;

class Class_2_45AD53F25606CC6D : public ::RPG::Client::BaseGameFlow
{
public:
	static ::Class_2_45AD53F25606CC6D** StaticGet_Field_2_0()
	{
		return (::Class_2_45AD53F25606CC6D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_45AD53F25606CC6D_TypeDefinitionIndex)->GetStaticField(0x348D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45AD53F25606CC6D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_45AD53F25606CC6D__CCTOR_OFFSET))();
	}

	::RPG::GameCore::GameFlowType get_Type()
	{
		return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45AD53F25606CC6D_GET_TYPE_OFFSET))(this);
	}
};
