#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_301046E588A5ED6C.h"

class Class_1_3919EFEDE4A62579;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_4_BF2CE02449379FA8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A2D170)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x10A2D1C0)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_169C5280D338BD7B_OFFSET UNITYSDK_OFFSET(0x10A2D230)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_54B28D1B085551C3_OFFSET UNITYSDK_OFFSET(0x10A2D600)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x10A2D3D0)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_883B9FEB5E02AA26_OFFSET UNITYSDK_OFFSET(0x10A2D5F0)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_D482406D6CA3D371_OFFSET UNITYSDK_OFFSET(0x10A2D580)
#define CLASS_4_BF2CE02449379FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x10A2D160)
#define CLASS_4_BF2CE02449379FA8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A2D5E0)

inline static constexpr unsigned int Class_4_BF2CE02449379FA8_TypeDefinitionIndex = 62144;

class Class_4_BF2CE02449379FA8 : public ::Class_3_301046E588A5ED6C
{
public:
	::Class_1_3919EFEDE4A62579* Field_4_1; // 0xE8
	::System::Int32 Field_4_0; // 0xF0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_4_097468641FDED14E(::Class_1_3919EFEDE4A62579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3919EFEDE4A62579*))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_4_169C5280D338BD7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_169C5280D338BD7B_OFFSET))(this);
	}

	::System::Void Method_4_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_7A097E7EF929F289_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* Method_4_D482406D6CA3D371()
	{
		return ((::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_D482406D6CA3D371_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_4_883B9FEB5E02AA26()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_883B9FEB5E02AA26_OFFSET))(this);
	}

	::System::Void Method_4_54B28D1B085551C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_54B28D1B085551C3_OFFSET))(this);
	}
};
