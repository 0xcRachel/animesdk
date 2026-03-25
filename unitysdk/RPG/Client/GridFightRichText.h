#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_135;
class Class_1_89306F51165107EE;
class Class_1_993DBED7F998012B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_1_OFFSET UNITYSDK_OFFSET(0x989A9A0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_2_OFFSET UNITYSDK_OFFSET(0x989AAC0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_3_OFFSET UNITYSDK_OFFSET(0x989ACC0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_4_OFFSET UNITYSDK_OFFSET(0x9891220)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_5_OFFSET UNITYSDK_OFFSET(0x989ABE0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_6_OFFSET UNITYSDK_OFFSET(0x989A8D0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_OFFSET UNITYSDK_OFFSET(0x989A7C0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x989ADA0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x989AD90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRichText_TypeDefinitionIndex = 53032;

	class GridFightRichText : public ::System::Object
	{
	public:
		static ::Class_1_89306F51165107EE** StaticGet__Compiler()
		{
			return (::Class_1_89306F51165107EE**)Il2CppClass::FromTypeDefinitionIndex(GridFightRichText_TypeDefinitionIndex)->GetStaticField(0x153F0);
		}
		static ::Class_1_993DBED7F998012B** StaticGet__Parser()
		{
			return (::Class_1_993DBED7F998012B**)Il2CppClass::FromTypeDefinitionIndex(GridFightRichText_TypeDefinitionIndex)->GetStaticField(0x153F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT__CCTOR_OFFSET))();
		}

		static ::System::String* Compile(::RPG::Client::TextID id, ::Il2CppArray<::RPG::GameCore::FixPoint>* args)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_OFFSET))(id, args);
		}

		static ::System::String* Compile_1(::RPG::Client::TextID id, ::Il2CppArray<::RPG::GameCore::FixPoint>* args, ::Class_1_43BD383C98B4C0C5_135* extraCompiler)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Class_1_43BD383C98B4C0C5_135*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_1_OFFSET))(id, args, extraCompiler);
		}

		static ::System::String* Compile_2(::RPG::Client::TextID id, ::Il2CppArray<::RPG::GameCore::FixPoint>* args, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_135*>* extraCompilers)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_135*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_2_OFFSET))(id, args, extraCompilers);
		}

		static ::System::String* Compile_3(::RPG::Client::TextID id)
		{
			return ((::System::String*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_3_OFFSET))(id);
		}

		static ::System::String* Compile_4(::System::String* text, ::Class_1_43BD383C98B4C0C5_135* extraCompiler)
		{
			return ((::System::String*(*)(::System::String*, ::Class_1_43BD383C98B4C0C5_135*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_4_OFFSET))(text, extraCompiler);
		}

		static ::System::String* Compile_5(::System::String* text, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_135*>* extraCompilers)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_135*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_5_OFFSET))(text, extraCompilers);
		}

		static ::System::String* Compile_6(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_6_OFFSET))(text);
		}
	};
}
