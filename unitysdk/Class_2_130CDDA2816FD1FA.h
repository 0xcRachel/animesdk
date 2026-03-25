#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TaskTemplateFetchParamSequence; }

#define CLASS_2_130CDDA2816FD1FA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116147E0)
#define CLASS_2_130CDDA2816FD1FA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11614820)
#define CLASS_2_130CDDA2816FD1FA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11614A50)
#define CLASS_2_130CDDA2816FD1FA_TICK_OFFSET UNITYSDK_OFFSET(0x11614AA0)
#define CLASS_2_130CDDA2816FD1FA__CTOR_OFFSET UNITYSDK_OFFSET(0x116147D0)

inline static constexpr unsigned int Class_2_130CDDA2816FD1FA_TypeDefinitionIndex = 44618;

class Class_2_130CDDA2816FD1FA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::TaskTemplateFetchParamSequence* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskTemplateFetchParamSequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskTemplateFetchParamSequence*))((::PBYTE)hIl2Cpp + CLASS_2_130CDDA2816FD1FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_130CDDA2816FD1FA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_130CDDA2816FD1FA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_130CDDA2816FD1FA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_130CDDA2816FD1FA_TICK_OFFSET))(this, a1);
	}
};
