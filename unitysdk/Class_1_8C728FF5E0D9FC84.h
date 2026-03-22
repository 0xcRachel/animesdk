#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_277;
class Class_0_16E4307DCC419505_278;
class Class_0_16E4307DCC419505_282;
class Class_1_4DE3384CF7EA8A53;
class Class_1_EAF7984A8FAD6BE4;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_07CE13C6941AF1CF_OFFSET UNITYSDK_OFFSET(0x10E52000)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_0A7C75AE549C5CCF_1_OFFSET UNITYSDK_OFFSET(0x10E54D30)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x10E54BF0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_12010BB4800F9F92_OFFSET UNITYSDK_OFFSET(0x10E54010)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_134D308DDDCC3003_OFFSET UNITYSDK_OFFSET(0x10E543A0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_17B41218900E9A05_OFFSET UNITYSDK_OFFSET(0x10E51CF0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_28A359DB08C36581_OFFSET UNITYSDK_OFFSET(0x10E54210)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_2E8AFDFF20EB7DF5_OFFSET UNITYSDK_OFFSET(0x10E51810)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_35D84E600AE6FB97_OFFSET UNITYSDK_OFFSET(0x10E51B70)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_360213EA2B4175B6_OFFSET UNITYSDK_OFFSET(0x10E52F70)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_3BAEA7A94B1A21D3_OFFSET UNITYSDK_OFFSET(0x10E53EC0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_3F551CA7CE8CB48B_OFFSET UNITYSDK_OFFSET(0x10E53E10)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_40CD459D96B704A1_OFFSET UNITYSDK_OFFSET(0x10E539B0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_45C0BD758EB391BC_OFFSET UNITYSDK_OFFSET(0x10E51BF0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x10E527A0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x10E516A0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_53F0438BD1048D36_OFFSET UNITYSDK_OFFSET(0x10E544C0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_56055B445D3630C6_OFFSET UNITYSDK_OFFSET(0x10E522B0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_63998B7514B5A275_OFFSET UNITYSDK_OFFSET(0x10E54280)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_7206DC8F66A4D2A8_1_OFFSET UNITYSDK_OFFSET(0x10E54690)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x10E52E50)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_73C17FD8B89B0975_OFFSET UNITYSDK_OFFSET(0x10E51F50)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_794B53FABD38C524_OFFSET UNITYSDK_OFFSET(0x10E520C0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_802E508EA6009C44_OFFSET UNITYSDK_OFFSET(0x10E51AB0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_846C3A66AC33B6FF_OFFSET UNITYSDK_OFFSET(0x10E547B0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_87E1CEE6CE562ADD_OFFSET UNITYSDK_OFFSET(0x10E54570)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_A00616068AF572CA_OFFSET UNITYSDK_OFFSET(0x10E51EB0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_AD9D750B739330CF_OFFSET UNITYSDK_OFFSET(0x10E52310)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_B53040B37AF4CAE4_OFFSET UNITYSDK_OFFSET(0x10E52C10)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_BDB4BD2370155A5E_OFFSET UNITYSDK_OFFSET(0x10E516B0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_C1EE0262F237F698_OFFSET UNITYSDK_OFFSET(0x10E51990)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_C2CEDACCDD80D683_OFFSET UNITYSDK_OFFSET(0x10E51E00)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_C44DBCDFAB6498FA_OFFSET UNITYSDK_OFFSET(0x10E54B20)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_C6A2F37261C7C003_OFFSET UNITYSDK_OFFSET(0x10E548D0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_CC9C268258D04DF2_OFFSET UNITYSDK_OFFSET(0x10E51890)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x10E52A70)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_D2F9E5B042F099A5_OFFSET UNITYSDK_OFFSET(0x10E540B0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_ED4090BFCA4CD86E_OFFSET UNITYSDK_OFFSET(0x10E525D0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_EE988AE5F2F91238_OFFSET UNITYSDK_OFFSET(0x10E52440)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_F91F5D6F258F76DD_OFFSET UNITYSDK_OFFSET(0x10E53010)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0x10E54A30)
#define CLASS_1_8C728FF5E0D9FC84__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E550C0)
#define CLASS_1_8C728FF5E0D9FC84__CTOR_OFFSET UNITYSDK_OFFSET(0x10E54E90)

inline static constexpr unsigned int Class_1_8C728FF5E0D9FC84_TypeDefinitionIndex = 39151;

class Class_1_8C728FF5E0D9FC84 : public ::System::Object
{
public:
	static ::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_278*>** StaticGet_Field_1_5()
	{
		return (::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_278*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C728FF5E0D9FC84_TypeDefinitionIndex)->GetStaticField(0x2E080);
	}
	::System::Collections::Generic::List_1<::Class_1_4DE3384CF7EA8A53*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Field_1_4; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::EnviromentControlPriority>* Field_1_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Field_1_3; // 0x30
	::RPG::GameCore::EnviromentControlPriority Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_4DE3384CF7EA8A53*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4DE3384CF7EA8A53*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_1_BDB4BD2370155A5E(::System::Int32 a1, ::RPG::GameCore::EnviromentControlPriority a2, ::Class_1_EAF7984A8FAD6BE4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EnviromentControlPriority, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_BDB4BD2370155A5E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CC9C268258D04DF2(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_CC9C268258D04DF2_OFFSET))(this, a1, a2);
	}

	::Class_1_4DE3384CF7EA8A53* Method_1_2E8AFDFF20EB7DF5(::System::Int32 a1)
	{
		return ((::Class_1_4DE3384CF7EA8A53*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_2E8AFDFF20EB7DF5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C1EE0262F237F698(::System::Int32 a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_C1EE0262F237F698_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_802E508EA6009C44(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_802E508EA6009C44_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_45C0BD758EB391BC(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_45C0BD758EB391BC_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_17B41218900E9A05(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_17B41218900E9A05_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EnviromentControlPriority>* Method_1_C2CEDACCDD80D683()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EnviromentControlPriority>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_C2CEDACCDD80D683_OFFSET))(this);
	}

	::System::Void Method_1_A00616068AF572CA(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_A00616068AF572CA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_07CE13C6941AF1CF(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_07CE13C6941AF1CF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_794B53FABD38C524(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_794B53FABD38C524_OFFSET))(this, a1);
	}

	::RPG::GameCore::EnviromentControlPriority Method_1_35D84E600AE6FB97()
	{
		return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_35D84E600AE6FB97_OFFSET))(this);
	}

	::RPG::GameCore::EnviromentControlPriority Method_1_AD9D750B739330CF()
	{
		return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_AD9D750B739330CF_OFFSET))(this);
	}

	::System::Void Method_1_EE988AE5F2F91238(::RPG::GameCore::EnviromentControlPriority a1, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_EE988AE5F2F91238_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ED4090BFCA4CD86E(::RPG::GameCore::EnviromentControlPriority a1, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_ED4090BFCA4CD86E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_56055B445D3630C6(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_56055B445D3630C6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_73C17FD8B89B0975(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_73C17FD8B89B0975_OFFSET))(this, a1);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_B53040B37AF4CAE4(::RPG::GameCore::EnviromentControlPriority a1, ::EnviromentSystemV2Space::OutputType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::EnviromentSystemV2Space::OutputType))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_B53040B37AF4CAE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_277* Method_1_360213EA2B4175B6(::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::Class_0_16E4307DCC419505_282* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5)
	{
		return ((::Class_0_16E4307DCC419505_277*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*, ::RPG::GameCore::EnviromentControlPriority, ::Class_0_16E4307DCC419505_282*, ::EnviromentSystemV2Space::OutputType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_360213EA2B4175B6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_277* Method_1_3F551CA7CE8CB48B(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_282* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Boolean a5, ::System::Action* a6)
	{
		return ((::Class_0_16E4307DCC419505_277*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean, ::Class_0_16E4307DCC419505_282*, ::EnviromentSystemV2Space::OutputType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_3F551CA7CE8CB48B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_F91F5D6F258F76DD(::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_F91F5D6F258F76DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3BAEA7A94B1A21D3(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_3BAEA7A94B1A21D3_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_12010BB4800F9F92(::System::Int64 a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_278* a3)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_278*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_12010BB4800F9F92_OFFSET))(a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_277* Method_1_40CD459D96B704A1(::Class_0_16E4307DCC419505_282* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::Class_0_16E4307DCC419505_277*(*)(::PVOID, ::Class_0_16E4307DCC419505_282*, ::EnviromentSystemV2Space::OutputType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_40CD459D96B704A1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D2F9E5B042F099A5(::Class_1_EAF7984A8FAD6BE4* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_D2F9E5B042F099A5_OFFSET))(this, a1, a2);
	}

	::Class_1_EAF7984A8FAD6BE4* Method_1_28A359DB08C36581(::System::Int32 a1)
	{
		return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_28A359DB08C36581_OFFSET))(this, a1);
	}

	::System::Void Method_1_134D308DDDCC3003(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_134D308DDDCC3003_OFFSET))(this, a1, a2);
	}

	static ::Class_1_EAF7984A8FAD6BE4* Method_1_63998B7514B5A275(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::Class_1_EAF7984A8FAD6BE4*(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_63998B7514B5A275_OFFSET))(a1, a2);
	}

	::System::Void Method_1_53F0438BD1048D36(::Class_1_EAF7984A8FAD6BE4* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_53F0438BD1048D36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_87E1CEE6CE562ADD(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_87E1CEE6CE562ADD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7206DC8F66A4D2A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_7206DC8F66A4D2A8_1_OFFSET))(this);
	}

	::System::Void Method_1_846C3A66AC33B6FF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_846C3A66AC33B6FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6A2F37261C7C003()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_C6A2F37261C7C003_OFFSET))(this);
	}

	::System::Void Method_1_FD1A8012013ED9C5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_FD1A8012013ED9C5_OFFSET))(this, a1);
	}

	::EnviromentSystemV2Space::PropertyType Method_1_C44DBCDFAB6498FA(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::EnviromentSystemV2Space::PropertyType(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_C44DBCDFAB6498FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_1_0A7C75AE549C5CCF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_0A7C75AE549C5CCF_1_OFFSET))(this);
	}
};
