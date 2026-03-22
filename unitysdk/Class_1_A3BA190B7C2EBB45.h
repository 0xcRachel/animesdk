#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_44260D773CA584CC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C84A84118567060F;
class Class_1_D8BF25BB97CB2B9D;
namespace RPGTools::Octree::Generation { class OctreeAreaData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_A3BA190B7C2EBB45_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110A8EC0)
#define CLASS_1_A3BA190B7C2EBB45_METHOD_1_5115819E22315537_OFFSET UNITYSDK_OFFSET(0x110A92F0)
#define CLASS_1_A3BA190B7C2EBB45_METHOD_1_903A8CA38EB171DB_OFFSET UNITYSDK_OFFSET(0x110A8F70)
#define CLASS_1_A3BA190B7C2EBB45_METHOD_1_C1FE64DAEC64B939_OFFSET UNITYSDK_OFFSET(0x110A9430)
#define CLASS_1_A3BA190B7C2EBB45_METHOD_1_FEA2223BFAF77F8B_OFFSET UNITYSDK_OFFSET(0x110A9110)
#define CLASS_1_A3BA190B7C2EBB45__CTOR_OFFSET UNITYSDK_OFFSET(0x110A8D60)

inline static constexpr unsigned int Class_1_A3BA190B7C2EBB45_TypeDefinitionIndex = 38644;

class Class_1_A3BA190B7C2EBB45 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_D8BF25BB97CB2B9D*>* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_C84A84118567060F* a1, ::Il2CppArray<::RPGTools::Octree::Generation::OctreeAreaData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C84A84118567060F*, ::Il2CppArray<::RPGTools::Octree::Generation::OctreeAreaData*>*))((::PBYTE)hIl2Cpp + CLASS_1_A3BA190B7C2EBB45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3BA190B7C2EBB45_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_903A8CA38EB171DB(::Struct_2_44260D773CA584CC a1, ::Struct_2_44260D773CA584CC a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_44260D773CA584CC, ::Struct_2_44260D773CA584CC, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_A3BA190B7C2EBB45_METHOD_1_903A8CA38EB171DB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_FEA2223BFAF77F8B(::Struct_2_44260D773CA584CC a1, ::Struct_2_44260D773CA584CC a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_44260D773CA584CC, ::Struct_2_44260D773CA584CC, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A3BA190B7C2EBB45_METHOD_1_FEA2223BFAF77F8B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5115819E22315537(::Struct_2_44260D773CA584CC a1, ::Struct_2_44260D773CA584CC a2, ::Struct_2_44260D773CA584CC a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_44260D773CA584CC, ::Struct_2_44260D773CA584CC, ::Struct_2_44260D773CA584CC))((::PBYTE)hIl2Cpp + CLASS_1_A3BA190B7C2EBB45_METHOD_1_5115819E22315537_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_44260D773CA584CC>* Method_1_C1FE64DAEC64B939(::Struct_2_44260D773CA584CC a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_44260D773CA584CC>*(*)(::PVOID, ::Struct_2_44260D773CA584CC))((::PBYTE)hIl2Cpp + CLASS_1_A3BA190B7C2EBB45_METHOD_1_C1FE64DAEC64B939_OFFSET))(this, a1);
	}
};
