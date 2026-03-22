#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"

namespace RPG::Client { class FlowLayoutGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_C808652B069C1496_METHOD_1_05B00B3640B6EF22_OFFSET UNITYSDK_OFFSET(0xD238F20)
#define CLASS_1_C808652B069C1496_METHOD_1_5203AD37BF8E7CD7_OFFSET UNITYSDK_OFFSET(0xD238F40)
#define CLASS_1_C808652B069C1496_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xD238ED0)
#define CLASS_1_C808652B069C1496_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD238EC0)
#define CLASS_1_C808652B069C1496_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0xD238F00)
#define CLASS_1_C808652B069C1496_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xD238EE0)
#define CLASS_1_C808652B069C1496__CTOR_OFFSET UNITYSDK_OFFSET(0xD238EA0)

inline static constexpr unsigned int Class_1_C808652B069C1496_TypeDefinitionIndex = 57934;

class Class_1_C808652B069C1496 : public ::System::Object
{
public:
	::RPG::Client::FlowLayoutGroup* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::FlowLayoutGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FlowLayoutGroup*))((::PBYTE)hIl2Cpp + CLASS_1_C808652B069C1496__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C808652B069C1496_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C808652B069C1496_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C808652B069C1496_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C808652B069C1496_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* Method_1_05B00B3640B6EF22()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C808652B069C1496_METHOD_1_05B00B3640B6EF22_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* Method_1_5203AD37BF8E7CD7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C808652B069C1496_METHOD_1_5203AD37BF8E7CD7_OFFSET))(this);
	}
};
