#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TrainExteriorConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ADVENTUREMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1040A160)
#define RPG_CLIENT_ADVENTUREMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1040A190)
#define RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__81_0_OFFSET UNITYSDK_OFFSET(0x1040A1A0)
#define RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__81_1_OFFSET UNITYSDK_OFFSET(0x1040A1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureModule___c_TypeDefinitionIndex = 57204;

	class AdventureModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::TrainExteriorConfigRow*>** StaticGet___9__81_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::TrainExteriorConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x53C30);
		}
		static ::System::Func_2<::RPG::GameCore::TrainExteriorConfigRow*, ::System::Boolean>** StaticGet___9__81_1()
		{
			return (::System::Func_2<::RPG::GameCore::TrainExteriorConfigRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x53C38);
		}
		static ::RPG::Client::AdventureModule___c** StaticGet___9()
		{
			return (::RPG::Client::AdventureModule___c**)Il2CppClass::FromTypeDefinitionIndex(AdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x53C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetTrainOutSideSceneID_b__81_0(::RPG::GameCore::TrainExteriorConfigRow* a, ::RPG::GameCore::TrainExteriorConfigRow* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TrainExteriorConfigRow*, ::RPG::GameCore::TrainExteriorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__81_0_OFFSET))(this, a, b);
		}

		::System::Boolean _GetTrainOutSideSceneID_b__81_1(::RPG::GameCore::TrainExteriorConfigRow* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainExteriorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__81_1_OFFSET))(this, x);
		}
	};
}
