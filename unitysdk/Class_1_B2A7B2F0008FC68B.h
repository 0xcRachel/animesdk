#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B2A7B2F0008FC68B_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x872F760)
#define CLASS_1_B2A7B2F0008FC68B_CLEAR_OFFSET UNITYSDK_OFFSET(0x872F710)
#define CLASS_1_B2A7B2F0008FC68B_METHOD_1_AE3C63A8AA040506_OFFSET UNITYSDK_OFFSET(0x872F6A0)
#define CLASS_1_B2A7B2F0008FC68B_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0x872F7E0)
#define CLASS_1_B2A7B2F0008FC68B_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0x872F7A0)
#define CLASS_1_B2A7B2F0008FC68B__CTOR_OFFSET UNITYSDK_OFFSET(0x872FB40)

inline static constexpr unsigned int Class_1_B2A7B2F0008FC68B_TypeDefinitionIndex = 48268;

class Class_1_B2A7B2F0008FC68B : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Action_1<::System::Single>* Field_1_0; // 0x18
	::System::String* Field_1_3; // 0x20
	::RPG::GameCore::TaskContext* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2A7B2F0008FC68B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AE3C63A8AA040506(::System::String* a1, ::RPG::GameCore::TaskContext* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2A7B2F0008FC68B_METHOD_1_AE3C63A8AA040506_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2A7B2F0008FC68B_CLEAR_OFFSET))(this);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2A7B2F0008FC68B_CHANNELNAME_OFFSET))(this);
	}

	::System::Single SampleDelay()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2A7B2F0008FC68B_SAMPLEDELAY_OFFSET))(this);
	}

	::System::Void OnSample(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B2A7B2F0008FC68B_ONSAMPLE_OFFSET))(this, a1);
	}
};
