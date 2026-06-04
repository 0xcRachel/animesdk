#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_1766E55F930E62DC_OFFSET UNITYSDK_OFFSET(0x19240C10)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_2951BB2CD21716CD_OFFSET UNITYSDK_OFFSET(0x192409B0)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_8A06717622871DDC_OFFSET UNITYSDK_OFFSET(0x19240B90)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_DFFB8C04AECD941F_OFFSET UNITYSDK_OFFSET(0x192408E0)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19240960)

namespace RPG::Client
{
	inline static constexpr unsigned int ByCompareMatchThreeV2BirdLocation_TypeDefinitionIndex = 9930;

	class ByCompareMatchThreeV2BirdLocation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 BirdID; // 0x20
		::RPG::GameCore::DynamicFloat* LocationID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DFFB8C04AECD941F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_DFFB8C04AECD941F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2951BB2CD21716CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_2951BB2CD21716CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8A06717622871DDC(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_8A06717622871DDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1766E55F930E62DC(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_1766E55F930E62DC_OFFSET))(a1, a2);
		}
	};
}
