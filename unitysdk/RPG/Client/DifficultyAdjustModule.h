#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_44.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_35B19D34B208E77E_13;
class Class_1_588001F5465E05ED;
namespace RPG::GameCore { class NPCComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_CANRAIDADJUSTDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9051840)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_CANSTAGEEVENTADJUSTDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x90519E0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9052220)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETDIFFICULTYTYPE_OFFSET UNITYSDK_OFFSET(0x9051B70)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETEASYWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x9051AB0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETRAIDDIFFICULTYTYPE_OFFSET UNITYSDK_OFFSET(0x90516D0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETSTAGEEVENTDIFFICULTYTYPE_OFFSET UNITYSDK_OFFSET(0x9051730)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9051EE0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISNPCDIFFICULTYADJUSTEASY_OFFSET UNITYSDK_OFFSET(0x90514D0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISRAIDDIFFICULTYADJUSTEASY_OFFSET UNITYSDK_OFFSET(0x9051790)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISSTAGEDIFFICULTYADJUSTEASY_OFFSET UNITYSDK_OFFSET(0x9051940)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_SENDRAIDDIFFICULTYUPDATEDATACSREQ_OFFSET UNITYSDK_OFFSET(0x9051C40)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_SENDSTAGEEVENTDIFFICULTYUPDATEDATACSREQ_OFFSET UNITYSDK_OFFSET(0x9051D90)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__ADDORREFRESHDIFFICULTYADJUSTDATA_OFFSET UNITYSDK_OFFSET(0x90528F0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9052440)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9052DC0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__INITCANADJUSTMENTSTAGEEVENTIDS_OFFSET UNITYSDK_OFFSET(0x9051FE0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__ONCMDDIFFICULTYADJUSTMENTGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x90525B0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__ONCMDDIFFICULTYADJUSTMENTUPDATEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9052B10)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__SENDDIFFICULTYADJUSTMENTGETDATACSREQ_OFFSET UNITYSDK_OFFSET(0x90524F0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9052E70)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9052DE0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9052E80)

namespace RPG::Client
{
	inline static constexpr unsigned int DifficultyAdjustModule_TypeDefinitionIndex = 50483;

	class DifficultyAdjustModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_0A3761FE34514D6C_44, ::Class_1_588001F5465E05ED*>* _DataCollections; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CanAdjustmentStageEventIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsNpcDifficultyAdjustEasy(::RPG::GameCore::NPCComponent* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NPCComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISNPCDIFFICULTYADJUSTEASY_OFFSET))(this, entity);
		}

		::System::Boolean IsRaidDifficultyAdjustEasy(::System::UInt32 raidID, ::System::UInt32 raidHardLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISRAIDDIFFICULTYADJUSTEASY_OFFSET))(this, raidID, raidHardLevel);
		}

		::System::Boolean IsStageDifficultyAdjustEasy(::System::UInt32 stageEventID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISSTAGEDIFFICULTYADJUSTEASY_OFFSET))(this, stageEventID);
		}

		::System::UInt32 GetEasyWorldLevel(::System::Nullable_1<::System::UInt32> customWorldLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETEASYWORLDLEVEL_OFFSET))(this, customWorldLevel);
		}

		::System::Boolean CanRaidAdjustDifficulty(::System::UInt32 raidID, ::System::UInt32 raidHardLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_CANRAIDADJUSTDIFFICULTY_OFFSET))(this, raidID, raidHardLevel);
		}

		::System::Boolean CanStageEventAdjustDifficulty(::System::UInt32 stageEventID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_CANSTAGEEVENTADJUSTDIFFICULTY_OFFSET))(this, stageEventID);
		}

		::Enum_3_ED790DAC948A65A9_13 GetRaidDifficultyType(::System::UInt32 raidID)
		{
			return ((::Enum_3_ED790DAC948A65A9_13(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETRAIDDIFFICULTYTYPE_OFFSET))(this, raidID);
		}

		::Enum_3_ED790DAC948A65A9_13 GetStageEventDifficultyType(::System::UInt32 stageEventID)
		{
			return ((::Enum_3_ED790DAC948A65A9_13(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETSTAGEEVENTDIFFICULTYTYPE_OFFSET))(this, stageEventID);
		}

		::System::Void SendRaidDifficultyUpdateDataCsReq(::System::UInt32 raidID, ::Enum_3_ED790DAC948A65A9_13 difficultyType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_ED790DAC948A65A9_13))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_SENDRAIDDIFFICULTYUPDATEDATACSREQ_OFFSET))(this, raidID, difficultyType);
		}

		::System::Void SendStageEventDifficultyUpdateDataCsReq(::System::UInt32 stageEventID, ::Enum_3_ED790DAC948A65A9_13 difficultyType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_ED790DAC948A65A9_13))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_SENDSTAGEEVENTDIFFICULTYUPDATEDATACSREQ_OFFSET))(this, stageEventID, difficultyType);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _SendDifficultyAdjustmentGetDataCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__SENDDIFFICULTYADJUSTMENTGETDATACSREQ_OFFSET))(this);
		}

		::System::Void _OnCmdDifficultyAdjustmentGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__ONCMDDIFFICULTYADJUSTMENTGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdDifficultyAdjustmentUpdateDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__ONCMDDIFFICULTYADJUSTMENTUPDATEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddOrRefreshDifficultyAdjustData(::Class_1_35B19D34B208E77E_13* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__ADDORREFRESHDIFFICULTYADJUSTDATA_OFFSET))(this, proto);
		}

		::Enum_3_ED790DAC948A65A9_13 GetDifficultyType(::Enum_3_0A3761FE34514D6C_44 sourceType, ::System::UInt32 id)
		{
			return ((::Enum_3_ED790DAC948A65A9_13(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_44, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETDIFFICULTYTYPE_OFFSET))(this, sourceType, id);
		}

		::System::Void _InitCanAdjustmentStageEventIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__INITCANADJUSTMENTSTAGEEVENTIDS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
