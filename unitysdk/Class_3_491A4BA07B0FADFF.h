#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_491A4BA07B0FADFF_WaitState.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphWaitIdentifyFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_491A4BA07B0FADFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFD6FD60)
#define CLASS_3_491A4BA07B0FADFF_METHOD_3_37D8D2BDEDA565ED_OFFSET UNITYSDK_OFFSET(0xFD70270)
#define CLASS_3_491A4BA07B0FADFF_METHOD_3_5D09DFA26924F01B_OFFSET UNITYSDK_OFFSET(0xFD70640)
#define CLASS_3_491A4BA07B0FADFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFD6FF50)
#define CLASS_3_491A4BA07B0FADFF__CTOR_OFFSET UNITYSDK_OFFSET(0xFD6FB40)
#define CLASS_3_491A4BA07B0FADFF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFD70780)

inline static constexpr unsigned int Class_3_491A4BA07B0FADFF_TypeDefinitionIndex = 41916;

class Class_3_491A4BA07B0FADFF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PhotoGraphWaitIdentifyFinish*>
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_3_5; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_3_2; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_3_6; // 0x38
	::Class_3_BCCE950C2E8DF1F0* Field_3_4; // 0x40
	::System::Boolean Field_3_1; // 0x48
	::Class_3_491A4BA07B0FADFF_WaitState Field_3_0; // 0x4C
	::System::UInt32 Field_3_3; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish*))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_37D8D2BDEDA565ED(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF_METHOD_3_37D8D2BDEDA565ED_OFFSET))(this, a1);
	}

	::System::Void Method_3_5D09DFA26924F01B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF_METHOD_3_5D09DFA26924F01B_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
