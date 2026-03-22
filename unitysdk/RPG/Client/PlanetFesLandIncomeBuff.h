#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"

class Class_0_16E4307DCC419505_639;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_COMBINE_OFFSET UNITYSDK_OFFSET(0x9AD48B0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETCOMBINEKEY_OFFSET UNITYSDK_OFFSET(0x9AD49E0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETTARGETLANDTYPE_OFFSET UNITYSDK_OFFSET(0x9AD4870)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0x9AD4430)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0x9AD45D0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9AD4640)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD4D50)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETDESC_OFFSET UNITYSDK_OFFSET(0x9AD4A40)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETICONPATH_OFFSET UNITYSDK_OFFSET(0x9AD44D0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0x9AD4550)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0x9AD4440)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETDESC_OFFSET UNITYSDK_OFFSET(0x9AD4E60)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETICONPATH_OFFSET UNITYSDK_OFFSET(0x9AD4D60)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0x9AD4DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLandIncomeBuff_TypeDefinitionIndex = 52992;

	class PlanetFesLandIncomeBuff : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::RPG::GameCore::PlanetFesLandType _TargetLandType; // 0x30
		::System::UInt32 _PercentIncrease; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* param)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__ONINITPARAM_OFFSET))(this, param);
		}

		::System::String* _GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETICONPATH_OFFSET))(this);
		}

		::System::String* _GetLargeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETLARGEICONPATH_OFFSET))(this);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET))(this, avatar);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISTRIGGERED_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesLandType GetTargetLandType()
		{
			return ((::RPG::GameCore::PlanetFesLandType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETTARGETLANDTYPE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_639* Combine(::RPG::Client::IPlanetFesBuff* other)
		{
			return ((::Class_0_16E4307DCC419505_639*(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_COMBINE_OFFSET))(this, other);
		}

		::System::Int32 GetCombineKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETCOMBINEKEY_OFFSET))(this);
		}

		::System::String* _GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETDESC_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy__GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETICONPATH_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy__GetLargeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETLARGEICONPATH_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy__GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETDESC_OFFSET))(this);
		}
	};
}
