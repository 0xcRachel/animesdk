#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_6.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class SelectorConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9E12F120BC98A1B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x888D700)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_2E2C0A0C44158707_OFFSET UNITYSDK_OFFSET(0x888E4C0)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_72EE0536B7197A31_OFFSET UNITYSDK_OFFSET(0x888D800)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_8D648A9803134B01_OFFSET UNITYSDK_OFFSET(0x888E3C0)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x888DEF0)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_E240D159E3150659_1_OFFSET UNITYSDK_OFFSET(0x888E1E0)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_E240D159E3150659_OFFSET UNITYSDK_OFFSET(0x888E2D0)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x888E5B0)
#define CLASS_3_9E12F120BC98A1B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x888D7B0)
#define CLASS_3_9E12F120BC98A1B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x888DEA0)
#define CLASS_3_9E12F120BC98A1B4_TICK_OFFSET UNITYSDK_OFFSET(0x888E130)
#define CLASS_3_9E12F120BC98A1B4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x888D6B0)
#define CLASS_3_9E12F120BC98A1B4__CTOR_OFFSET UNITYSDK_OFFSET(0x888D650)

inline static constexpr unsigned int Class_3_9E12F120BC98A1B4_TypeDefinitionIndex = 43832;

class Class_3_9E12F120BC98A1B4 : public ::Class_2_A48F3719AA1CF200_6
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_3_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectorConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_TICK_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_5F51D4049EA87B7B*>* Method_3_8D648A9803134B01()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_5F51D4049EA87B7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_8D648A9803134B01_OFFSET))(this);
	}

	::System::Void Method_3_2E2C0A0C44158707(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_2E2C0A0C44158707_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_72EE0536B7197A31(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_72EE0536B7197A31_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E240D159E3150659()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_E240D159E3150659_OFFSET))(this);
	}

	::System::Boolean Method_3_E240D159E3150659_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_E240D159E3150659_1_OFFSET))(this);
	}

	::System::Void Method_3_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_D155D4917B3D2C6A_OFFSET))(this);
	}
};
