#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueAreaData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F2E7C0)
#define RPG_CLIENT_ROGUEUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F2E800)
#define RPG_CLIENT_ROGUEUTILS___C__GETSCHEDULEROGUEAREAIDINDOING_B__23_0_OFFSET UNITYSDK_OFFSET(0x9F2E880)
#define RPG_CLIENT_ROGUEUTILS___C__HASSCHEDULEROGUEAREAINDOING_B__22_0_OFFSET UNITYSDK_OFFSET(0x9F2E810)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueUtils___c_TypeDefinitionIndex = 53634;

	class RogueUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueAreaData*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::RPG::Client::RogueAreaData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueUtils___c_TypeDefinitionIndex)->GetStaticField(0x13930);
		}
		static ::RPG::Client::RogueUtils___c** StaticGet___9()
		{
			return (::RPG::Client::RogueUtils___c**)Il2CppClass::FromTypeDefinitionIndex(RogueUtils___c_TypeDefinitionIndex)->GetStaticField(0x13938);
		}
		static ::System::Func_2<::RPG::Client::RogueAreaData*, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::RogueAreaData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueUtils___c_TypeDefinitionIndex)->GetStaticField(0x13940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasScheduleRogueAreaInDoing_b__22_0(::RPG::Client::RogueAreaData* areaData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS___C__HASSCHEDULEROGUEAREAINDOING_B__22_0_OFFSET))(this, areaData);
		}

		::System::Boolean _GetScheduleRogueAreaIDInDoing_b__23_0(::RPG::Client::RogueAreaData* areaData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS___C__GETSCHEDULEROGUEAREAIDINDOING_B__23_0_OFFSET))(this, areaData);
		}
	};
}
