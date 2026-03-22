#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_2_BD898AE9C0E88E25;
namespace RPG::GameCore { class AdvPassByValueClientServer; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_8825BC01853DE9A1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B21B90)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_2A65FCF94CE14510_OFFSET UNITYSDK_OFFSET(0x10B22540)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_401B9D4E3017220B_OFFSET UNITYSDK_OFFSET(0x10B21F10)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_56EF18F92B7B40BA_OFFSET UNITYSDK_OFFSET(0x10B22030)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_7E361E90E40EE74F_OFFSET UNITYSDK_OFFSET(0x10B21DD0)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_85009DD6D248C787_OFFSET UNITYSDK_OFFSET(0x10B22A70)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_D7A76194A3C8E6ED_OFFSET UNITYSDK_OFFSET(0x10B22310)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_DDBE4A67CF944425_OFFSET UNITYSDK_OFFSET(0x10B22C60)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_EECDE140D147EF43_OFFSET UNITYSDK_OFFSET(0x10B221B0)
#define CLASS_2_8825BC01853DE9A1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B21D00)
#define CLASS_2_8825BC01853DE9A1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B21BE0)
#define CLASS_2_8825BC01853DE9A1_TICK_OFFSET UNITYSDK_OFFSET(0x10B21FD0)
#define CLASS_2_8825BC01853DE9A1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B21B80)

inline static constexpr unsigned int Class_2_8825BC01853DE9A1_TypeDefinitionIndex = 41434;

class Class_2_8825BC01853DE9A1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_BD898AE9C0E88E25* Field_2_2; // 0x18
	::RPG::GameCore::AdvPassByValueClientServer* Field_2_1; // 0x20
	::System::String* Field_2_3; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
	::System::Int16 Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPassByValueClientServer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPassByValueClientServer*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_TICK_OFFSET))(this, a1);
	}

	::System::Object* Method_2_56EF18F92B7B40BA(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_56EF18F92B7B40BA_OFFSET))(this, a1);
	}

	::System::Object* Method_2_EECDE140D147EF43(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_EECDE140D147EF43_OFFSET))(this, a1);
	}

	::System::Object* Method_2_D7A76194A3C8E6ED(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_D7A76194A3C8E6ED_OFFSET))(this, a1);
	}

	::System::Object* Method_2_2A65FCF94CE14510(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_2A65FCF94CE14510_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_2_7E361E90E40EE74F(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_7E361E90E40EE74F_OFFSET))(this, a1);
	}

	::System::Void Method_2_85009DD6D248C787(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_85009DD6D248C787_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TaskState Method_2_DDBE4A67CF944425(::System::String* a1, ::System::Object* a2)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_DDBE4A67CF944425_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TaskState Method_2_401B9D4E3017220B(::System::String* a1, ::System::Object* a2)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_401B9D4E3017220B_OFFSET))(this, a1, a2);
	}
};
