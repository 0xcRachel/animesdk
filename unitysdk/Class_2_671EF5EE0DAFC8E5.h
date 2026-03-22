#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class PlayLimaoNewsOptionTalk; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_671EF5EE0DAFC8E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1116DCB0)
#define CLASS_2_671EF5EE0DAFC8E5_METHOD_2_0B934AF65CEA173B_OFFSET UNITYSDK_OFFSET(0x1116DF00)
#define CLASS_2_671EF5EE0DAFC8E5_METHOD_2_722D24E25B6856C2_OFFSET UNITYSDK_OFFSET(0x1116E080)
#define CLASS_2_671EF5EE0DAFC8E5_METHOD_2_943E1EFDF67DA624_OFFSET UNITYSDK_OFFSET(0x1116E170)
#define CLASS_2_671EF5EE0DAFC8E5_METHOD_2_D0999B5DD6BFE156_OFFSET UNITYSDK_OFFSET(0x1116E0F0)
#define CLASS_2_671EF5EE0DAFC8E5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1116DAF0)
#define CLASS_2_671EF5EE0DAFC8E5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1116DDC0)
#define CLASS_2_671EF5EE0DAFC8E5_TICK_OFFSET UNITYSDK_OFFSET(0x1116DE40)
#define CLASS_2_671EF5EE0DAFC8E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1116DA60)

inline static constexpr unsigned int Class_2_671EF5EE0DAFC8E5_TypeDefinitionIndex = 41800;

class Class_2_671EF5EE0DAFC8E5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::PlayLimaoNewsOptionTalk* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_5; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Field_2_2; // 0x28
	::System::String* Field_2_4; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::System::Boolean Field_2_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlayLimaoNewsOptionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlayLimaoNewsOptionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_722D24E25B6856C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_METHOD_2_722D24E25B6856C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0999B5DD6BFE156(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_METHOD_2_D0999B5DD6BFE156_OFFSET))(this, a1);
	}

	::System::Void Method_2_943E1EFDF67DA624(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_METHOD_2_943E1EFDF67DA624_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B934AF65CEA173B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_METHOD_2_0B934AF65CEA173B_OFFSET))(this, a1);
	}
};
