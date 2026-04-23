#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNodeChangedAction.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlAttributeCollection; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlLinkedNode; }
namespace System::Xml { class XmlNodeChangedEventArgs; }
namespace System::Xml { class XmlNodeList; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLNODE_AFTEREVENT_OFFSET UNITYSDK_OFFSET(0x176795D0)
#define SYSTEM_XML_XMLNODE_ANCESTORNODE_OFFSET UNITYSDK_OFFSET(0x176783B0)
#define SYSTEM_XML_XMLNODE_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x17671070)
#define SYSTEM_XML_XMLNODE_APPENDCHILDTEXT_OFFSET UNITYSDK_OFFSET(0x17678AB0)
#define SYSTEM_XML_XMLNODE_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x17665070)
#define SYSTEM_XML_XMLNODE_BEFOREEVENT_OFFSET UNITYSDK_OFFSET(0x17679560)
#define SYSTEM_XML_XMLNODE_CANINSERTAFTER_OFFSET UNITYSDK_OFFSET(0x17678830)
#define SYSTEM_XML_XMLNODE_COPYCHILDREN_OFFSET UNITYSDK_OFFSET(0x176616C0)
#define SYSTEM_XML_XMLNODE_FINDCHILD_OFFSET UNITYSDK_OFFSET(0x17679350)
#define SYSTEM_XML_XMLNODE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1765FF90)
#define SYSTEM_XML_XMLNODE_GETEVENTARGS_OFFSET UNITYSDK_OFFSET(0x176793B0)
#define SYSTEM_XML_XMLNODE_GETPREFIXOFNAMESPACESTRICT_OFFSET UNITYSDK_OFFSET(0x17678F40)
#define SYSTEM_XML_XMLNODE_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x17678F10)
#define SYSTEM_XML_XMLNODE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17678370)
#define SYSTEM_XML_XMLNODE_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x17678CC0)
#define SYSTEM_XML_XMLNODE_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x17674050)
#define SYSTEM_XML_XMLNODE_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x17678E80)
#define SYSTEM_XML_XMLNODE_GET_FIRSTCHILD_OFFSET UNITYSDK_OFFSET(0x176617D0)
#define SYSTEM_XML_XMLNODE_GET_HASCHILDNODES_OFFSET UNITYSDK_OFFSET(0x17678840)
#define SYSTEM_XML_XMLNODE_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x17664E90)
#define SYSTEM_XML_XMLNODE_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x17678380)
#define SYSTEM_XML_XMLNODE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x17678880)
#define SYSTEM_XML_XMLNODE_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x17679640)
#define SYSTEM_XML_XMLNODE_GET_LASTCHILD_OFFSET UNITYSDK_OFFSET(0x17661000)
#define SYSTEM_XML_XMLNODE_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x17678390)
#define SYSTEM_XML_XMLNODE_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x17678860)
#define SYSTEM_XML_XMLNODE_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x17678360)
#define SYSTEM_XML_XMLNODE_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x17661E40)
#define SYSTEM_XML_XMLNODE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x17678260)
#define SYSTEM_XML_XMLNODE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x17678870)
#define SYSTEM_XML_XMLNODE_GET_PREVIOUSSIBLING_OFFSET UNITYSDK_OFFSET(0x17678350)
#define SYSTEM_XML_XMLNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17678180)
#define SYSTEM_XML_XMLNODE_HASREADONLYPARENT_OFFSET UNITYSDK_OFFSET(0x17678950)
#define SYSTEM_XML_XMLNODE_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x17678820)
#define SYSTEM_XML_XMLNODE_NESTTEXTNODES_OFFSET UNITYSDK_OFFSET(0x17664520)
#define SYSTEM_XML_XMLNODE_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1765F650)
#define SYSTEM_XML_XMLNODE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x17678410)
#define SYSTEM_XML_XMLNODE_SETPARENTFORLOAD_OFFSET UNITYSDK_OFFSET(0x17679340)
#define SYSTEM_XML_XMLNODE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1766AE70)
#define SYSTEM_XML_XMLNODE_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x17678BA0)
#define SYSTEM_XML_XMLNODE_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x17678C60)
#define SYSTEM_XML_XMLNODE_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x176783A0)
#define SYSTEM_XML_XMLNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x17678190)
#define SYSTEM_XML_XMLNODE_SPLITNAME_OFFSET UNITYSDK_OFFSET(0x1765E330)
#define SYSTEM_XML_XMLNODE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17678A40)
#define SYSTEM_XML_XMLNODE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x17678A20)
#define SYSTEM_XML_XMLNODE_UNNESTTEXTNODES_OFFSET UNITYSDK_OFFSET(0x176787E0)
#define SYSTEM_XML_XMLNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1766A800)
#define SYSTEM_XML_XMLNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17661180)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNode_TypeDefinitionIndex = 1903;

