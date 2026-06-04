#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_5F47BDCAFFA8140E_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0xAEA3010)
#define CLASS_4_5F47BDCAFFA8140E_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0xAEA3270)
#define CLASS_4_5F47BDCAFFA8140E_METHOD_4_CACF03EAC6255BD4_OFFSET UNITYSDK_OFFSET(0xAEA32F0)
#define CLASS_4_5F47BDCAFFA8140E_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0xAEA30E0)
#define CLASS_4_5F47BDCAFFA8140E__CTOR_OFFSET UNITYSDK_OFFSET(0xAEA3090)

inline static constexpr unsigned int Class_4_5F47BDCAFFA8140E_TypeDefinitionIndex = 22855;

class Class_4_5F47BDCAFFA8140E : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::AttackDamageType>* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F47BDCAFFA8140E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_5F47BDCAFFA8140E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_5F47BDCAFFA8140E*&))((::PBYTE)hIl2Cpp + CLASS_4_5F47BDCAFFA8140E_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_5F47BDCAFFA8140E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_5F47BDCAFFA8140E*))((::PBYTE)hIl2Cpp + CLASS_4_5F47BDCAFFA8140E_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_5F47BDCAFFA8140E*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5F47BDCAFFA8140E*&))((::PBYTE)hIl2Cpp + CLASS_4_5F47BDCAFFA8140E_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_CACF03EAC6255BD4(::SimpleJSON::JSONNode* a1, ::Class_4_5F47BDCAFFA8140E* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5F47BDCAFFA8140E*))((::PBYTE)hIl2Cpp + CLASS_4_5F47BDCAFFA8140E_METHOD_4_CACF03EAC6255BD4_OFFSET))(a1, a2);
	}
};
