#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xF795A00)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xF795A30)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xF7959A0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISHIT_OFFSET UNITYSDK_OFFSET(0xF7959E0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISREACH_OFFSET UNITYSDK_OFFSET(0xF795980)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0xF7959C0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xF795A20)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xF795A50)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xF7959B0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISHIT_OFFSET UNITYSDK_OFFSET(0xF7959F0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISREACH_OFFSET UNITYSDK_OFFSET(0xF795990)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0xF7959D0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1__CTOR_OFFSET UNITYSDK_OFFSET(0xF795A60)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_Class_1_413A93C6BBC780F1_TypeDefinitionIndex = 55512;

class Class_1_5713C98DC6CE30C7_Class_1_413A93C6BBC780F1 : public ::System::Object
{
public:
	::System::String* _TargetName_k__BackingField; // 0x10
	::UnityEngine::Vector3 _Direction_k__BackingField; // 0x18
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x24
	::System::Boolean _IsHit_k__BackingField; // 0x30
	::System::Boolean _IsReach_k__BackingField; // 0x31
	::System::Boolean Field_1_1; // 0x32
	::System::Boolean _IsFinish_k__BackingField; // 0x33

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsReach()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISREACH_OFFSET))(this);
	}

	::System::Void set_IsReach(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISREACH_OFFSET))(this, value);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISFINISH_OFFSET))(this, value);
	}

	::System::String* get_TargetName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_TARGETNAME_OFFSET))(this);
	}

	::System::Void set_TargetName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_TARGETNAME_OFFSET))(this, value);
	}

	::System::Boolean get_IsHit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISHIT_OFFSET))(this);
	}

	::System::Void set_IsHit(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISHIT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_Direction()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_DIRECTION_OFFSET))(this);
	}

	::System::Void set_Direction(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_DIRECTION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ENDPOS_OFFSET))(this, value);
	}
};
