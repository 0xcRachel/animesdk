#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/Struct_2_F58FBBBFAD28B36A.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_347;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class String; }

#define CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x1007C760)
#define CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_1E77F9DFFAEE3100_OFFSET UNITYSDK_OFFSET(0x1007CB50)
#define CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1007C660)
#define CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x1007CA90)
#define CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1007CC10)
#define CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_792D5CCAFC2D1A65_OFFSET UNITYSDK_OFFSET(0x1007C5B0)
#define CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x1007C830)
#define CLASS_1_DB80CC8DA3B5A0A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1007C650)

inline static constexpr unsigned int Class_1_DB80CC8DA3B5A0A6_TypeDefinitionIndex = 52853;

class Class_1_DB80CC8DA3B5A0A6 : public ::System::Object
{
public:
	::RPG::Client::NavMap::IMapDataSource* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Struct_2_F58FBBBFAD28B36A Field_1_2; // 0x20
	::RPG::GameCore::PropState Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x30
	::RPG::GameCore::CompareType Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB80CC8DA3B5A0A6__CTOR_OFFSET))(this);
	}

	static ::Class_1_DB80CC8DA3B5A0A6* Method_1_792D5CCAFC2D1A65(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfo* a2)
	{
		return ((::Class_1_DB80CC8DA3B5A0A6*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfo*))((::PBYTE)hIl2Cpp + CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_792D5CCAFC2D1A65_OFFSET))(a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Void Method_1_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_1E77F9DFFAEE3100(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_1E77F9DFFAEE3100_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB80CC8DA3B5A0A6_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
