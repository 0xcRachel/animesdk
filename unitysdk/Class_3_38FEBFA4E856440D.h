#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_6.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ParallelSelectorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_38FEBFA4E856440D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96A1420)
#define CLASS_3_38FEBFA4E856440D_METHOD_3_A3BE7A5BCC3AF8EE_OFFSET UNITYSDK_OFFSET(0x96A1260)
#define CLASS_3_38FEBFA4E856440D_METHOD_3_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x96A1570)
#define CLASS_3_38FEBFA4E856440D_METHOD_3_E240D159E3150659_1_OFFSET UNITYSDK_OFFSET(0x96A1860)
#define CLASS_3_38FEBFA4E856440D_METHOD_3_E240D159E3150659_OFFSET UNITYSDK_OFFSET(0x96A1950)
#define CLASS_3_38FEBFA4E856440D_METHOD_3_E5E42B46DE6979AF_OFFSET UNITYSDK_OFFSET(0x96A1A40)
#define CLASS_3_38FEBFA4E856440D_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x96A1F70)
#define CLASS_3_38FEBFA4E856440D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96A14D0)
#define CLASS_3_38FEBFA4E856440D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x96A1520)
#define CLASS_3_38FEBFA4E856440D_TICK_OFFSET UNITYSDK_OFFSET(0x96A17B0)
#define CLASS_3_38FEBFA4E856440D__CTOR_OFFSET UNITYSDK_OFFSET(0x96A1240)

inline static constexpr unsigned int Class_3_38FEBFA4E856440D_TypeDefinitionIndex = 42780;

class Class_3_38FEBFA4E856440D : public ::Class_2_A48F3719AA1CF200_6
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_3_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParallelSelectorConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParallelSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_A3BE7A5BCC3AF8EE(::RPG::GameCore::ParallelSelectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D_METHOD_3_A3BE7A5BCC3AF8EE_OFFSET))(this, a1);
	}

	::System::Void Method_3_E5E42B46DE6979AF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D_METHOD_3_E5E42B46DE6979AF_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E240D159E3150659()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D_METHOD_3_E240D159E3150659_OFFSET))(this);
	}

	::System::Boolean Method_3_E240D159E3150659_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D_METHOD_3_E240D159E3150659_1_OFFSET))(this);
	}

	::System::Void Method_3_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FEBFA4E856440D_METHOD_3_D155D4917B3D2C6A_OFFSET))(this);
	}
};
