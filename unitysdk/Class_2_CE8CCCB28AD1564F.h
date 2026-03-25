#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class FormationMoveGroupCallback; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_CE8CCCB28AD1564F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BA0A90)
#define CLASS_2_CE8CCCB28AD1564F_METHOD_2_7A6818D24D36DCBD_1_OFFSET UNITYSDK_OFFSET(0x10BA0D50)
#define CLASS_2_CE8CCCB28AD1564F_METHOD_2_7A6818D24D36DCBD_OFFSET UNITYSDK_OFFSET(0x10BA0BB0)
#define CLASS_2_CE8CCCB28AD1564F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BA0960)
#define CLASS_2_CE8CCCB28AD1564F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BA0A40)
#define CLASS_2_CE8CCCB28AD1564F_TICK_OFFSET UNITYSDK_OFFSET(0x10BA0EF0)
#define CLASS_2_CE8CCCB28AD1564F__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA0870)

inline static constexpr unsigned int Class_2_CE8CCCB28AD1564F_TypeDefinitionIndex = 46902;

class Class_2_CE8CCCB28AD1564F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x18
	::RPG::GameCore::FormationMoveGroupCallback* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveGroupCallback* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveGroupCallback*))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7A6818D24D36DCBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_METHOD_2_7A6818D24D36DCBD_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A6818D24D36DCBD_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_METHOD_2_7A6818D24D36DCBD_1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_TICK_OFFSET))(this, a1);
	}
};
