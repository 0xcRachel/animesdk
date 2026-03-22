#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_DeformModuleCustomData_IRI_DataPerObject.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Transform; }

#define IRI_DEFORMMODULECUSTOMDATA_COLLECTOBJECT_OFFSET UNITYSDK_OFFSET(0x10ADAEC0)
#define IRI_DEFORMMODULECUSTOMDATA_ENCODEDATA_OFFSET UNITYSDK_OFFSET(0x10ADC240)
#define IRI_DEFORMMODULECUSTOMDATA_GETELEMENTMATRIXLIST_OFFSET UNITYSDK_OFFSET(0x10ADBD60)
#define IRI_DEFORMMODULECUSTOMDATA_GET_MPB_OFFSET UNITYSDK_OFFSET(0x10ADAE40)
#define IRI_DEFORMMODULECUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10ADBD10)
#define IRI_DEFORMMODULECUSTOMDATA_RESETDATA_OFFSET UNITYSDK_OFFSET(0x10ADB4C0)
#define IRI_DEFORMMODULECUSTOMDATA_SET_MPB_OFFSET UNITYSDK_OFFSET(0x10ADAEB0)
#define IRI_DEFORMMODULECUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10ADC3F0)

inline static constexpr unsigned int IRI_DeformModuleCustomData_TypeDefinitionIndex = 37122;

class IRI_DeformModuleCustomData : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::IRI_DeformModuleCustomData_IRI_DataPerObject>* ModuleObjDatas; // 0x18
	::UnityEngine::MaterialPropertyBlock* Field_5_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA__CTOR_OFFSET))(this);
	}

	::UnityEngine::MaterialPropertyBlock* get_Mpb()
	{
		return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_GET_MPB_OFFSET))(this);
	}

	::System::Void set_Mpb(::UnityEngine::MaterialPropertyBlock* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_SET_MPB_OFFSET))(this, a1);
	}

	::System::Void CollectObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_COLLECTOBJECT_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_ONENABLE_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Matrix4x4>* GetElementMatrixList(::UnityEngine::Transform* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_GETELEMENTMATRIXLIST_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 EncodeData(::IRI_DeformModuleCustomData_IRI_DataPerObject a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::IRI_DeformModuleCustomData_IRI_DataPerObject))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_ENCODEDATA_OFFSET))(this, a1);
	}

	::System::Void ResetData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_RESETDATA_OFFSET))(this);
	}
};
