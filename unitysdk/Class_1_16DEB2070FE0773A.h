#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_16DEB2070FE0773A_METHOD_1_14C1048746B86946_OFFSET UNITYSDK_OFFSET(0xC53D880)
#define CLASS_1_16DEB2070FE0773A_METHOD_1_530DC23F3772EBE7_OFFSET UNITYSDK_OFFSET(0xC53D580)
#define CLASS_1_16DEB2070FE0773A_METHOD_1_77580B5CB62735EE_OFFSET UNITYSDK_OFFSET(0xC53D610)
#define CLASS_1_16DEB2070FE0773A_METHOD_1_DBC665EBD61A843C_OFFSET UNITYSDK_OFFSET(0xC53D490)
#define CLASS_1_16DEB2070FE0773A_METHOD_1_E058549309417BE6_OFFSET UNITYSDK_OFFSET(0xC53D3F0)
#define CLASS_1_16DEB2070FE0773A__CTOR_OFFSET UNITYSDK_OFFSET(0xC53D480)

inline static constexpr unsigned int Class_1_16DEB2070FE0773A_TypeDefinitionIndex = 59432;

class Class_1_16DEB2070FE0773A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x6; // 0x0
	::RPG::Client::AvatarData* Field_1_1; // 0x10
	::RPG::GameCore::AvatarRelicRecommendRow* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16DEB2070FE0773A__CTOR_OFFSET))(this);
	}

	static ::Class_1_16DEB2070FE0773A* Method_1_E058549309417BE6(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_1_16DEB2070FE0773A*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_16DEB2070FE0773A_METHOD_1_E058549309417BE6_OFFSET))(a1);
	}

	::System::Void Method_1_DBC665EBD61A843C(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_16DEB2070FE0773A_METHOD_1_DBC665EBD61A843C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_530DC23F3772EBE7(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_16DEB2070FE0773A_METHOD_1_530DC23F3772EBE7_OFFSET))(this, a1);
	}

	::RPG::Client::RelicSmartSuit::RankType Method_1_77580B5CB62735EE(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
	{
		return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + CLASS_1_16DEB2070FE0773A_METHOD_1_77580B5CB62735EE_OFFSET))(this, a1);
	}

	::System::Single Method_1_14C1048746B86946(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16DEB2070FE0773A_METHOD_1_14C1048746B86946_OFFSET))(this, a1);
	}
};
