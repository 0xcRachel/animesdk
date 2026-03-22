#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_285C0F86751F7560_4;
class Class_1_43BD383C98B4C0C5_135;
class Class_1_6E708EAB438EC183_29;
class Class_1_C3C5C0E033C47270_8;
class Class_2_C7FD1C569151CC59;
class Class_2_E8071608D176AB59;
class Class_2_ED573AF94AF1D36B;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENT_CLEANUP_OFFSET UNITYSDK_OFFSET(0x931B3D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x931B0E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0x931BE60)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETNOUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0x931CD70)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0x931CB80)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CHAPTERLIMITLIST_OFFSET UNITYSDK_OFFSET(0x931B860)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x931BE40)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x931B960)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESC_OFFSET UNITYSDK_OFFSET(0x931B510)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0x931BB10)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x931B9C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x931B4A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x931BD50)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0x931B480)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0x931BAC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x931B9F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x931B4D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NOUNDERLINEDESC_OFFSET UNITYSDK_OFFSET(0x931B790)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x931B990)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0x931BA20)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0x931BA70)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REMARK_OFFSET UNITYSDK_OFFSET(0x931B5E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET__REMARK_OFFSET UNITYSDK_OFFSET(0x931BD80)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x931BE50)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0x931B490)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x931B410)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_WITHCONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x931B280)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_WITHEMPTYVARIABLEPROVIDER_OFFSET UNITYSDK_OFFSET(0x931B2D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x931CF60)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x931B320)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x931B1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugment_TypeDefinitionIndex = 51144;

	class GridFightAugment : public ::System::Object
	{
	public:
		static ::Class_2_ED573AF94AF1D36B** StaticGet__EquipCompiler()
		{
			return (::Class_2_ED573AF94AF1D36B**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment_TypeDefinitionIndex)->GetStaticField(0x43DF0);
		}
		static ::Class_2_C7FD1C569151CC59** StaticGet__DescCompiler()
		{
			return (::Class_2_C7FD1C569151CC59**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment_TypeDefinitionIndex)->GetStaticField(0x43DF8);
		}
		::Class_1_6E708EAB438EC183_29* _ContextData_k__BackingField; // 0x10
		::Class_2_E8071608D176AB59* _VariableCompiler; // 0x18
		::RPG::Client::GridFightAugmentConfig* _Config; // 0x20
		::System::Boolean _IsExtra_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 augmentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_OFFSET))(this, augmentID);
		}

		::System::Void _ctor_1(::Class_1_285C0F86751F7560_4* augment)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_285C0F86751F7560_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_1_OFFSET))(this, augment);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightAugment* Create(::System::UInt32 augmentID)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_CREATE_OFFSET))(augmentID);
		}

		::System::Void WithContextData(::Class_1_6E708EAB438EC183_29* contextData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_WITHCONTEXTDATA_OFFSET))(this, contextData);
		}

		::System::Void WithEmptyVariableProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_WITHEMPTYVARIABLEPROVIDER_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_CLEANUP_OFFSET))(this);
		}

		::System::Void Update(::Class_1_C3C5C0E033C47270_8* updateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_UPDATE_OFFSET))(this, updateInfo);
		}

		::System::Boolean get_IsExtra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXTRA_OFFSET))(this);
		}

		::System::Void set_IsExtra(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISEXTRA_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESC_OFFSET))(this);
		}

		::System::String* get_NoUnderLineDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NOUNDERLINEDESC_OFFSET))(this);
		}

		::System::String* get_Remark()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REMARK_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ChapterLimitList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CHAPTERLIMITLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESCPARAMLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightAugmentQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_QUALITY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_MINIICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitScore()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Boolean get_HasDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_HASDETAIL_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXPIRED_OFFSET))(this);
		}

		::RPG::Client::TextID get__Remark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET__REMARK_OFFSET))(this);
		}

		::Class_1_6E708EAB438EC183_29* get_ContextData()
		{
			return ((::Class_1_6E708EAB438EC183_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Void set_ContextData(::Class_1_6E708EAB438EC183_29* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_SET_CONTEXTDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObject()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETDESCDETAILOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_135*>* GetUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_135*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_135*>* GetNoUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_135*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETNOUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}
	};
}
