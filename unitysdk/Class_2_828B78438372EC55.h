#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueCurseChestPropInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_828B78438372EC55_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171AC270)
#define CLASS_2_828B78438372EC55_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x171ACA40)
#define CLASS_2_828B78438372EC55_METHOD_2_1AFF05DC1082906B_OFFSET UNITYSDK_OFFSET(0x171ACD00)
#define CLASS_2_828B78438372EC55_METHOD_2_3A3142E60E5B79DE_OFFSET UNITYSDK_OFFSET(0x171AD1D0)
#define CLASS_2_828B78438372EC55_METHOD_2_4A6377454F633BFE_OFFSET UNITYSDK_OFFSET(0x171AD050)
#define CLASS_2_828B78438372EC55_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x171ACB20)
#define CLASS_2_828B78438372EC55_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x171AC400)
#define CLASS_2_828B78438372EC55_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x171AC860)
#define CLASS_2_828B78438372EC55_TICK_OFFSET UNITYSDK_OFFSET(0x171AC8B0)
#define CLASS_2_828B78438372EC55__CTOR_OFFSET UNITYSDK_OFFSET(0x171AC190)

inline static constexpr unsigned int Class_2_828B78438372EC55_TypeDefinitionIndex = 54603;

class Class_2_828B78438372EC55 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::RogueCurseChestPropInteract* Field_2_2; // 0x28
	::RPG::Client::LuaUIController* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::System::UInt32 Field_2_5; // 0x40
	::System::UInt32 Field_2_6; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueCurseChestPropInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueCurseChestPropInteract*))((::PBYTE)hIl2Cpp + CLASS_2_828B78438372EC55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_828B78438372EC55_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_828B78438372EC55_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_828B78438372EC55_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_828B78438372EC55_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_828B78438372EC55_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_828B78438372EC55_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_1AFF05DC1082906B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_828B78438372EC55_METHOD_2_1AFF05DC1082906B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A6377454F633BFE(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_828B78438372EC55_METHOD_2_4A6377454F633BFE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3A3142E60E5B79DE(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_828B78438372EC55_METHOD_2_3A3142E60E5B79DE_OFFSET))(this, a1, a2);
	}
};
