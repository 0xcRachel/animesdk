#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"
#include "unitysdk/SRF/SRMonoBehaviourEx_FieldInfo.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRF_SRMONOBEHAVIOUREX_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A318690)
#define SRF_SRMONOBEHAVIOUREX_CHECKFIELDS_OFFSET UNITYSDK_OFFSET(0x1A317910)
#define SRF_SRMONOBEHAVIOUREX_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1A3186C0)
#define SRF_SRMONOBEHAVIOUREX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A3186F0)
#define SRF_SRMONOBEHAVIOUREX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A3186E0)
#define SRF_SRMONOBEHAVIOUREX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A3186D0)
#define SRF_SRMONOBEHAVIOUREX_POPULATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A317D70)
#define SRF_SRMONOBEHAVIOUREX_SCANTYPE_OFFSET UNITYSDK_OFFSET(0x1A317AF0)
#define SRF_SRMONOBEHAVIOUREX_START_OFFSET UNITYSDK_OFFSET(0x1A3186A0)
#define SRF_SRMONOBEHAVIOUREX_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A3186B0)
#define SRF_SRMONOBEHAVIOUREX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A318700)

namespace SRF
{
	inline static constexpr unsigned int SRMonoBehaviourEx_TypeDefinitionIndex = 33275;

	class SRMonoBehaviourEx : public ::SRF::SRMonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::IList_1<::SRF::SRMonoBehaviourEx_FieldInfo>*>** StaticGet__checkedFields()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::IList_1<::SRF::SRMonoBehaviourEx_FieldInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(SRMonoBehaviourEx_TypeDefinitionIndex)->GetStaticField(0x4F790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX__CTOR_OFFSET))(this);
		}

		static ::System::Void CheckFields(::SRF::SRMonoBehaviourEx* instance, ::System::Boolean justSet)
		{
			return ((::System::Void(*)(::SRF::SRMonoBehaviourEx*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX_CHECKFIELDS_OFFSET))(instance, justSet);
		}

		static ::System::Void PopulateObject(::System::Collections::Generic::IList_1<::SRF::SRMonoBehaviourEx_FieldInfo>* cache, ::SRF::SRMonoBehaviourEx* instance, ::System::Boolean justSet)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::SRF::SRMonoBehaviourEx_FieldInfo>*, ::SRF::SRMonoBehaviourEx*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX_POPULATEOBJECT_OFFSET))(cache, instance, justSet);
		}

		static ::System::Collections::Generic::List_1<::SRF::SRMonoBehaviourEx_FieldInfo>* ScanType(::System::Type* t)
		{
			return ((::System::Collections::Generic::List_1<::SRF::SRMonoBehaviourEx_FieldInfo>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX_SCANTYPE_OFFSET))(t);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUREX_ONDESTROY_OFFSET))(this);
		}
	};
}
