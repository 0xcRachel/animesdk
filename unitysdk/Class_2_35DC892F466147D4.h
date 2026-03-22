#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterGroupMemberType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"

class Class_0_16E4307DCC419505_347;
class Class_1_BA0A19A6D03B2013;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_35DC892F466147D4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10453B80)
#define CLASS_2_35DC892F466147D4_GET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0x104543F0)
#define CLASS_2_35DC892F466147D4_GET_LEADER_OFFSET UNITYSDK_OFFSET(0x10454390)
#define CLASS_2_35DC892F466147D4_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x104543B0)
#define CLASS_2_35DC892F466147D4_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x10454370)
#define CLASS_2_35DC892F466147D4_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x104543D0)
#define CLASS_2_35DC892F466147D4_METHOD_2_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x10453DC0)
#define CLASS_2_35DC892F466147D4_METHOD_2_140E92B6D36EDFFE_OFFSET UNITYSDK_OFFSET(0x104541D0)
#define CLASS_2_35DC892F466147D4_METHOD_2_466FDCDCBC13D73A_OFFSET UNITYSDK_OFFSET(0x10453FB0)
#define CLASS_2_35DC892F466147D4_METHOD_2_AB8FA5409F7405E1_OFFSET UNITYSDK_OFFSET(0x10453A40)
#define CLASS_2_35DC892F466147D4_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x10454060)
#define CLASS_2_35DC892F466147D4_METHOD_2_CF9CA579E44CB0FF_OFFSET UNITYSDK_OFFSET(0x104537D0)
#define CLASS_2_35DC892F466147D4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10453A30)
#define CLASS_2_35DC892F466147D4_METHOD_2_F814F8E564CC024D_OFFSET UNITYSDK_OFFSET(0x10453AF0)
#define CLASS_2_35DC892F466147D4_SET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0x10454400)
#define CLASS_2_35DC892F466147D4_SET_LEADER_OFFSET UNITYSDK_OFFSET(0x104543A0)
#define CLASS_2_35DC892F466147D4_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x104543C0)
#define CLASS_2_35DC892F466147D4_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x10454380)
#define CLASS_2_35DC892F466147D4_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x104543E0)
#define CLASS_2_35DC892F466147D4__CTOR_OFFSET UNITYSDK_OFFSET(0x10454410)
#define CLASS_2_35DC892F466147D4__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x10453780)
#define CLASS_2_35DC892F466147D4___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x10454420)

inline static constexpr unsigned int Class_2_35DC892F466147D4_TypeDefinitionIndex = 44760;

class Class_2_35DC892F466147D4 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _Members_k__BackingField; // 0x18
	::Class_1_BA0A19A6D03B2013* Field_2_12; // 0x20
	::System::String* _MemberName_k__BackingField; // 0x28
	::RPG::GameCore::GameEntity* _Leader_k__BackingField; // 0x30
	::System::Boolean Field_2_9; // 0x38
	::System::Boolean _IsWeakBinding_k__BackingField; // 0x39
	::System::Boolean Field_2_8; // 0x3A
	::System::Single Field_2_11; // 0x3C
	::RPG::GameCore::CharacterGroupMemberType _Type_k__BackingField; // 0x40
	::System::Int32 Field_2_6; // 0x44
	::System::Boolean Field_2_7; // 0x48
	::System::Boolean Field_2_5; // 0x49
	::System::Int32 Field_2_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_CF9CA579E44CB0FF(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_CF9CA579E44CB0FF_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_35DC892F466147D4* Method_2_AB8FA5409F7405E1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_35DC892F466147D4*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_AB8FA5409F7405E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F814F8E564CC024D(::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_F814F8E564CC024D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0FA0973E87FBD363(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Void Method_2_466FDCDCBC13D73A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_466FDCDCBC13D73A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_140E92B6D36EDFFE(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_140E92B6D36EDFFE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_Members()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_GET_MEMBERS_OFFSET))(this);
	}

	::System::Void set_Members(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_SET_MEMBERS_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_Leader()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_GET_LEADER_OFFSET))(this);
	}

	::System::Void set_Leader(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_SET_LEADER_OFFSET))(this, value);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* get_MemberName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_GET_MEMBERNAME_OFFSET))(this);
	}

	::System::Void set_MemberName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_SET_MEMBERNAME_OFFSET))(this, value);
	}

	::RPG::GameCore::CharacterGroupMemberType get_Type()
	{
		return ((::RPG::GameCore::CharacterGroupMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::CharacterGroupMemberType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterGroupMemberType))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_SET_TYPE_OFFSET))(this, value);
	}

	::System::Boolean get_IsWeakBinding()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_GET_ISWEAKBINDING_OFFSET))(this);
	}

	::System::Void set_IsWeakBinding(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_SET_ISWEAKBINDING_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
