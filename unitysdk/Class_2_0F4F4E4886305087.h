#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_068EAC6B51178745;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0F4F4E4886305087_INIT_OFFSET UNITYSDK_OFFSET(0x852CC40)
#define CLASS_2_0F4F4E4886305087_METHOD_2_04F62B6B0A089BBA_OFFSET UNITYSDK_OFFSET(0x852EC00)
#define CLASS_2_0F4F4E4886305087_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x852E6D0)
#define CLASS_2_0F4F4E4886305087_METHOD_2_363E7CD5A0A216FD_1_OFFSET UNITYSDK_OFFSET(0x852E990)
#define CLASS_2_0F4F4E4886305087_METHOD_2_363E7CD5A0A216FD_OFFSET UNITYSDK_OFFSET(0x852E650)
#define CLASS_2_0F4F4E4886305087_METHOD_2_3A5763B1D5BC86EE_OFFSET UNITYSDK_OFFSET(0x852ECD0)
#define CLASS_2_0F4F4E4886305087_METHOD_2_5CDBA3B04DB53D1D_OFFSET UNITYSDK_OFFSET(0x852EA10)
#define CLASS_2_0F4F4E4886305087_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x852E3A0)
#define CLASS_2_0F4F4E4886305087_METHOD_2_6DAFCD78BEC152AC_OFFSET UNITYSDK_OFFSET(0x852DC40)
#define CLASS_2_0F4F4E4886305087_METHOD_2_8C93A5E6B8DD76D0_OFFSET UNITYSDK_OFFSET(0x852E4C0)
#define CLASS_2_0F4F4E4886305087_METHOD_2_AE5D2F3CFBE15D74_OFFSET UNITYSDK_OFFSET(0x852DF40)
#define CLASS_2_0F4F4E4886305087_METHOD_2_B160F9645705E0E4_OFFSET UNITYSDK_OFFSET(0x852E470)
#define CLASS_2_0F4F4E4886305087_METHOD_2_D9E34E162363C06E_OFFSET UNITYSDK_OFFSET(0x852D0E0)
#define CLASS_2_0F4F4E4886305087_METHOD_2_DE93D76325285526_OFFSET UNITYSDK_OFFSET(0x852EB90)
#define CLASS_2_0F4F4E4886305087_METHOD_2_E39AEB20C81D0A64_OFFSET UNITYSDK_OFFSET(0x852DD00)
#define CLASS_2_0F4F4E4886305087_METHOD_2_E658A310A9CE19AC_OFFSET UNITYSDK_OFFSET(0x852DA00)
#define CLASS_2_0F4F4E4886305087__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x852D8C0)
#define CLASS_2_0F4F4E4886305087__CTOR_OFFSET UNITYSDK_OFFSET(0x852ED20)
#define CLASS_2_0F4F4E4886305087___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x852ED50)
#define CLASS_2_0F4F4E4886305087___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x852EDE0)
#define CLASS_2_0F4F4E4886305087___ONADVENTUREPHASEENTERED_B__7_0_OFFSET UNITYSDK_OFFSET(0x852ED40)

inline static constexpr unsigned int Class_2_0F4F4E4886305087_TypeDefinitionIndex = 52290;

class Class_2_0F4F4E4886305087 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_5; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_068EAC6B51178745*>* Field_2_0; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_4; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_3; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleTask*>* Field_2_2; // 0x30
	::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleTask*>* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_INIT_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_E658A310A9CE19AC(::Class_1_068EAC6B51178745* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_068EAC6B51178745*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_E658A310A9CE19AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_AE5D2F3CFBE15D74_OFFSET))(this);
	}

	::System::Void Method_2_D9E34E162363C06E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_D9E34E162363C06E_OFFSET))(this);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_2_B160F9645705E0E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_B160F9645705E0E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C93A5E6B8DD76D0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_8C93A5E6B8DD76D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_363E7CD5A0A216FD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_363E7CD5A0A216FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_363E7CD5A0A216FD_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_363E7CD5A0A216FD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CDBA3B04DB53D1D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_5CDBA3B04DB53D1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_2_6DAFCD78BEC152AC(::RPG::GameCore::ConditionParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_6DAFCD78BEC152AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E39AEB20C81D0A64(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_E39AEB20C81D0A64_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A5763B1D5BC86EE(::RPG::Client::ScheduleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_3A5763B1D5BC86EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DE93D76325285526(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_DE93D76325285526_OFFSET))(this, a1);
	}

	::System::Void Method_2_04F62B6B0A089BBA(::Class_1_068EAC6B51178745* a1, ::System::Boolean a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_068EAC6B51178745*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_04F62B6B0A089BBA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __OnAdventurePhaseEntered_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087___ONADVENTUREPHASEENTERED_B__7_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};
