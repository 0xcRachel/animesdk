#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class PlayMusicRhythmTimeline; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_907055459354D154_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB539B20)
#define CLASS_2_907055459354D154_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB539CF0)
#define CLASS_2_907055459354D154_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB539B60)
#define CLASS_2_907055459354D154_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB539D80)
#define CLASS_2_907055459354D154_TICK_OFFSET UNITYSDK_OFFSET(0xB539DD0)
#define CLASS_2_907055459354D154__CCTOR_OFFSET UNITYSDK_OFFSET(0xB539F50)
#define CLASS_2_907055459354D154__CTOR_OFFSET UNITYSDK_OFFSET(0xB539B10)

inline static constexpr unsigned int Class_2_907055459354D154_TypeDefinitionIndex = 48956;

class Class_2_907055459354D154 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_907055459354D154_TypeDefinitionIndex)->GetStaticField(0x55C50);
	}
	::RPG::GameCore::PlayMusicRhythmTimeline* Field_2_2; // 0x18
	::RPG::Client::MusicRhythmBoard* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::Boolean Field_2_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMusicRhythmTimeline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMusicRhythmTimeline*))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907055459354D154_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
