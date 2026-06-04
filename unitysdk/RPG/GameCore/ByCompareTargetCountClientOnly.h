#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ByCompareTargetCount.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_1CCF409E240FAE53_OFFSET UNITYSDK_OFFSET(0x18FF8820)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_5B8CA36E650502A0_OFFSET UNITYSDK_OFFSET(0x18FF87A0)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_BBD46184320FD67F_OFFSET UNITYSDK_OFFSET(0x18FF7E30)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_D2C25E99F24384EC_OFFSET UNITYSDK_OFFSET(0x18FF8720)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF7DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTargetCountClientOnly_TypeDefinitionIndex = 22247;

	class ByCompareTargetCountClientOnly : public ::RPG::GameCore::ByCompareTargetCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5B8CA36E650502A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetCountClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_5B8CA36E650502A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BBD46184320FD67F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_BBD46184320FD67F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D2C25E99F24384EC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_D2C25E99F24384EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1CCF409E240FAE53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_1CCF409E240FAE53_OFFSET))(a1, a2);
		}
	};
}
