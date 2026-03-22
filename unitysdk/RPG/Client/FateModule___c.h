#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_FATEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9232CE0)
#define RPG_CLIENT_FATEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9232D10)
#define RPG_CLIENT_FATEMODULE___C___INITREQ_B__16_0_OFFSET UNITYSDK_OFFSET(0x9232D20)

namespace RPG::Client
{
	inline static constexpr unsigned int FateModule___c_TypeDefinitionIndex = 50809;

	class FateModule___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::ScheduleData*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::RPG::Client::ScheduleData*>**)Il2CppClass::FromTypeDefinitionIndex(FateModule___c_TypeDefinitionIndex)->GetStaticField(0x41D80);
		}
		static ::RPG::Client::FateModule___c** StaticGet___9()
		{
			return (::RPG::Client::FateModule___c**)Il2CppClass::FromTypeDefinitionIndex(FateModule___c_TypeDefinitionIndex)->GetStaticField(0x41D88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __InitReq_b__16_0(::RPG::Client::ScheduleData* _)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___C___INITREQ_B__16_0_OFFSET))(this, _);
		}
	};
}
