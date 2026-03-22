#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_A1F2D7D9DD4AE626;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_A891B1E56B424A23_METHOD_2_064B58FA19436120_1_OFFSET UNITYSDK_OFFSET(0xA487B40)
#define CLASS_2_A891B1E56B424A23_METHOD_2_064B58FA19436120_OFFSET UNITYSDK_OFFSET(0xA487AD0)
#define CLASS_2_A891B1E56B424A23_METHOD_2_1A5AAB71C5435945_OFFSET UNITYSDK_OFFSET(0xA487C60)
#define CLASS_2_A891B1E56B424A23_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xA487D40)
#define CLASS_2_A891B1E56B424A23_METHOD_2_AA94D17017C8E64E_OFFSET UNITYSDK_OFFSET(0xA487900)
#define CLASS_2_A891B1E56B424A23_METHOD_2_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0xA487BB0)
#define CLASS_2_A891B1E56B424A23_METHOD_2_B10FB9597F17FCB4_OFFSET UNITYSDK_OFFSET(0xA487A30)
#define CLASS_2_A891B1E56B424A23_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xA487460)
#define CLASS_2_A891B1E56B424A23_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA488040)
#define CLASS_2_A891B1E56B424A23__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4878A0)
#define CLASS_2_A891B1E56B424A23__CTOR_OFFSET UNITYSDK_OFFSET(0xA487040)
#define CLASS_2_A891B1E56B424A23__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA487140)
#define CLASS_2_A891B1E56B424A23__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA487520)
#define CLASS_2_A891B1E56B424A23__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA4874E0)
#define CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA488430)
#define CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA488310)
#define CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA4883D0)
#define CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA488370)
#define CLASS_2_A891B1E56B424A23___SETUPVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0xA488090)
#define CLASS_2_A891B1E56B424A23___SETUPVIEW_B__3_1_OFFSET UNITYSDK_OFFSET(0xA488200)

inline static constexpr unsigned int Class_2_A891B1E56B424A23_TypeDefinitionIndex = 58119;

class Class_2_A891B1E56B424A23 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Int64 Field_2_7 = 0x40000000; // 0x0
	::System::Action_1<::System::Boolean>* Field_2_0; // 0x180
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_6; // 0x188
	::System::Int64 Field_2_4; // 0x190
	::System::Boolean Field_2_3; // 0x198
	::System::Boolean Field_2_1; // 0x199
	::System::Boolean Field_2_2; // 0x19A
	::System::Int64 Field_2_5; // 0x1A0

	::System::Void _ctor(::System::Action_1<::System::Boolean>* a1, ::System::Boolean a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_AA94D17017C8E64E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_AA94D17017C8E64E_OFFSET))(this, a1);
	}

	::System::Void Method_2_064B58FA19436120(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_064B58FA19436120_OFFSET))(this, a1);
	}

	::System::Void Method_2_064B58FA19436120_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_064B58FA19436120_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::System::Void Method_2_1A5AAB71C5435945(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_1A5AAB71C5435945_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_B10FB9597F17FCB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_B10FB9597F17FCB4_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_A1F2D7D9DD4AE626* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_A1F2D7D9DD4AE626*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::Void __SetupView_b__3_0(::System::Int64 size, ::System::Int64 fullSize)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___SETUPVIEW_B__3_0_OFFSET))(this, size, fullSize);
	}

	::System::Void __SetupView_b__3_1(::System::Int64 size)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___SETUPVIEW_B__3_1_OFFSET))(this, size);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
	}
};
