#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_2;
namespace RPG::Client { class ActivityPhaseData; }
namespace RPG::Client { class GridFightResidentActivityPanelData; }
namespace RPG::Client { class RogueResidentActivityPanelData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B8FAE0)
#define RPG_CLIENT_ACTIVITYMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B8FB10)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_0_OFFSET UNITYSDK_OFFSET(0x8B8FB90)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_1_OFFSET UNITYSDK_OFFSET(0x8B8FC00)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__52_0_OFFSET UNITYSDK_OFFSET(0x8B8FCC0)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__52_1_OFFSET UNITYSDK_OFFSET(0x8B8FD40)
#define RPG_CLIENT_ACTIVITYMODULE___C__ISHANDBOOKPHASEALLFINISHED_B__7_0_OFFSET UNITYSDK_OFFSET(0x8B8FB20)
#define RPG_CLIENT_ACTIVITYMODULE___C__ONLOGINFINISH_B__104_0_OFFSET UNITYSDK_OFFSET(0x8B8FE00)
#define RPG_CLIENT_ACTIVITYMODULE___C___ONGETACTIVITYREWARDCOUNTDATASCRSP_B__123_0_OFFSET UNITYSDK_OFFSET(0x8B8FE10)
#define RPG_CLIENT_ACTIVITYMODULE___C___ONGETALLACTIVITYREWARDCOUNTDATASCRSP_B__124_0_OFFSET UNITYSDK_OFFSET(0x8B8FE30)
#define RPG_CLIENT_ACTIVITYMODULE___C___PREPAREMISSIONDATA_B__128_0_OFFSET UNITYSDK_OFFSET(0x8B8FE50)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityModule___c_TypeDefinitionIndex = 48914;

	class ActivityModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x1B8E0);
		}
		static ::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x1B8E8);
		}
		static ::System::Action** StaticGet___9__128_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x1B8F0);
		}
		static ::System::Func_2<::Class_1_3C58D309C7A040F5_2*, ::System::UInt32>** StaticGet___9__124_0()
		{
			return (::System::Func_2<::Class_1_3C58D309C7A040F5_2*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x1B8F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::String*>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x1B900);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x1B908);
		}
		static ::System::Func_2<::Class_1_3C58D309C7A040F5_2*, ::System::UInt32>** StaticGet___9__123_0()
		{
			return (::System::Func_2<::Class_1_3C58D309C7A040F5_2*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x1B910);
		}
		static ::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::String*>** StaticGet___9__52_1()
		{
			return (::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x1B918);
		}
		static ::System::Action** StaticGet___9__104_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x1B920);
		}
		static ::RPG::Client::ActivityModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x1B928);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsHandbookPhaseAllFinished_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*> phaseDataPair)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__ISHANDBOOKPHASEALLFINISHED_B__7_0_OFFSET))(this, phaseDataPair);
		}

		::System::Boolean _FindCurrentGridFightActivityIDForRewardCount_b__16_0(::RPG::Client::GridFightResidentActivityPanelData* panel)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_0_OFFSET))(this, panel);
		}

		::System::String* _FindCurrentGridFightActivityIDForRewardCount_b__16_1(::RPG::Client::GridFightResidentActivityPanelData* panel)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_1_OFFSET))(this, panel);
		}

		::System::Boolean _FindCurrentTournRogueActivityIDForRewardCount_b__52_0(::RPG::Client::RogueResidentActivityPanelData* panel)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__52_0_OFFSET))(this, panel);
		}

		::System::String* _FindCurrentTournRogueActivityIDForRewardCount_b__52_1(::RPG::Client::RogueResidentActivityPanelData* panel)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::RogueResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__52_1_OFFSET))(this, panel);
		}

		::System::Void _OnLoginFinish_b__104_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__ONLOGINFINISH_B__104_0_OFFSET))(this);
		}

		::System::UInt32 __OnGetActivityRewardCountDataScRsp_b__123_0(::Class_1_3C58D309C7A040F5_2* proto)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_3C58D309C7A040F5_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___ONGETACTIVITYREWARDCOUNTDATASCRSP_B__123_0_OFFSET))(this, proto);
		}

		::System::UInt32 __OnGetAllActivityRewardCountDataScRsp_b__124_0(::Class_1_3C58D309C7A040F5_2* proto)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_3C58D309C7A040F5_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___ONGETALLACTIVITYREWARDCOUNTDATASCRSP_B__124_0_OFFSET))(this, proto);
		}

		::System::Void __PrepareMissionData_b__128_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___PREPAREMISSIONDATA_B__128_0_OFFSET))(this);
		}
	};
}
