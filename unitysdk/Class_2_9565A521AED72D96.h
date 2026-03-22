#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6E5873B83DCA1F72.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D3F97394EEAB34D6;
class Class_1_DD2706738F86C698;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9565A521AED72D96_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB2EB320)
#define CLASS_2_9565A521AED72D96_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB2EC050)
#define CLASS_2_9565A521AED72D96_METHOD_2_7CF66B8F751979BF_OFFSET UNITYSDK_OFFSET(0xB2EB3E0)
#define CLASS_2_9565A521AED72D96_METHOD_2_DA4377709D1B2DE3_OFFSET UNITYSDK_OFFSET(0xB2EB090)
#define CLASS_2_9565A521AED72D96_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0xB2EBFE0)
#define CLASS_2_9565A521AED72D96_METHOD_2_FCDA6C73F74BD98C_OFFSET UNITYSDK_OFFSET(0xB2EBDA0)
#define CLASS_2_9565A521AED72D96__CTOR_OFFSET UNITYSDK_OFFSET(0xB2EBFC0)

inline static constexpr unsigned int Class_2_9565A521AED72D96_TypeDefinitionIndex = 60727;

class Class_2_9565A521AED72D96 : public ::Class_1_6E5873B83DCA1F72
{
public:
	::System::Single Field_2_0; // 0x18
	::System::Single Field_2_2; // 0x1C
	::System::Single Field_2_4; // 0x20
	::System::Single Field_2_1; // 0x24
	::System::Single Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9565A521AED72D96__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DA4377709D1B2DE3(::Class_1_DD2706738F86C698* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD2706738F86C698*))((::PBYTE)hIl2Cpp + CLASS_2_9565A521AED72D96_METHOD_2_DA4377709D1B2DE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9565A521AED72D96_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_2_7CF66B8F751979BF(::Class_1_D3F97394EEAB34D6*& a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* a3, ::UnityEngine::RaycastHit& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D3F97394EEAB34D6*&, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*, ::UnityEngine::RaycastHit&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_9565A521AED72D96_METHOD_2_7CF66B8F751979BF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_FCDA6C73F74BD98C(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_9565A521AED72D96_METHOD_2_FCDA6C73F74BD98C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_DD2706738F86C698* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD2706738F86C698*))((::PBYTE)hIl2Cpp + CLASS_2_9565A521AED72D96_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9565A521AED72D96_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
