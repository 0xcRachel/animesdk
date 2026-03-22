#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2013BCE3EF90E58C_Class_1_ACF0E08C68D3724A;
class Class_2_4F354829EBADAFFE;

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11099FB0)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS7_0__ONAUDIOHPATCHFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x11099FC0)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass7_0_TypeDefinitionIndex = 47087;

class Class_1_359214CFB84D4DF3___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_4F354829EBADAFFE* audioPatch; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnAudioHPatchFinish_b__0(::Class_2_2013BCE3EF90E58C_Class_1_ACF0E08C68D3724A* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_2013BCE3EF90E58C_Class_1_ACF0E08C68D3724A*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS7_0__ONAUDIOHPATCHFINISH_B__0_OFFSET))(this, e);
	}
};
