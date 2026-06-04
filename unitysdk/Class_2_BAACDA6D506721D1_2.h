#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_07BF77E88FF3817D;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BAACDA6D506721D1_2_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x14C1FA20)
#define CLASS_2_BAACDA6D506721D1_2_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x14C1FA40)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_04EAA728819FA889_OFFSET UNITYSDK_OFFSET(0x14C1FE70)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x14C1FB20)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14C1FDE0)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14C204A0)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x14C20670)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14C20610)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x14C205B0)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x14C1FC50)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x14C1FCA0)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x14C1FD80)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x14C202A0)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x14C1FAA0)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x14C20350)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x14C20110)
#define CLASS_2_BAACDA6D506721D1_2_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x14C1FE30)
#define CLASS_2_BAACDA6D506721D1_2_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x14C1FA30)
#define CLASS_2_BAACDA6D506721D1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14C20510)
#define CLASS_2_BAACDA6D506721D1_2__ONBIND_OFFSET UNITYSDK_OFFSET(0x14C1F920)
#define CLASS_2_BAACDA6D506721D1_2__ONTICK_OFFSET UNITYSDK_OFFSET(0x14C1FF80)
#define CLASS_2_BAACDA6D506721D1_2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x14C20550)
#define CLASS_2_BAACDA6D506721D1_2___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x14C206D0)

inline static constexpr unsigned int Class_2_BAACDA6D506721D1_2_TypeDefinitionIndex = 66797;

class Class_2_BAACDA6D506721D1_2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::RPG::Client::LocalizedText* Field_2_4; // 0x60
	::Class_1_07BF77E88FF3817D* Field_2_5; // 0x68
	::RPG::Client::RPGAnimationEvent* Field_2_6; // 0x70
	::UnityEngine::Animation* Field_2_7; // 0x78
	::UnityEngine::Animation* Field_2_8; // 0x80
	::UnityEngine::AnimationState* Field_2_9; // 0x88
	::System::Action* Field_2_10; // 0x90
	::System::Boolean Field_2_11; // 0x98
	::System::Boolean Field_2_12; // 0x99
	::System::Boolean Field_2_13; // 0x9A
	::System::Int32 _Index_k__BackingField; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_1C6AD2DA62FB6EB1_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_04EAA728819FA889()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_04EAA728819FA889_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void Method_2_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_2___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}
};
