#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_CB8B5340883CE90A;
class Class_3_F116FA8DBA2FD65C;
namespace RPG::Client::MVVM::Model { class LimaoNewsPostData; }

#define CLASS_3_A0B77C1067FF121F_GET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8A34370)
#define CLASS_3_A0B77C1067FF121F_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x8A34350)
#define CLASS_3_A0B77C1067FF121F_METHOD_3_EBB07646C9BB0C5C_OFFSET UNITYSDK_OFFSET(0x8A34390)
#define CLASS_3_A0B77C1067FF121F_SET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8A34380)
#define CLASS_3_A0B77C1067FF121F_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x8A34360)
#define CLASS_3_A0B77C1067FF121F__CTOR_OFFSET UNITYSDK_OFFSET(0x8A34260)
#define CLASS_3_A0B77C1067FF121F___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x8A34420)

inline static constexpr unsigned int Class_3_A0B77C1067FF121F_TypeDefinitionIndex = 59208;

class Class_3_A0B77C1067FF121F : public ::Class_2_3DE15EA7F53A0550
{
public:
	::RPG::Client::MVVM::Model::LimaoNewsPostData* Field_3_2; // 0x18
	::Class_3_F116FA8DBA2FD65C* _InteractionViewModel_k__BackingField; // 0x20
	::Class_1_CB8B5340883CE90A* Field_3_3; // 0x28
	::Class_1_2FDE33CCAE591AA8* _OnBtnClose_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::Client::MVVM::Model::LimaoNewsPostData* a1, ::Class_1_CB8B5340883CE90A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*, ::Class_1_CB8B5340883CE90A*))((::PBYTE)hIl2Cpp + CLASS_3_A0B77C1067FF121F__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnClose()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0B77C1067FF121F_GET_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void set_OnBtnClose(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_A0B77C1067FF121F_SET_ONBTNCLOSE_OFFSET))(this, value);
	}

	::Class_3_F116FA8DBA2FD65C* get_InteractionViewModel()
	{
		return ((::Class_3_F116FA8DBA2FD65C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0B77C1067FF121F_GET_INTERACTIONVIEWMODEL_OFFSET))(this);
	}

	::System::Void set_InteractionViewModel(::Class_3_F116FA8DBA2FD65C* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F116FA8DBA2FD65C*))((::PBYTE)hIl2Cpp + CLASS_3_A0B77C1067FF121F_SET_INTERACTIONVIEWMODEL_OFFSET))(this, value);
	}

	::RPG::Client::TextID Method_3_EBB07646C9BB0C5C()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0B77C1067FF121F_METHOD_3_EBB07646C9BB0C5C_OFFSET))(this);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0B77C1067FF121F___CTOR_B__0_0_OFFSET))(this);
	}
};
