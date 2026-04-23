#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_06E3452A211FC6E5.h"
#include "unitysdk/Class_4_B787A4C5DBDEF558_BossDotStyle.h"

class Class_1_70697F531F566942_2;
class Class_2_63D30683C5188FC7;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_4_B787A4C5DBDEF558_METHOD_4_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xFE5B250)
#define CLASS_4_B787A4C5DBDEF558_METHOD_4_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xFE5B110)
#define CLASS_4_B787A4C5DBDEF558_METHOD_4_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0xFE5AF20)
#define CLASS_4_B787A4C5DBDEF558_METHOD_4_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xFE5B060)
#define CLASS_4_B787A4C5DBDEF558_METHOD_4_96D822BD6D0F6379_OFFSET UNITYSDK_OFFSET(0xFE5B3D0)
#define CLASS_4_B787A4C5DBDEF558_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xFE5B2B0)
#define CLASS_4_B787A4C5DBDEF558_METHOD_4_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xFE5B010)
#define CLASS_4_B787A4C5DBDEF558__CTOR_OFFSET UNITYSDK_OFFSET(0xFE5B350)
#define CLASS_4_B787A4C5DBDEF558__ONBIND_OFFSET UNITYSDK_OFFSET(0xFE5ACF0)
#define CLASS_4_B787A4C5DBDEF558___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xFE5B3C0)

inline static constexpr unsigned int Class_4_B787A4C5DBDEF558_TypeDefinitionIndex = 65998;

class Class_4_B787A4C5DBDEF558 : public ::Class_3_06E3452A211FC6E5
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	// static const ::System::String* Field_4_6; // 0x0
	// static const ::System::String* Field_4_7; // 0x0
	// static const ::System::String* Field_4_8; // 0x0
	::UnityEngine::Transform* Field_4_4; // 0x150
	::UnityEngine::Transform* Field_4_3; // 0x158
	::UnityEngine::Transform* Field_4_5; // 0x160
	::Class_2_63D30683C5188FC7* Field_4_1; // 0x168
	::System::Int32 Field_4_11; // 0x170
	::System::Int32 Field_4_10; // 0x174
	::Class_4_B787A4C5DBDEF558_BossDotStyle Field_4_2; // 0x178
	::System::Int32 Field_4_9; // 0x17C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B787A4C5DBDEF558__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B787A4C5DBDEF558__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_368884BBCA3D2697(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_4_B787A4C5DBDEF558_METHOD_4_368884BBCA3D2697_OFFSET))(this, a1);
	}

	::System::Void Method_4_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B787A4C5DBDEF558_METHOD_4_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_4_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B787A4C5DBDEF558_METHOD_4_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_4_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B787A4C5DBDEF558_METHOD_4_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B787A4C5DBDEF558_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_4_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B787A4C5DBDEF558_METHOD_4_078D85152011B919_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B787A4C5DBDEF558___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_96D822BD6D0F6379(::Class_1_70697F531F566942_2* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_4_B787A4C5DBDEF558_METHOD_4_96D822BD6D0F6379_OFFSET))(this, P0);
	}
};
