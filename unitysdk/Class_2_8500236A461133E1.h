#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_16A256D5A30981C7.h"

class Class_1_08ACCB48C394B420;
class Class_3_1A92845FAFA5EC77;
class Class_3_B942B51FF20C85B4;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimTrainModeDisplayInfos; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_8500236A461133E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A45700)
#define CLASS_2_8500236A461133E1_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x11A46170)
#define CLASS_2_8500236A461133E1_METHOD_2_4F6E40C18A7A5A9E_OFFSET UNITYSDK_OFFSET(0x11A45A50)
#define CLASS_2_8500236A461133E1_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x11A45F10)
#define CLASS_2_8500236A461133E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A45750)
#define CLASS_2_8500236A461133E1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11A46070)
#define CLASS_2_8500236A461133E1_TICK_OFFSET UNITYSDK_OFFSET(0x11A460E0)
#define CLASS_2_8500236A461133E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A463E0)
#define CLASS_2_8500236A461133E1__CTOR_OFFSET UNITYSDK_OFFSET(0x11A456F0)

inline static constexpr unsigned int Class_2_8500236A461133E1_TypeDefinitionIndex = 48767;

class Class_2_8500236A461133E1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::Class_1_08ACCB48C394B420** StaticGet_Field_2_0()
	{
		return (::Class_1_08ACCB48C394B420**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8500236A461133E1_TypeDefinitionIndex)->GetStaticField(0x56B40);
	}
	// static const ::System::Single Field_2_9; // 0x0
	::Il2CppArray<::Struct_2_16A256D5A30981C7>* Field_2_8; // 0x18
	::RPG::Client::FiveDimTrainModeDisplayInfos* Field_2_11; // 0x20
	::System::String* Field_2_5; // 0x28
	::RPG::Client::FiveDimGameInstance* Field_2_3; // 0x30
	::Class_3_1A92845FAFA5EC77* Field_2_4; // 0x38
	::Class_3_B942B51FF20C85B4* Field_2_2; // 0x40
	::RPG::GameCore::TaskContext* Field_2_1; // 0x48
	::System::Int16 Field_2_7; // 0x50
	::System::Int16 Field_2_6; // 0x52
	::System::Single Field_2_10; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B942B51FF20C85B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B942B51FF20C85B4*))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F6E40C18A7A5A9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_METHOD_2_4F6E40C18A7A5A9E_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_METHOD_2_1F130271093617A5_OFFSET))(this);
	}
};
