#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FUNCBTNMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92E1E20)
#define RPG_CLIENT_FUNCBTNMODULE_GET_ALLFUNCBTNPARAMS_OFFSET UNITYSDK_OFFSET(0x92E2250)
#define RPG_CLIENT_FUNCBTNMODULE_GET_CURRENTTOPFUNCBTNPARAM_OFFSET UNITYSDK_OFFSET(0x92E2240)
#define RPG_CLIENT_FUNCBTNMODULE_IFMAINMISSIONISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x92E2120)
#define RPG_CLIENT_FUNCBTNMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x92E1D80)
#define RPG_CLIENT_FUNCBTNMODULE__ONFUNCBTNFULLUPDATE_OFFSET UNITYSDK_OFFSET(0x92E1F90)
#define RPG_CLIENT_FUNCBTNMODULE__ONFUNCBTNREFRESH_OFFSET UNITYSDK_OFFSET(0x92E1F10)

namespace RPG::Client
{
	inline static constexpr unsigned int FuncBtnModule_TypeDefinitionIndex = 47958;

	class FuncBtnModule : public ::System::Object
	{
	public:
		::RPG::GameCore::NotifyShowFuncBtnParam* _CurrentTopParam; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::NotifyShowFuncBtnParam*>* _FuncBtnParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCBTNMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCBTNMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnFuncBtnRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCBTNMODULE__ONFUNCBTNREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnFuncBtnFullUpdate(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCBTNMODULE__ONFUNCBTNFULLUPDATE_OFFSET))(this, arg);
		}

		::System::Boolean IfMainMissionIsOccupied(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCBTNMODULE_IFMAINMISSIONISOCCUPIED_OFFSET))(this, id);
		}

		::RPG::GameCore::NotifyShowFuncBtnParam* get_CurrentTopFuncBtnParam()
		{
			return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCBTNMODULE_GET_CURRENTTOPFUNCBTNPARAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::NotifyShowFuncBtnParam*>* get_AllFuncBtnParams()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::NotifyShowFuncBtnParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCBTNMODULE_GET_ALLFUNCBTNPARAMS_OFFSET))(this);
		}
	};
}
