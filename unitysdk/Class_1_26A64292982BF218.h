#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_26A64292982BF218_METHOD_1_0C645ACCB9ABCF20_OFFSET UNITYSDK_OFFSET(0x10074E50)
#define CLASS_1_26A64292982BF218_METHOD_1_296803465F1C5202_OFFSET UNITYSDK_OFFSET(0x10074CA0)
#define CLASS_1_26A64292982BF218_METHOD_1_3BD554ACC82DAA79_OFFSET UNITYSDK_OFFSET(0x100749F0)
#define CLASS_1_26A64292982BF218_METHOD_1_3FF3FCE62539C662_OFFSET UNITYSDK_OFFSET(0x10074C30)
#define CLASS_1_26A64292982BF218_METHOD_1_53664FB6C11B327C_OFFSET UNITYSDK_OFFSET(0x10074980)

inline static constexpr unsigned int Class_1_26A64292982BF218_TypeDefinitionIndex = 46628;

class Class_1_26A64292982BF218 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_53664FB6C11B327C(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_53664FB6C11B327C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3FF3FCE62539C662(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_3FF3FCE62539C662_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3BD554ACC82DAA79(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_3BD554ACC82DAA79_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_296803465F1C5202(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::RuntimeGroupInfo* a4, ::RPG::GameCore::HoyoTagContainer* a5)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_296803465F1C5202_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_0C645ACCB9ABCF20(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_0C645ACCB9ABCF20_OFFSET))(a1, a2);
	}
};