	class XmlNode : public ::System::Object
	{
	public:
		::System::Xml::XmlNode* parentNode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE__CTOR_1_OFFSET))(this, doc);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Xml::XmlNodeList* get_ChildNodes()
		{
			return ((::System::Xml::XmlNodeList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_CHILDNODES_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_PreviousSibling()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_PREVIOUSSIBLING_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_NextSibling()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_NEXTSIBLING_OFFSET))(this);
		}

		::System::Xml::XmlAttributeCollection* get_Attributes()
		{
			return ((::System::Xml::XmlAttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_OWNERDOCUMENT_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_FirstChild()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_FIRSTCHILD_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_LastChild()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_LASTCHILD_OFFSET))(this);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_LASTNODE_OFFSET))(this, value);
		}

		::System::Boolean AncestorNode(::System::Xml::XmlNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_ANCESTORNODE_OFFSET))(this, node);
		}

		::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* oldChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_REMOVECHILD_OFFSET))(this, oldChild);
		}

		::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* newChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_APPENDCHILD_OFFSET))(this, newChild);
		}

		::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_APPENDCHILDFORLOAD_OFFSET))(this, newChild, doc);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_ISVALIDCHILDTYPE_OFFSET))(this, type);
		}

		::System::Boolean CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_CANINSERTAFTER_OFFSET))(this, newChild, refChild);
		}

		::System::Boolean get_HasChildNodes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_HASCHILDNODES_OFFSET))(this);
		}

		::System::Void CopyChildren(::System::Xml::XmlDocument* doc, ::System::Xml::XmlNode* container, ::System::Boolean deep)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*, ::System::Xml::XmlNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_COPYCHILDREN_OFFSET))(this, doc, container, deep);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_PREFIX_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_ISREADONLY_OFFSET))(this);
		}

		static ::System::Boolean HasReadOnlyParent(::System::Xml::XmlNode* n)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_HASREADONLYPARENT_OFFSET))(n);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void AppendChildText(::System::Text::StringBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_APPENDCHILDTEXT_OFFSET))(this, builder);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_INNERTEXT_OFFSET))(this, value);
		}

		::System::Void set_InnerXml(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_INNERXML_OFFSET))(this, value);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_BASEURI_OFFSET))(this);
		}

		::System::Void RemoveAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_REMOVEALL_OFFSET))(this);
		}

		::System::Xml::XmlDocument* get_Document()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_DOCUMENT_OFFSET))(this);
		}

		::System::String* GetPrefixOfNamespace(::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GETPREFIXOFNAMESPACE_OFFSET))(this, namespaceURI);
		}

		::System::String* GetPrefixOfNamespaceStrict(::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GETPREFIXOFNAMESPACESTRICT_OFFSET))(this, namespaceURI);
		}

		::System::Void SetParent(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SETPARENT_OFFSET))(this, node);
		}

		::System::Void SetParentForLoad(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SETPARENTFORLOAD_OFFSET))(this, node);
		}

		static ::System::Void SplitName(::System::String* name, ::System::String*& prefix, ::System::String*& localName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SPLITNAME_OFFSET))(name, prefix, localName);
		}

		::System::Xml::XmlNode* FindChild(::System::Xml::XmlNodeType type)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_FINDCHILD_OFFSET))(this, type);
		}

		::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::System::String* oldValue, ::System::String* newValue, ::System::Xml::XmlNodeChangedAction action)
		{
			return ((::System::Xml::XmlNodeChangedEventArgs*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Xml::XmlNodeChangedAction))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GETEVENTARGS_OFFSET))(this, node, oldParent, newParent, oldValue, newValue, action);
		}

		::System::Void BeforeEvent(::System::Xml::XmlNodeChangedEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_BEFOREEVENT_OFFSET))(this, args);
		}

		::System::Void AfterEvent(::System::Xml::XmlNodeChangedEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_AFTEREVENT_OFFSET))(this, args);
		}

		::System::Boolean get_IsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_ISTEXT_OFFSET))(this);
		}

		static ::System::Void NestTextNodes(::System::Xml::XmlNode* prevNode, ::System::Xml::XmlNode* nextNode)
		{
			return ((::System::Void(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_NESTTEXTNODES_OFFSET))(prevNode, nextNode);
		}

		static ::System::Void UnnestTextNodes(::System::Xml::XmlNode* prevNode, ::System::Xml::XmlNode* nextNode)
		{
			return ((::System::Void(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_UNNESTTEXTNODES_OFFSET))(prevNode, nextNode);
		}
	};
}
