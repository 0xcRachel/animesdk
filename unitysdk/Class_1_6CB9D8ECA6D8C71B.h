#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/Struct_2_AEFDCF1C254BBD23.h"
#include "unitysdk/System/Object.h"

class Class_1_7DF92D9E0DFFA094;
class Class_1_C50814066AD5D308;
namespace System { class String; }

#define CLASS_1_6CB9D8ECA6D8C71B_METHOD_1_C5454162D32F8F7F_OFFSET UNITYSDK_OFFSET(0x149A15C0)
#define CLASS_1_6CB9D8ECA6D8C71B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x149A1570)
#define CLASS_1_6CB9D8ECA6D8C71B__CTOR_OFFSET UNITYSDK_OFFSET(0x149A1560)
#define CLASS_1_6CB9D8ECA6D8C71B__GETPARAMETER_B__2_0_OFFSET UNITYSDK_OFFSET(0x149A1A40)
#define CLASS_1_6CB9D8ECA6D8C71B___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x149A1A70)

inline static constexpr unsigned int Class_1_6CB9D8ECA6D8C71B_TypeDefinitionIndex = 59826;

class Class_1_6CB9D8ECA6D8C71B : public ::System::Object
{
public:
	::Class_1_7DF92D9E0DFFA094* Field_1_0; // 0x10
	::Struct_2_AEFDCF1C254BBD23 Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_7DF92D9E0DFFA094* a1, ::Struct_2_AEFDCF1C254BBD23 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7DF92D9E0DFFA094*, ::Struct_2_AEFDCF1C254BBD23))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B_TOSTRING_OFFSET))(this);
	}

	::System::Double Method_1_C5454162D32F8F7F(::RPG::GameCore::FateContentParamType a1)
	{
		return ((::System::Double(*)(::PVOID, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B_METHOD_1_C5454162D32F8F7F_OFFSET))(this, a1);
	}

	::System::Boolean _GetParameter_b__2_0(::Class_1_C50814066AD5D308* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C50814066AD5D308*))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B__GETPARAMETER_B__2_0_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
