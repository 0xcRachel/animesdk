#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraData.h"

class Class_1_9E29FB6D3929D25A;
class Class_1_E01A66D05D835284;

#define RPG_CLIENT_CHIMERAENDLESSDATA_CLEARENDLESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8F20990)
#define RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x8F20A90)
#define RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x8F209E0)
#define RPG_CLIENT_CHIMERAENDLESSDATA_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x8F20B40)
#define RPG_CLIENT_CHIMERAENDLESSDATA_SYNCENDLESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8F208C0)
#define RPG_CLIENT_CHIMERAENDLESSDATA_UPDATEAFTERBATTLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8F207F0)
#define RPG_CLIENT_CHIMERAENDLESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F207E0)
#define RPG_CLIENT_CHIMERAENDLESSDATA___IFIXBASEPROXY_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x8F20BB0)
#define RPG_CLIENT_CHIMERAENDLESSDATA___IFIXBASEPROXY_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x8F20BA0)
#define RPG_CLIENT_CHIMERAENDLESSDATA___IFIXBASEPROXY_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x8F20BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEndlessData_TypeDefinitionIndex = 50355;

	class ChimeraEndlessData : public ::RPG::Client::ChimeraData
	{
	public:
		::Class_1_E01A66D05D835284* _EndlessAttribute; // 0x40

		::System::Void _ctor(::System::UInt32 chimeraID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA__CTOR_OFFSET))(this, chimeraID);
		}

		::System::Void UpdateAfterBattleAttribute(::Class_1_E01A66D05D835284* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E01A66D05D835284*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_UPDATEAFTERBATTLEATTRIBUTE_OFFSET))(this, attribute);
		}

		::System::Void SyncEndlessAttribute(::Class_1_9E29FB6D3929D25A* chimera)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9E29FB6D3929D25A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_SYNCENDLESSATTRIBUTE_OFFSET))(this, chimera);
		}

		::System::Void ClearEndlessAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_CLEARENDLESSATTRIBUTE_OFFSET))(this);
		}

		::System::Int32 get_CurrentHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Int32 get_CurrentAtk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTATK_OFFSET))(this);
		}

		::System::Boolean get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_GET_ISDEAD_OFFSET))(this);
		}

		::System::Int32 __iFixBaseProxy_get_CurrentHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA___IFIXBASEPROXY_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Int32 __iFixBaseProxy_get_CurrentAtk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA___IFIXBASEPROXY_GET_CURRENTATK_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA___IFIXBASEPROXY_GET_ISDEAD_OFFSET))(this);
		}
	};
}
