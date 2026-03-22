#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_898;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::GameCore { class ActivityHipplenWorkRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTS_OFFSET UNITYSDK_OFFSET(0x8B3D660)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTVIEWDATA_OFFSET UNITYSDK_OFFSET(0x8B3D680)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8B3D5A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0x8B3D640)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x8B3D620)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISFIXED_OFFSET UNITYSDK_OFFSET(0x8B3D5E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x8B3D600)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_WORKROW_OFFSET UNITYSDK_OFFSET(0x8B3D5C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTS_OFFSET UNITYSDK_OFFSET(0x8B3D670)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTVIEWDATA_OFFSET UNITYSDK_OFFSET(0x8B3D690)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x8B3D5B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0x8B3D650)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x8B3D630)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISFIXED_OFFSET UNITYSDK_OFFSET(0x8B3D5F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x8B3D610)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_WORKROW_OFFSET UNITYSDK_OFFSET(0x8B3D5D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8B335C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0x8B34100)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenWorkData_TypeDefinitionIndex = 60004;

	class ActivityHipplenWorkData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityHipplenWorkRow* _WorkRow_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_898*>* _Effects_k__BackingField; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* _EffectViewData_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Boolean _IsRecommend_k__BackingField; // 0x2C
		::System::Boolean _IsFixed_k__BackingField; // 0x2D
		::System::Boolean _IsExtra_k__BackingField; // 0x2E
		::System::Boolean _IsFinish_k__BackingField; // 0x2F

		::System::Void _ctor(::System::UInt32 id, ::System::Boolean isFixed, ::System::Boolean isRecommend, ::System::Boolean isFinish, ::System::Boolean isExtra)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA__CTOR_OFFSET))(this, id, isFixed, isRecommend, isFinish, isExtra);
		}

		::System::Void _InitWorkEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA__INITWORKEFFECTS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::ActivityHipplenWorkRow* get_WorkRow()
		{
			return ((::RPG::GameCore::ActivityHipplenWorkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_WORKROW_OFFSET))(this);
		}

		::System::Void set_WorkRow(::RPG::GameCore::ActivityHipplenWorkRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityHipplenWorkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_WORKROW_OFFSET))(this, value);
		}

		::System::Boolean get_IsFixed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISFIXED_OFFSET))(this);
		}

		::System::Void set_IsFixed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISFIXED_OFFSET))(this, value);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Void set_IsRecommend(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISRECOMMEND_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISFINISH_OFFSET))(this, value);
		}

		::System::Boolean get_IsExtra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_ISEXTRA_OFFSET))(this);
		}

		::System::Void set_IsExtra(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_ISEXTRA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_898*>* get_Effects()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_898*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTS_OFFSET))(this);
		}

		::System::Void set_Effects(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_898*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_898*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTS_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* get_EffectViewData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_GET_EFFECTVIEWDATA_OFFSET))(this);
		}

		::System::Void set_EffectViewData(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKDATA_SET_EFFECTVIEWDATA_OFFSET))(this, value);
		}
	};
}
