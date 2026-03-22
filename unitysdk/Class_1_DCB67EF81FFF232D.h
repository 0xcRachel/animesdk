#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"

class Class_1_37A9B0F7885213A3;
class Class_1_CA217ABF4E3B4F3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DCB67EF81FFF232D_METHOD_1_363D2832DDD152E2_OFFSET UNITYSDK_OFFSET(0xFDBA300)
#define CLASS_1_DCB67EF81FFF232D_METHOD_1_4CB7A0C70044BB19_OFFSET UNITYSDK_OFFSET(0xFDBA550)
#define CLASS_1_DCB67EF81FFF232D_METHOD_1_8B933DECC394D41D_OFFSET UNITYSDK_OFFSET(0xFDBA6A0)
#define CLASS_1_DCB67EF81FFF232D_METHOD_1_C125C42267F8A289_OFFSET UNITYSDK_OFFSET(0xFDBA460)
#define CLASS_1_DCB67EF81FFF232D_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0xFDBA1D0)
#define CLASS_1_DCB67EF81FFF232D__CTOR_OFFSET UNITYSDK_OFFSET(0xFDBA280)

inline static constexpr unsigned int Class_1_DCB67EF81FFF232D_TypeDefinitionIndex = 57130;

class Class_1_DCB67EF81FFF232D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleUIPanelType, ::Class_1_37A9B0F7885213A3*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCB67EF81FFF232D__CTOR_OFFSET))(this);
	}

	static ::Class_1_DCB67EF81FFF232D* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_DCB67EF81FFF232D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DCB67EF81FFF232D_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::System::Void Method_1_363D2832DDD152E2(::RPG::GameCore::BattleUIPanelType a1, ::Class_1_CA217ABF4E3B4F3F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + CLASS_1_DCB67EF81FFF232D_METHOD_1_363D2832DDD152E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C125C42267F8A289(::RPG::GameCore::BattleUIPanelType a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DCB67EF81FFF232D_METHOD_1_C125C42267F8A289_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4CB7A0C70044BB19(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DCB67EF81FFF232D_METHOD_1_4CB7A0C70044BB19_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B933DECC394D41D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCB67EF81FFF232D_METHOD_1_8B933DECC394D41D_OFFSET))(this);
	}
};
