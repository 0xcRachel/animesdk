#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_A26A6373D06B536C;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchCost; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETFUNCID_OFFSET UNITYSDK_OFFSET(0x9F2F4C0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x9F2F470)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETIFCOMPOSEVALIDBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x9F2F3F0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0x9F2F6A0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x9F2F500)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_REFRESH_OFFSET UNITYSDK_OFFSET(0x9F2F2F0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0x9F2F6B0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F2EEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchComposeMiracle_TypeDefinitionIndex = 53524;

	class RogueWorkBenchComposeMiracle : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMiracleCategory, ::System::Boolean>* _ValidMap; // 0x10
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x18
		::System::UInt32 _FuncID; // 0x20

		::System::Void _ctor(::System::UInt32 funcID, ::Class_1_A26A6373D06B536C* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_A26A6373D06B536C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE__CTOR_OFFSET))(this, funcID, proto);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchComposeMiracle* detail)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchComposeMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_REFRESH_OFFSET))(this, detail);
		}

		::System::Boolean GetIfComposeValidByCategory(::RPG::GameCore::RogueMiracleCategory category)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueMiracleCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETIFCOMPOSEVALIDBYCATEGORY_OFFSET))(this, category);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMIRACLE_SET_COSTDATA_OFFSET))(this, value);
		}
	};
}
