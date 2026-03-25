#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class DirectoryInfo; }
namespace System::IO { class FileInfo; }
namespace System::IO { class FileStream; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_3CE802D288741D2D_METHOD_1_00AA18458D984D9B_OFFSET UNITYSDK_OFFSET(0x1833E8A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_03736422B1E836C8_OFFSET UNITYSDK_OFFSET(0x1833D850)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0407806F100D9D14_1_OFFSET UNITYSDK_OFFSET(0x183374C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0407806F100D9D14_OFFSET UNITYSDK_OFFSET(0x18332D50)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0844BF824CA685A7_OFFSET UNITYSDK_OFFSET(0x183341C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0BD8EBDA38930A84_OFFSET UNITYSDK_OFFSET(0x1833C0D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0CB5CAE55E9B0B9E_OFFSET UNITYSDK_OFFSET(0x1833E330)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0CC096BD7930BC31_OFFSET UNITYSDK_OFFSET(0x18336860)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1045B7FFF846D4FF_OFFSET UNITYSDK_OFFSET(0x18335150)
#define CLASS_1_3CE802D288741D2D_METHOD_1_11B8E01605498CF4_OFFSET UNITYSDK_OFFSET(0x18330A80)
#define CLASS_1_3CE802D288741D2D_METHOD_1_12635A3CAA51684C_OFFSET UNITYSDK_OFFSET(0x1833C130)
#define CLASS_1_3CE802D288741D2D_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1833C550)
#define CLASS_1_3CE802D288741D2D_METHOD_1_130A6949BCD5A119_OFFSET UNITYSDK_OFFSET(0x18330B60)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1325B9879381C3A3_1_OFFSET UNITYSDK_OFFSET(0x1832F120)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1325B9879381C3A3_OFFSET UNITYSDK_OFFSET(0x18334C30)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1457A99C460B4D82_OFFSET UNITYSDK_OFFSET(0x18334DE0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_16AAC9F8CAA68378_1_OFFSET UNITYSDK_OFFSET(0x1833DD40)
#define CLASS_1_3CE802D288741D2D_METHOD_1_16AAC9F8CAA68378_OFFSET UNITYSDK_OFFSET(0x1833DC40)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1A2740E2FE318634_OFFSET UNITYSDK_OFFSET(0x1833EA50)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1A503627688AE58E_OFFSET UNITYSDK_OFFSET(0x18336C40)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_1_OFFSET UNITYSDK_OFFSET(0x1833C9E0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_2_OFFSET UNITYSDK_OFFSET(0x1833CBA0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_OFFSET UNITYSDK_OFFSET(0x1833C560)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1F9CEC2E7FFF0A01_OFFSET UNITYSDK_OFFSET(0x1833B8F0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_21B006A3E14F3379_OFFSET UNITYSDK_OFFSET(0x1833D380)
#define CLASS_1_3CE802D288741D2D_METHOD_1_24B39354D1FCD13B_OFFSET UNITYSDK_OFFSET(0x1833B090)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2B33C5147D6EE554_OFFSET UNITYSDK_OFFSET(0x183351C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2E75F4263BAA93E8_OFFSET UNITYSDK_OFFSET(0x1833B7A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2F1937EBD1CFF8C5_OFFSET UNITYSDK_OFFSET(0x18331C90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2F996FD8685BA4BF_OFFSET UNITYSDK_OFFSET(0x1833CD20)
#define CLASS_1_3CE802D288741D2D_METHOD_1_30424022465411BE_OFFSET UNITYSDK_OFFSET(0x1833E9A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_304BCBB3B5923DF4_OFFSET UNITYSDK_OFFSET(0x18339C10)
#define CLASS_1_3CE802D288741D2D_METHOD_1_31329007E4494D37_OFFSET UNITYSDK_OFFSET(0x1833DF80)
#define CLASS_1_3CE802D288741D2D_METHOD_1_31CCAFA024D09758_OFFSET UNITYSDK_OFFSET(0x18331DE0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_31E1F560B3956813_OFFSET UNITYSDK_OFFSET(0x18339AB0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_33F47CD1F2D90021_OFFSET UNITYSDK_OFFSET(0x18332D10)
#define CLASS_1_3CE802D288741D2D_METHOD_1_36E341618C6A080A_OFFSET UNITYSDK_OFFSET(0x1833D6E0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_3CA7B2FAF593D87E_OFFSET UNITYSDK_OFFSET(0x18335E40)
#define CLASS_1_3CE802D288741D2D_METHOD_1_42BEBC15DF245DB6_OFFSET UNITYSDK_OFFSET(0x18339670)
#define CLASS_1_3CE802D288741D2D_METHOD_1_51CB85426198DB47_OFFSET UNITYSDK_OFFSET(0x1833B9E0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_563F6A002CE501F1_OFFSET UNITYSDK_OFFSET(0x1833CEB0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_56D1CCAABE4BE5F2_OFFSET UNITYSDK_OFFSET(0x18336410)
#define CLASS_1_3CE802D288741D2D_METHOD_1_5E34F80B92F33FB3_OFFSET UNITYSDK_OFFSET(0x18334300)
#define CLASS_1_3CE802D288741D2D_METHOD_1_694763B6CFD24505_OFFSET UNITYSDK_OFFSET(0x18335EC0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_695D23C4F5ED0DB2_OFFSET UNITYSDK_OFFSET(0x1833DE40)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6AFDC50424099C5A_1_OFFSET UNITYSDK_OFFSET(0x183351E0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6AFDC50424099C5A_OFFSET UNITYSDK_OFFSET(0x18330A50)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6B9DA53DDDC0D8BD_OFFSET UNITYSDK_OFFSET(0x18339A00)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6E1DD35AC740F721_OFFSET UNITYSDK_OFFSET(0x1833C390)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6F1B0A02FDC49991_OFFSET UNITYSDK_OFFSET(0x1833E890)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7079FDFF6481F7C6_OFFSET UNITYSDK_OFFSET(0x18335450)
#define CLASS_1_3CE802D288741D2D_METHOD_1_74EAC4DD197DEA6A_OFFSET UNITYSDK_OFFSET(0x183364A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x1833C710)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_2_OFFSET UNITYSDK_OFFSET(0x1833C800)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1833C5F0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_814BFAD6D303499E_OFFSET UNITYSDK_OFFSET(0x18334860)
#define CLASS_1_3CE802D288741D2D_METHOD_1_84E93399AE94C2FD_OFFSET UNITYSDK_OFFSET(0x18330C60)
#define CLASS_1_3CE802D288741D2D_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1833B5D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8913E26713F9F05C_OFFSET UNITYSDK_OFFSET(0x1833B800)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8C7A0EBC62BF4B6D_OFFSET UNITYSDK_OFFSET(0x18339B10)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8EB95FDE22407B7D_OFFSET UNITYSDK_OFFSET(0x1833A3D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8F5A352837E5D5A2_OFFSET UNITYSDK_OFFSET(0x18339370)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8FACFFF3E5CBE2C4_OFFSET UNITYSDK_OFFSET(0x1833E0A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_942FA2BD37A953D3_OFFSET UNITYSDK_OFFSET(0x1833B130)
#define CLASS_1_3CE802D288741D2D_METHOD_1_980E03E0CB5F1C97_OFFSET UNITYSDK_OFFSET(0x183351B0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_994DF2D990A20287_OFFSET UNITYSDK_OFFSET(0x1833B690)
#define CLASS_1_3CE802D288741D2D_METHOD_1_9D6C91C7444A7D52_OFFSET UNITYSDK_OFFSET(0x1833B710)
#define CLASS_1_3CE802D288741D2D_METHOD_1_9DD2DCFED0B1F6F5_OFFSET UNITYSDK_OFFSET(0x18334740)
#define CLASS_1_3CE802D288741D2D_METHOD_1_9FD9A0E14949407F_OFFSET UNITYSDK_OFFSET(0x18332C10)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A5B868F5C71A467E_OFFSET UNITYSDK_OFFSET(0x1833C0B0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A705115B3CD7C1CB_OFFSET UNITYSDK_OFFSET(0x18338670)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A7A54D86BEC69A86_OFFSET UNITYSDK_OFFSET(0x1833D990)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A7F28B945B4F9B6E_OFFSET UNITYSDK_OFFSET(0x18335290)
#define CLASS_1_3CE802D288741D2D_METHOD_1_B548D12BA5C985DA_OFFSET UNITYSDK_OFFSET(0x1833BE40)
#define CLASS_1_3CE802D288741D2D_METHOD_1_BC012EAD9D9F105D_OFFSET UNITYSDK_OFFSET(0x18332320)
#define CLASS_1_3CE802D288741D2D_METHOD_1_BF5ABDB6E1D2891A_OFFSET UNITYSDK_OFFSET(0x1833C600)
#define CLASS_1_3CE802D288741D2D_METHOD_1_C4C3DB6ADFBC756E_1_OFFSET UNITYSDK_OFFSET(0x18335240)
#define CLASS_1_3CE802D288741D2D_METHOD_1_C4C3DB6ADFBC756E_OFFSET UNITYSDK_OFFSET(0x18335110)
#define CLASS_1_3CE802D288741D2D_METHOD_1_C576C3694282CF53_OFFSET UNITYSDK_OFFSET(0x1833BD40)
#define CLASS_1_3CE802D288741D2D_METHOD_1_C655A6AF844948DA_OFFSET UNITYSDK_OFFSET(0x1833CFD0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CA66F06205F1BED0_OFFSET UNITYSDK_OFFSET(0x18331BE0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CBA90A04C636398B_OFFSET UNITYSDK_OFFSET(0x183350B0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CFE68BF3082EDCB0_OFFSET UNITYSDK_OFFSET(0x1833AC20)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CFF79473E0241BC3_OFFSET UNITYSDK_OFFSET(0x18334F60)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_1_OFFSET UNITYSDK_OFFSET(0x18330850)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_2_OFFSET UNITYSDK_OFFSET(0x183340F0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_OFFSET UNITYSDK_OFFSET(0x183321C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D5D9374000697B40_OFFSET UNITYSDK_OFFSET(0x1833DB20)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D631E6EFCE1547F3_OFFSET UNITYSDK_OFFSET(0x18330CF0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D667D1D50133EF64_OFFSET UNITYSDK_OFFSET(0x18335460)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D68E1CAE64731ECE_1_OFFSET UNITYSDK_OFFSET(0x1833C720)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D68E1CAE64731ECE_OFFSET UNITYSDK_OFFSET(0x18334C60)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D700B832939D9249_OFFSET UNITYSDK_OFFSET(0x18337590)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D7D0CD092E7E5457_OFFSET UNITYSDK_OFFSET(0x1833C810)
#define CLASS_1_3CE802D288741D2D_METHOD_1_ED60CE426DBC8E38_1_OFFSET UNITYSDK_OFFSET(0x1833C210)
#define CLASS_1_3CE802D288741D2D_METHOD_1_ED60CE426DBC8E38_OFFSET UNITYSDK_OFFSET(0x18332970)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F0B96EE9F308F8DF_1_OFFSET UNITYSDK_OFFSET(0x18333820)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F0B96EE9F308F8DF_OFFSET UNITYSDK_OFFSET(0x18332E20)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F1F156C011224B0B_OFFSET UNITYSDK_OFFSET(0x18338820)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F5790DD9D8E52337_OFFSET UNITYSDK_OFFSET(0x18332B70)
#define CLASS_1_3CE802D288741D2D_METHOD_1_FE8F5F96DC7D1805_OFFSET UNITYSDK_OFFSET(0x1833C8F0)

inline static constexpr unsigned int Class_1_3CE802D288741D2D_TypeDefinitionIndex = 9538;

class Class_1_3CE802D288741D2D : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x104; // 0x0

	static ::System::String* Method_1_6AFDC50424099C5A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6AFDC50424099C5A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_11B8E01605498CF4(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_11B8E01605498CF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_130A6949BCD5A119(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_130A6949BCD5A119_OFFSET))(a1);
	}

	static ::System::String* Method_1_2F1937EBD1CFF8C5(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_2F1937EBD1CFF8C5_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_31CCAFA024D09758(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_31CCAFA024D09758_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D4247158591FA721(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC012EAD9D9F105D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_BC012EAD9D9F105D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_84E93399AE94C2FD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_84E93399AE94C2FD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F5790DD9D8E52337(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F5790DD9D8E52337_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9FD9A0E14949407F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_9FD9A0E14949407F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33F47CD1F2D90021(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_33F47CD1F2D90021_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0407806F100D9D14(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0407806F100D9D14_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F0B96EE9F308F8DF(::System::IO::DirectoryInfo* a1, ::System::String* a2, ::System::Boolean a3, ::System::Text::RegularExpressions::Regex* a4)
	{
		return ((::System::Void(*)(::System::IO::DirectoryInfo*, ::System::String*, ::System::Boolean, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F0B96EE9F308F8DF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D4247158591FA721_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D4247158591FA721_2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_0844BF824CA685A7(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0844BF824CA685A7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5E34F80B92F33FB3(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_5E34F80B92F33FB3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CA66F06205F1BED0(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_CA66F06205F1BED0_OFFSET))(a1);
	}

	static ::System::String* Method_1_1325B9879381C3A3(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1325B9879381C3A3_OFFSET))(a1);
	}

	static ::System::Void Method_1_D68E1CAE64731ECE(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D68E1CAE64731ECE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1457A99C460B4D82(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1457A99C460B4D82_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_CFF79473E0241BC3(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_CFF79473E0241BC3_OFFSET))(a1);
	}

	static ::System::String* Method_1_CBA90A04C636398B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_CBA90A04C636398B_OFFSET))(a1);
	}

	static ::System::String* Method_1_C4C3DB6ADFBC756E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_C4C3DB6ADFBC756E_OFFSET))(a1);
	}

	static ::System::String* Method_1_1045B7FFF846D4FF(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1045B7FFF846D4FF_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_980E03E0CB5F1C97(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_980E03E0CB5F1C97_OFFSET))(a1);
	}

	static ::System::String* Method_1_2B33C5147D6EE554(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_2B33C5147D6EE554_OFFSET))(a1);
	}

	static ::System::String* Method_1_6AFDC50424099C5A_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6AFDC50424099C5A_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_C4C3DB6ADFBC756E_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_C4C3DB6ADFBC756E_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_A7F28B945B4F9B6E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_A7F28B945B4F9B6E_OFFSET))(a1);
	}

	static ::System::String* Method_1_7079FDFF6481F7C6(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_7079FDFF6481F7C6_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_D667D1D50133EF64(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D667D1D50133EF64_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::System::IO::FileInfo*>* Method_1_3CA7B2FAF593D87E(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_3CA7B2FAF593D87E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_694763B6CFD24505(::System::String* a1, ::System::Collections::Generic::List_1<::System::IO::FileInfo*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Collections::Generic::HashSet_1<::System::String*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::IO::FileInfo*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_694763B6CFD24505_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Method_1_56D1CCAABE4BE5F2(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_56D1CCAABE4BE5F2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_74EAC4DD197DEA6A(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_74EAC4DD197DEA6A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0CC096BD7930BC31(::System::String* a1, ::System::Collections::Generic::List_1<::System::IO::DirectoryInfo*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::IO::DirectoryInfo*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0CC096BD7930BC31_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1A503627688AE58E(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1A503627688AE58E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0407806F100D9D14_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0407806F100D9D14_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F0B96EE9F308F8DF_1(::System::IO::DirectoryInfo* a1, ::System::String* a2, ::System::Boolean a3, ::System::Text::RegularExpressions::Regex* a4)
	{
		return ((::System::Void(*)(::System::IO::DirectoryInfo*, ::System::String*, ::System::Boolean, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F0B96EE9F308F8DF_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D700B832939D9249(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D700B832939D9249_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F1F156C011224B0B(::System::String* a1, ::System::String* a2, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>* a3, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>*, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F1F156C011224B0B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_8F5A352837E5D5A2(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8F5A352837E5D5A2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_42BEBC15DF245DB6(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_42BEBC15DF245DB6_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_31E1F560B3956813()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_31E1F560B3956813_OFFSET))();
	}

	static ::System::Void Method_1_8C7A0EBC62BF4B6D(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8C7A0EBC62BF4B6D_OFFSET))(a1);
	}

	static ::System::Void Method_1_304BCBB3B5923DF4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_304BCBB3B5923DF4_OFFSET))(a1);
	}

	static ::System::Void Method_1_8EB95FDE22407B7D(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8EB95FDE22407B7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CFE68BF3082EDCB0(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_CFE68BF3082EDCB0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_24B39354D1FCD13B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_24B39354D1FCD13B_OFFSET))(a1);
	}

	static ::System::String* Method_1_942FA2BD37A953D3(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_942FA2BD37A953D3_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_88B60F3B95FAA4F1_OFFSET))();
	}

	static ::System::Int64 Method_1_A705115B3CD7C1CB(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_A705115B3CD7C1CB_OFFSET))(a1);
	}

	static ::System::String* Method_1_994DF2D990A20287(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_994DF2D990A20287_OFFSET))(a1);
	}

	static ::System::String* Method_1_1325B9879381C3A3_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1325B9879381C3A3_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_9D6C91C7444A7D52(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_9D6C91C7444A7D52_OFFSET))(a1);
	}

	static ::System::Text::StringBuilder* Method_1_2E75F4263BAA93E8(::System::Text::StringBuilder* a1)
	{
		return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_2E75F4263BAA93E8_OFFSET))(a1);
	}

	static ::System::String* Method_1_6B9DA53DDDC0D8BD(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6B9DA53DDDC0D8BD_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_1F9CEC2E7FFF0A01(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1F9CEC2E7FFF0A01_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_51CB85426198DB47(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_51CB85426198DB47_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_C576C3694282CF53(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_C576C3694282CF53_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B548D12BA5C985DA(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_B548D12BA5C985DA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A5B868F5C71A467E(::System::Char a1)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_A5B868F5C71A467E_OFFSET))(a1);
	}

	static ::System::Text::StringBuilder* Method_1_8913E26713F9F05C(::System::Text::StringBuilder* a1, ::System::String* a2)
	{
		return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8913E26713F9F05C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0BD8EBDA38930A84(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0BD8EBDA38930A84_OFFSET))(a1);
	}

	static ::System::Void Method_1_ED60CE426DBC8E38(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_ED60CE426DBC8E38_OFFSET))(a1);
	}

	static ::System::Void Method_1_12635A3CAA51684C(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_12635A3CAA51684C_OFFSET))(a1);
	}

	static ::System::Void Method_1_ED60CE426DBC8E38_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_ED60CE426DBC8E38_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_6E1DD35AC740F721(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6E1DD35AC740F721_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_126AB3935214AA22_OFFSET))();
	}

	static ::System::Boolean Method_1_814BFAD6D303499E(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_814BFAD6D303499E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9DD2DCFED0B1F6F5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_9DD2DCFED0B1F6F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BF5ABDB6E1D2891A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_BF5ABDB6E1D2891A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_D68E1CAE64731ECE_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D68E1CAE64731ECE_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D201B4343E63821_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_D7D0CD092E7E5457(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D7D0CD092E7E5457_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_FE8F5F96DC7D1805(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_FE8F5F96DC7D1805_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_2_OFFSET))(a1);
	}

	static ::System::String* Method_1_2F996FD8685BA4BF(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_2F996FD8685BA4BF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_563F6A002CE501F1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_563F6A002CE501F1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C655A6AF844948DA(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_C655A6AF844948DA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_21B006A3E14F3379(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_21B006A3E14F3379_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_36E341618C6A080A(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_36E341618C6A080A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_03736422B1E836C8(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_03736422B1E836C8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A7A54D86BEC69A86(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_A7A54D86BEC69A86_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D5D9374000697B40(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D5D9374000697B40_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_16AAC9F8CAA68378(::System::IO::FileStream* a1, ::System::Byte a2)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_16AAC9F8CAA68378_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_16AAC9F8CAA68378_1(::System::IO::FileStream* a1, ::System::Byte& a2)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_16AAC9F8CAA68378_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_695D23C4F5ED0DB2(::System::IO::FileStream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_695D23C4F5ED0DB2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_31329007E4494D37(::System::IO::FileStream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::System::IO::FileStream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_31329007E4494D37_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_8FACFFF3E5CBE2C4(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8FACFFF3E5CBE2C4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D631E6EFCE1547F3(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D631E6EFCE1547F3_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_0CB5CAE55E9B0B9E(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0CB5CAE55E9B0B9E_OFFSET))(a1);
	}

	static ::System::String* Method_1_6F1B0A02FDC49991(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6F1B0A02FDC49991_OFFSET))(a1);
	}

	static ::System::String* Method_1_00AA18458D984D9B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_00AA18458D984D9B_OFFSET))(a1);
	}

	static ::System::String* Method_1_30424022465411BE(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_30424022465411BE_OFFSET))(a1);
	}

	static ::System::Void Method_1_1A2740E2FE318634(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1A2740E2FE318634_OFFSET))(a1);
	}
};
