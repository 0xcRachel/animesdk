#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AdventureFireProjectileBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_59BB61CDD388D438_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10FB7C70)
#define CLASS_2_59BB61CDD388D438_METHOD_2_771E8E0EDDBEBF2B_OFFSET UNITYSDK_OFFSET(0x10FB8480)
#define CLASS_2_59BB61CDD388D438_METHOD_2_7D19615C39047B5C_OFFSET UNITYSDK_OFFSET(0x10FB8240)
#define CLASS_2_59BB61CDD388D438_METHOD_2_7EA54838B888644E_1_OFFSET UNITYSDK_OFFSET(0x10FB8790)
#define CLASS_2_59BB61CDD388D438_METHOD_2_7EA54838B888644E_OFFSET UNITYSDK_OFFSET(0x10FB8680)
#define CLASS_2_59BB61CDD388D438_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10FB7D00)
#define CLASS_2_59BB61CDD388D438_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10FB8380)
#define CLASS_2_59BB61CDD388D438_TICK_OFFSET UNITYSDK_OFFSET(0x10FB83D0)
#define CLASS_2_59BB61CDD388D438__CTOR_OFFSET UNITYSDK_OFFSET(0x10FB7B80)

inline static constexpr unsigned int Class_2_59BB61CDD388D438_TypeDefinitionIndex = 53391;

class Class_2_59BB61CDD388D438 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x28
	::RPG::GameCore::AdventureFireProjectileBase* Field_2_0; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x38
	::Class_1_0AD6129525BF5F86* Field_2_4; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureFireProjectileBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureFireProjectileBase*))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_7D19615C39047B5C(::RPG::GameCore::GameEntity* a1, ::Class_1_2B8E0B4950FE44E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_METHOD_2_7D19615C39047B5C_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_771E8E0EDDBEBF2B(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_METHOD_2_771E8E0EDDBEBF2B_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EA54838B888644E(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_METHOD_2_7EA54838B888644E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EA54838B888644E_1(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_METHOD_2_7EA54838B888644E_1_OFFSET))(this, a1);
	}
};
