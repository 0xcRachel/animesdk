#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8CF94E0F14A91ED3_3;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BB3C80)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BB3CC0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___CHECKPUZZLEFINISH_B__31_0_OFFSET UNITYSDK_OFFSET(0x9BB3D50)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___SETPUZZLEANSWER_B__23_0_OFFSET UNITYSDK_OFFSET(0x9BB3CD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleBoard___c_TypeDefinitionIndex = 61793;

	class DeployPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Prop::DeployPuzzleBoard___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::DeployPuzzleBoard___c**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x41700);
		}
		static ::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_3*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_3*>**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x41708);
		}
		static ::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_3*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_3*>**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x41710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SetPuzzleAnswer_b__23_0(::Class_1_8CF94E0F14A91ED3_3* x, ::Class_1_8CF94E0F14A91ED3_3* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_3*, ::Class_1_8CF94E0F14A91ED3_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___SETPUZZLEANSWER_B__23_0_OFFSET))(this, x, y);
		}

		::System::Int32 __CheckPuzzleFinish_b__31_0(::Class_1_8CF94E0F14A91ED3_3* x, ::Class_1_8CF94E0F14A91ED3_3* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_3*, ::Class_1_8CF94E0F14A91ED3_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___CHECKPUZZLEFINISH_B__31_0_OFFSET))(this, x, y);
		}
	};
}
