#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA_METHOD_4_A8D19485AA054B2A_OFFSET UNITYSDK_OFFSET(0x10383600)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA_METHOD_4_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x103836E0)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x103836C0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutPrefabPropertyData_TypeDefinitionIndex = 40061;

	class LayoutPrefabPropertyData : public ::EnviromentSystemV2Space::LayoutPropertyData_1<::System::String*>
	{
	public:
		::System::String* AssemblyQualifiedName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_A8D19485AA054B2A()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA_METHOD_4_A8D19485AA054B2A_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_F8B73ECE7F883AC1()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA_METHOD_4_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}
