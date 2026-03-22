#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_AED2B14E7F551409;
namespace RPG::GameCore { class FunctionHudConfigRow; }
namespace RPG::GameCore { class FunctionHudSpecialConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_FUNCENTRANCEDATA_CHECKISINACTIVITY_OFFSET UNITYSDK_OFFSET(0x92E24C0)
#define RPG_CLIENT_FUNCENTRANCEDATA_CHECKNEEDHIDE_OFFSET UNITYSDK_OFFSET(0x92E2A70)
#define RPG_CLIENT_FUNCENTRANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x92E2980)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FIRSTWORLDTEXT_OFFSET UNITYSDK_OFFSET(0x92E2810)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCHUDICONPATH_OFFSET UNITYSDK_OFFSET(0x92E2670)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCICONPATH_OFFSET UNITYSDK_OFFSET(0x92E2430)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0x92E2400)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCTION_OFFSET UNITYSDK_OFFSET(0x92E2290)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x92E26E0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x92E23E0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCANSHOW_OFFSET UNITYSDK_OFFSET(0x92E2870)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCONTROLRIGHTHUDBYACTIVITY_OFFSET UNITYSDK_OFFSET(0x92E2910)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISLARGEBTN_OFFSET UNITYSDK_OFFSET(0x92E27B0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x92E22B0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISSHOWACTIVITYMARK_OFFSET UNITYSDK_OFFSET(0x92E2970)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_NOTINSCHEDULETOAST_OFFSET UNITYSDK_OFFSET(0x92E2730)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOTHUD_OFFSET UNITYSDK_OFFSET(0x92E2650)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOT_OFFSET UNITYSDK_OFFSET(0x92E2630)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x92E2390)
#define RPG_CLIENT_FUNCENTRANCEDATA_SET_FUNCTION_OFFSET UNITYSDK_OFFSET(0x92E22A0)
#define RPG_CLIENT_FUNCENTRANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92E2A20)

namespace RPG::Client
{
	inline static constexpr unsigned int FuncEntranceData_TypeDefinitionIndex = 53956;

	class FuncEntranceData : public ::System::Object
	{
	public:
		::RPG::GameCore::FunctionHudConfigRow* _Meta; // 0x10
		::RPG::GameCore::FunctionHudSpecialConfigRow* _SpecialMeta; // 0x18
		::Class_1_AED2B14E7F551409* _Function_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::FunctionHudConfigRow* meta, ::Class_1_AED2B14E7F551409* function)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FunctionHudConfigRow*, ::Class_1_AED2B14E7F551409*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA__CTOR_OFFSET))(this, meta, function);
		}

		::Class_1_AED2B14E7F551409* get_Function()
		{
			return ((::Class_1_AED2B14E7F551409*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCTION_OFFSET))(this);
		}

		::System::Void set_Function(::Class_1_AED2B14E7F551409* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AED2B14E7F551409*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_SET_FUNCTION_OFFSET))(this, value);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISOPEN_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_FuncName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCNAME_OFFSET))(this);
		}

		::System::String* get_FuncIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCICONPATH_OFFSET))(this);
		}

		::System::String* get_RedDot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOT_OFFSET))(this);
		}

		::System::String* get_RedDotHud()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOTHUD_OFFSET))(this);
		}

		::System::String* get_FuncHudIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCHUDICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_GOTOID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NotInScheduleToast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_NOTINSCHEDULETOAST_OFFSET))(this);
		}

		::System::Boolean get_IsLargeBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISLARGEBTN_OFFSET))(this);
		}

		::System::String* get_FirstWorldText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FIRSTWORLDTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsCanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCANSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsControlRightHudByActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCONTROLRIGHTHUDBYACTIVITY_OFFSET))(this);
		}

		::System::Boolean get_IsShowActivityMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISSHOWACTIVITYMARK_OFFSET))(this);
		}

		static ::RPG::Client::FuncEntranceData* Create(::RPG::GameCore::FunctionHudConfigRow* meta, ::Class_1_AED2B14E7F551409* function)
		{
			return ((::RPG::Client::FuncEntranceData*(*)(::RPG::GameCore::FunctionHudConfigRow*, ::Class_1_AED2B14E7F551409*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_CREATE_OFFSET))(meta, function);
		}

		::System::Boolean CheckNeedHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_CHECKNEEDHIDE_OFFSET))(this);
		}

		::System::Boolean CheckIsInActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_CHECKISINACTIVITY_OFFSET))(this);
		}
	};
}
