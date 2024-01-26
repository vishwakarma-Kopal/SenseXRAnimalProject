#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<co.techxr.unity.model.ActivationDto>
struct Action_1_tA8035876F91F5C6A5ABAE8A302E57B519C1DCDA9;
// System.Action`1<co.techxr.unity.model.ApplicationDto>
struct Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<co.techxr.unity.network.INetworkService>
struct Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52;
// System.Action`1<co.techxr.unity.model.LoginResponse>
struct Action_1_t364C94423BE312DFF449DB8389178799569DCF01;
// System.Action`1<co.techxr.unity.network.NetworkService2>
struct Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<co.techxr.unity.model.PhoneDto>
struct Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9;
// System.Action`1<co.techxr.unity.model.Profile>
struct Action_1_t21368F37D8368081C267784197A861AE2EF93602;
// System.Action`1<co.techxr.unity.model.SenseInstallDto>
struct Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D;
// System.Action`1<co.techxr.unity.model.SpecificAsset>
struct Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<co.techxr.unity.exceptions.XrException>
struct Action_1_t77330DAB4B6364644857E237915461B112A9D589;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct ConcurrentDictionary_2_t847EC94864EAD4D4DAAC178360D815D61414FB0D;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.Metadata.JsonTypeInfo>
struct ConcurrentDictionary_2_tBB3D7D3E921EC4D2A5836C85E459C1871641CB32;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct Dictionary_2_t0483416E2612BB76C51CC68E3BC2D3CCAB6198D9;
// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task>
struct Func_2_t378757FF082427448349A80CC63683B50DA787D3;
// System.Func`3<System.Type,System.Text.Json.JsonSerializerOptions,System.Text.Json.Serialization.Metadata.JsonTypeInfo>
struct Func_3_t80B18BCDC791D3FBC519B36E97931215F647CFD7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter>
struct IList_1_tC0B13B2863B707AF8F570191723FA59FC26BABEA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>
struct UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject>
struct UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.HeaderVariantInfo[]
struct HeaderVariantInfoU5BU5D_tA7C0539249B1D08DAB6416355720F4D28D6CE747;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Text.Json.Serialization.JsonConverter[]
struct JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t8D79A380C46398F9D1F442FDEE0A27F77B7D1B4C;
// co.techxr.unity.model.ActivationDto
struct ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5;
// co.techxr.unity.model.AppLoginDto
struct AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B;
// co.techxr.unity.model.ApplicationDto
struct ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// co.techxr.unity.network.AssetService
struct AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// co.techxr.unity.network.AuthService
struct AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Net.CookieCollection
struct CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608;
// System.Net.CookieContainer
struct CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// co.techxr.unity.model.DocumentDto
struct DocumentDto_tE851E366B609CE34E8796DFA485D87A439B1D49C;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// co.techxr.unity.model.GenericAsset
struct GenericAsset_t7DBD632872843B9907680830D85AF1FE8EB1E357;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tD651971044220ED52EACB30E89A49178FA32D91F;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9;
// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A;
// co.techxr.unity.network.IAssetService
struct IAssetService_t415E36D9D7C958B09A377A321EDF2117C8FDFAE9;
// co.techxr.unity.network.IAssetServiceMono
struct IAssetServiceMono_tF403FDE81E5AE0D483091DEDBC3A35347B00082A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// co.techxr.unity.network.IAuthServiceMono
struct IAuthServiceMono_t160D1561A50C713F623AD6AE1D15C8F5655AC54C;
// System.Net.ICredentials
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// IFileCache
struct IFileCache_tEDF74B311E9BC0B1482834A647B76811CD713A32;
// co.techxr.unity.network.INetworkService
struct INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1;
// System.Net.IWebProxy
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2;
// System.Text.Json.JsonNamingPolicy
struct JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4;
// System.Text.Json.Serialization.JsonSerializerContext
struct JsonSerializerContext_t1F6CFC5FBA85D0791A1EA249238EDC2B7410BD57;
// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD;
// System.Text.Json.Serialization.Metadata.JsonTypeInfo
struct JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36;
// co.techxr.unity.network.LicenseService
struct LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759;
// co.techxr.unity.model.LoginDto
struct LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664;
// co.techxr.unity.model.LoginResponse
struct LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28;
// System.Text.Json.Serialization.Metadata.MemberAccessor
struct MemberAccessor_tB287B55E0A8EBD4AA3EBF99FBCA7F7AEF76347AC;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// co.techxr.unity.network.NetworkService
struct NetworkService_t64A888C1001819C42925F83CA29197037F62175C;
// co.techxr.unity.network.NetworkService2
struct NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// co.techxr.unity.model.PasswordChangeDto
struct PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18;
// co.techxr.unity.model.PhoneDto
struct PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB;
// co.techxr.unity.model.Profile
struct Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876;
// System.Text.Json.Serialization.ReferenceHandler
struct ReferenceHandler_t1630C9ADF53E934E6EE593185A0B1C4CFCED6FD5;
// RefreshTokenDto
struct RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77;
// System.Net.Cache.RequestCacheBinding
struct RequestCacheBinding_t18F3F4FF8D0F77E86C2C666CEE7FD48A80C042EE;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
// System.Net.Cache.RequestCacheProtocol
struct RequestCacheProtocol_t43C1AC170194874A0C0B0D3B8BE9EABFB613DF85;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// co.techxr.unity.model.SenseInstallDto
struct SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F;
// System.Net.ServicePoint
struct ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29;
// co.techxr.unity.model.SpecificAsset
struct SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriBuilder
struct UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72;
// co.techxr.unity.network.Url
struct Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.WebCompletionSource
struct WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5;
// System.Net.WebException
struct WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Net.WebOperation
struct WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9;
// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B;
// System.Net.WebRequestStream
struct WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB;
// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// co.techxr.unity.exceptions.XrException
struct XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F;
// co.techxr.unity.utils.XrUtil
struct XrUtil_t1B5D3943BD21C429F308686B51C2AD54EA1AB52A;
// co.techxr.unity.network.addService
struct addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF;
// co.techxr.unity.network.AssetService/<>c
struct U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2;
// co.techxr.unity.network.AssetService/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1;
// co.techxr.unity.network.AssetService/<>c__DisplayClass9_1
struct U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC;
// co.techxr.unity.network.AssetService/<>c__DisplayClass9_2
struct U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13;
// co.techxr.unity.network.AuthService/<>c
struct U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94;
// co.techxr.unity.network.AuthService/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041;
// co.techxr.unity.network.AuthService/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12;
// co.techxr.unity.network.AuthService/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2;
// co.techxr.unity.network.AuthService/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600;
// co.techxr.unity.network.FormUpload/FileParameter
struct FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D;
// co.techxr.unity.network.LicenseService/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242;
// co.techxr.unity.network.LicenseService/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// co.techxr.unity.network.NetworkService2/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6;
// co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30
struct U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86;
// co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27
struct U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Net.TimerThread/Queue
struct Queue_t644DC21212BC432819522EDA395EB4562BE2CC47;
// co.techxr.unity.network.Url/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t21368F37D8368081C267784197A861AE2EF93602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAssetServiceMono_tF403FDE81E5AE0D483091DEDBC3A35347B00082A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthServiceMono_t160D1561A50C713F623AD6AE1D15C8F5655AC54C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileCache_tEDF74B311E9BC0B1482834A647B76811CD713A32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityPlatform_t000394AF4778281B6308B4CF1A5C670E1C09CB4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0461BADE43AA136CFC92253F45E5E36BA9F18785;
IL2CPP_EXTERN_C String_t* _stringLiteral04CB971E1C7EED56CF28788244596821E1502FD5;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral0F111E9B05E6F80898809A9A6EBF1344821B001D;
IL2CPP_EXTERN_C String_t* _stringLiteral1177D121D535107BBA9EBE2F1C3F8CA211948FDC;
IL2CPP_EXTERN_C String_t* _stringLiteral1281091BB0174E2BACA15439E909011836B5BD41;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral1599EF7E2A68C0EA35C00D893B697C0873A595B3;
IL2CPP_EXTERN_C String_t* _stringLiteral15CE0CD2ECE798D39395268B1AEFC5E4FB9DB08D;
IL2CPP_EXTERN_C String_t* _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92;
IL2CPP_EXTERN_C String_t* _stringLiteral184D302BCED20F81969C8ACF722A0F02C155F491;
IL2CPP_EXTERN_C String_t* _stringLiteral18BB7D03BAEFB972A7609E9FBBFA54D4D7B2D90A;
IL2CPP_EXTERN_C String_t* _stringLiteral1C391CE8DC0306E7CD17DC2D5206935D21178330;
IL2CPP_EXTERN_C String_t* _stringLiteral1CA0BD643E2284A937239E91596E11C4B369656D;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA583BDD06084A8D0807ACB11F86A290232E123;
IL2CPP_EXTERN_C String_t* _stringLiteral1F0491C6CB2548B08595EE5037308B0DEF4FA94F;
IL2CPP_EXTERN_C String_t* _stringLiteral1F69FF66FFA4C1CE51D67EB02ACC9110400F8C2F;
IL2CPP_EXTERN_C String_t* _stringLiteral1FC238ECDE8A636DD0A8F375814F442D90A1A14D;
IL2CPP_EXTERN_C String_t* _stringLiteral206487F55CB297CC5B73A7184C2CD6CA7EE3D6C2;
IL2CPP_EXTERN_C String_t* _stringLiteral2375FC4EF9986E010F0ED9C69E9F9B279F9AB3FA;
IL2CPP_EXTERN_C String_t* _stringLiteral246C9E6DB34381404518645EB80945F37DB882C2;
IL2CPP_EXTERN_C String_t* _stringLiteral24FEDEC33DFF067A93EB453E4AD8BA0BCDE7796F;
IL2CPP_EXTERN_C String_t* _stringLiteral275703C3470C04ACBCC0CBBFA4E00A12CF32A9BA;
IL2CPP_EXTERN_C String_t* _stringLiteral298A888575F207AC1E275A146A5C3D0E7EE3D362;
IL2CPP_EXTERN_C String_t* _stringLiteral29A4312855F13BAD5C4498E8D06594706335674B;
IL2CPP_EXTERN_C String_t* _stringLiteral2A6C0681A2B22DE83721912939CABADB2CD3C4B7;
IL2CPP_EXTERN_C String_t* _stringLiteral33D1B60DB12199044FC7DD788DAA5A0D4BB75DF5;
IL2CPP_EXTERN_C String_t* _stringLiteral34A9090430FA925433892F17FB03B5A2FF264EB0;
IL2CPP_EXTERN_C String_t* _stringLiteral3658F44D4E179B4366D647D9AF1B562C798E7351;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral382BDA9DD57CD49BA0C95C01745E12E5A808A0F2;
IL2CPP_EXTERN_C String_t* _stringLiteral3D1CCF1434CC33294832B3823251D2A1C7D47288;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral44DEF021AD969C57977635CC78A43CC2C944A9DB;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD1AEF584EA5EDF04455490551CD7BB7C31C183;
IL2CPP_EXTERN_C String_t* _stringLiteral50975BA59872A0B98D6906BFD4D0B97BE76BEA4E;
IL2CPP_EXTERN_C String_t* _stringLiteral52C1EA64C3A4F01A1C9E1E6D202CF7A4A0B643B9;
IL2CPP_EXTERN_C String_t* _stringLiteral548035E07FAFDE5E6121DD9ECFA24C4564FE5FED;
IL2CPP_EXTERN_C String_t* _stringLiteral565A02CDB13DB545C4951504D2557024FDE785EB;
IL2CPP_EXTERN_C String_t* _stringLiteral56A912BE526D5441F7D252F6E3751DA841A36D26;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral62348C69D822EE76C106D93C4A3D61B48BDBF7D4;
IL2CPP_EXTERN_C String_t* _stringLiteral626CF85D4262521EF25DABA74161EAC737E9C162;
IL2CPP_EXTERN_C String_t* _stringLiteral62AFB344FB9C41BC509244C3C426CFD503F0393B;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
IL2CPP_EXTERN_C String_t* _stringLiteral6C96C41BD07C11F0ACBE37A31E2BB00E2CA0E184;
IL2CPP_EXTERN_C String_t* _stringLiteral6F82474B00F78372BB6071B195794C5F8157BF6E;
IL2CPP_EXTERN_C String_t* _stringLiteral7376F8B485100A5C42ACF806CA7F817ECA693396;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral74CF8280FB47F302B7CF467F8479183CFE029FC0;
IL2CPP_EXTERN_C String_t* _stringLiteral7748B8AF7AFB1AC82972664982AFC5A4D51A2125;
IL2CPP_EXTERN_C String_t* _stringLiteral7AC31F644714D137B3AF5661613C62F9FB8DC5A6;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral7BE00E42F38227500E2763A3779E5B3426B03B06;
IL2CPP_EXTERN_C String_t* _stringLiteral833DACEEC399C1DB36E64C2531DCA990DE9835C7;
IL2CPP_EXTERN_C String_t* _stringLiteral86C2E97D9D59FF5BF8DA834987C3570768B79877;
IL2CPP_EXTERN_C String_t* _stringLiteral86E85B2AEEA7EB5C9D761B3136A7790577E9FCCF;
IL2CPP_EXTERN_C String_t* _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF;
IL2CPP_EXTERN_C String_t* _stringLiteral8968DCDDA5CC941D7412288C4647284F43E094EA;
IL2CPP_EXTERN_C String_t* _stringLiteral8B3DE525FD4DD217A12F37DC4284B59ADCCE97EF;
IL2CPP_EXTERN_C String_t* _stringLiteral8ED2278251B5DBF0781E9CF8696102786F6BD4F2;
IL2CPP_EXTERN_C String_t* _stringLiteral90CE1F4E4F03543A029787125753CD33C8073A8F;
IL2CPP_EXTERN_C String_t* _stringLiteral97299807E155FF3BDDB957F54C156EF8753B3F99;
IL2CPP_EXTERN_C String_t* _stringLiteral97375BC2D6FE8AED0D800E654605ECC573A98E10;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE;
IL2CPP_EXTERN_C String_t* _stringLiteralB631F0C21B3B5EBBBBAEF7503C1D7830699CA52F;
IL2CPP_EXTERN_C String_t* _stringLiteralBE95F52B193E0549BF5DD62F0E64CCE0DD24AB72;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBE3D4316F28B2BECF90D8DD2A2A24891C413BF;
IL2CPP_EXTERN_C String_t* _stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC;
IL2CPP_EXTERN_C String_t* _stringLiteralC97ADB2151514183ABC3FE612B115A0F608F950B;
IL2CPP_EXTERN_C String_t* _stringLiteralCADE14EA4CF01A4C5D0ADF87FA18B2E691FACF0B;
IL2CPP_EXTERN_C String_t* _stringLiteralCFF5B8739799ED8CD52A1C4D4256C3D81D49F300;
IL2CPP_EXTERN_C String_t* _stringLiteralD555458ED2C65C289B5952ADC72B99E4A47A6650;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38;
IL2CPP_EXTERN_C String_t* _stringLiteralE41241A91258B1E54EC706BF87AAD8F013928971;
IL2CPP_EXTERN_C String_t* _stringLiteralF3410656B8CAF3AF87F0406886448F4A55C9831C;
IL2CPP_EXTERN_C String_t* _stringLiteralF345E1A5B9DC469781A51A1E6BB51696649948A6;
IL2CPP_EXTERN_C String_t* _stringLiteralF83DB288C9FCF3E53140FD46951E79625AEDAF61;
IL2CPP_EXTERN_C String_t* _stringLiteralF987889D450D52A2F51B87328CA8D4D3CB98A8BC;
IL2CPP_EXTERN_C String_t* _stringLiteralF9DC80DF663F0ADB3E31E2B4886B90F3E3A68854;
IL2CPP_EXTERN_C String_t* _stringLiteralFA4C5FF8A68887C1283B169941A6090D7B6C606B;
IL2CPP_EXTERN_C String_t* _stringLiteralFF136C74C955BF78E1014B404613D75BFDD8630D;
IL2CPP_EXTERN_C String_t* _stringLiteralFF3F6295AAF48AC44EE111E7233767AD6B03E6C8;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetService_U3C_ctorU3Eb__5_1_m69DB396BCCC0B620E71859068911456EBF32AA01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetService_getGameObjectFromAssetBundle_m800FF3CCB29761A144A8F589C0B17639C249F88F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enum_TryParse_TisUnityPlatform_t000394AF4778281B6308B4CF1A5C670E1C09CB4B_m331E8732943A8F84EB322103FD1F49596534E4D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FormUpload_GetMultipartFormData_m88E400FA7A4D59713166692942537BE7CE0BCDE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FormUpload_PostForm_m2DE009B1C88230997ED57DCE68ACA54EBD2A6554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkService_delete_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_m3DA7CE51A98453B56D1434FBF91697645FD4441F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkService_get_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_m16953358716A97D073E393A1CF72E1F650D736AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkService_get_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_mCFA8507C85DA2626FC081F376BB8E20FA478638C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkService_get_TisSpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F_m319DB17E7F21792982BB8A5ECF0C3BD02084CA6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkService_post_TisActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5_m3C0C261A8B74B71DA6A7C5EA3510850EEFD0C926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkService_post_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_m2C0E0AEC3955C1D6AB89AA035876F2DBA0AB02DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkService_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m7CDADCE5DBA0796AA50B6FBA5BB7B8B295ED0D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkService_post_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_m0661511C14BF322C7727C8AABC182F792B16B3F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkService_post_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_mFDBC82D6F7C5D317027E0E91B71B603F9750E5F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkService_post_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_mBC25384D92197F7DE714C84EE065A29430B9B208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisLoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_m63846E5C9FC941650B638B9A315F79B955714737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_mDBCD3B445F21BAC524948B1BB06E9FBFD66E498A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_mFAFF22CC0B36D71C60AF85D9CB3DFC7A44368CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Serialize_TisLoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_mBB1C20F884C6029FBC4AAAEBF4A67EF9B3337585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Serialize_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m1C42A075CE5B8C5A706349A658B4E8E8F51633C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Serialize_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_mE5CD45451DE294870579A0531394F1ED2B8AA9DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LicenseService_U3C_ctorU3Eb__7_0_m4C87AC896817981FDF49ADDEE9CD7D9BA35C0FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkService2_GetGameObject_m43146F132D7EBEB4FA29C219F2698312EBD6BF43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkService2_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_mE8F41B282731770CCCB40ACD7A6434E0264D04DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkService_getHttpPostResponse_mD3184D4FF170D88A318CD5AD4BEEE447359DFC08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkService_getHttpResponse_m61E46D002A075C26BE419EBA29406E6A19390DCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadToFileU3Ed__30_System_Collections_IEnumerator_Reset_m354FD813D528A26E8BE17A565F2309DE960098A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDisplayBundleRoutineU3Ed__27_System_Collections_IEnumerator_Reset_mAF2E705479EDE89A7BA64297DBF0E0EF8D40425F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__12_0_m7510D57A710C40C96D63FD89EE86416A81BFAAF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__12_1_mF5EF77EEC029FB6792036280BF016F99F2E79749_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__5_0_m149058CFA40BC2B3D3F1D35EB58CE322CAB39F27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CloginThroughApplicationU3Eb__0_m03ECCA91344E2BB1E9A0FAA7642F8B3BC8097D31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CloginU3Eb__0_m1C1B6E5C52433A7872B4D9F193F82C5942227FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CrefreshTokenU3Eb__0_m4C8E7FFB109CFAE56C823BAA57FB14D91915BBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CotpvalueU3Eb__0_mCDFB5942C841734AFC6CDA954F5C8BCD2CDFF4C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CsavedLoginU3Eb__1_m39F9311F09D00E7B8E3707796102A8A823716C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_1_U3CsavedLoginU3Eb__0_m4A3A0A4CB14689C4473988D0339DFC7ECD087F63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CgetNetworkServiceU3Eb__0_mC10095AE41F6BB6EE5B31E3FD9B7070E5E058330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CregisterLicenseU3Eb__0_m52DDA7A5C92C1EB3080E2368D0CA6CD84B7EA48C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CGetAssetBundleU3Eb__0_m5D8A8F98A9A5EBA3E4C02F905B01F44D04B24EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CGetAssetBundleU3Eb__3_m3057340699F6633B7EA6AA483B7ACE0B198F6614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_1_U3CGetAssetBundleU3Eb__2_m3472E1E1B4BF144237E6551E3112D25C403344F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_2_U3CGetAssetBundleU3Eb__1_m15EB27F589D9130B0595D73452F59F704DDA195C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XrUtil_getUnityPlatform_mA8E1283C059F21E0889C89C12727CED3A04DE44B_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBF2FD8A98DD7FA854D598305B552132031D1FC21 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// co.techxr.unity.model.ActivationDto
struct ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5  : public RuntimeObject
{
	// System.String co.techxr.unity.model.ActivationDto::<installationId>k__BackingField
	String_t* ___U3CinstallationIdU3Ek__BackingField_0;
	// System.Int64 co.techxr.unity.model.ActivationDto::<profileId>k__BackingField
	int64_t ___U3CprofileIdU3Ek__BackingField_1;
	// System.Boolean co.techxr.unity.model.ActivationDto::<allowed>k__BackingField
	bool ___U3CallowedU3Ek__BackingField_2;
	// System.String co.techxr.unity.model.ActivationDto::<activationTime>k__BackingField
	String_t* ___U3CactivationTimeU3Ek__BackingField_3;
};

// co.techxr.unity.model.AppLoginDto
struct AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B  : public RuntimeObject
{
	// System.String co.techxr.unity.model.AppLoginDto::<installationId>k__BackingField
	String_t* ___U3CinstallationIdU3Ek__BackingField_0;
};

// co.techxr.unity.model.ApplicationDto
struct ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99  : public RuntimeObject
{
	// System.Int64 co.techxr.unity.model.ApplicationDto::<id>k__BackingField
	int64_t ___U3CidU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.ApplicationDto::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// System.String co.techxr.unity.model.ApplicationDto::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_2;
	// System.Int64 co.techxr.unity.model.ApplicationDto::<developerId>k__BackingField
	int64_t ___U3CdeveloperIdU3Ek__BackingField_3;
	// System.String co.techxr.unity.model.ApplicationDto::<key>k__BackingField
	String_t* ___U3CkeyU3Ek__BackingField_4;
};
struct Il2CppArrayBounds;

// co.techxr.unity.network.AssetService
struct AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD  : public RuntimeObject
{
	// IFileCache co.techxr.unity.network.AssetService::ifileCache
	RuntimeObject* ___ifileCache_3;
};

struct AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields
{
	// co.techxr.unity.network.INetworkService co.techxr.unity.network.AssetService::networkService
	RuntimeObject* ___networkService_0;
	// co.techxr.unity.network.IAssetServiceMono co.techxr.unity.network.AssetService::iAssetServiceMono
	RuntimeObject* ___iAssetServiceMono_1;
	// co.techxr.unity.network.AssetService co.techxr.unity.network.AssetService::instance
	AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* ___instance_2;
};

// co.techxr.unity.network.AuthService
struct AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94  : public RuntimeObject
{
};

struct AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields
{
	// co.techxr.unity.network.INetworkService co.techxr.unity.network.AuthService::networkService
	RuntimeObject* ___networkService_0;
	// co.techxr.unity.network.AuthService co.techxr.unity.network.AuthService::instance
	AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* ___instance_1;
	// co.techxr.unity.network.IAuthServiceMono co.techxr.unity.network.AuthService::iAuthServiceMono
	RuntimeObject* ___iAuthServiceMono_2;
};

// System.Net.CookieContainer
struct CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E  : public RuntimeObject
{
	// System.Collections.Hashtable System.Net.CookieContainer::m_domainTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___m_domainTable_1;
	// System.Int32 System.Net.CookieContainer::m_maxCookieSize
	int32_t ___m_maxCookieSize_2;
	// System.Int32 System.Net.CookieContainer::m_maxCookies
	int32_t ___m_maxCookies_3;
	// System.Int32 System.Net.CookieContainer::m_maxCookiesPerDomain
	int32_t ___m_maxCookiesPerDomain_4;
	// System.Int32 System.Net.CookieContainer::m_count
	int32_t ___m_count_5;
	// System.String System.Net.CookieContainer::m_fqdnMyDomain
	String_t* ___m_fqdnMyDomain_6;
};

struct CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E_StaticFields
{
	// System.Net.HeaderVariantInfo[] System.Net.CookieContainer::HeaderInfo
	HeaderVariantInfoU5BU5D_tA7C0539249B1D08DAB6416355720F4D28D6CE747* ___HeaderInfo_0;
};

// co.techxr.unity.model.DocumentDto
struct DocumentDto_tE851E366B609CE34E8796DFA485D87A439B1D49C  : public RuntimeObject
{
	// System.String co.techxr.unity.model.DocumentDto::<url>k__BackingField
	String_t* ___U3CurlU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.DocumentDto::<documentType>k__BackingField
	String_t* ___U3CdocumentTypeU3Ek__BackingField_1;
	// System.Int64 co.techxr.unity.model.DocumentDto::<size>k__BackingField
	int64_t ___U3CsizeU3Ek__BackingField_2;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// co.techxr.unity.network.FormUpload
struct FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418  : public RuntimeObject
{
};

struct FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields
{
	// System.Text.Encoding co.techxr.unity.network.FormUpload::encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding_0;
};

// co.techxr.unity.model.GenericAsset
struct GenericAsset_t7DBD632872843B9907680830D85AF1FE8EB1E357  : public RuntimeObject
{
	// System.String co.techxr.unity.model.GenericAsset::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.GenericAsset::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.String co.techxr.unity.model.GenericAsset::<imageUrl>k__BackingField
	String_t* ___U3CimageUrlU3Ek__BackingField_2;
};

// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::_converters
	ConcurrentDictionary_2_t847EC94864EAD4D4DAAC178360D815D61414FB0D* ____converters_2;
	// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_3;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.Metadata.JsonTypeInfo> System.Text.Json.JsonSerializerOptions::_classes
	ConcurrentDictionary_2_tBB3D7D3E921EC4D2A5836C85E459C1871641CB32* ____classes_5;
	// System.Text.Json.Serialization.Metadata.JsonTypeInfo System.Text.Json.JsonSerializerOptions::<_lastClass>k__BackingField
	JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36* ___U3C_lastClassU3Ek__BackingField_6;
	// System.Text.Json.Serialization.JsonSerializerContext System.Text.Json.JsonSerializerOptions::_context
	JsonSerializerContext_t1F6CFC5FBA85D0791A1EA249238EDC2B7410BD57* ____context_7;
	// System.Func`3<System.Type,System.Text.Json.JsonSerializerOptions,System.Text.Json.Serialization.Metadata.JsonTypeInfo> System.Text.Json.JsonSerializerOptions::_typeInfoCreationFunc
	Func_3_t80B18BCDC791D3FBC519B36E97931215F647CFD7* ____typeInfoCreationFunc_8;
	// System.Text.Json.Serialization.Metadata.MemberAccessor System.Text.Json.JsonSerializerOptions::_memberAccessorStrategy
	MemberAccessor_tB287B55E0A8EBD4AA3EBF99FBCA7F7AEF76347AC* ____memberAccessorStrategy_9;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonSerializerOptions::_dictionaryKeyPolicy
	JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* ____dictionaryKeyPolicy_10;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonSerializerOptions::_jsonPropertyNamingPolicy
	JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* ____jsonPropertyNamingPolicy_11;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonSerializerOptions::_readCommentHandling
	uint8_t ____readCommentHandling_12;
	// System.Text.Json.Serialization.ReferenceHandler System.Text.Json.JsonSerializerOptions::_referenceHandler
	ReferenceHandler_t1630C9ADF53E934E6EE593185A0B1C4CFCED6FD5* ____referenceHandler_13;
	// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonSerializerOptions::_encoder
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ____encoder_14;
	// System.Text.Json.Serialization.JsonIgnoreCondition System.Text.Json.JsonSerializerOptions::_defaultIgnoreCondition
	int32_t ____defaultIgnoreCondition_15;
	// System.Text.Json.Serialization.JsonNumberHandling System.Text.Json.JsonSerializerOptions::_numberHandling
	int32_t ____numberHandling_16;
	// System.Text.Json.Serialization.JsonUnknownTypeHandling System.Text.Json.JsonSerializerOptions::_unknownTypeHandling
	int32_t ____unknownTypeHandling_17;
	// System.Int32 System.Text.Json.JsonSerializerOptions::_defaultBufferSize
	int32_t ____defaultBufferSize_18;
	// System.Int32 System.Text.Json.JsonSerializerOptions::_maxDepth
	int32_t ____maxDepth_19;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_allowTrailingCommas
	bool ____allowTrailingCommas_20;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_haveTypesBeenCreated
	bool ____haveTypesBeenCreated_21;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreNullValues
	bool ____ignoreNullValues_22;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreReadOnlyProperties
	bool ____ignoreReadOnlyProperties_23;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreReadonlyFields
	bool ____ignoreReadonlyFields_24;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_includeFields
	bool ____includeFields_25;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_propertyNameCaseInsensitive
	bool ____propertyNameCaseInsensitive_26;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_writeIndented
	bool ____writeIndented_27;
	// System.Int32 System.Text.Json.JsonSerializerOptions::<EffectiveMaxDepth>k__BackingField
	int32_t ___U3CEffectiveMaxDepthU3Ek__BackingField_28;
	// System.Text.Json.Serialization.ReferenceHandlingStrategy System.Text.Json.JsonSerializerOptions::ReferenceHandlingStrategy
	int32_t ___ReferenceHandlingStrategy_29;
	// System.Boolean System.Text.Json.JsonSerializerOptions::<IsInitializedForReflectionSerializer>k__BackingField
	bool ___U3CIsInitializedForReflectionSerializerU3Ek__BackingField_30;
};

struct JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::s_defaultSimpleConverters
	Dictionary_2_t0483416E2612BB76C51CC68E3BC2D3CCAB6198D9* ___s_defaultSimpleConverters_0;
	// System.Text.Json.Serialization.JsonConverter[] System.Text.Json.JsonSerializerOptions::s_defaultFactoryConverters
	JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3* ___s_defaultFactoryConverters_1;
	// System.Text.Json.JsonSerializerOptions System.Text.Json.JsonSerializerOptions::s_defaultOptions
	JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___s_defaultOptions_4;
};

// co.techxr.unity.network.LicenseService
struct LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759  : public RuntimeObject
{
	// co.techxr.unity.network.INetworkService co.techxr.unity.network.LicenseService::networkService
	RuntimeObject* ___networkService_0;
};

// co.techxr.unity.model.LoginDto
struct LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664  : public RuntimeObject
{
	// System.String co.techxr.unity.model.LoginDto::<email>k__BackingField
	String_t* ___U3CemailU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.LoginDto::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_1;
};

// co.techxr.unity.model.LoginResponse
struct LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28  : public RuntimeObject
{
	// System.String co.techxr.unity.model.LoginResponse::<access_token>k__BackingField
	String_t* ___U3Caccess_tokenU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.LoginResponse::<token_type>k__BackingField
	String_t* ___U3Ctoken_typeU3Ek__BackingField_1;
	// System.String co.techxr.unity.model.LoginResponse::<refresh_token>k__BackingField
	String_t* ___U3Crefresh_tokenU3Ek__BackingField_2;
	// System.String co.techxr.unity.model.LoginResponse::<expires_in>k__BackingField
	String_t* ___U3Cexpires_inU3Ek__BackingField_3;
	// System.String co.techxr.unity.model.LoginResponse::<scope>k__BackingField
	String_t* ___U3CscopeU3Ek__BackingField_4;
	// co.techxr.unity.model.Profile co.techxr.unity.model.LoginResponse::<profile>k__BackingField
	Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* ___U3CprofileU3Ek__BackingField_5;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_8;
};

// co.techxr.unity.network.NetworkService
struct NetworkService_t64A888C1001819C42925F83CA29197037F62175C  : public RuntimeObject
{
};

struct NetworkService_t64A888C1001819C42925F83CA29197037F62175C_StaticFields
{
	// co.techxr.unity.model.LoginResponse co.techxr.unity.network.NetworkService::loginResponse
	LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse_0;
};

// co.techxr.unity.model.PasswordChangeDto
struct PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18  : public RuntimeObject
{
	// System.Int64 co.techxr.unity.model.PasswordChangeDto::<profileId>k__BackingField
	int64_t ___U3CprofileIdU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.PasswordChangeDto::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_1;
	// System.String co.techxr.unity.model.PasswordChangeDto::<confirmPassword>k__BackingField
	String_t* ___U3CconfirmPasswordU3Ek__BackingField_2;
};

// co.techxr.unity.model.PhoneDto
struct PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB  : public RuntimeObject
{
	// System.Int64 co.techxr.unity.model.PhoneDto::<id>k__BackingField
	int64_t ___U3CidU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.PhoneDto::<countryCode>k__BackingField
	String_t* ___U3CcountryCodeU3Ek__BackingField_1;
	// System.String co.techxr.unity.model.PhoneDto::<callStatus>k__BackingField
	String_t* ___U3CcallStatusU3Ek__BackingField_2;
	// System.String co.techxr.unity.model.PhoneDto::<whatsappStatus>k__BackingField
	String_t* ___U3CwhatsappStatusU3Ek__BackingField_3;
	// System.String co.techxr.unity.model.PhoneDto::<phoneNumber>k__BackingField
	String_t* ___U3CphoneNumberU3Ek__BackingField_4;
};

// co.techxr.unity.model.Profile
struct Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876  : public RuntimeObject
{
	// System.Int64 co.techxr.unity.model.Profile::<id>k__BackingField
	int64_t ___U3CidU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.Profile::<firstName>k__BackingField
	String_t* ___U3CfirstNameU3Ek__BackingField_1;
	// System.String co.techxr.unity.model.Profile::<lastName>k__BackingField
	String_t* ___U3ClastNameU3Ek__BackingField_2;
	// System.String co.techxr.unity.model.Profile::<email>k__BackingField
	String_t* ___U3CemailU3Ek__BackingField_3;
	// co.techxr.unity.model.PhoneDto co.techxr.unity.model.Profile::<phone>k__BackingField
	PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* ___U3CphoneU3Ek__BackingField_4;
	// System.String co.techxr.unity.model.Profile::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_5;
	// System.String co.techxr.unity.model.Profile::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_6;
	// System.String co.techxr.unity.model.Profile::<image>k__BackingField
	String_t* ___U3CimageU3Ek__BackingField_7;
	// System.Boolean co.techxr.unity.model.Profile::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> co.techxr.unity.model.Profile::<roles>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CrolesU3Ek__BackingField_9;
	// System.String co.techxr.unity.model.Profile::createdAt
	String_t* ___createdAt_10;
};

// RefreshTokenDto
struct RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77  : public RuntimeObject
{
	// System.String RefreshTokenDto::<refreshToken>k__BackingField
	String_t* ___U3CrefreshTokenU3Ek__BackingField_0;
};

// co.techxr.unity.model.SenseInstallDto
struct SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3  : public RuntimeObject
{
	// System.String co.techxr.unity.model.SenseInstallDto::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.SenseInstallDto::<deviceId>k__BackingField
	String_t* ___U3CdeviceIdU3Ek__BackingField_1;
	// System.String co.techxr.unity.model.SenseInstallDto::<os>k__BackingField
	String_t* ___U3CosU3Ek__BackingField_2;
	// System.String co.techxr.unity.model.SenseInstallDto::<hardware>k__BackingField
	String_t* ___U3ChardwareU3Ek__BackingField_3;
	// System.Int64 co.techxr.unity.model.SenseInstallDto::<applicationId>k__BackingField
	int64_t ___U3CapplicationIdU3Ek__BackingField_4;
	// System.String co.techxr.unity.model.SenseInstallDto::<installType>k__BackingField
	String_t* ___U3CinstallTypeU3Ek__BackingField_5;
	// System.Int32 co.techxr.unity.model.SenseInstallDto::<installIndex>k__BackingField
	int32_t ___U3CinstallIndexU3Ek__BackingField_6;
	// co.techxr.unity.model.ActivationDto co.techxr.unity.model.SenseInstallDto::<activation>k__BackingField
	ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* ___U3CactivationU3Ek__BackingField_7;
};

// co.techxr.unity.model.SpecificAsset
struct SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F  : public RuntimeObject
{
	// System.String co.techxr.unity.model.SpecificAsset::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.SpecificAsset::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.String co.techxr.unity.model.SpecificAsset::<imageUrl>k__BackingField
	String_t* ___U3CimageUrlU3Ek__BackingField_2;
	// System.String co.techxr.unity.model.SpecificAsset::<unityPlatform>k__BackingField
	String_t* ___U3CunityPlatformU3Ek__BackingField_3;
	// System.String co.techxr.unity.model.SpecificAsset::<url>k__BackingField
	String_t* ___U3CurlU3Ek__BackingField_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.UriBuilder
struct UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72  : public RuntimeObject
{
	// System.Boolean System.UriBuilder::_changed
	bool ____changed_0;
	// System.String System.UriBuilder::_fragment
	String_t* ____fragment_1;
	// System.String System.UriBuilder::_host
	String_t* ____host_2;
	// System.String System.UriBuilder::_password
	String_t* ____password_3;
	// System.String System.UriBuilder::_path
	String_t* ____path_4;
	// System.Int32 System.UriBuilder::_port
	int32_t ____port_5;
	// System.String System.UriBuilder::_query
	String_t* ____query_6;
	// System.String System.UriBuilder::_scheme
	String_t* ____scheme_7;
	// System.String System.UriBuilder::_schemeDelimiter
	String_t* ____schemeDelimiter_8;
	// System.Uri System.UriBuilder::_uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____uri_9;
	// System.String System.UriBuilder::_username
	String_t* ____username_10;
};

// co.techxr.unity.network.Url
struct Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015  : public RuntimeObject
{
};

struct Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields
{
	// System.Boolean co.techxr.unity.network.Url::EDITOR_MODE
	bool ___EDITOR_MODE_0;
	// co.techxr.unity.network.NetworkService co.techxr.unity.network.Url::_networkService
	NetworkService_t64A888C1001819C42925F83CA29197037F62175C* ____networkService_1;
	// System.String co.techxr.unity.network.Url::baseUrl
	String_t* ___baseUrl_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// co.techxr.unity.utils.XrUtil
struct XrUtil_t1B5D3943BD21C429F308686B51C2AD54EA1AB52A  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// co.techxr.unity.network.AssetService/<>c
struct U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2  : public RuntimeObject
{
};

struct U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_StaticFields
{
	// co.techxr.unity.network.AssetService/<>c co.techxr.unity.network.AssetService/<>c::<>9
	U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2* ___U3CU3E9_0;
	// System.Action`1<co.techxr.unity.network.INetworkService> co.techxr.unity.network.AssetService/<>c::<>9__5_0
	Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___U3CU3E9__5_0_1;
};

// co.techxr.unity.network.AssetService/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1  : public RuntimeObject
{
	// co.techxr.unity.network.AssetService co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::<>4__this
	AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* ___U3CU3E4__this_0;
	// co.techxr.unity.model.UnityPlatform co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::unityPlatform
	int32_t ___unityPlatform_1;
	// UnityEngine.Transform co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::parentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform_2;
	// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject> co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::successCallback
	UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* ___successCallback_3;
	// System.Action`1<co.techxr.unity.exceptions.XrException> co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::errorCallback
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback_4;
	// UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject> co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::downloadHandler
	UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* ___downloadHandler_5;
	// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject> co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::<>9__3
	UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* ___U3CU3E9__3_6;
};

// co.techxr.unity.network.AssetService/<>c__DisplayClass9_1
struct U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC  : public RuntimeObject
{
	// co.techxr.unity.model.SpecificAsset co.techxr.unity.network.AssetService/<>c__DisplayClass9_1::specificAsset
	SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* ___specificAsset_0;
	// co.techxr.unity.network.AssetService/<>c__DisplayClass9_0 co.techxr.unity.network.AssetService/<>c__DisplayClass9_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* ___CSU24U3CU3E8__locals1_1;
};

// co.techxr.unity.network.AssetService/<>c__DisplayClass9_2
struct U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13  : public RuntimeObject
{
	// System.String co.techxr.unity.network.AssetService/<>c__DisplayClass9_2::fullFilePath
	String_t* ___fullFilePath_0;
	// co.techxr.unity.network.AssetService/<>c__DisplayClass9_1 co.techxr.unity.network.AssetService/<>c__DisplayClass9_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* ___CSU24U3CU3E8__locals2_1;
};

// co.techxr.unity.network.AuthService/<>c
struct U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94  : public RuntimeObject
{
};

struct U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields
{
	// co.techxr.unity.network.AuthService/<>c co.techxr.unity.network.AuthService/<>c::<>9
	U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94* ___U3CU3E9_0;
	// System.Action`1<co.techxr.unity.network.INetworkService> co.techxr.unity.network.AuthService/<>c::<>9__12_0
	Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___U3CU3E9__12_0_1;
	// System.Action`1<co.techxr.unity.network.NetworkService2> co.techxr.unity.network.AuthService/<>c::<>9__12_1
	Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* ___U3CU3E9__12_1_2;
};

// co.techxr.unity.network.AuthService/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041  : public RuntimeObject
{
	// System.Boolean co.techxr.unity.network.AuthService/<>c__DisplayClass14_0::rememberMe
	bool ___rememberMe_0;
	// co.techxr.unity.network.AuthService co.techxr.unity.network.AuthService/<>c__DisplayClass14_0::<>4__this
	AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* ___U3CU3E4__this_1;
	// System.Action`1<co.techxr.unity.model.LoginResponse> co.techxr.unity.network.AuthService/<>c__DisplayClass14_0::successCallback
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback_2;
};

// co.techxr.unity.network.AuthService/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12  : public RuntimeObject
{
	// System.Action`1<co.techxr.unity.model.LoginResponse> co.techxr.unity.network.AuthService/<>c__DisplayClass18_0::successCallback
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback_0;
};

// co.techxr.unity.network.AuthService/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2  : public RuntimeObject
{
	// System.Action`1<co.techxr.unity.model.LoginResponse> co.techxr.unity.network.AuthService/<>c__DisplayClass22_0::successCallback
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback_0;
	// co.techxr.unity.network.AuthService co.techxr.unity.network.AuthService/<>c__DisplayClass22_0::<>4__this
	AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* ___U3CU3E4__this_1;
	// System.Action`1<co.techxr.unity.exceptions.XrException> co.techxr.unity.network.AuthService/<>c__DisplayClass22_0::errorCallback
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback_2;
};

// co.techxr.unity.network.AuthService/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600  : public RuntimeObject
{
	// co.techxr.unity.model.LoginResponse co.techxr.unity.network.AuthService/<>c__DisplayClass22_1::loginResponse
	LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse_0;
	// co.techxr.unity.network.AuthService/<>c__DisplayClass22_0 co.techxr.unity.network.AuthService/<>c__DisplayClass22_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* ___CSU24U3CU3E8__locals1_1;
};

// co.techxr.unity.network.FormUpload/FileParameter
struct FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D  : public RuntimeObject
{
	// System.Byte[] co.techxr.unity.network.FormUpload/FileParameter::<File>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CFileU3Ek__BackingField_0;
	// System.String co.techxr.unity.network.FormUpload/FileParameter::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_1;
	// System.String co.techxr.unity.network.FormUpload/FileParameter::<ContentType>k__BackingField
	String_t* ___U3CContentTypeU3Ek__BackingField_2;
};

// co.techxr.unity.network.LicenseService/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242  : public RuntimeObject
{
	// co.techxr.unity.network.LicenseService co.techxr.unity.network.LicenseService/<>c__DisplayClass11_0::<>4__this
	LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* ___U3CU3E4__this_0;
	// System.Action`1<co.techxr.unity.model.LoginResponse> co.techxr.unity.network.LicenseService/<>c__DisplayClass11_0::successCallback
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback_1;
};

// co.techxr.unity.network.LicenseService/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83  : public RuntimeObject
{
	// co.techxr.unity.network.LicenseService co.techxr.unity.network.LicenseService/<>c__DisplayClass8_0::<>4__this
	LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* ___U3CU3E4__this_0;
	// System.Action`1<co.techxr.unity.model.LoginResponse> co.techxr.unity.network.LicenseService/<>c__DisplayClass8_0::successCallback
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback_1;
};

// co.techxr.unity.network.NetworkService2/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6  : public RuntimeObject
{
	// System.Action`1<co.techxr.unity.model.LoginResponse> co.techxr.unity.network.NetworkService2/<>c__DisplayClass17_0::successCallback
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback_0;
};

// co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30
struct U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86  : public RuntimeObject
{
	// System.Int32 co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::bundleUrl
	String_t* ___bundleUrl_2;
	// System.String co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::filePath
	String_t* ___filePath_3;
	// System.Action`1<System.String> co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::callback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback_4;
	// System.Action`1<co.techxr.unity.exceptions.XrException> co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::errorCallback
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback_5;
	// co.techxr.unity.network.NetworkService2 co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::<>4__this
	NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* ___U3CU3E4__this_6;
	// UnityEngine.Networking.UnityWebRequest co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::<www>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__1_7;
};

// co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27
struct U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33  : public RuntimeObject
{
	// System.Int32 co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::bundleUrl
	String_t* ___bundleUrl_2;
	// UnityEngine.Transform co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::parentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform_3;
	// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject> co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::callback
	UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* ___callback_4;
	// System.Action`1<co.techxr.unity.exceptions.XrException> co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::errorCallback
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback_5;
	// UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject> co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::downloadHandler
	UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* ___downloadHandler_6;
	// co.techxr.unity.network.NetworkService2 co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::<>4__this
	NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* ___U3CU3E4__this_7;
	// UnityEngine.Networking.UnityWebRequest co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::<www>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__1_8;
	// co.techxr.unity.exceptions.XrException co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::<xrException>5__2
	XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___U3CxrExceptionU3E5__2_9;
	// UnityEngine.AssetBundle co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::<bundle>5__3
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___U3CbundleU3E5__3_10;
	// UnityEngine.GameObject co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::<arObject>5__4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CarObjectU3E5__4_11;
};

// co.techxr.unity.network.Url/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B  : public RuntimeObject
{
	// System.Action`1<co.techxr.unity.network.INetworkService> co.techxr.unity.network.Url/<>c__DisplayClass7_0::callback
	Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___callback_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
struct Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_10;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_4;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_5;
	// System.Net.Cache.RequestCachePolicy System.Net.WebRequest::m_CachePolicy
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___m_CachePolicy_6;
	// System.Net.Cache.RequestCacheProtocol System.Net.WebRequest::m_CacheProtocol
	RequestCacheProtocol_t43C1AC170194874A0C0B0D3B8BE9EABFB613DF85* ___m_CacheProtocol_7;
	// System.Net.Cache.RequestCacheBinding System.Net.WebRequest::m_CacheBinding
	RequestCacheBinding_t18F3F4FF8D0F77E86C2C666CEE7FD48A80C042EE* ___m_CacheBinding_8;
};

struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_StaticFields
{
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___s_PrefixList_1;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_2;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_t644DC21212BC432819522EDA395EB4562BE2CC47* ___s_DefaultTimerQueue_3;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E* ___webRequestCreate_9;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_11;
};

// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Boolean System.Net.WebResponse::m_IsFromCache
	bool ___m_IsFromCache_1;
};

// System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 
{
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;
};
// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_pinvoke
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_com
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9  : public WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B
{
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___requestUri_12;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___actualUri_13;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_14;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_15;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_16;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___certificates_17;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_18;
	// System.Boolean System.Net.HttpWebRequest::haveContentLength
	bool ___haveContentLength_19;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_20;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9* ___continueDelegate_21;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ___cookieContainer_22;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	RuntimeObject* ___credentials_23;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_24;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_25;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___webHeaders_26;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_27;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_28;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_29;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_30;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_31;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_32;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_33;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_34;
	// System.Version System.Net.HttpWebRequest::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_35;
	// System.Boolean System.Net.HttpWebRequest::force_version
	bool ___force_version_36;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___actualVersion_37;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_38;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_39;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29* ___servicePoint_40;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_41;
	// System.Int32 System.Net.HttpWebRequest::continueTimeout
	int32_t ___continueTimeout_42;
	// System.Net.WebRequestStream System.Net.HttpWebRequest::writeStream
	WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB* ___writeStream_43;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* ___webResponse_44;
	// System.Net.WebCompletionSource System.Net.HttpWebRequest::responseTask
	WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5* ___responseTask_45;
	// System.Net.WebOperation System.Net.HttpWebRequest::currentOperation
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___currentOperation_46;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_47;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_48;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_49;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_50;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_51;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject* ___locker_52;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_53;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_54;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_58;
	// Mono.Net.Security.MobileTlsProvider System.Net.HttpWebRequest::tlsProvider
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___tlsProvider_59;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::tlsSettings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___tlsSettings_60;
	// System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::certValidationCallback
	ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F* ___certValidationCallback_61;
	// System.Boolean System.Net.HttpWebRequest::hostHasPort
	bool ___hostHasPort_62;
	// System.Uri System.Net.HttpWebRequest::hostUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___hostUri_63;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::auth_state
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___auth_state_64;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::proxy_auth_state
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___proxy_auth_state_65;
	// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task> System.Net.HttpWebRequest::ResendContentFactory
	Func_2_t378757FF082427448349A80CC63683B50DA787D3* ___ResendContentFactory_66;
	// System.Boolean System.Net.HttpWebRequest::<ThrowOnError>k__BackingField
	bool ___U3CThrowOnErrorU3Ek__BackingField_67;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_68;
};

struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_StaticFields
{
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_55;
	// System.Int32 System.Net.HttpWebRequest::defaultMaximumErrorResponseLength
	int32_t ___defaultMaximumErrorResponseLength_56;
	// System.Net.Cache.RequestCachePolicy System.Net.HttpWebRequest::defaultCachePolicy
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___defaultCachePolicy_57;
};

// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A  : public WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682
{
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri_2;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___webHeaders_3;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608* ___cookieCollection_4;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_5;
	// System.Version System.Net.HttpWebResponse::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_6;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_7;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_8;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_9;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_10;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ___cookie_container_11;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_12;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_13;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8  : public NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7
{
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_CommonHeaders_12;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_13;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___m_InnerCollection_16;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_17;
};

struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8_StaticFields
{
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tD651971044220ED52EACB30E89A49178FA32D91F* ___HInfo_11;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_CommonHeaderNames_14;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___s_CommonHeaderHints_15;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HttpTrimCharacters_18;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t8D79A380C46398F9D1F442FDEE0A27F77B7D1B4C* ___RfcCharMap_19;
};

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// co.techxr.unity.exceptions.XrException
struct XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F  : public Exception_t
{
	// System.Int32 co.techxr.unity.exceptions.XrException::<errorCode>k__BackingField
	int32_t ___U3CerrorCodeU3Ek__BackingField_18;
	// System.String co.techxr.unity.exceptions.XrException::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_19;
};

// System.Action`1<co.techxr.unity.model.ActivationDto>
struct Action_1_tA8035876F91F5C6A5ABAE8A302E57B519C1DCDA9  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.model.ApplicationDto>
struct Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.network.INetworkService>
struct Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.model.LoginResponse>
struct Action_1_t364C94423BE312DFF449DB8389178799569DCF01  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.network.NetworkService2>
struct Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.model.PhoneDto>
struct Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.model.Profile>
struct Action_1_t21368F37D8368081C267784197A861AE2EF93602  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.model.SenseInstallDto>
struct Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.model.SpecificAsset>
struct Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.exceptions.XrException>
struct Action_1_t77330DAB4B6364644857E237915461B112A9D589  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>
struct UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject>
struct UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// co.techxr.unity.network.addService
struct addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.Net.WebException
struct WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.Net.WebExceptionStatus System.Net.WebException::m_Status
	int32_t ___m_Status_18;
	// System.Net.WebResponse System.Net.WebException::m_Response
	WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* ___m_Response_19;
	// System.Net.WebExceptionInternalStatus System.Net.WebException::m_InternalStatus
	int32_t ___m_InternalStatus_20;
};

// co.techxr.unity.network.NetworkService2
struct NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String co.techxr.unity.network.NetworkService2::contentTypeMultipart
	String_t* ___contentTypeMultipart_8;
};

struct NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields
{
	// co.techxr.unity.network.NetworkService2 co.techxr.unity.network.NetworkService2::instance
	NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* ___instance_4;
	// System.Action`1<co.techxr.unity.network.NetworkService2> co.techxr.unity.network.NetworkService2::networkServiceListener
	Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* ___networkServiceListener_5;
	// co.techxr.unity.model.LoginResponse co.techxr.unity.network.NetworkService2::loginResponse
	LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Enum::TryParse<System.Int32Enum>(System.String,System.Boolean,TEnum&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_TryParse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFA292137760937B8EA617409A1F7480E1A5C105D_gshared (String_t* ___value0, bool ___ignoreCase1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.AssetBundle::LoadAsset<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetBundle_LoadAsset_TisRuntimeObject_m7F36E1C08FC32ADB47C34513522D958FA6E09C47_gshared (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m777839BF9CB9F96B081106B47202D06FB35326CA_gshared_inline (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.String System.Text.Json.JsonSerializer::Serialize<System.Object>(TValue,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_gshared (RuntimeObject* ___value0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method) ;
// TValue System.Text.Json.JsonSerializer::Deserialize<System.Object>(System.String,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializer_Deserialize_TisRuntimeObject_m83DA6E6B82EAC695F47C9EAA9383BF4578429047_gshared (String_t* ___json0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.NetworkService2::post<System.Object>(System.String,System.Object,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<T>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2_post_TisRuntimeObject_mD81D8EE9F63EEDA4B544C4A879E84DE1694A3EE5_gshared (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, String_t* ___url0, RuntimeObject* ___body1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___param2, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback3, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___error4, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void RefreshTokenDto::set_refreshToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RefreshTokenDto_set_refreshToken_m1334C423AC14D9AD7365007C00CE605B9CF257E4_inline (RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.exceptions.XrException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.String co.techxr.unity.utils.XrUtil::getUnityPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XrUtil_getUnityPlatform_mA8E1283C059F21E0889C89C12727CED3A04DE44B (const RuntimeMethod* method) ;
// System.Boolean System.Enum::TryParse<co.techxr.unity.model.UnityPlatform>(System.String,System.Boolean,TEnum&)
inline bool Enum_TryParse_TisUnityPlatform_t000394AF4778281B6308B4CF1A5C670E1C09CB4B_m331E8732943A8F84EB322103FD1F49596534E4D6 (String_t* ___value0, bool ___ignoreCase1, int32_t* ___result2, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, bool, int32_t*, const RuntimeMethod*))Enum_TryParse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFA292137760937B8EA617409A1F7480E1A5C105D_gshared)(___value0, ___ignoreCase1, ___result2, method);
}
// System.Void System.Action`1<co.techxr.unity.network.INetworkService>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4A759E7D2E536D5D645B72DEC61E46C2A9DDACAD (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void co.techxr.unity.network.Url::getNetworkService(System.Action`1<co.techxr.unity.network.INetworkService>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url_getNetworkService_mD9B700E68A0FB4DEA28C21AC907C2151C342715B (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___callback0, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.network.NetworkService2>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m05417F262A16C5381FECC6092E6A32417372ABC5 (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void co.techxr.unity.network.Url::getNetworkService2(System.Action`1<co.techxr.unity.network.NetworkService2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url_getNetworkService2_m2D582C3E3B0B089862A65852F39D378428A5380C (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* ___callback0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AssetService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetService__ctor_m095BDADC9B63F80CAFA8755BB2DA1F435856CC7E (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<co.techxr.unity.exceptions.XrException>::Invoke(T)
inline void Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline (Action_1_t77330DAB4B6364644857E237915461B112A9D589* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t77330DAB4B6364644857E237915461B112A9D589*, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m070F33ABC0514E0025B3BEF2D1318FA46C242522 (U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.SpecificAsset>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m53D16BAA9044A859D14FCF9ABE71E3CA4418EA7E (Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void co.techxr.unity.network.AssetService::getPlatformSpecificAsset(System.String,System.String,System.Action`1<co.techxr.unity.model.SpecificAsset>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetService_getPlatformSpecificAsset_m1435508F5B8BA3D01B4E7369748A46876471440A (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, String_t* ___genericAssetId0, String_t* ___unityPlatform1, Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4* ___successCallback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String[] UnityEngine.AssetBundle::GetAllAssetNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AssetBundle_GetAllAssetNames_m44504DB9E055412F0DF2071A769A243219708CC3 (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAllAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* AssetBundle_LoadAllAssets_m00E63EFF07B8E986754B7AFB3B8566B2B99C2241 (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, const RuntimeMethod* method) ;
// T UnityEngine.AssetBundle::LoadAsset<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063 (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___name0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (AssetBundle_tB38418819A49060CD738CB21541649340F082943*, String_t*, const RuntimeMethod*))AssetBundle_LoadAsset_TisRuntimeObject_m7F36E1C08FC32ADB47C34513522D958FA6E09C47_gshared)(__this, ___name0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AssetService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC32A3004CB10B772C1E4598A03113DF192DC77CE (U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AssetService/<>c__DisplayClass9_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_1__ctor_mADE755D082D0ABBF98F53AF53359F485033EE24D (U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AssetService/<>c__DisplayClass9_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_2__ctor_m78C5F7C85016936D33A6AE4FA8CB8FB7B872A483 (U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.model.SpecificAsset::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_id_m40DDF72D037CA4F5391A99CD3BB100BBC6700F8C_inline (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.network.AssetService::getFullPathName(System.String,co.techxr.unity.model.UnityPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssetService_getFullPathName_mD0F6F6E4FB26C30965731809C1878C87DA9D38B8 (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, String_t* ___specificAssetId0, int32_t ___platform1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>::Invoke(T0)
inline void UnityAction_1_Invoke_mC0B03E675E5A61F6BDCA0F469FA5CCF9C4E52159_inline (UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))UnityAction_1_Invoke_m777839BF9CB9F96B081106B47202D06FB35326CA_gshared_inline)(__this, ___arg00, method);
}
// System.String co.techxr.unity.model.SpecificAsset::get_displayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_displayName_mC46DA27301E3A69D0F39023E860B0A144F684542_inline (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.model.SpecificAsset::get_url()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_url_mE22B4F47D24536C1BB863D1D0787F2F21F40F30B_inline (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<co.techxr.unity.exceptions.XrException>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696 (Action_1_t77330DAB4B6364644857E237915461B112A9D589* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t77330DAB4B6364644857E237915461B112A9D589*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m4AAE7BBE595D82E15A5A774EEB588EA82A63C16E (UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void co.techxr.unity.network.AssetService::DownloadAssetBundle(System.String,UnityEngine.Transform,UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>,System.Action`1<co.techxr.unity.exceptions.XrException>,UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetService_DownloadAssetBundle_mC70AC5F76BFE862B46A8096511287A8E5B3ABA46 (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, String_t* ___bundleUrl0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform1, UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* ___successCallback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* ___downloadHandler4, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AuthService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService__ctor_m241C85A6EFC49D437426C239A12BE25D1EB983B3 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m2D12678CE85612B0BF15B912D630B925D0905E26 (U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041* __this, const RuntimeMethod* method) ;
// System.String System.Text.Json.JsonSerializer::Serialize<co.techxr.unity.model.LoginDto>(TValue,System.Text.Json.JsonSerializerOptions)
inline String_t* JsonSerializer_Serialize_TisLoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_mBB1C20F884C6029FBC4AAAEBF4A67EF9B3337585 (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* ___value0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_gshared)(___value0, ___options1, method);
}
// TValue System.Text.Json.JsonSerializer::Deserialize<co.techxr.unity.model.LoginDto>(System.String,System.Text.Json.JsonSerializerOptions)
inline LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* JsonSerializer_Deserialize_TisLoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_m63846E5C9FC941650B638B9A315F79B955714737 (String_t* ___json0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* (*) (String_t*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m83DA6E6B82EAC695F47C9EAA9383BF4578429047_gshared)(___json0, ___options1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.LoginResponse>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20 (Action_1_t364C94423BE312DFF449DB8389178799569DCF01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.Text.Json.JsonSerializer::Serialize<co.techxr.unity.model.LoginResponse>(TValue,System.Text.Json.JsonSerializerOptions)
inline String_t* JsonSerializer_Serialize_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m1C42A075CE5B8C5A706349A658B4E8E8F51633C5 (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___value0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_gshared)(___value0, ___options1, method);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mE4EFA24A7C94B9BB12754860EC8E2B6599C91F96 (U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12* __this, const RuntimeMethod* method) ;
// System.String System.Text.Json.JsonSerializer::Serialize<co.techxr.unity.model.PhoneDto>(TValue,System.Text.Json.JsonSerializerOptions)
inline String_t* JsonSerializer_Serialize_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_mE5CD45451DE294870579A0531394F1ED2B8AA9DE (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* ___value0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_gshared)(___value0, ___options1, method);
}
// TValue System.Text.Json.JsonSerializer::Deserialize<co.techxr.unity.model.PhoneDto>(System.String,System.Text.Json.JsonSerializerOptions)
inline PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* JsonSerializer_Deserialize_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_mFAFF22CC0B36D71C60AF85D9CB3DFC7A44368CA6 (String_t* ___json0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* (*) (String_t*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m83DA6E6B82EAC695F47C9EAA9383BF4578429047_gshared)(___json0, ___options1, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mF5FB854ACB615158FE7E70DDBCB226E94BF305E5 (U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass22_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1__ctor_mDEF4E520D8A9B44E35A931DF6AD4BCE5DC2941DC (U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// TValue System.Text.Json.JsonSerializer::Deserialize<co.techxr.unity.model.LoginResponse>(System.String,System.Text.Json.JsonSerializerOptions)
inline LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* JsonSerializer_Deserialize_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_mDBCD3B445F21BAC524948B1BB06E9FBFD66E498A (String_t* ___json0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* (*) (String_t*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m83DA6E6B82EAC695F47C9EAA9383BF4578429047_gshared)(___json0, ___options1, method);
}
// co.techxr.unity.model.Profile co.techxr.unity.model.LoginResponse::get_profile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* LoginResponse_get_profile_m8BB9DBFBB18D3C30F089A9F53C03DD893E9DE428_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) ;
// System.Int64 co.techxr.unity.model.Profile::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Profile_get_id_m40667EDC77D22F4C06D40195F80E348748B3D269_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.Profile>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m32CEB8445399820BBF3EBCCFC1B6E1D41A07455C (Action_1_t21368F37D8368081C267784197A861AE2EF93602* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t21368F37D8368081C267784197A861AE2EF93602*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void co.techxr.unity.network.AuthService::getProfileById(System.Int64,System.Action`1<co.techxr.unity.model.Profile>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_getProfileById_mAA762764B54C2893226A7D9E8191269D15F93B8C (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, int64_t ___id0, Action_1_t21368F37D8368081C267784197A861AE2EF93602* ___successCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AuthService::relogin(System.Exception,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_relogin_m1ACF936E3BD8E743DE5CAE28F0B6C4CD7574BB97 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, Exception_t* ___e0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback1, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AuthService::logout(System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_logout_mD9B0E638150B46B301C474E68655FA573D1F6C76 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AuthService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF51F0663ADB82DD74F2FE0BAE82C63CF536ED512 (U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.AuthService::saveLoginResponse(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_saveLoginResponse_mB64BFC4BFDADCE824A291C03AD17B92CFD15B31B (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.LoginResponse>::Invoke(T)
inline void Action_1_Invoke_m614B7318DD7AE0808373F5AFCEE919022F2E976F_inline (Action_1_t364C94423BE312DFF449DB8389178799569DCF01* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.Byte[] co.techxr.unity.network.FormUpload::GetMultipartFormData(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FormUpload_GetMultipartFormData_m88E400FA7A4D59713166692942537BE7CE0BCDE5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___postParameters0, String_t* ___boundary1, const RuntimeMethod* method) ;
// System.Net.HttpWebResponse co.techxr.unity.network.FormUpload::PostForm(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* FormUpload_PostForm_m2DE009B1C88230997ED57DCE68ACA54EBD2A6554 (String_t* ___postUrl0, String_t* ___userAgent1, String_t* ___contentType2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___formData3, const RuntimeMethod* method) ;
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C (String_t* ___requestUriString0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.NetworkService::addAuthorizationHeader(System.Net.HttpWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService_addAuthorizationHeader_mFD230580B00352C6945EBD4331F37748E2EDA849 (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request0, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Net.HttpWebRequest::set_UserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_UserAgent_mF44CBC379376E5598E1C73FD7F1E3B949383F834 (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.CookieContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieContainer__ctor_mDFB99605E29E20FC8F2379AB3F4F56FA9B67834F (CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String co.techxr.unity.network.FormUpload/FileParameter::get_FileName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FileParameter_get_FileName_m1E05B51AC97239BC65696B3A074ABE7784EC335B_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.network.FormUpload/FileParameter::get_ContentType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FileParameter_get_ContentType_m95B93C7E2AD50275789F15C87CB446D5FEB0D27F_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Byte[] co.techxr.unity.network.FormUpload/FileParameter::get_File()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FileParameter_get_File_m4071647FDFA238706C1A859B57AA07CDDA87F561_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.FormUpload/FileParameter::.ctor(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileParameter__ctor_m7B42E37D39E3696F9EAD5F7CFF5166B51C267E99 (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___file0, String_t* ___filename1, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.FormUpload/FileParameter::.ctor(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileParameter__ctor_mDD1854F8DB25932B7DDF68565F7C5E4D379D6A2C (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___file0, String_t* ___filename1, String_t* ___contenttype2, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.FormUpload/FileParameter::set_File(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileParameter_set_File_mCC1203F6E4F5DA5FE1D7D276ABB3E64A9E23EBA4_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.FormUpload/FileParameter::set_FileName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileParameter_set_FileName_mAA2377EF759FB804D7A5FA1EA50BA3C24298DDB8_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.FormUpload/FileParameter::set_ContentType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileParameter_set_ContentType_m9B1C99EFAE8620446518813743BBB63BD683A777_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.LicenseService/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m98E4C2858738E16D057A2B7B72D2BB6DF49D5BA1 (U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC (const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.LicenseService/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m59FF43A9E75730711B71D1DAFCEC6FD297BFB7F5 (U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.ApplicationDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationDto__ctor_mC7FA1590FC90B43BF95F9CFB67A1160DD7E3215E (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.ApplicationDto::set_key(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApplicationDto_set_key_m289AA9972333CA7126EAD263ECAE38079B65B271_inline (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, String_t* ___value0, const RuntimeMethod* method) ;
// co.techxr.unity.exceptions.XrException co.techxr.unity.network.NetworkService::getErrorMessage(System.Net.WebException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* NetworkService_getErrorMessage_mADD725D52A361AB02B1F6BF4B3D1FA2C24354C8D (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* ___ex0, const RuntimeMethod* method) ;
// System.String co.techxr.unity.model.LoginResponse::get_access_token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.network.NetworkService::getFullUrl(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkService_getFullUrl_mD893BFC579EBBC01C3A5E8E7699C328708F29FF1 (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, String_t* ___partUrl0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___param1, const RuntimeMethod* method) ;
// System.String System.Text.Json.JsonSerializer::Serialize<System.Object>(TValue,System.Text.Json.JsonSerializerOptions)
inline String_t* JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE (RuntimeObject* ___value0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_gshared)(___value0, ___options1, method);
}
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.String co.techxr.unity.network.Url::getFullUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Url_getFullUrl_m2414AB139380C1EA5E6E40F476F07551B06D32FF (String_t* ___partUrl0, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder__ctor_m782D0160E73CC61448E17FF5AEFAEA22B3BAC145 (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, String_t* ___uri0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
inline int32_t Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
inline Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22 (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 (*) (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::get_Current()
inline String_t* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283 (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Net.HttpWebResponse co.techxr.unity.network.NetworkService::getHttpResponse(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* NetworkService_getHttpResponse_m61E46D002A075C26BE419EBA29406E6A19390DCD (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, String_t* ___url0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___param1, bool ___isDelete2, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Net.WebResponse System.Net.WebException::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.UnityWebRequest::GenerateBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UnityWebRequest_GenerateBoundary_mD854316C5BAE94BF1B09607A36F112D343208241 (const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.network.NetworkService2>::Invoke(T)
inline void Action_1_Invoke_mF0C1FA03AB8CD3186D201207F21E8038CC5F1295_inline (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* __this, NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*, NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.NetworkService2/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mDEA3A6DB5FD2440E6B479842CF02C11E14370191 (U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.model.LoginResponse::get_refresh_token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoginResponse_get_refresh_token_m47C440EAF8140EF4968EF478A48800CDEFA4669A_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) ;
// System.Void RefreshTokenDto::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshTokenDto__ctor_mECDCF902FA33E43CA0FBB80F97AA769CE724362B (RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77* __this, String_t* ___token0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.NetworkService2::post<co.techxr.unity.model.LoginResponse>(System.String,System.Object,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<T>,System.Action`1<co.techxr.unity.exceptions.XrException>)
inline void NetworkService2_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_mE8F41B282731770CCCB40ACD7A6434E0264D04DC (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, String_t* ___url0, RuntimeObject* ___body1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___param2, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___callback3, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___error4, const RuntimeMethod* method)
{
	((  void (*) (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5*, String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, Action_1_t77330DAB4B6364644857E237915461B112A9D589*, const RuntimeMethod*))NetworkService2_post_TisRuntimeObject_mD81D8EE9F63EEDA4B544C4A879E84DE1694A3EE5_gshared)(__this, ___url0, ___body1, ___param2, ___callback3, ___error4, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator co.techxr.unity.network.NetworkService2::GetDisplayBundleRoutine(System.String,UnityEngine.Transform,UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>,System.Action`1<co.techxr.unity.exceptions.XrException>,UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkService2_GetDisplayBundleRoutine_mB1672FCEA37FC8F92D464583E09CC8A9887BB4A8 (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, String_t* ___bundleUrl0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform1, UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* ___callback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* ___downloadHandler4, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDisplayBundleRoutineU3Ed__27__ctor_m28C699FC078F4A402172F0AB19FD8F23F6CEFC9E (U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AssetBundle_LoadAsset_m25926A405F3AB79A4DF2447F23A09957EC7F063E (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, bool ___unloadAllLoadedObjects0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator co.techxr.unity.network.NetworkService2::DownloadToFile(System.String,System.String,System.Action`1<System.String>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkService2_DownloadToFile_m7C5F2A810969BBEA7D8BEE3980AAF3B44725534E (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, String_t* ___bundleUrl0, String_t* ___filePath1, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadToFileU3Ed__30__ctor_m31C2B90641756366AD3C8B6597DAA32F13F12716 (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundle_LoadFromFile_mAFD7B0E8F0A0A88E9BB60180EBA0A99B8B3F2629 (String_t* ___path0, const RuntimeMethod* method) ;
// UnityEngine.GameObject co.techxr.unity.network.NetworkService2::GetGameObject(UnityEngine.AssetBundle,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* NetworkService2_GetGameObject_m43146F132D7EBEB4FA29C219F2698312EBD6BF43 (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___bundle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAssetBundle_GetAssetBundle_mA08565578A5E7A07140D4C6327FD9B51E14D99F9 (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.exceptions.XrException::set_errorCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XrException_set_errorCode_m2868F9CCCF53990DF0729B2EE637A0280338658F_inline (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* DownloadHandlerAssetBundle_GetContent_m9E279B7987A8ADAB0D0B441BAB8C5A61C7DEB7C4 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.exceptions.XrException::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrException__ctor_m1017F1AF736750DCB0B6F37E1D311AC8D7EAAD91 (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, String_t* ___msg0, int32_t ___code1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadToFileU3Ed__30_U3CU3Em__Finally1_mDF7719A1D6D5E26404714E5737160E943DEBBB79 (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadToFileU3Ed__30_System_IDisposable_Dispose_m284864A5A300ECF8E333BEBC314DF4D952503588 (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerFile::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerFile__ctor_m4AC24ABF5B27F08BFA648A14B7A4BBC538A23102 (DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.NetworkService2::add_networkServiceListener(System.Action`1<co.techxr.unity.network.NetworkService2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2_add_networkServiceListener_mEC88B15359925746BA23B867AF7F038D2171EFF9 (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.Url/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m382210D2440785B762A72B777E9F85E0792E757D (U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.network.INetworkService>::Invoke(T)
inline void Action_1_Invoke_mE0F7D7153EEB8744CD8C91E451F67B0C69EF4959_inline (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void co.techxr.unity.network.NetworkService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService__ctor_m9C6B18432700CA0330024C43B8FEC3E311CCD3EF (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.exceptions.XrException::set_message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XrException_set_message_m36363A118F69E297F700D0398BC96339183E61C8_inline (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String co.techxr.unity.exceptions.XrException::get_message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String RefreshTokenDto::get_refreshToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RefreshTokenDto_get_refreshToken_m102DF4E85397073C49F40996598D98375124216C (RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CrefreshTokenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void RefreshTokenDto::set_refreshToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshTokenDto_set_refreshToken_m1334C423AC14D9AD7365007C00CE605B9CF257E4 (RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CrefreshTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrefreshTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void RefreshTokenDto::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshTokenDto__ctor_mECDCF902FA33E43CA0FBB80F97AA769CE724362B (RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77* __this, String_t* ___token0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___token0;
		RefreshTokenDto_set_refreshToken_m1334C423AC14D9AD7365007C00CE605B9CF257E4_inline(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String co.techxr.unity.utils.XrUtil::getUnityPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XrUtil_getUnityPlatform_mA8E1283C059F21E0889C89C12727CED3A04DE44B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62AFB344FB9C41BC509244C3C426CFD503F0393B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C96C41BD07C11F0ACBE37A31E2BB00E2CA0E184);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F82474B00F78372BB6071B195794C5F8157BF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB631F0C21B3B5EBBBBAEF7503C1D7830699CA52F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA4C5FF8A68887C1283B169941A6090D7B6C606B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0053;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_006b;
			}
			case 4:
			{
				goto IL_006b;
			}
			case 5:
			{
				goto IL_006b;
			}
			case 6:
			{
				goto IL_006b;
			}
			case 7:
			{
				goto IL_005b;
			}
			case 8:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0035;
	}

IL_0035:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)11))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_003c;
	}

IL_003c:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_006b;
	}

IL_0043:
	{
		V_2 = _stringLiteral6C96C41BD07C11F0ACBE37A31E2BB00E2CA0E184;
		goto IL_0085;
	}

IL_004b:
	{
		V_2 = _stringLiteralFA4C5FF8A68887C1283B169941A6090D7B6C606B;
		goto IL_0085;
	}

IL_0053:
	{
		V_2 = _stringLiteral6F82474B00F78372BB6071B195794C5F8157BF6E;
		goto IL_0085;
	}

IL_005b:
	{
		V_2 = _stringLiteralB631F0C21B3B5EBBBBAEF7503C1D7830699CA52F;
		goto IL_0085;
	}

IL_0063:
	{
		V_2 = _stringLiteral62AFB344FB9C41BC509244C3C426CFD503F0393B;
		goto IL_0085;
	}

IL_006b:
	{
		int32_t L_5;
		L_5 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D1CCF1434CC33294832B3823251D2A1C7D47288)), L_7, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_9 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrUtil_getUnityPlatform_mA8E1283C059F21E0889C89C12727CED3A04DE44B_RuntimeMethod_var)));
	}

IL_0085:
	{
		String_t* L_10 = V_2;
		return L_10;
	}
}
// co.techxr.unity.model.UnityPlatform co.techxr.unity.utils.XrUtil::GetUnityPlatformEnum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XrUtil_GetUnityPlatformEnum_m3094EBA198E019509D923C3E0DED44B5BEE57E42 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_TryParse_TisUnityPlatform_t000394AF4778281B6308B4CF1A5C670E1C09CB4B_m331E8732943A8F84EB322103FD1F49596534E4D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0;
		L_0 = XrUtil_getUnityPlatform_mA8E1283C059F21E0889C89C12727CED3A04DE44B(NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Enum_TryParse_TisUnityPlatform_t000394AF4778281B6308B4CF1A5C670E1C09CB4B_m331E8732943A8F84EB322103FD1F49596534E4D6(L_1, (bool)1, (&V_1), Enum_TryParse_TisUnityPlatform_t000394AF4778281B6308B4CF1A5C670E1C09CB4B_m331E8732943A8F84EB322103FD1F49596534E4D6_RuntimeMethod_var);
		int32_t L_3 = V_1;
		V_2 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_4 = V_2;
		return L_4;
	}
}
// System.Void co.techxr.unity.utils.XrUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrUtil__ctor_m171F5C6924EE0AD70EEBA8F713519791D3EAC2D0 (XrUtil_t1B5D3943BD21C429F308686B51C2AD54EA1AB52A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AssetService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetService__ctor_m095BDADC9B63F80CAFA8755BB2DA1F435856CC7E (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetService_U3C_ctorU3Eb__5_1_m69DB396BCCC0B620E71859068911456EBF32AA01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__5_0_m149058CFA40BC2B3D3F1D35EB58CE322CAB39F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7748B8AF7AFB1AC82972664982AFC5A4D51A2125);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* G_B2_0 = NULL;
	Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* G_B1_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var);
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_0 = ((U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var);
		U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2* L_2 = ((U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_3 = (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52*)il2cpp_codegen_object_new(Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m4A759E7D2E536D5D645B72DEC61E46C2A9DDACAD(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__5_0_m149058CFA40BC2B3D3F1D35EB58CE322CAB39F27_RuntimeMethod_var), NULL);
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_4 = L_3;
		((U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		Url_getNetworkService_mD9B700E68A0FB4DEA28C21AC907C2151C342715B(G_B2_0, NULL);
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_5 = (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*)il2cpp_codegen_object_new(Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m05417F262A16C5381FECC6092E6A32417372ABC5(L_5, __this, (intptr_t)((void*)AssetService_U3C_ctorU3Eb__5_1_m69DB396BCCC0B620E71859068911456EBF32AA01_RuntimeMethod_var), NULL);
		Url_getNetworkService2_m2D582C3E3B0B089862A65852F39D378428A5380C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7748B8AF7AFB1AC82972664982AFC5A4D51A2125, NULL);
		return;
	}
}
// co.techxr.unity.network.IAssetService co.techxr.unity.network.AssetService::getInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetService_getInstance_mAADAB223631A34D9A3E3E5592B9A8A4D412992E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* L_0 = ((AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields*)il2cpp_codegen_static_fields_for(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var))->___instance_2;
		V_0 = (bool)((((RuntimeObject*)(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* L_2 = (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD*)il2cpp_codegen_object_new(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AssetService__ctor_m095BDADC9B63F80CAFA8755BB2DA1F435856CC7E(L_2, NULL);
		((AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields*)il2cpp_codegen_static_fields_for(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var))->___instance_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields*)il2cpp_codegen_static_fields_for(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var))->___instance_2), (void*)L_2);
	}

IL_0017:
	{
		AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* L_3 = ((AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields*)il2cpp_codegen_static_fields_for(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var))->___instance_2;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void co.techxr.unity.network.AssetService::getPlatformSpecificAsset(System.String,System.String,System.Action`1<co.techxr.unity.model.SpecificAsset>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetService_getPlatformSpecificAsset_m1435508F5B8BA3D01B4E7369748A46876471440A (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, String_t* ___genericAssetId0, String_t* ___unityPlatform1, Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4* ___successCallback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_get_TisSpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F_m319DB17E7F21792982BB8A5ECF0C3BD02084CA6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral206487F55CB297CC5B73A7184C2CD6CA7EE3D6C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		String_t* L_2 = ___genericAssetId0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, L_2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_0;
		String_t* L_4 = ___unityPlatform1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE, L_5, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		RuntimeObject* L_6 = ((AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields*)il2cpp_codegen_static_fields_for(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var))->___networkService_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = V_0;
		Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4* L_8 = ___successCallback2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_9 = ___errorCallback3;
		NullCheck(L_6);
		GenericInterfaceActionInvoker4< String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_get_TisSpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F_m319DB17E7F21792982BB8A5ECF0C3BD02084CA6E_RuntimeMethod_var, L_6, _stringLiteral206487F55CB297CC5B73A7184C2CD6CA7EE3D6C2, L_7, L_8, L_9);
		return;
	}
}
// System.Void co.techxr.unity.network.AssetService::DownloadAssetBundle(System.String,UnityEngine.Transform,UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>,System.Action`1<co.techxr.unity.exceptions.XrException>,UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetService_DownloadAssetBundle_mC70AC5F76BFE862B46A8096511287A8E5B3ABA46 (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, String_t* ___bundleUrl0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform1, UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* ___successCallback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* ___downloadHandler4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAssetServiceMono_tF403FDE81E5AE0D483091DEDBC3A35347B00082A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_0 = ((AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields*)il2cpp_codegen_static_fields_for(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var))->___iAssetServiceMono_1;
		String_t* L_1 = ___bundleUrl0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___parentTransform1;
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_3 = ___successCallback2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_4 = ___errorCallback3;
		UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* L_5 = ___downloadHandler4;
		NullCheck(L_0);
		InterfaceActionInvoker5< String_t*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187*, Action_1_t77330DAB4B6364644857E237915461B112A9D589*, UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* >::Invoke(0 /* System.Void co.techxr.unity.network.IAssetServiceMono::DownloadAssetBundle(System.String,UnityEngine.Transform,UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>,System.Action`1<co.techxr.unity.exceptions.XrException>,UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject>) */, IAssetServiceMono_tF403FDE81E5AE0D483091DEDBC3A35347B00082A_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		goto IL_0038;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		{
			V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_6 = ___errorCallback3;
			V_1 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0035;
			}
		}
		{
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_8 = ___errorCallback3;
			Exception_t* L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_9);
			XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_11 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
			NullCheck(L_11);
			XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_11, L_10, NULL);
			NullCheck(L_8);
			Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_8, L_11, NULL);
		}

IL_0035:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0038;
		}
	}// end catch (depth: 1)

IL_0038:
	{
		return;
	}
}
// System.Void co.techxr.unity.network.AssetService::GetAssetBundle(System.String,co.techxr.unity.model.UnityPlatform,UnityEngine.Transform,UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>,System.Action`1<co.techxr.unity.exceptions.XrException>,UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetService_GetAssetBundle_m115DD19C2D8A5A5A0B0A1A48FB8821809DD0F4E7 (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, String_t* ___genericAssetId0, int32_t ___unityPlatform1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform2, UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* ___successCallback3, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback4, UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* ___downloadHandler5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CGetAssetBundleU3Eb__0_m5D8A8F98A9A5EBA3E4C02F905B01F44D04B24EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityPlatform_t000394AF4778281B6308B4CF1A5C670E1C09CB4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_0 = (U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_m070F33ABC0514E0025B3BEF2D1318FA46C242522(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_2 = V_0;
		int32_t L_3 = ___unityPlatform1;
		NullCheck(L_2);
		L_2->___unityPlatform_1 = L_3;
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___parentTransform2;
		NullCheck(L_4);
		L_4->___parentTransform_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___parentTransform_2), (void*)L_5);
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_6 = V_0;
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_7 = ___successCallback3;
		NullCheck(L_6);
		L_6->___successCallback_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___successCallback_3), (void*)L_7);
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_8 = V_0;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_9 = ___errorCallback4;
		NullCheck(L_8);
		L_8->___errorCallback_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___errorCallback_4), (void*)L_9);
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_10 = V_0;
		UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* L_11 = ___downloadHandler5;
		NullCheck(L_10);
		L_10->___downloadHandler_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___downloadHandler_5), (void*)L_11);
		String_t* L_12 = ___genericAssetId0;
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_13 = V_0;
		NullCheck(L_13);
		int32_t* L_14 = (&L_13->___unityPlatform_1);
		Il2CppFakeBox<int32_t> L_15(UnityPlatform_t000394AF4778281B6308B4CF1A5C670E1C09CB4B_il2cpp_TypeInfo_var, L_14);
		String_t* L_16;
		L_16 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_15), NULL);
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_17 = V_0;
		Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4* L_18 = (Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4*)il2cpp_codegen_object_new(Action_1_tEA9DD84CA648434D793FF17BB1F990B30B9051A4_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_m53D16BAA9044A859D14FCF9ABE71E3CA4418EA7E(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CGetAssetBundleU3Eb__0_m5D8A8F98A9A5EBA3E4C02F905B01F44D04B24EB9_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_19 = V_0;
		NullCheck(L_19);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_20 = L_19->___errorCallback_4;
		AssetService_getPlatformSpecificAsset_m1435508F5B8BA3D01B4E7369748A46876471440A(__this, L_12, L_16, L_18, L_20, NULL);
		return;
	}
}
// System.String co.techxr.unity.network.AssetService::getFullPathName(System.String,co.techxr.unity.model.UnityPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssetService_getFullPathName_mD0F6F6E4FB26C30965731809C1878C87DA9D38B8 (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, String_t* ___specificAssetId0, int32_t ___platform1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityPlatform_t000394AF4778281B6308B4CF1A5C670E1C09CB4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9DC80DF663F0ADB3E31E2B4886B90F3E3A68854);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		int32_t L_1 = ___platform1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UnityPlatform_t000394AF4778281B6308B4CF1A5C670E1C09CB4B_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = ___specificAssetId0;
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralF9DC80DF663F0ADB3E31E2B4886B90F3E3A68854, L_0, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.GameObject co.techxr.unity.network.AssetService::getGameObjectFromAssetBundle(UnityEngine.AssetBundle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AssetService_getGameObjectFromAssetBundle_m800FF3CCB29761A144A8F589C0B17639C249F88F (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___assetBundle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0461BADE43AA136CFC92253F45E5E36BA9F18785);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_9 = NULL;
	{
		V_0 = (String_t*)NULL;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = ___assetBundle0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = AssetBundle_GetAllAssetNames_m44504DB9E055412F0DF2071A769A243219708CC3(L_0, NULL);
		V_3 = L_1;
		V_4 = 0;
		goto IL_0033;
	}

IL_0010:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_3;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_5 = L_5;
		String_t* L_6 = V_5;
		V_0 = L_6;
		String_t* L_7 = V_5;
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral0461BADE43AA136CFC92253F45E5E36BA9F18785, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		int32_t L_10 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_3;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_12 = ___assetBundle0;
		NullCheck(L_12);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_13;
		L_13 = AssetBundle_LoadAllAssets_m00E63EFF07B8E986754B7AFB3B8566B2B99C2241(L_12, NULL);
		V_2 = ((GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)IsInst((RuntimeObject*)L_13, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = V_2;
		V_6 = (bool)((!(((RuntimeObject*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = V_2;
		NullCheck(L_16);
		V_7 = (bool)((!(((uint32_t)(((RuntimeArray*)L_16)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0062;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = L_20;
		goto IL_007a;
	}

IL_0062:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = ((int32_t)(((RuntimeArray*)L_21)->max_length));
		RuntimeObject* L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_22);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral246C9E6DB34381404518645EB80945F37DB882C2)), L_23, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_25 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssetService_getGameObjectFromAssetBundle_m800FF3CCB29761A144A8F589C0B17639C249F88F_RuntimeMethod_var)));
	}

IL_007a:
	{
		goto IL_0087;
	}

IL_007d:
	{
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_26 = ___assetBundle0;
		String_t* L_27 = V_0;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063(L_26, L_27, AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063_RuntimeMethod_var);
		V_1 = L_28;
	}

IL_0087:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_30;
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_009f;
		}
	}
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_32 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
		NullCheck(L_32);
		XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF345E1A5B9DC469781A51A1E6BB51696649948A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssetService_getGameObjectFromAssetBundle_m800FF3CCB29761A144A8F589C0B17639C249F88F_RuntimeMethod_var)));
	}

IL_009f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_1;
		V_9 = L_33;
		goto IL_00a4;
	}

IL_00a4:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_9;
		return L_34;
	}
}
// System.Void co.techxr.unity.network.AssetService::<.ctor>b__5_1(co.techxr.unity.network.NetworkService2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetService_U3C_ctorU3Eb__5_1_m69DB396BCCC0B620E71859068911456EBF32AA01 (AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* __this, NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* ___networkService20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* L_0 = ___networkService20;
		((AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields*)il2cpp_codegen_static_fields_for(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var))->___iAssetServiceMono_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields*)il2cpp_codegen_static_fields_for(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var))->___iAssetServiceMono_1), (void*)L_0);
		NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* L_1 = ___networkService20;
		__this->___ifileCache_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ifileCache_3), (void*)L_1);
		goto IL_002a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Exception)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral298A888575F207AC1E275A146A5C3D0E7EE3D362)), L_3, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_5 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssetService_U3C_ctorU3Eb__5_1_m69DB396BCCC0B620E71859068911456EBF32AA01_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AssetService/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6BF37F3377E4ED40AB9ED666D9DC746B44CA2AC9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2* L_0 = (U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2*)il2cpp_codegen_object_new(U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC32A3004CB10B772C1E4598A03113DF192DC77CE(L_0, NULL);
		((U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.network.AssetService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC32A3004CB10B772C1E4598A03113DF192DC77CE (U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AssetService/<>c::<.ctor>b__5_0(co.techxr.unity.network.INetworkService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__5_0_m149058CFA40BC2B3D3F1D35EB58CE322CAB39F27 (U3CU3Ec_tC1571449ECA989B5C3E6D6EE45272FB08EE86EC2* __this, RuntimeObject* ___iNetworkService0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___iNetworkService0;
		((AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields*)il2cpp_codegen_static_fields_for(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var))->___networkService_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_StaticFields*)il2cpp_codegen_static_fields_for(AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD_il2cpp_TypeInfo_var))->___networkService_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m070F33ABC0514E0025B3BEF2D1318FA46C242522 (U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::<GetAssetBundle>b__0(co.techxr.unity.model.SpecificAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CGetAssetBundleU3Eb__0_m5D8A8F98A9A5EBA3E4C02F905B01F44D04B24EB9 (U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* __this, SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* ___specificAsset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileCache_tEDF74B311E9BC0B1482834A647B76811CD713A32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_1_U3CGetAssetBundleU3Eb__2_m3472E1E1B4BF144237E6551E3112D25C403344F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_2_U3CGetAssetBundleU3Eb__1_m15EB27F589D9130B0595D73452F59F704DDA195C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD555458ED2C65C289B5952ADC72B99E4A47A6650);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* V_0 = NULL;
	U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	bool V_6 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_0 = (U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_1__ctor_mADE755D082D0ABBF98F53AF53359F485033EE24D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_1), (void*)__this);
		U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_2 = V_0;
		SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* L_3 = ___specificAsset0;
		NullCheck(L_2);
		L_2->___specificAsset_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___specificAsset_0), (void*)L_3);
	}
	try
	{// begin try (depth: 1)
		{
			U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* L_4 = (U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			U3CU3Ec__DisplayClass9_2__ctor_m78C5F7C85016936D33A6AE4FA8CB8FB7B872A483(L_4, NULL);
			V_1 = L_4;
			U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* L_5 = V_1;
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_6 = V_0;
			NullCheck(L_5);
			L_5->___CSU24U3CU3E8__locals2_1 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&L_5->___CSU24U3CU3E8__locals2_1), (void*)L_6);
			U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* L_7 = V_1;
			AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* L_8 = __this->___U3CU3E4__this_0;
			U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* L_9 = V_1;
			NullCheck(L_9);
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_10 = L_9->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_10);
			SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* L_11 = L_10->___specificAsset_0;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = SpecificAsset_get_id_m40DDF72D037CA4F5391A99CD3BB100BBC6700F8C_inline(L_11, NULL);
			int32_t L_13 = __this->___unityPlatform_1;
			NullCheck(L_8);
			String_t* L_14;
			L_14 = AssetService_getFullPathName_mD0F6F6E4FB26C30965731809C1878C87DA9D38B8(L_8, L_12, L_13, NULL);
			NullCheck(L_7);
			L_7->___fullFilePath_0 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&L_7->___fullFilePath_0), (void*)L_14);
			AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* L_15 = __this->___U3CU3E4__this_0;
			NullCheck(L_15);
			RuntimeObject* L_16 = L_15->___ifileCache_3;
			U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* L_17 = V_1;
			NullCheck(L_17);
			String_t* L_18 = L_17->___fullFilePath_0;
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___parentTransform_2;
			NullCheck(L_16);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
			L_20 = InterfaceFuncInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, String_t*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(1 /* UnityEngine.GameObject IFileCache::readAssetBundle(System.String,UnityEngine.Transform) */, IFileCache_tEDF74B311E9BC0B1482834A647B76811CD713A32_il2cpp_TypeInfo_var, L_16, L_18, L_19);
			V_2 = L_20;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_22;
			L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			V_3 = L_22;
			bool L_23 = V_3;
			if (!L_23)
			{
				goto IL_00a4_1;
			}
		}
		{
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_2;
			NullCheck(L_24);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
			L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___parentTransform_2;
			NullCheck(L_25);
			Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_25, L_26, NULL);
			UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_27 = __this->___successCallback_3;
			V_4 = (bool)((!(((RuntimeObject*)(UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_28 = V_4;
			if (!L_28)
			{
				goto IL_00a1_1;
			}
		}
		{
			UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_29 = __this->___successCallback_3;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_2;
			NullCheck(L_29);
			UnityAction_1_Invoke_mC0B03E675E5A61F6BDCA0F469FA5CCF9C4E52159_inline(L_29, L_30, NULL);
		}

IL_00a1_1:
		{
			goto IL_010a_1;
		}

IL_00a4_1:
		{
			U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* L_31 = V_1;
			NullCheck(L_31);
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_32 = L_31->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_32);
			SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* L_33 = L_32->___specificAsset_0;
			NullCheck(L_33);
			String_t* L_34;
			L_34 = SpecificAsset_get_displayName_mC46DA27301E3A69D0F39023E860B0A144F684542_inline(L_33, NULL);
			String_t* L_35;
			L_35 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD555458ED2C65C289B5952ADC72B99E4A47A6650, L_34, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_35, NULL);
			AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* L_36 = __this->___U3CU3E4__this_0;
			NullCheck(L_36);
			RuntimeObject* L_37 = L_36->___ifileCache_3;
			U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* L_38 = V_1;
			NullCheck(L_38);
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_39 = L_38->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_39);
			SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* L_40 = L_39->___specificAsset_0;
			NullCheck(L_40);
			String_t* L_41;
			L_41 = SpecificAsset_get_url_mE22B4F47D24536C1BB863D1D0787F2F21F40F30B_inline(L_40, NULL);
			U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* L_42 = V_1;
			NullCheck(L_42);
			String_t* L_43 = L_42->___fullFilePath_0;
			U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* L_44 = V_1;
			Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_45 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
			NullCheck(L_45);
			Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_45, L_44, (intptr_t)((void*)U3CU3Ec__DisplayClass9_2_U3CGetAssetBundleU3Eb__1_m15EB27F589D9130B0595D73452F59F704DDA195C_RuntimeMethod_var), NULL);
			U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* L_46 = V_1;
			NullCheck(L_46);
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_47 = L_46->___CSU24U3CU3E8__locals2_1;
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_48 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
			NullCheck(L_48);
			Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_48, L_47, (intptr_t)((void*)U3CU3Ec__DisplayClass9_1_U3CGetAssetBundleU3Eb__2_m3472E1E1B4BF144237E6551E3112D25C403344F4_RuntimeMethod_var), NULL);
			NullCheck(L_37);
			InterfaceActionInvoker4< String_t*, String_t*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(0 /* System.Void IFileCache::DownloadFile(System.String,System.String,System.Action`1<System.String>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, IFileCache_tEDF74B311E9BC0B1482834A647B76811CD713A32_il2cpp_TypeInfo_var, L_37, L_41, L_43, L_45, L_48);
		}

IL_010a_1:
		{
			goto IL_013a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010d;
		}
		throw e;
	}

CATCH_010d:
	{// begin catch(System.Exception)
		{
			V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_49 = __this->___errorCallback_4;
			V_6 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_50 = V_6;
			if (!L_50)
			{
				goto IL_0137;
			}
		}
		{
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_51 = __this->___errorCallback_4;
			Exception_t* L_52 = V_5;
			NullCheck(L_52);
			String_t* L_53;
			L_53 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_52);
			XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_54 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
			NullCheck(L_54);
			XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_54, L_53, NULL);
			NullCheck(L_51);
			Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_51, L_54, NULL);
		}

IL_0137:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013a;
		}
	}// end catch (depth: 1)

IL_013a:
	{
		return;
	}
}
// System.Void co.techxr.unity.network.AssetService/<>c__DisplayClass9_0::<GetAssetBundle>b__3(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CGetAssetBundleU3Eb__3_m3057340699F6633B7EA6AA483B7ACE0B198F6614 (U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObj0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_0 = __this->___successCallback_3;
		V_0 = (bool)((!(((RuntimeObject*)(UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_2 = __this->___successCallback_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___gameObj0;
		NullCheck(L_2);
		UnityAction_1_Invoke_mC0B03E675E5A61F6BDCA0F469FA5CCF9C4E52159_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AssetService/<>c__DisplayClass9_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_1__ctor_mADE755D082D0ABBF98F53AF53359F485033EE24D (U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AssetService/<>c__DisplayClass9_1::<GetAssetBundle>b__2(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_1_U3CGetAssetBundleU3Eb__2_m3472E1E1B4BF144237E6551E3112D25C403344F4 (U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CGetAssetBundleU3Eb__3_m3057340699F6633B7EA6AA483B7ACE0B198F6614_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50975BA59872A0B98D6906BFD4D0B97BE76BEA4E);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* V_0 = NULL;
	UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* G_B2_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* G_B2_3 = NULL;
	UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* G_B1_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* G_B1_3 = NULL;
	{
		SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* L_0 = __this->___specificAsset_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = SpecificAsset_get_displayName_mC46DA27301E3A69D0F39023E860B0A144F684542_inline(L_0, NULL);
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral50975BA59872A0B98D6906BFD4D0B97BE76BEA4E, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* L_4 = L_3->___U3CU3E4__this_0;
		SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* L_5 = __this->___specificAsset_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SpecificAsset_get_url_mE22B4F47D24536C1BB863D1D0787F2F21F40F30B_inline(L_5, NULL);
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_7 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___parentTransform_2;
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_9 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_9);
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_10 = L_9->___U3CU3E9__3_6;
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_8;
		G_B1_2 = L_6;
		G_B1_3 = L_4;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_8;
			G_B2_2 = L_6;
			G_B2_3 = L_4;
			goto IL_006b;
		}
	}
	{
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_12 = __this->___CSU24U3CU3E8__locals1_1;
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_13 = __this->___CSU24U3CU3E8__locals1_1;
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_14 = (UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187*)il2cpp_codegen_object_new(UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_m4AAE7BBE595D82E15A5A774EEB588EA82A63C16E(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CGetAssetBundleU3Eb__3_m3057340699F6633B7EA6AA483B7ACE0B198F6614_RuntimeMethod_var), NULL);
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_15 = L_14;
		V_0 = L_15;
		NullCheck(L_12);
		L_12->___U3CU3E9__3_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___U3CU3E9__3_6), (void*)L_15);
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_16 = V_0;
		G_B2_0 = L_16;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_006b:
	{
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_17 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_17);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_18 = L_17->___errorCallback_4;
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_19 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_19);
		UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* L_20 = L_19->___downloadHandler_5;
		NullCheck(G_B2_3);
		AssetService_DownloadAssetBundle_mC70AC5F76BFE862B46A8096511287A8E5B3ABA46(G_B2_3, G_B2_2, G_B2_1, G_B2_0, L_18, L_20, NULL);
		U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_21 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_21);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_22 = L_21->___errorCallback_4;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_23 = ___ex0;
		NullCheck(L_22);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_22, L_23, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AssetService/<>c__DisplayClass9_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_2__ctor_m78C5F7C85016936D33A6AE4FA8CB8FB7B872A483 (U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AssetService/<>c__DisplayClass9_2::<GetAssetBundle>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_2_U3CGetAssetBundleU3Eb__1_m15EB27F589D9130B0595D73452F59F704DDA195C (U3CU3Ec__DisplayClass9_2_t0F650C28E9A09909E39B2018A25F916BCA06CA13* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileCache_tEDF74B311E9BC0B1482834A647B76811CD713A32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8968DCDDA5CC941D7412288C4647284F43E094EA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_0 = __this->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_0);
			SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* L_1 = L_0->___specificAsset_0;
			NullCheck(L_1);
			String_t* L_2;
			L_2 = SpecificAsset_get_displayName_mC46DA27301E3A69D0F39023E860B0A144F684542_inline(L_1, NULL);
			String_t* L_3;
			L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8968DCDDA5CC941D7412288C4647284F43E094EA, L_2, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_4 = __this->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_4);
			U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_5 = L_4->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_5);
			AssetService_t2D4C0C2C7420ADB89B9F3D264F6EB4E4987EB2AD* L_6 = L_5->___U3CU3E4__this_0;
			NullCheck(L_6);
			RuntimeObject* L_7 = L_6->___ifileCache_3;
			String_t* L_8 = __this->___fullFilePath_0;
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_9 = __this->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_9);
			U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_10 = L_9->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_10);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10->___parentTransform_2;
			NullCheck(L_7);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
			L_12 = InterfaceFuncInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, String_t*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(1 /* UnityEngine.GameObject IFileCache::readAssetBundle(System.String,UnityEngine.Transform) */, IFileCache_tEDF74B311E9BC0B1482834A647B76811CD713A32_il2cpp_TypeInfo_var, L_7, L_8, L_11);
			V_0 = L_12;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_14;
			L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			V_1 = L_14;
			bool L_15 = V_1;
			if (!L_15)
			{
				goto IL_007e_1;
			}
		}
		{
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_16 = __this->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_16);
			SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* L_17 = L_16->___specificAsset_0;
			NullCheck(L_17);
			String_t* L_18;
			L_18 = SpecificAsset_get_displayName_mC46DA27301E3A69D0F39023E860B0A144F684542_inline(L_17, NULL);
			String_t* L_19;
			L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3658F44D4E179B4366D647D9AF1B562C798E7351)), L_18, NULL);
			XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_20 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
			NullCheck(L_20);
			XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_20, L_19, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass9_2_U3CGetAssetBundleU3Eb__1_m15EB27F589D9130B0595D73452F59F704DDA195C_RuntimeMethod_var)));
		}

IL_007e_1:
		{
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_21 = __this->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_21);
			U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_22 = L_21->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_22);
			UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_23 = L_22->___successCallback_3;
			V_2 = (bool)((!(((RuntimeObject*)(UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187*)L_23) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_24 = V_2;
			if (!L_24)
			{
				goto IL_00ac_1;
			}
		}
		{
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_25 = __this->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_25);
			U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_26 = L_25->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_26);
			UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_27 = L_26->___successCallback_3;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_0;
			NullCheck(L_27);
			UnityAction_1_Invoke_mC0B03E675E5A61F6BDCA0F469FA5CCF9C4E52159_inline(L_27, L_28, NULL);
		}

IL_00ac_1:
		{
			goto IL_0104;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00af;
		}
		throw e;
	}

CATCH_00af:
	{// begin catch(System.Exception)
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_29 = V_3;
			NullCheck(L_29);
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_29);
			String_t* L_31;
			L_31 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral184D302BCED20F81969C8ACF722A0F02C155F491)), L_30, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_31, NULL);
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_32 = __this->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_32);
			U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_33 = L_32->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_33);
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_34 = L_33->___errorCallback_4;
			V_4 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_35 = V_4;
			if (!L_35)
			{
				goto IL_0101;
			}
		}
		{
			U3CU3Ec__DisplayClass9_1_t7AF8C62E046DE4134982FCEB0428D309924569FC* L_36 = __this->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_36);
			U3CU3Ec__DisplayClass9_0_tFE6C708015592D97E687FADC865A7338389F3DF1* L_37 = L_36->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_37);
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_38 = L_37->___errorCallback_4;
			Exception_t* L_39 = V_3;
			NullCheck(L_39);
			String_t* L_40;
			L_40 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_39);
			XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_41 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
			NullCheck(L_41);
			XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_41, L_40, NULL);
			NullCheck(L_38);
			Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_38, L_41, NULL);
		}

IL_0101:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0104;
		}
	}// end catch (depth: 1)

IL_0104:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AuthService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService__ctor_m241C85A6EFC49D437426C239A12BE25D1EB983B3 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__12_0_m7510D57A710C40C96D63FD89EE86416A81BFAAF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__12_1_mF5EF77EEC029FB6792036280BF016F99F2E79749_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* G_B2_0 = NULL;
	Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* G_B1_0 = NULL;
	Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* G_B4_0 = NULL;
	Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* G_B3_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var);
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_0 = ((U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1;
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var);
		U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94* L_2 = ((U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_3 = (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52*)il2cpp_codegen_object_new(Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m4A759E7D2E536D5D645B72DEC61E46C2A9DDACAD(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__12_0_m7510D57A710C40C96D63FD89EE86416A81BFAAF4_RuntimeMethod_var), NULL);
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_4 = L_3;
		((U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		Url_getNetworkService_mD9B700E68A0FB4DEA28C21AC907C2151C342715B(G_B2_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var);
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_5 = ((U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var))->___U3CU3E9__12_1_2;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var);
		U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94* L_7 = ((U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_8 = (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*)il2cpp_codegen_object_new(Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m05417F262A16C5381FECC6092E6A32417372ABC5(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__12_1_mF5EF77EEC029FB6792036280BF016F99F2E79749_RuntimeMethod_var), NULL);
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_9 = L_8;
		((U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var))->___U3CU3E9__12_1_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var))->___U3CU3E9__12_1_2), (void*)L_9);
		G_B4_0 = L_9;
	}

IL_004c:
	{
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		Url_getNetworkService2_m2D582C3E3B0B089862A65852F39D378428A5380C(G_B4_0, NULL);
		return;
	}
}
// co.techxr.unity.network.AuthService co.techxr.unity.network.AuthService::getInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* AuthService_getInstance_m1B3605F5359ED6DC80490736B7C1D4076E14FF33 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* V_1 = NULL;
	{
		AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* L_0 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___instance_1;
		V_0 = (bool)((((RuntimeObject*)(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* L_2 = (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94*)il2cpp_codegen_object_new(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AuthService__ctor_m241C85A6EFC49D437426C239A12BE25D1EB983B3(L_2, NULL);
		((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___instance_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___instance_1), (void*)L_2);
	}

IL_0017:
	{
		AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* L_3 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___instance_1;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* L_4 = V_1;
		return L_4;
	}
}
// System.Void co.techxr.unity.network.AuthService::login(co.techxr.unity.model.LoginDto,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_login_mFBE2E5DACF340CDD74755417E7EF18EABDC7CA54 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* ___login0, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, bool ___rememberMe3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m7CDADCE5DBA0796AA50B6FBA5BB7B8B295ED0D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisLoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_m63846E5C9FC941650B638B9A315F79B955714737_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Serialize_TisLoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_mBB1C20F884C6029FBC4AAAEBF4A67EF9B3337585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CloginU3Eb__0_m1C1B6E5C52433A7872B4D9F193F82C5942227FBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18BB7D03BAEFB972A7609E9FBBFA54D4D7B2D90A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97299807E155FF3BDDB957F54C156EF8753B3F99);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041* V_0 = NULL;
	String_t* V_1 = NULL;
	LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041* L_0 = (U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m2D12678CE85612B0BF15B912D630B925D0905E26(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041* L_1 = V_0;
		bool L_2 = ___rememberMe3;
		NullCheck(L_1);
		L_1->___rememberMe_0 = L_2;
		U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041* L_4 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_5 = ___successCallback1;
		NullCheck(L_4);
		L_4->___successCallback_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___successCallback_2), (void*)L_5);
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_6 = ___login0;
		il2cpp_codegen_runtime_class_init_inline(JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = JsonSerializer_Serialize_TisLoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_mBB1C20F884C6029FBC4AAAEBF4A67EF9B3337585(L_6, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Serialize_TisLoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_mBB1C20F884C6029FBC4AAAEBF4A67EF9B3337585_RuntimeMethod_var);
		V_1 = L_7;
		String_t* L_8 = V_1;
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_9;
		L_9 = JsonSerializer_Deserialize_TisLoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_m63846E5C9FC941650B638B9A315F79B955714737(L_8, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Deserialize_TisLoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_m63846E5C9FC941650B638B9A315F79B955714737_RuntimeMethod_var);
		V_2 = L_9;
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_10 = V_2;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral18BB7D03BAEFB972A7609E9FBBFA54D4D7B2D90A, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		RuntimeObject* L_13 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_14 = ___login0;
		U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041* L_15 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_16 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CloginU3Eb__0_m1C1B6E5C52433A7872B4D9F193F82C5942227FBD_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_17 = ___errorCallback2;
		NullCheck(L_13);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m7CDADCE5DBA0796AA50B6FBA5BB7B8B295ED0D16_RuntimeMethod_var, L_13, _stringLiteral97299807E155FF3BDDB957F54C156EF8753B3F99, L_14, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, L_16, L_17);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::saveLoginResponse(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_saveLoginResponse_mB64BFC4BFDADCE824A291C03AD17B92CFD15B31B (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Serialize_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m1C42A075CE5B8C5A706349A658B4E8E8F51633C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74CF8280FB47F302B7CF467F8479183CFE029FC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ___loginResponse0;
		il2cpp_codegen_runtime_class_init_inline(JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = JsonSerializer_Serialize_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m1C42A075CE5B8C5A706349A658B4E8E8F51633C5(L_0, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Serialize_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m1C42A075CE5B8C5A706349A658B4E8E8F51633C5_RuntimeMethod_var);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral74CF8280FB47F302B7CF467F8479183CFE029FC0, L_1, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::signUp(co.techxr.unity.model.Profile,System.Action`1<co.techxr.unity.model.PhoneDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_signUp_mBCF38329E55422A0CE2681DAFE69968F621B6541 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* ___signup0, Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* ___successCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_m0661511C14BF322C7727C8AABC182F792B16B3F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24FEDEC33DFF067A93EB453E4AD8BA0BCDE7796F);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_1 = ___signup0;
		Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* L_2 = ___successCallback1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_3 = ___errorCallback2;
		NullCheck(L_0);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_m0661511C14BF322C7727C8AABC182F792B16B3F2_RuntimeMethod_var, L_0, _stringLiteral24FEDEC33DFF067A93EB453E4AD8BA0BCDE7796F, L_1, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, L_2, L_3);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::signUp(co.techxr.unity.model.Profile,System.Int64,System.Action`1<co.techxr.unity.model.PhoneDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_signUp_m3C754C18A3183548B41B2F1E2A158878EAEE75A7 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* ___signup0, int64_t ___applicationId1, Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* ___successCallback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_m0661511C14BF322C7727C8AABC182F792B16B3F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1177D121D535107BBA9EBE2F1C3F8CA211948FDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FC238ECDE8A636DD0A8F375814F442D90A1A14D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B1_2 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		String_t* L_2;
		L_2 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___applicationId1), NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = _stringLiteral1177D121D535107BBA9EBE2F1C3F8CA211948FDC;
		G_B1_2 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = _stringLiteral1177D121D535107BBA9EBE2F1C3F8CA211948FDC;
			G_B2_2 = L_1;
			goto IL_001d;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_001d:
	{
		NullCheck(G_B2_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(G_B2_2, G_B2_1, G_B2_0, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		RuntimeObject* L_4 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_5 = ___signup0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = V_0;
		Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* L_7 = ___successCallback2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_8 = ___errorCallback3;
		NullCheck(L_4);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_m0661511C14BF322C7727C8AABC182F792B16B3F2_RuntimeMethod_var, L_4, _stringLiteral1FC238ECDE8A636DD0A8F375814F442D90A1A14D, L_5, L_6, L_7, L_8);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::otpvalue(co.techxr.unity.model.PhoneDto,System.Int32,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_otpvalue_m422FEBB0FBF56B693DCD609459377B4CD09C2522 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* ___phoneDto0, int32_t ___otp1, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m7CDADCE5DBA0796AA50B6FBA5BB7B8B295ED0D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_mFAFF22CC0B36D71C60AF85D9CB3DFC7A44368CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Serialize_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_mE5CD45451DE294870579A0531394F1ED2B8AA9DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CotpvalueU3Eb__0_mCDFB5942C841734AFC6CDA954F5C8BCD2CDFF4C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1281091BB0174E2BACA15439E909011836B5BD41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18BB7D03BAEFB972A7609E9FBBFA54D4D7B2D90A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD1AEF584EA5EDF04455490551CD7BB7C31C183);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12* V_0 = NULL;
	String_t* V_1 = NULL;
	PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* V_2 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_3 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B1_2 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12* L_0 = (U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_mE4EFA24A7C94B9BB12754860EC8E2B6599C91F96(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12* L_1 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_2 = ___successCallback2;
		NullCheck(L_1);
		L_1->___successCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___successCallback_0), (void*)L_2);
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_3 = ___phoneDto0;
		il2cpp_codegen_runtime_class_init_inline(JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonSerializer_Serialize_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_mE5CD45451DE294870579A0531394F1ED2B8AA9DE(L_3, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Serialize_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_mE5CD45451DE294870579A0531394F1ED2B8AA9DE_RuntimeMethod_var);
		V_1 = L_4;
		String_t* L_5 = V_1;
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_6;
		L_6 = JsonSerializer_Deserialize_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_mFAFF22CC0B36D71C60AF85D9CB3DFC7A44368CA6(L_5, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Deserialize_TisPhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_mFAFF22CC0B36D71C60AF85D9CB3DFC7A44368CA6_RuntimeMethod_var);
		V_2 = L_6;
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_7 = V_2;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral18BB7D03BAEFB972A7609E9FBBFA54D4D7B2D90A, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_10, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_3 = L_10;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = V_3;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___otp1), NULL);
		String_t* L_13 = L_12;
		G_B1_0 = L_13;
		G_B1_1 = _stringLiteral1281091BB0174E2BACA15439E909011836B5BD41;
		G_B1_2 = L_11;
		if (L_13)
		{
			G_B2_0 = L_13;
			G_B2_1 = _stringLiteral1281091BB0174E2BACA15439E909011836B5BD41;
			G_B2_2 = L_11;
			goto IL_0050;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0050:
	{
		NullCheck(G_B2_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(G_B2_2, G_B2_1, G_B2_0, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		RuntimeObject* L_14 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_15 = V_2;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = V_3;
		U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12* L_17 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_18 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CotpvalueU3Eb__0_mCDFB5942C841734AFC6CDA954F5C8BCD2CDFF4C4_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_19 = ___errorCallback3;
		NullCheck(L_14);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m7CDADCE5DBA0796AA50B6FBA5BB7B8B295ED0D16_RuntimeMethod_var, L_14, _stringLiteral4BD1AEF584EA5EDF04455490551CD7BB7C31C183, L_15, L_16, L_18, L_19);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::getProfileById(System.Int64,System.Action`1<co.techxr.unity.model.Profile>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_getProfileById_mAA762764B54C2893226A7D9E8191269D15F93B8C (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, int64_t ___id0, Action_1_t21368F37D8368081C267784197A861AE2EF93602* ___successCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_get_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_m16953358716A97D073E393A1CF72E1F650D736AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BE00E42F38227500E2763A3779E5B3426B03B06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B1_2 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		String_t* L_2;
		L_2 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___id0), NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
		G_B1_2 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
			G_B2_2 = L_1;
			goto IL_001d;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_001d:
	{
		NullCheck(G_B2_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(G_B2_2, G_B2_1, G_B2_0, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		RuntimeObject* L_4 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = V_0;
		Action_1_t21368F37D8368081C267784197A861AE2EF93602* L_6 = ___successCallback1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_7 = ___errorCallback2;
		NullCheck(L_4);
		GenericInterfaceActionInvoker4< String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t21368F37D8368081C267784197A861AE2EF93602*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_get_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_m16953358716A97D073E393A1CF72E1F650D736AE_RuntimeMethod_var, L_4, _stringLiteral7BE00E42F38227500E2763A3779E5B3426B03B06, L_5, L_6, L_7);
		return;
	}
}
// co.techxr.unity.model.LoginResponse co.techxr.unity.network.AuthService::getLoginResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* AuthService_getLoginResponse_mA085835EE823D41530AEE65F37CDD6D37E140F76 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthServiceMono_t160D1561A50C713F623AD6AE1D15C8F5655AC54C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* V_0 = NULL;
	{
		RuntimeObject* L_0 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___iAuthServiceMono_2;
		NullCheck(L_0);
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_1;
		L_1 = InterfaceFuncInvoker0< LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* >::Invoke(0 /* co.techxr.unity.model.LoginResponse co.techxr.unity.network.IAuthServiceMono::getLoginResponse() */, IAuthServiceMono_t160D1561A50C713F623AD6AE1D15C8F5655AC54C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_2 = V_0;
		return L_2;
	}
}
// System.Void co.techxr.unity.network.AuthService::setLoginResponse(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_setLoginResponse_m52F7CFAFC1FA7102343FCE6B770E737A1675CD23 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthServiceMono_t160D1561A50C713F623AD6AE1D15C8F5655AC54C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___iAuthServiceMono_2;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_1 = ___loginResponse0;
		NullCheck(L_0);
		InterfaceActionInvoker1< LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* >::Invoke(1 /* System.Void co.techxr.unity.network.IAuthServiceMono::setLoginResponse(co.techxr.unity.model.LoginResponse) */, IAuthServiceMono_t160D1561A50C713F623AD6AE1D15C8F5655AC54C_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::savedLogin(System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_savedLogin_mCF2ABC55A3F3AAC0411928055F73D9E0D70F8F7C (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t21368F37D8368081C267784197A861AE2EF93602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_mDBCD3B445F21BAC524948B1BB06E9FBFD66E498A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CsavedLoginU3Eb__1_m39F9311F09D00E7B8E3707796102A8A823716C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_1_U3CsavedLoginU3Eb__0_m4A3A0A4CB14689C4473988D0339DFC7ECD087F63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74CF8280FB47F302B7CF467F8479183CFE029FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AC31F644714D137B3AF5661613C62F9FB8DC5A6);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* V_0 = NULL;
	bool V_1 = false;
	U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* V_2 = NULL;
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_0 = (U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass22_0__ctor_mF5FB854ACB615158FE7E70DDBCB226E94BF305E5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_1 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_2 = ___successCallback0;
		NullCheck(L_1);
		L_1->___successCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___successCallback_0), (void*)L_2);
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_4 = V_0;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_5 = ___errorCallback1;
		NullCheck(L_4);
		L_4->___errorCallback_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___errorCallback_2), (void*)L_5);
		bool L_6;
		L_6 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral74CF8280FB47F302B7CF467F8479183CFE029FC0, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_00b0;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* L_8 = (U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		U3CU3Ec__DisplayClass22_1__ctor_mDEF4E520D8A9B44E35A931DF6AD4BCE5DC2941DC(L_8, NULL);
		V_2 = L_8;
		U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* L_9 = V_2;
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_10 = V_0;
		NullCheck(L_9);
		L_9->___CSU24U3CU3E8__locals1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___CSU24U3CU3E8__locals1_1), (void*)L_10);
		U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* L_11 = V_2;
		String_t* L_12;
		L_12 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral74CF8280FB47F302B7CF467F8479183CFE029FC0, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_13;
		L_13 = JsonSerializer_Deserialize_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_mDBCD3B445F21BAC524948B1BB06E9FBFD66E498A(L_12, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Deserialize_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_mDBCD3B445F21BAC524948B1BB06E9FBFD66E498A_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___loginResponse_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___loginResponse_0), (void*)L_13);
		RuntimeObject* L_14 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* L_15 = V_2;
		NullCheck(L_15);
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_16 = L_15->___loginResponse_0;
		NullCheck(L_14);
		InterfaceActionInvoker1< LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* >::Invoke(6 /* System.Void co.techxr.unity.network.INetworkService::setLoginResponse(co.techxr.unity.model.LoginResponse) */, INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var, L_14, L_16);
		U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* L_17 = V_2;
		NullCheck(L_17);
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_18 = L_17->___loginResponse_0;
		NullCheck(L_18);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_19;
		L_19 = LoginResponse_get_profile_m8BB9DBFBB18D3C30F089A9F53C03DD893E9DE428_inline(L_18, NULL);
		NullCheck(L_19);
		int64_t L_20;
		L_20 = Profile_get_id_m40667EDC77D22F4C06D40195F80E348748B3D269_inline(L_19, NULL);
		U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* L_21 = V_2;
		Action_1_t21368F37D8368081C267784197A861AE2EF93602* L_22 = (Action_1_t21368F37D8368081C267784197A861AE2EF93602*)il2cpp_codegen_object_new(Action_1_t21368F37D8368081C267784197A861AE2EF93602_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_m32CEB8445399820BBF3EBCCFC1B6E1D41A07455C(L_22, L_21, (intptr_t)((void*)U3CU3Ec__DisplayClass22_1_U3CsavedLoginU3Eb__0_m4A3A0A4CB14689C4473988D0339DFC7ECD087F63_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* L_23 = V_2;
		NullCheck(L_23);
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_24 = L_23->___CSU24U3CU3E8__locals1_1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_25 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass22_0_U3CsavedLoginU3Eb__1_m39F9311F09D00E7B8E3707796102A8A823716C70_RuntimeMethod_var), NULL);
		AuthService_getProfileById_mAA762764B54C2893226A7D9E8191269D15F93B8C(__this, L_20, L_22, L_25, NULL);
		goto IL_00ad;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009a;
		}
		throw e;
	}

CATCH_009a:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_26 = V_3;
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_27 = V_0;
		NullCheck(L_27);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_28 = L_27->___errorCallback_2;
		AuthService_relogin_m1ACF936E3BD8E743DE5CAE28F0B6C4CD7574BB97(__this, L_26, L_28, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ad;
	}// end catch (depth: 1)

IL_00ad:
	{
		goto IL_00d7;
	}

IL_00b0:
	{
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_29 = V_0;
		NullCheck(L_29);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_30 = L_29->___errorCallback_2;
		V_4 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_30) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_00d6;
		}
	}
	{
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_32 = V_0;
		NullCheck(L_32);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_33 = L_32->___errorCallback_2;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_34 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_34, _stringLiteral7AC31F644714D137B3AF5661613C62F9FB8DC5A6, NULL);
		NullCheck(L_33);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_33, L_34, NULL);
	}

IL_00d6:
	{
	}

IL_00d7:
	{
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::relogin(System.Exception,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_relogin_m1ACF936E3BD8E743DE5CAE28F0B6C4CD7574BB97 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, Exception_t* ___e0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3410656B8CAF3AF87F0406886448F4A55C9831C);
		s_Il2CppMethodInitialized = true;
	}
	XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* V_0 = NULL;
	bool V_1 = false;
	XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* G_B3_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF3410656B8CAF3AF87F0406886448F4A55C9831C, NULL);
		AuthService_logout_mD9B0E638150B46B301C474E68655FA573D1F6C76(__this, (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)NULL, (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)NULL, NULL);
		Exception_t* L_0 = ___e0;
		if (((XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)IsInstClass((RuntimeObject*)L_0, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		Exception_t* L_1 = ___e0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_1);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_3 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_3, L_2, NULL);
		G_B3_0 = L_3;
		goto IL_0030;
	}

IL_002a:
	{
		Exception_t* L_4 = ___e0;
		G_B3_0 = ((XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)CastclassClass((RuntimeObject*)L_4, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var));
	}

IL_0030:
	{
		V_0 = G_B3_0;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_5 = ___errorCallback1;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_7 = ___errorCallback1;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_8 = V_0;
		NullCheck(L_7);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_7, L_8, NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::forgotPassword(co.techxr.unity.model.LoginDto,System.Action`1<co.techxr.unity.model.Profile>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_forgotPassword_mE13655F395592C798F1AA3F1C8358FF6390B70D9 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* ___loginDto0, Action_1_t21368F37D8368081C267784197A861AE2EF93602* ___successfulCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_mFDBC82D6F7C5D317027E0E91B71B603F9750E5F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral275703C3470C04ACBCC0CBBFA4E00A12CF32A9BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_1 = ___loginDto0;
		Action_1_t21368F37D8368081C267784197A861AE2EF93602* L_2 = ___successfulCallback1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_3 = ___errorCallback2;
		NullCheck(L_0);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t21368F37D8368081C267784197A861AE2EF93602*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_mFDBC82D6F7C5D317027E0E91B71B603F9750E5F0_RuntimeMethod_var, L_0, _stringLiteral275703C3470C04ACBCC0CBBFA4E00A12CF32A9BA, L_1, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, L_2, L_3);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::changePassword(co.techxr.unity.model.PasswordChangeDto,System.Action`1<co.techxr.unity.model.Profile>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_changePassword_mCF173A117FA4EFA8FE95913D342D081482F00517 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18* ___passwordChange0, Action_1_t21368F37D8368081C267784197A861AE2EF93602* ___successfulCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_mFDBC82D6F7C5D317027E0E91B71B603F9750E5F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC97ADB2151514183ABC3FE612B115A0F608F950B);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18* L_1 = ___passwordChange0;
		Action_1_t21368F37D8368081C267784197A861AE2EF93602* L_2 = ___successfulCallback1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_3 = ___errorCallback2;
		NullCheck(L_0);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t21368F37D8368081C267784197A861AE2EF93602*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_mFDBC82D6F7C5D317027E0E91B71B603F9750E5F0_RuntimeMethod_var, L_0, _stringLiteralC97ADB2151514183ABC3FE612B115A0F608F950B, L_1, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, L_2, L_3);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::logout(System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_logout_mD9B0E638150B46B301C474E68655FA573D1F6C76 (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74CF8280FB47F302B7CF467F8479183CFE029FC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteral74CF8280FB47F302B7CF467F8479183CFE029FC0, NULL);
		RuntimeObject* L_0 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		NullCheck(L_0);
		InterfaceActionInvoker1< LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* >::Invoke(6 /* System.Void co.techxr.unity.network.INetworkService::setLoginResponse(co.techxr.unity.model.LoginResponse) */, INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var, L_0, (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*)NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService::deleteAccount(System.Action`1<co.techxr.unity.model.Profile>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthService_deleteAccount_m71BAADB91447D97E1179B9B06E422B77F0BC80BD (AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* __this, Action_1_t21368F37D8368081C267784197A861AE2EF93602* ___successCallback0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_delete_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_m3DA7CE51A98453B56D1434FBF91697645FD4441F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ED2278251B5DBF0781E9CF8696102786F6BD4F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		Action_1_t21368F37D8368081C267784197A861AE2EF93602* L_1 = ___successCallback0;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_2 = ___errorCallback1;
		NullCheck(L_0);
		GenericInterfaceActionInvoker4< String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t21368F37D8368081C267784197A861AE2EF93602*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_delete_TisProfile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_m3DA7CE51A98453B56D1434FBF91697645FD4441F_RuntimeMethod_var, L_0, _stringLiteral8ED2278251B5DBF0781E9CF8696102786F6BD4F2, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AuthService/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA5724EAF5847260AF7EC7CF4235825044FA35635 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94* L_0 = (U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94*)il2cpp_codegen_object_new(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF51F0663ADB82DD74F2FE0BAE82C63CF536ED512(L_0, NULL);
		((U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF51F0663ADB82DD74F2FE0BAE82C63CF536ED512 (U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService/<>c::<.ctor>b__12_0(co.techxr.unity.network.INetworkService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__12_0_m7510D57A710C40C96D63FD89EE86416A81BFAAF4 (U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94* __this, RuntimeObject* ___iNetworkService0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___iNetworkService0;
		((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService/<>c::<.ctor>b__12_1(co.techxr.unity.network.NetworkService2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__12_1_mF5EF77EEC029FB6792036280BF016F99F2E79749 (U3CU3Ec_t562315F48C2E31DD7F185E44F111910CD9115D94* __this, NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* ___iAuthServiceMono0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* L_0 = ___iAuthServiceMono0;
		((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___iAuthServiceMono_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___iAuthServiceMono_2), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m2D12678CE85612B0BF15B912D630B925D0905E26 (U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass14_0::<login>b__0(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CloginU3Eb__0_m1C1B6E5C52433A7872B4D9F193F82C5942227FBD (U3CU3Ec__DisplayClass14_0_tAB643FB517B18ED2A610EAD5BDEAA28351576041* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ___loginResponse0;
		V_0 = (bool)((!(((RuntimeObject*)(LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_3 = ___loginResponse0;
		NullCheck(L_2);
		InterfaceActionInvoker1< LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* >::Invoke(6 /* System.Void co.techxr.unity.network.INetworkService::setLoginResponse(co.techxr.unity.model.LoginResponse) */, INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var, L_2, L_3);
		bool L_4 = __this->___rememberMe_0;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* L_6 = __this->___U3CU3E4__this_1;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_7 = ___loginResponse0;
		NullCheck(L_6);
		AuthService_saveLoginResponse_mB64BFC4BFDADCE824A291C03AD17B92CFD15B31B(L_6, L_7, NULL);
	}

IL_002f:
	{
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_8 = __this->___successCallback_2;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_9 = ___loginResponse0;
		NullCheck(L_8);
		Action_1_Invoke_m614B7318DD7AE0808373F5AFCEE919022F2E976F_inline(L_8, L_9, NULL);
	}

IL_003d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mE4EFA24A7C94B9BB12754860EC8E2B6599C91F96 (U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass18_0::<otpvalue>b__0(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CotpvalueU3Eb__0_mCDFB5942C841734AFC6CDA954F5C8BCD2CDFF4C4 (U3CU3Ec__DisplayClass18_0_t76C90C8A16D77D30E849EB935D8E9B17DBF2DE12* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ___loginResponse0;
		V_0 = (bool)((!(((RuntimeObject*)(LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_2 = ((AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_StaticFields*)il2cpp_codegen_static_fields_for(AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94_il2cpp_TypeInfo_var))->___networkService_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_3 = ___loginResponse0;
		NullCheck(L_2);
		InterfaceActionInvoker1< LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* >::Invoke(6 /* System.Void co.techxr.unity.network.INetworkService::setLoginResponse(co.techxr.unity.model.LoginResponse) */, INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var, L_2, L_3);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_4 = __this->___successCallback_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_5 = ___loginResponse0;
		NullCheck(L_4);
		Action_1_Invoke_m614B7318DD7AE0808373F5AFCEE919022F2E976F_inline(L_4, L_5, NULL);
	}

IL_0024:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mF5FB854ACB615158FE7E70DDBCB226E94BF305E5 (U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass22_0::<savedLogin>b__1(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CsavedLoginU3Eb__1_m39F9311F09D00E7B8E3707796102A8A823716C70 (U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97375BC2D6FE8AED0D800E654605ECC573A98E10);
		s_Il2CppMethodInitialized = true;
	}
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_0 = ___ex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral97375BC2D6FE8AED0D800E654605ECC573A98E10, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* L_3 = __this->___U3CU3E4__this_1;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_4 = ___ex0;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_5 = __this->___errorCallback_2;
		NullCheck(L_3);
		AuthService_relogin_m1ACF936E3BD8E743DE5CAE28F0B6C4CD7574BB97(L_3, L_4, L_5, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass22_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1__ctor_mDEF4E520D8A9B44E35A931DF6AD4BCE5DC2941DC (U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.AuthService/<>c__DisplayClass22_1::<savedLogin>b__0(co.techxr.unity.model.Profile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1_U3CsavedLoginU3Eb__0_m4A3A0A4CB14689C4473988D0339DFC7ECD087F63 (U3CU3Ec__DisplayClass22_1_tD4C5916AA79F76CB953DA45D42A60825DD79C600* __this, Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* ___profileDto0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_1 = L_0->___successCallback_0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		U3CU3Ec__DisplayClass22_0_t35B84243FC992DF861EC95BFD47B3314B22A8BD2* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_4 = L_3->___successCallback_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_5 = __this->___loginResponse_0;
		NullCheck(L_4);
		Action_1_Invoke_m614B7318DD7AE0808373F5AFCEE919022F2E976F_inline(L_4, L_5, NULL);
	}

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Net.HttpWebResponse co.techxr.unity.network.FormUpload::MultipartFormDataPost(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* FormUpload_MultipartFormDataPost_mB904341C08F7AB1B8D7F3FD69BA8B92B0EF3EC4E (String_t* ___postUrl0, String_t* ___userAgent1, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___postParameters2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7376F8B485100A5C42ACF806CA7F817ECA693396);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF83DB288C9FCF3E53140FD46951E79625AEDAF61);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* V_3 = NULL;
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		Guid_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Guid_t_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF83DB288C9FCF3E53140FD46951E79625AEDAF61, L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7376F8B485100A5C42ACF806CA7F817ECA693396, L_4, NULL);
		V_1 = L_5;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___postParameters2;
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = FormUpload_GetMultipartFormData_m88E400FA7A4D59713166692942537BE7CE0BCDE5(L_6, L_7, NULL);
		V_2 = L_8;
		String_t* L_9 = ___postUrl0;
		String_t* L_10 = ___userAgent1;
		String_t* L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_13;
		L_13 = FormUpload_PostForm_m2DE009B1C88230997ED57DCE68ACA54EBD2A6554(L_9, L_10, L_11, L_12, NULL);
		V_3 = L_13;
		goto IL_0036;
	}

IL_0036:
	{
		HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_14 = V_3;
		return L_14;
	}
}
// System.Net.HttpWebResponse co.techxr.unity.network.FormUpload::PostForm(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* FormUpload_PostForm_m2DE009B1C88230997ED57DCE68ACA54EBD2A6554 (String_t* ___postUrl0, String_t* ___userAgent1, String_t* ___contentType2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___formData3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* V_0 = NULL;
	bool V_1 = false;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_2 = NULL;
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* V_3 = NULL;
	{
		String_t* L_0 = ___postUrl0;
		il2cpp_codegen_runtime_class_init_inline(WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* L_1;
		L_1 = WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C(L_0, NULL);
		V_0 = ((HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9*)IsInstClass((RuntimeObject*)L_1, HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var));
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_2 = V_0;
		NetworkService_addAuthorizationHeader_mFD230580B00352C6945EBD4331F37748E2EDA849(L_2, NULL);
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_3 = V_0;
		V_1 = (bool)((((RuntimeObject*)(HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_5 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F69FF66FFA4C1CE51D67EB02ACC9110400F8C2F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormUpload_PostForm_m2DE009B1C88230997ED57DCE68ACA54EBD2A6554_RuntimeMethod_var)));
	}

IL_0028:
	{
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_6 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_6, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_7 = V_0;
		String_t* L_8 = ___contentType2;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Net.WebRequest::set_ContentType(System.String) */, L_7, L_8);
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_9 = V_0;
		String_t* L_10 = ___userAgent1;
		NullCheck(L_9);
		HttpWebRequest_set_UserAgent_mF44CBC379376E5598E1C73FD7F1E3B949383F834(L_9, L_10, NULL);
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_11 = V_0;
		CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* L_12 = (CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E*)il2cpp_codegen_object_new(CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		CookieContainer__ctor_mDFB99605E29E20FC8F2379AB3F4F56FA9B67834F(L_12, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* >::Invoke(32 /* System.Void System.Net.HttpWebRequest::set_CookieContainer(System.Net.CookieContainer) */, L_11, L_12);
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___formData3;
		NullCheck(L_14);
		NullCheck(L_13);
		VirtualActionInvoker1< int64_t >::Invoke(14 /* System.Void System.Net.WebRequest::set_ContentLength(System.Int64) */, L_13, ((int64_t)((int32_t)(((RuntimeArray*)L_14)->max_length))));
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_15 = V_0;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(22 /* System.IO.Stream System.Net.WebRequest::GetRequestStream() */, L_15);
		V_2 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = V_2;
					if (!L_17)
					{
						goto IL_0083;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = V_2;
					NullCheck(L_18);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___formData3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___formData3;
			NullCheck(L_21);
			NullCheck(L_19);
			VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)));
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = V_2;
			NullCheck(L_22);
			VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_22);
			goto IL_0084;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_23 = V_0;
		NullCheck(L_23);
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_24;
		L_24 = VirtualFuncInvoker0< WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* >::Invoke(23 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_23);
		V_3 = ((HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A*)IsInstClass((RuntimeObject*)L_24, HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var));
		goto IL_0092;
	}

IL_0092:
	{
		HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_25 = V_3;
		return L_25;
	}
}
// System.Byte[] co.techxr.unity.network.FormUpload::GetMultipartFormData(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FormUpload_GetMultipartFormData_m88E400FA7A4D59713166692942537BE7CE0BCDE5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___postParameters0, String_t* ___boundary1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormUpload_GetMultipartFormData_m88E400FA7A4D59713166692942537BE7CE0BCDE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1599EF7E2A68C0EA35C00D893B697C0873A595B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C391CE8DC0306E7CD17DC2D5206935D21178330);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral565A02CDB13DB545C4951504D2557024FDE785EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF987889D450D52A2F51B87328CA8D4D3CB98A8BC);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	String_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_3 = NULL;
	String_t* G_B7_4 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_3 = NULL;
	String_t* G_B8_4 = NULL;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
		V_1 = (bool)0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___postParameters0;
		NullCheck(L_1);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_2;
		L_2 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_1, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_4 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0146:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_4), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0138_1;
			}

IL_0017_1:
			{
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_3;
				L_3 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_4), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				V_5 = L_3;
				bool L_4 = V_1;
				V_6 = L_4;
				bool L_5 = V_6;
				if (!L_5)
				{
					goto IL_004e_1;
				}
			}
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = V_0;
				il2cpp_codegen_runtime_class_init_inline(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ((FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields*)il2cpp_codegen_static_fields_for(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var))->___encoding_0;
				NullCheck(L_7);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
				L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9 = ((FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields*)il2cpp_codegen_static_fields_for(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var))->___encoding_0;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_9, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
				NullCheck(L_6);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_8, 0, L_10);
			}

IL_004e_1:
			{
				V_1 = (bool)1;
				RuntimeObject* L_11;
				L_11 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_5), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_7 = (bool)((!(((RuntimeObject*)(FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D*)((FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D*)IsInstClass((RuntimeObject*)L_11, FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_12 = V_7;
				if (!L_12)
				{
					goto IL_00fa_1;
				}
			}
			{
				RuntimeObject* L_13;
				L_13 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_5), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_8 = ((FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D*)CastclassClass((RuntimeObject*)L_13, FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D_il2cpp_TypeInfo_var));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
				String_t* L_16 = ___boundary1;
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_16);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
				String_t* L_18;
				L_18 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_5), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_18);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
				FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* L_20 = V_8;
				NullCheck(L_20);
				String_t* L_21;
				L_21 = FileParameter_get_FileName_m1E05B51AC97239BC65696B3A074ABE7784EC335B_inline(L_20, NULL);
				String_t* L_22 = L_21;
				G_B6_0 = L_22;
				G_B6_1 = 2;
				G_B6_2 = L_19;
				G_B6_3 = L_19;
				G_B6_4 = _stringLiteral1C391CE8DC0306E7CD17DC2D5206935D21178330;
				if (L_22)
				{
					G_B7_0 = L_22;
					G_B7_1 = 2;
					G_B7_2 = L_19;
					G_B7_3 = L_19;
					G_B7_4 = _stringLiteral1C391CE8DC0306E7CD17DC2D5206935D21178330;
					goto IL_00a4_1;
				}
			}
			{
				String_t* L_23;
				L_23 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_5), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				G_B7_0 = L_23;
				G_B7_1 = G_B6_1;
				G_B7_2 = G_B6_2;
				G_B7_3 = G_B6_3;
				G_B7_4 = G_B6_4;
			}

IL_00a4_1:
			{
				NullCheck(G_B7_2);
				ArrayElementTypeCheck (G_B7_2, G_B7_0);
				(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (RuntimeObject*)G_B7_0);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = G_B7_3;
				FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* L_25 = V_8;
				NullCheck(L_25);
				String_t* L_26;
				L_26 = FileParameter_get_ContentType_m95B93C7E2AD50275789F15C87CB446D5FEB0D27F_inline(L_25, NULL);
				String_t* L_27 = L_26;
				G_B8_0 = L_27;
				G_B8_1 = 3;
				G_B8_2 = L_24;
				G_B8_3 = L_24;
				G_B8_4 = G_B7_4;
				if (L_27)
				{
					G_B9_0 = L_27;
					G_B9_1 = 3;
					G_B9_2 = L_24;
					G_B9_3 = L_24;
					G_B9_4 = G_B7_4;
					goto IL_00b7_1;
				}
			}
			{
				G_B9_0 = _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
				G_B9_1 = G_B8_1;
				G_B9_2 = G_B8_2;
				G_B9_3 = G_B8_3;
				G_B9_4 = G_B8_4;
			}

IL_00b7_1:
			{
				NullCheck(G_B9_2);
				ArrayElementTypeCheck (G_B9_2, G_B9_0);
				(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (RuntimeObject*)G_B9_0);
				String_t* L_28;
				L_28 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B9_4, G_B9_3, NULL);
				V_9 = L_28;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_29 = V_0;
				il2cpp_codegen_runtime_class_init_inline(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_30 = ((FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields*)il2cpp_codegen_static_fields_for(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var))->___encoding_0;
				String_t* L_31 = V_9;
				NullCheck(L_30);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
				L_32 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_30, L_31);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_33 = ((FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields*)il2cpp_codegen_static_fields_for(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var))->___encoding_0;
				String_t* L_34 = V_9;
				NullCheck(L_33);
				int32_t L_35;
				L_35 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_33, L_34);
				NullCheck(L_29);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_32, 0, L_35);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_36 = V_0;
				FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* L_37 = V_8;
				NullCheck(L_37);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
				L_38 = FileParameter_get_File_m4071647FDFA238706C1A859B57AA07CDDA87F561_inline(L_37, NULL);
				FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* L_39 = V_8;
				NullCheck(L_39);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
				L_40 = FileParameter_get_File_m4071647FDFA238706C1A859B57AA07CDDA87F561_inline(L_39, NULL);
				NullCheck(L_40);
				NullCheck(L_36);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_36, L_38, 0, ((int32_t)(((RuntimeArray*)L_40)->max_length)));
				goto IL_0137_1;
			}

IL_00fa_1:
			{
				String_t* L_41 = ___boundary1;
				String_t* L_42;
				L_42 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_5), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				RuntimeObject* L_43;
				L_43 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_5), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				String_t* L_44;
				L_44 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral1599EF7E2A68C0EA35C00D893B697C0873A595B3, L_41, L_42, L_43, NULL);
				V_10 = L_44;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_45 = V_0;
				il2cpp_codegen_runtime_class_init_inline(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_46 = ((FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields*)il2cpp_codegen_static_fields_for(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var))->___encoding_0;
				String_t* L_47 = V_10;
				NullCheck(L_46);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48;
				L_48 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_46, L_47);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_49 = ((FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields*)il2cpp_codegen_static_fields_for(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var))->___encoding_0;
				String_t* L_50 = V_10;
				NullCheck(L_49);
				int32_t L_51;
				L_51 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_49, L_50);
				NullCheck(L_45);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_45, L_48, 0, L_51);
			}

IL_0137_1:
			{
			}

IL_0138_1:
			{
				bool L_52;
				L_52 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_4), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_52)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0155;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0155:
	{
		String_t* L_53 = ___boundary1;
		String_t* L_54;
		L_54 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral565A02CDB13DB545C4951504D2557024FDE785EB, L_53, _stringLiteralF987889D450D52A2F51B87328CA8D4D3CB98A8BC, NULL);
		V_2 = L_54;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_55 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_56 = ((FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields*)il2cpp_codegen_static_fields_for(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var))->___encoding_0;
		String_t* L_57 = V_2;
		NullCheck(L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58;
		L_58 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_56, L_57);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_59 = ((FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields*)il2cpp_codegen_static_fields_for(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var))->___encoding_0;
		String_t* L_60 = V_2;
		NullCheck(L_59);
		int32_t L_61;
		L_61 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_59, L_60);
		NullCheck(L_55);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_55, L_58, 0, L_61);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_62 = V_0;
		NullCheck(L_62);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_62, ((int64_t)0));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_63 = V_0;
		NullCheck(L_63);
		int64_t L_64;
		L_64 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_63);
		if ((int64_t)(L_64) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), FormUpload_GetMultipartFormData_m88E400FA7A4D59713166692942537BE7CE0BCDE5_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_64));
		V_3 = L_65;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_66 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_3;
		NullCheck(L_68);
		NullCheck(L_66);
		int32_t L_69;
		L_69 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_66, L_67, 0, ((int32_t)(((RuntimeArray*)L_68)->max_length)));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_70 = V_0;
		NullCheck(L_70);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_70);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_3;
		V_11 = L_71;
		goto IL_01b2;
	}

IL_01b2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_11;
		return L_72;
	}
}
// System.Void co.techxr.unity.network.FormUpload::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormUpload__cctor_m223672E01D35DB3F19265E5D8F1F85628DD1D1F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		((FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields*)il2cpp_codegen_static_fields_for(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var))->___encoding_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_StaticFields*)il2cpp_codegen_static_fields_for(FormUpload_t78A5548E8DA74DE639FA2FBF21B882952615A418_il2cpp_TypeInfo_var))->___encoding_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] co.techxr.unity.network.FormUpload/FileParameter::get_File()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FileParameter_get_File_m4071647FDFA238706C1A859B57AA07CDDA87F561 (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CFileU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.network.FormUpload/FileParameter::set_File(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileParameter_set_File_mCC1203F6E4F5DA5FE1D7D276ABB3E64A9E23EBA4 (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CFileU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFileU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.network.FormUpload/FileParameter::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileParameter_get_FileName_m1E05B51AC97239BC65696B3A074ABE7784EC335B (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFileNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.network.FormUpload/FileParameter::set_FileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileParameter_set_FileName_mAA2377EF759FB804D7A5FA1EA50BA3C24298DDB8 (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFileNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFileNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.network.FormUpload/FileParameter::get_ContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileParameter_get_ContentType_m95B93C7E2AD50275789F15C87CB446D5FEB0D27F (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CContentTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.network.FormUpload/FileParameter::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileParameter_set_ContentType_m9B1C99EFAE8620446518813743BBB63BD683A777 (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CContentTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.network.FormUpload/FileParameter::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileParameter__ctor_mE4E9EDC60AFCEDCC2D3D2E27729E3F5B76817DFC (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___file0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___file0;
		FileParameter__ctor_m7B42E37D39E3696F9EAD5F7CFF5166B51C267E99(__this, L_0, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.FormUpload/FileParameter::.ctor(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileParameter__ctor_m7B42E37D39E3696F9EAD5F7CFF5166B51C267E99 (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___file0, String_t* ___filename1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___file0;
		String_t* L_1 = ___filename1;
		FileParameter__ctor_mDD1854F8DB25932B7DDF68565F7C5E4D379D6A2C(__this, L_0, L_1, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.FormUpload/FileParameter::.ctor(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileParameter__ctor_mDD1854F8DB25932B7DDF68565F7C5E4D379D6A2C (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___file0, String_t* ___filename1, String_t* ___contenttype2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___file0;
		FileParameter_set_File_mCC1203F6E4F5DA5FE1D7D276ABB3E64A9E23EBA4_inline(__this, L_0, NULL);
		String_t* L_1 = ___filename1;
		FileParameter_set_FileName_mAA2377EF759FB804D7A5FA1EA50BA3C24298DDB8_inline(__this, L_1, NULL);
		String_t* L_2 = ___contenttype2;
		FileParameter_set_ContentType_m9B1C99EFAE8620446518813743BBB63BD683A777_inline(__this, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.LicenseService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService__ctor_m53521AA6FC5F8F72E2301B8A06B7ED9235927563 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LicenseService_U3C_ctorU3Eb__7_0_m4C87AC896817981FDF49ADDEE9CD7D9BA35C0FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_0 = (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52*)il2cpp_codegen_object_new(Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m4A759E7D2E536D5D645B72DEC61E46C2A9DDACAD(L_0, __this, (intptr_t)((void*)LicenseService_U3C_ctorU3Eb__7_0_m4C87AC896817981FDF49ADDEE9CD7D9BA35C0FC0_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		Url_getNetworkService_mD9B700E68A0FB4DEA28C21AC907C2151C342715B(L_0, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.LicenseService::registerLicense(System.String,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService_registerLicense_m1F004768128B97E5F8B5D1431737790C3009F9D3 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, String_t* ___licenseKey0, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m7CDADCE5DBA0796AA50B6FBA5BB7B8B295ED0D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CregisterLicenseU3Eb__0_m52DDA7A5C92C1EB3080E2368D0CA6CD84B7EA48C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA583BDD06084A8D0807ACB11F86A290232E123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral382BDA9DD57CD49BA0C95C01745E12E5A808A0F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFBE3D4316F28B2BECF90D8DD2A2A24891C413BF);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83* L_0 = (U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m98E4C2858738E16D057A2B7B72D2BB6DF49D5BA1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83* L_2 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_3 = ___successCallback1;
		NullCheck(L_2);
		L_2->___successCallback_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___successCallback_1), (void*)L_3);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_4, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_1 = L_4;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = V_1;
		String_t* L_6 = ___licenseKey0;
		NullCheck(L_5);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_5, _stringLiteral1EA583BDD06084A8D0807ACB11F86A290232E123, L_6, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = V_1;
		String_t* L_8;
		L_8 = SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC(NULL);
		NullCheck(L_7);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_7, _stringLiteral382BDA9DD57CD49BA0C95C01745E12E5A808A0F2, L_8, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		RuntimeObject* L_9 = __this->___networkService_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = V_1;
		U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83* L_11 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_12 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CregisterLicenseU3Eb__0_m52DDA7A5C92C1EB3080E2368D0CA6CD84B7EA48C_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_13 = ___errorCallback2;
		NullCheck(L_9);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m7CDADCE5DBA0796AA50B6FBA5BB7B8B295ED0D16_RuntimeMethod_var, L_9, _stringLiteralBFBE3D4316F28B2BECF90D8DD2A2A24891C413BF, NULL, L_10, L_12, L_13);
		return;
	}
}
// System.Void co.techxr.unity.network.LicenseService::getCurrentInstallation(System.String,System.Action`1<co.techxr.unity.model.SenseInstallDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService_getCurrentInstallation_m7F12608265E6CB0DE614071C6C510935D085A5D2 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, String_t* ___appKey0, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* ___successCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_get_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_mCFA8507C85DA2626FC081F376BB8E20FA478638C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34A9090430FA925433892F17FB03B5A2FF264EB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral382BDA9DD57CD49BA0C95C01745E12E5A808A0F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE41241A91258B1E54EC706BF87AAD8F013928971);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		String_t* L_2 = ___appKey0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteralE41241A91258B1E54EC706BF87AAD8F013928971, L_2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_0;
		String_t* L_4;
		L_4 = SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC(NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteral382BDA9DD57CD49BA0C95C01745E12E5A808A0F2, L_4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		RuntimeObject* L_5 = __this->___networkService_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = V_0;
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_7 = ___successCallback1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_8 = ___errorCallback2;
		NullCheck(L_5);
		GenericInterfaceActionInvoker4< String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_get_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_mCFA8507C85DA2626FC081F376BB8E20FA478638C_RuntimeMethod_var, L_5, _stringLiteral34A9090430FA925433892F17FB03B5A2FF264EB0, L_6, L_7, L_8);
		return;
	}
}
// System.Void co.techxr.unity.network.LicenseService::installNewApplication(System.String,co.techxr.unity.model.SenseInstallDto,System.Action`1<co.techxr.unity.model.SenseInstallDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService_installNewApplication_m902FE88F8E95543698682AF094A0B02407AE6AA7 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, String_t* ___appKey0, SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___senseInstallDto1, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* ___successCallback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_mBC25384D92197F7DE714C84EE065A29430B9B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34A9090430FA925433892F17FB03B5A2FF264EB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE41241A91258B1E54EC706BF87AAD8F013928971);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		String_t* L_2 = ___appKey0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteralE41241A91258B1E54EC706BF87AAD8F013928971, L_2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->___networkService_0;
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_4 = ___senseInstallDto1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = V_0;
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_6 = ___successCallback2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_7 = ___errorCallback3;
		NullCheck(L_3);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_mBC25384D92197F7DE714C84EE065A29430B9B208_RuntimeMethod_var, L_3, _stringLiteral34A9090430FA925433892F17FB03B5A2FF264EB0, L_4, L_5, L_6, L_7);
		return;
	}
}
// System.Void co.techxr.unity.network.LicenseService::loginThroughApplication(co.techxr.unity.model.AppLoginDto,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService_loginThroughApplication_mECD52B9EC8235742AC3B8023B0CAF2336DFE45B3 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* ___appLoginDto0, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m7CDADCE5DBA0796AA50B6FBA5BB7B8B295ED0D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CloginThroughApplicationU3Eb__0_m03ECCA91344E2BB1E9A0FAA7642F8B3BC8097D31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0491C6CB2548B08595EE5037308B0DEF4FA94F);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242* L_0 = (U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass11_0__ctor_m59FF43A9E75730711B71D1DAFCEC6FD297BFB7F5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242* L_2 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_3 = ___successCallback1;
		NullCheck(L_2);
		L_2->___successCallback_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___successCallback_1), (void*)L_3);
		RuntimeObject* L_4 = __this->___networkService_0;
		AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* L_5 = ___appLoginDto0;
		U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242* L_6 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_7 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CloginThroughApplicationU3Eb__0_m03ECCA91344E2BB1E9A0FAA7642F8B3BC8097D31_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_8 = ___errorCallback2;
		NullCheck(L_4);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_m7CDADCE5DBA0796AA50B6FBA5BB7B8B295ED0D16_RuntimeMethod_var, L_4, _stringLiteral1F0491C6CB2548B08595EE5037308B0DEF4FA94F, L_5, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, L_7, L_8);
		return;
	}
}
// System.Void co.techxr.unity.network.LicenseService::activateInstallation(System.String,System.Int64,System.Action`1<co.techxr.unity.model.ActivationDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService_activateInstallation_m9F414B69910E2FB3DE0C7550AF074EF71EDC6E14 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, String_t* ___installationId0, int64_t ___profileId1, Action_1_tA8035876F91F5C6A5ABAE8A302E57B519C1DCDA9* ___successCallback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5_m3C0C261A8B74B71DA6A7C5EA3510850EEFD0C926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33D1B60DB12199044FC7DD788DAA5A0D4BB75DF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62348C69D822EE76C106D93C4A3D61B48BDBF7D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCADE14EA4CF01A4C5D0ADF87FA18B2E691FACF0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B1_2 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		String_t* L_2 = ___installationId0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral33D1B60DB12199044FC7DD788DAA5A0D4BB75DF5, L_2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_0;
		String_t* L_4;
		L_4 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___profileId1), NULL);
		String_t* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = _stringLiteralCADE14EA4CF01A4C5D0ADF87FA18B2E691FACF0B;
		G_B1_2 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = _stringLiteralCADE14EA4CF01A4C5D0ADF87FA18B2E691FACF0B;
			G_B2_2 = L_3;
			goto IL_002a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002a:
	{
		NullCheck(G_B2_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(G_B2_2, G_B2_1, G_B2_0, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		RuntimeObject* L_6 = __this->___networkService_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = V_0;
		Action_1_tA8035876F91F5C6A5ABAE8A302E57B519C1DCDA9* L_8 = ___successCallback2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_9 = ___errorCallback3;
		NullCheck(L_6);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_tA8035876F91F5C6A5ABAE8A302E57B519C1DCDA9*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5_m3C0C261A8B74B71DA6A7C5EA3510850EEFD0C926_RuntimeMethod_var, L_6, _stringLiteral62348C69D822EE76C106D93C4A3D61B48BDBF7D4, NULL, L_7, L_8, L_9);
		return;
	}
}
// System.Void co.techxr.unity.network.LicenseService::getApplicationFromKey(System.String,System.Action`1<co.techxr.unity.model.ApplicationDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService_getApplicationFromKey_m82D35AB1361BD405386274DBD15487027B28C1D0 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, String_t* ___appKey0, Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* ___successCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_post_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_m2C0E0AEC3955C1D6AB89AA035876F2DBA0AB02DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFF5B8739799ED8CD52A1C4D4256C3D81D49F300);
		s_Il2CppMethodInitialized = true;
	}
	ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* V_0 = NULL;
	{
		ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* L_0 = (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99*)il2cpp_codegen_object_new(ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ApplicationDto__ctor_mC7FA1590FC90B43BF95F9CFB67A1160DD7E3215E(L_0, NULL);
		V_0 = L_0;
		ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* L_1 = V_0;
		String_t* L_2 = ___appKey0;
		NullCheck(L_1);
		ApplicationDto_set_key_m289AA9972333CA7126EAD263ECAE38079B65B271_inline(L_1, L_2, NULL);
		RuntimeObject* L_3 = __this->___networkService_0;
		ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* L_4 = V_0;
		Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* L_5 = ___successCallback1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_6 = ___errorCallback2;
		NullCheck(L_3);
		GenericInterfaceActionInvoker5< String_t*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(INetworkService_post_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_m2C0E0AEC3955C1D6AB89AA035876F2DBA0AB02DC_RuntimeMethod_var, L_3, _stringLiteralCFF5B8739799ED8CD52A1C4D4256C3D81D49F300, L_4, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, L_5, L_6);
		return;
	}
}
// System.Void co.techxr.unity.network.LicenseService::<.ctor>b__7_0(co.techxr.unity.network.INetworkService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService_U3C_ctorU3Eb__7_0_m4C87AC896817981FDF49ADDEE9CD7D9BA35C0FC0 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, RuntimeObject* ___iNetworkService0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___iNetworkService0;
		__this->___networkService_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___networkService_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.LicenseService/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m98E4C2858738E16D057A2B7B72D2BB6DF49D5BA1 (U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.LicenseService/<>c__DisplayClass8_0::<registerLicense>b__0(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CregisterLicenseU3Eb__0_m52DDA7A5C92C1EB3080E2368D0CA6CD84B7EA48C (U3CU3Ec__DisplayClass8_0_tBE480ECBDF10C234506A0DBE69DEEB89F7F68D83* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ___loginResponse0;
		V_0 = (bool)((!(((RuntimeObject*)(LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___networkService_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_4 = ___loginResponse0;
		NullCheck(L_3);
		InterfaceActionInvoker1< LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* >::Invoke(6 /* System.Void co.techxr.unity.network.INetworkService::setLoginResponse(co.techxr.unity.model.LoginResponse) */, INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var, L_3, L_4);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_5 = __this->___successCallback_1;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_6 = ___loginResponse0;
		NullCheck(L_5);
		Action_1_Invoke_m614B7318DD7AE0808373F5AFCEE919022F2E976F_inline(L_5, L_6, NULL);
	}

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.LicenseService/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m59FF43A9E75730711B71D1DAFCEC6FD297BFB7F5 (U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.LicenseService/<>c__DisplayClass11_0::<loginThroughApplication>b__0(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CloginThroughApplicationU3Eb__0_m03ECCA91344E2BB1E9A0FAA7642F8B3BC8097D31 (U3CU3Ec__DisplayClass11_0_t3BE945EE634EE003647FCD493225EBD5A7D04242* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ___loginResponse0;
		V_0 = (bool)((!(((RuntimeObject*)(LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___networkService_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_4 = ___loginResponse0;
		NullCheck(L_3);
		InterfaceActionInvoker1< LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* >::Invoke(6 /* System.Void co.techxr.unity.network.INetworkService::setLoginResponse(co.techxr.unity.model.LoginResponse) */, INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1_il2cpp_TypeInfo_var, L_3, L_4);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_5 = __this->___successCallback_1;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_6 = ___loginResponse0;
		NullCheck(L_5);
		Action_1_Invoke_m614B7318DD7AE0808373F5AFCEE919022F2E976F_inline(L_5, L_6, NULL);
	}

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Net.HttpWebResponse co.techxr.unity.network.NetworkService::getHttpResponse(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* NetworkService_getHttpResponse_m61E46D002A075C26BE419EBA29406E6A19390DCD (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, String_t* ___url0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___param1, bool ___isDelete2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		s_Il2CppMethodInitialized = true;
	}
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* V_0 = NULL;
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* V_1 = NULL;
	bool V_2 = false;
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* V_3 = NULL;
	WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_0 = ___url0;
			il2cpp_codegen_runtime_class_init_inline(WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
			WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* L_1;
			L_1 = WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C(L_0, NULL);
			V_0 = ((HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9*)CastclassClass((RuntimeObject*)L_1, HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var));
			bool L_2 = ___isDelete2;
			V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_0024_1;
			}
		}
		{
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_4 = V_0;
			NullCheck(L_4);
			VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_4, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
			goto IL_0030_1;
		}

IL_0024_1:
		{
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_5 = V_0;
			NullCheck(L_5);
			VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_5, _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		}

IL_0030_1:
		{
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_6 = V_0;
			NetworkService_addAuthorizationHeader_mFD230580B00352C6945EBD4331F37748E2EDA849(L_6, NULL);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_7 = V_0;
			NullCheck(L_7);
			WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_8;
			L_8 = VirtualFuncInvoker0< WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* >::Invoke(23 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_7);
			V_1 = ((HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A*)CastclassClass((RuntimeObject*)L_8, HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var));
			HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_9 = V_1;
			V_3 = L_9;
			goto IL_007a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0053;
		}
		throw e;
	}

CATCH_0047:
	{// begin catch(System.Net.WebException)
		V_4 = ((WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*)IL2CPP_GET_ACTIVE_EXCEPTION(WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*));
		WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_10 = V_4;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_11;
		L_11 = NetworkService_getErrorMessage_mADD725D52A361AB02B1F6BF4B3D1FA2C24354C8D(__this, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkService_getHttpResponse_m61E46D002A075C26BE419EBA29406E6A19390DCD_RuntimeMethod_var)));
	}// end catch (depth: 1)

CATCH_0053:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_5;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF136C74C955BF78E1014B404613D75BFDD8630D)), L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		Exception_t* L_15 = V_5;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_17 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkService_getHttpResponse_m61E46D002A075C26BE419EBA29406E6A19390DCD_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_007a:
	{
		HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_18 = V_3;
		return L_18;
	}
}
// System.Void co.techxr.unity.network.NetworkService::addAuthorizationHeader(System.Net.HttpWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService_addAuthorizationHeader_mFD230580B00352C6945EBD4331F37748E2EDA849 (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44DEF021AD969C57977635CC78A43CC2C944A9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ((NetworkService_t64A888C1001819C42925F83CA29197037F62175C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var))->___loginResponse_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_1 = ((NetworkService_t64A888C1001819C42925F83CA29197037F62175C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var))->___loginResponse_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline(L_1, NULL);
		G_B3_0 = ((!(((RuntimeObject*)(String_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_4 = ___request0;
		NullCheck(L_4);
		WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* L_5;
		L_5 = VirtualFuncInvoker0< WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* >::Invoke(12 /* System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers() */, L_4);
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_6 = ((NetworkService_t64A888C1001819C42925F83CA29197037F62175C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var))->___loginResponse_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_7, NULL);
		NullCheck(L_5);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(15 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_5, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_8);
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_9 = ((NetworkService_t64A888C1001819C42925F83CA29197037F62175C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var))->___loginResponse_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline(L_9, NULL);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral44DEF021AD969C57977635CC78A43CC2C944A9DB, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		goto IL_0061;
	}

IL_005f:
	{
	}

IL_0061:
	{
		return;
	}
}
// System.Net.HttpWebResponse co.techxr.unity.network.NetworkService::getHttpPostResponse(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* NetworkService_getHttpPostResponse_mD3184D4FF170D88A318CD5AD4BEEE447359DFC08 (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, String_t* ___url0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___param1, RuntimeObject* ___body2, bool ___isPut3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86C2E97D9D59FF5BF8DA834987C3570768B79877);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_4 = NULL;
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* V_5 = NULL;
	bool V_6 = false;
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* V_7 = NULL;
	WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* V_8 = NULL;
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B4_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B10_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_0 = ___url0;
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___param1;
			String_t* L_2;
			L_2 = NetworkService_getFullUrl_mD893BFC579EBBC01C3A5E8E7699C328708F29FF1(__this, L_0, L_1, NULL);
			V_0 = L_2;
			RuntimeObject* L_3 = ___body2;
			if (!L_3)
			{
				goto IL_0017_1;
			}
		}
		{
			RuntimeObject* L_4 = ___body2;
			il2cpp_codegen_runtime_class_init_inline(JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
			String_t* L_5;
			L_5 = JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE(L_4, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_RuntimeMethod_var);
			G_B4_0 = L_5;
			goto IL_0018_1;
		}

IL_0017_1:
		{
			G_B4_0 = ((String_t*)(NULL));
		}

IL_0018_1:
		{
			V_1 = G_B4_0;
			String_t* L_6 = V_0;
			il2cpp_codegen_runtime_class_init_inline(WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
			WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* L_7;
			L_7 = WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C(L_6, NULL);
			V_2 = ((HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9*)CastclassClass((RuntimeObject*)L_7, HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var));
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_8 = V_2;
			NetworkService_addAuthorizationHeader_mFD230580B00352C6945EBD4331F37748E2EDA849(L_8, NULL);
			bool L_9 = ___isPut3;
			V_6 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_6;
			if (!L_10)
			{
				goto IL_0045_1;
			}
		}
		{
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_11 = V_2;
			NullCheck(L_11);
			VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_11, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
			goto IL_0051_1;
		}

IL_0045_1:
		{
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_12 = V_2;
			NullCheck(L_12);
			VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_12, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		}

IL_0051_1:
		{
			String_t* L_13 = V_1;
			if (!L_13)
			{
				goto IL_0061_1;
			}
		}
		{
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
			L_14 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
			String_t* L_15 = V_1;
			NullCheck(L_14);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
			L_16 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_14, L_15);
			G_B10_0 = L_16;
			goto IL_0067_1;
		}

IL_0061_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
			G_B10_0 = L_17;
		}

IL_0067_1:
		{
			V_3 = G_B10_0;
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_18 = V_2;
			NullCheck(L_18);
			VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Net.WebRequest::set_ContentType(System.String) */, L_18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_19 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
			NullCheck(L_20);
			NullCheck(L_19);
			VirtualActionInvoker1< int64_t >::Invoke(14 /* System.Void System.Net.WebRequest::set_ContentLength(System.Int64) */, L_19, ((int64_t)((int32_t)(((RuntimeArray*)L_20)->max_length))));
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_21 = V_2;
			NullCheck(L_21);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22;
			L_22 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(22 /* System.IO.Stream System.Net.WebRequest::GetRequestStream() */, L_21);
			V_4 = L_22;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_23 = V_4;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_3;
			NullCheck(L_25);
			NullCheck(L_23);
			VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)));
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_26 = V_4;
			NullCheck(L_26);
			VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_26);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = L_27;
			G_B11_0 = L_28;
			G_B11_1 = _stringLiteral86C2E97D9D59FF5BF8DA834987C3570768B79877;
			if (L_28)
			{
				G_B12_0 = L_28;
				G_B12_1 = _stringLiteral86C2E97D9D59FF5BF8DA834987C3570768B79877;
				goto IL_00a9_1;
			}
		}
		{
			G_B13_0 = ((String_t*)(NULL));
			G_B13_1 = G_B11_1;
			goto IL_00ae_1;
		}

IL_00a9_1:
		{
			NullCheck((RuntimeObject*)G_B12_0);
			String_t* L_29;
			L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B12_0);
			G_B13_0 = L_29;
			G_B13_1 = G_B12_1;
		}

IL_00ae_1:
		{
			String_t* L_30;
			L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B13_1, G_B13_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_30, NULL);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_31 = V_2;
			NullCheck(L_31);
			WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_32;
			L_32 = VirtualFuncInvoker0< WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* >::Invoke(23 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_31);
			V_5 = ((HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A*)CastclassClass((RuntimeObject*)L_32, HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var));
			HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_33 = V_5;
			V_7 = L_33;
			goto IL_00e8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cc;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d8;
		}
		throw e;
	}

CATCH_00cc:
	{// begin catch(System.Net.WebException)
		V_8 = ((WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*)IL2CPP_GET_ACTIVE_EXCEPTION(WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*));
		WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_34 = V_8;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_35;
		L_35 = NetworkService_getErrorMessage_mADD725D52A361AB02B1F6BF4B3D1FA2C24354C8D(__this, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkService_getHttpPostResponse_mD3184D4FF170D88A318CD5AD4BEEE447359DFC08_RuntimeMethod_var)));
	}// end catch (depth: 1)

CATCH_00d8:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_36 = V_9;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_36);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_38 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
		NullCheck(L_38);
		XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_38, L_37, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkService_getHttpPostResponse_mD3184D4FF170D88A318CD5AD4BEEE447359DFC08_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00e8:
	{
		HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_39 = V_7;
		return L_39;
	}
}
// System.String co.techxr.unity.network.NetworkService::getFullUrl(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkService_getFullUrl_mD893BFC579EBBC01C3A5E8E7699C328708F29FF1 (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, String_t* ___partUrl0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A6C0681A2B22DE83721912939CABADB2CD3C4B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548035E07FAFDE5E6121DD9ECFA24C4564FE5FED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* V_1 = NULL;
	bool V_2 = false;
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___partUrl0;
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Url_getFullUrl_m2414AB139380C1EA5E6E40F476F07551B06D32FF(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___partUrl0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral548035E07FAFDE5E6121DD9ECFA24C4564FE5FED, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = Url_getFullUrl_m2414AB139380C1EA5E6E40F476F07551B06D32FF(L_4, NULL);
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_6 = (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72*)il2cpp_codegen_object_new(UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UriBuilder__ctor_m782D0160E73CC61448E17FF5AEFAEA22B3BAC145(L_6, L_5, NULL);
		V_1 = L_6;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___param1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = ___param1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843(L_8, Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, NULL);
		V_0 = L_12;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = ___param1;
		NullCheck(L_13);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_14;
		L_14 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_13, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_14);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_15;
		L_15 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_14, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0080:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_3), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0075_1;
			}

IL_0054_1:
			{
				String_t* L_16;
				L_16 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_3), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_4 = L_16;
				String_t* L_17 = V_0;
				String_t* L_18 = V_4;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_19 = ___param1;
				String_t* L_20 = V_4;
				NullCheck(L_19);
				String_t* L_21;
				L_21 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_19, L_20, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				String_t* L_22;
				L_22 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral2A6C0681A2B22DE83721912939CABADB2CD3C4B7, L_17, L_18, L_21, NULL);
				V_0 = L_22;
			}

IL_0075_1:
			{
				bool L_23;
				L_23 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_3), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0054_1;
				}
			}
			{
				goto IL_008f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
	}

IL_0090:
	{
		String_t* L_24 = V_0;
		V_5 = L_24;
		goto IL_0095;
	}

IL_0095:
	{
		String_t* L_25 = V_5;
		return L_25;
	}
}
// System.Byte[] co.techxr.unity.network.NetworkService::getFileFromUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetworkService_getFileFromUrl_m1DF7CABD53F6763484BA5C4429AFA4341E46E419 (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* V_0 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		String_t* L_0 = ___url0;
		HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_1;
		L_1 = NetworkService_getHttpResponse_m61E46D002A075C26BE419EBA29406E6A19390DCD(__this, L_0, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, (bool)0, NULL);
		V_0 = L_1;
		HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_2 = V_0;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(12 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_2);
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_4, L_3, NULL);
		V_1 = L_4;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_6);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_7);
		V_2 = L_8;
		goto IL_002a;
	}

IL_002a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		return L_9;
	}
}
// co.techxr.unity.model.LoginResponse co.techxr.unity.network.NetworkService::getLoginResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* NetworkService_getLoginResponse_m9B4DF515E674646E7060DA0EAF73723B979693CD (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* V_0 = NULL;
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ((NetworkService_t64A888C1001819C42925F83CA29197037F62175C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var))->___loginResponse_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_1 = V_0;
		return L_1;
	}
}
// System.Void co.techxr.unity.network.NetworkService::setLoginResponse(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService_setLoginResponse_mD6C09731A314E0878D717E8529700A2E461580DF (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ___loginResponse0;
		((NetworkService_t64A888C1001819C42925F83CA29197037F62175C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var))->___loginResponse_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NetworkService_t64A888C1001819C42925F83CA29197037F62175C_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var))->___loginResponse_0), (void*)L_0);
		return;
	}
}
// co.techxr.unity.exceptions.XrException co.techxr.unity.network.NetworkService::getErrorMessage(System.Net.WebException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* NetworkService_getErrorMessage_mADD725D52A361AB02B1F6BF4B3D1FA2C24354C8D (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF3F6295AAF48AC44EE111E7233767AD6B03E6C8);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_1 = NULL;
	String_t* V_2 = NULL;
	XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* V_3 = NULL;
	{
		WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_0 = ___ex0;
		NullCheck(L_0);
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_1;
		L_1 = WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline(L_0, NULL);
		NullCheck(L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2;
		L_2 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(12 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = V_0;
					if (!L_3)
					{
						goto IL_004b;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = V_0;
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_6 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_6, L_5, NULL);
				V_1 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0036_1:
					{// begin finally (depth: 2)
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_7 = V_1;
							if (!L_7)
							{
								goto IL_0040_1;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_8 = V_1;
							NullCheck(L_8);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
						}

IL_0040_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_9 = V_1;
					NullCheck(L_9);
					String_t* L_10;
					L_10 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_9);
					V_2 = L_10;
					String_t* L_11 = V_2;
					String_t* L_12;
					L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFF3F6295AAF48AC44EE111E7233767AD6B03E6C8, L_11, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
					String_t* L_13 = V_2;
					XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_14 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
					NullCheck(L_14);
					XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_14, L_13, NULL);
					V_3 = L_14;
					goto IL_004c;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_15 = V_3;
		return L_15;
	}
}
// System.Void co.techxr.unity.network.NetworkService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService__ctor_m9C6B18432700CA0330024C43B8FEC3E311CCD3EF (NetworkService_t64A888C1001819C42925F83CA29197037F62175C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C_Multicast(addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* __this, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___action0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* currentDelegate = reinterpret_cast<addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___action0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C_OpenInst(addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* __this, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___action0, const RuntimeMethod* method)
{
	NullCheck(___action0);
	typedef void (*FunctionPointerType) (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___action0, method);
}
void addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C_OpenStatic(addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* __this, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___action0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___action0, method);
}
void addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C_OpenStaticInvoker(addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* __this, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___action0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* >::Invoke(__this->___method_ptr_0, method, NULL, ___action0);
}
void addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C_ClosedStaticInvoker(addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* __this, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___action0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___action0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF (addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* __this, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___action0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___action0' to native representation
	Il2CppMethodPointer ____action0_marshaled = NULL;
	____action0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___action0));

	// Native function invocation
	il2cppPInvokeFunc(____action0_marshaled);

}
// System.Void co.techxr.unity.network.addService::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void addService__ctor_m8DE539D0D2A6D6BBBE3A952407C9F2F139B9C962 (addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C_Multicast;
}
// System.Void co.techxr.unity.network.addService::Invoke(System.Action`1<co.techxr.unity.network.INetworkService>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void addService_Invoke_mB09B9778A75B992CD60841C7EACB3107ABB7388C (addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* __this, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___action0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___action0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult co.techxr.unity.network.addService::BeginInvoke(System.Action`1<co.techxr.unity.network.INetworkService>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* addService_BeginInvoke_mE92602F24235CBD50F85035FF3401BDD1A2FA3E9 (addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* __this, Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___action0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___action0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void co.techxr.unity.network.addService::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void addService_EndInvoke_m2F97E59EAB89BDFD0DE2FA1D7E85804BD0D470C6 (addService_tD989F47C27CD8F69B9CA6F2733F0C7782B7799AF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.NetworkService2::add_networkServiceListener(System.Action`1<co.techxr.unity.network.NetworkService2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2_add_networkServiceListener_mEC88B15359925746BA23B867AF7F038D2171EFF9 (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* V_0 = NULL;
	Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* V_1 = NULL;
	Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* V_2 = NULL;
	{
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_0 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___networkServiceListener_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_2 = V_1;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*)Castclass((RuntimeObject*)L_4, Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var));
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_5 = V_2;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_6 = V_1;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*>((&((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___networkServiceListener_5), L_5, L_6);
		V_0 = L_7;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_8 = V_0;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*)L_8) == ((RuntimeObject*)(Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void co.techxr.unity.network.NetworkService2::remove_networkServiceListener(System.Action`1<co.techxr.unity.network.NetworkService2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2_remove_networkServiceListener_m2ACFD15118C528D8625240AB5EED784503A8ED39 (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* V_0 = NULL;
	Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* V_1 = NULL;
	Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* V_2 = NULL;
	{
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_0 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___networkServiceListener_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_2 = V_1;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*)Castclass((RuntimeObject*)L_4, Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var));
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_5 = V_2;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_6 = V_1;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*>((&((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___networkServiceListener_5), L_5, L_6);
		V_0 = L_7;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_8 = V_0;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*)L_8) == ((RuntimeObject*)(Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void co.techxr.unity.network.NetworkService2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2__ctor_mC94A162314236A73E279AD5D5B39AB3D8ED80FA1 (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86E85B2AEEA7EB5C9D761B3136A7790577E9FCCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral86E85B2AEEA7EB5C9D761B3136A7790577E9FCCF, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.NetworkService2::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2_Awake_mD9BDE0CED6331FCCC032E67E4B459A14B2AFD889 (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F111E9B05E6F80898809A9A6EBF1344821B001D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7376F8B485100A5C42ACF806CA7F817ECA693396);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = UnityWebRequest_GenerateBoundary_mD854316C5BAE94BF1B09607A36F112D343208241(NULL);
		V_0 = L_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_1, L_2);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7376F8B485100A5C42ACF806CA7F817ECA693396, L_3, NULL);
		__this->___contentTypeMultipart_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contentTypeMultipart_8), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0F111E9B05E6F80898809A9A6EBF1344821B001D, NULL);
		NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* L_5 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_8 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___networkServiceListener_5;
		V_2 = (bool)((!(((RuntimeObject*)(Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_10 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___networkServiceListener_5;
		NullCheck(L_10);
		Action_1_Invoke_mF0C1FA03AB8CD3186D201207F21E8038CC5F1295_inline(L_10, __this, NULL);
	}

IL_005b:
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void co.techxr.unity.network.NetworkService2::refreshToken(System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2_refreshToken_m351F67B5C8A19C36367768BA8652E9E8BCBE8F50 (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_mE8F41B282731770CCCB40ACD7A6434E0264D04DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CrefreshTokenU3Eb__0_m4C8E7FFB109CFAE56C823BAA57FB14D91915BBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE95F52B193E0549BF5DD62F0E64CCE0DD24AB72);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6* V_0 = NULL;
	LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6* L_0 = (U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_mDEA3A6DB5FD2440E6B479842CF02C11E14370191(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6* L_1 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_2 = ___successCallback0;
		NullCheck(L_1);
		L_1->___successCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___successCallback_0), (void*)L_2);
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_3 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_4 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = LoginResponse_get_refresh_token_m47C440EAF8140EF4968EF478A48800CDEFA4669A_inline(L_4, NULL);
		G_B3_0 = ((((RuntimeObject*)(String_t*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		V_2 = (bool)G_B3_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_005c;
	}

IL_002b:
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_7 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6;
		V_1 = L_7;
		((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6 = (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6), (void*)(LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*)NULL);
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = LoginResponse_get_refresh_token_m47C440EAF8140EF4968EF478A48800CDEFA4669A_inline(L_8, NULL);
		RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77* L_10 = (RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77*)il2cpp_codegen_object_new(RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		RefreshTokenDto__ctor_mECDCF902FA33E43CA0FBB80F97AA769CE724362B(L_10, L_9, NULL);
		U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6* L_11 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_12 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CrefreshTokenU3Eb__0_m4C8E7FFB109CFAE56C823BAA57FB14D91915BBBB_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_13 = ___errorCallback1;
		NetworkService2_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_mE8F41B282731770CCCB40ACD7A6434E0264D04DC(__this, _stringLiteralBE95F52B193E0549BF5DD62F0E64CCE0DD24AB72, L_10, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, L_12, L_13, NetworkService2_post_TisLoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28_mE8F41B282731770CCCB40ACD7A6434E0264D04DC_RuntimeMethod_var);
	}

IL_005c:
	{
		return;
	}
}
// System.Void co.techxr.unity.network.NetworkService2::addAuthorizationHeader(UnityEngine.Networking.UnityWebRequest,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2_addAuthorizationHeader_m454F25FFBA3A0A02D32F697CA09EDEA5E9A1FC2E (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, bool ___fileUpload1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2375FC4EF9986E010F0ED9C69E9F9B279F9AB3FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7376F8B485100A5C42ACF806CA7F817ECA693396);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = ___fileUpload1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = UnityWebRequest_GenerateBoundary_mD854316C5BAE94BF1B09607A36F112D343208241(NULL);
		V_1 = L_2;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_4);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7376F8B485100A5C42ACF806CA7F817ECA693396, L_5, NULL);
		V_2 = L_6;
		goto IL_0039;
	}

IL_0026:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = ___request0;
		NullCheck(L_7);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_7, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
	}

IL_0039:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = ___request0;
		NullCheck(L_8);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_8, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, NULL);
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_9 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_10 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline(L_10, NULL);
		G_B6_0 = ((!(((RuntimeObject*)(String_t*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B6_0 = 0;
	}

IL_0061:
	{
		V_3 = (bool)G_B6_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = ___request0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_14 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_15, NULL);
		NullCheck(L_13);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_13, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_16, NULL);
		goto IL_0096;
	}

IL_0089:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2375FC4EF9986E010F0ED9C69E9F9B279F9AB3FA, NULL);
	}

IL_0096:
	{
		return;
	}
}
// System.String co.techxr.unity.network.NetworkService2::getFullUrl(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkService2_getFullUrl_mCA42DC4AEBC7562F394932F235FEC63BA18EB47B (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, String_t* ___partUrl0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A6C0681A2B22DE83721912939CABADB2CD3C4B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548035E07FAFDE5E6121DD9ECFA24C4564FE5FED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___partUrl0;
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Url_getFullUrl_m2414AB139380C1EA5E6E40F476F07551B06D32FF(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral548035E07FAFDE5E6121DD9ECFA24C4564FE5FED, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___param1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ___param1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843(L_5, Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_1 = (bool)G_B3_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, NULL);
		V_0 = L_9;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = ___param1;
		NullCheck(L_10);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_11;
		L_11 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_10, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_11);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_12;
		L_12 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_11, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0071:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_2), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0066_1;
			}

IL_0048_1:
			{
				String_t* L_13;
				L_13 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_2), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_3 = L_13;
				String_t* L_14 = V_0;
				String_t* L_15 = V_3;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = ___param1;
				String_t* L_17 = V_3;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_16, L_17, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				String_t* L_19;
				L_19 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral2A6C0681A2B22DE83721912939CABADB2CD3C4B7, L_14, L_15, L_18, NULL);
				V_0 = L_19;
			}

IL_0066_1:
			{
				bool L_20;
				L_20 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_2), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_0080;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0080:
	{
	}

IL_0081:
	{
		String_t* L_21 = V_0;
		V_4 = L_21;
		goto IL_0086;
	}

IL_0086:
	{
		String_t* L_22 = V_4;
		return L_22;
	}
}
// co.techxr.unity.model.LoginResponse co.techxr.unity.network.NetworkService2::getLoginResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* NetworkService2_getLoginResponse_mAB233589BE94788C13B1C0F2D9040848821913CD (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* V_0 = NULL;
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_1 = V_0;
		return L_1;
	}
}
// System.Void co.techxr.unity.network.NetworkService2::setLoginResponse(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2_setLoginResponse_mB26C1087C6CCAFA6E1952C22D25D402729FE3CB8 (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ___loginResponse0;
		((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.network.NetworkService2::DownloadAssetBundle(System.String,UnityEngine.Transform,UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>,System.Action`1<co.techxr.unity.exceptions.XrException>,UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2_DownloadAssetBundle_m2B782D1DFDD96BC1C5C95566881FD371FE2430EB (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, String_t* ___bundleUrl0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform1, UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* ___callback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* ___downloadHandler4, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___bundleUrl0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___parentTransform1;
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_2 = ___callback2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_3 = ___errorCallback3;
		UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* L_4 = ___downloadHandler4;
		RuntimeObject* L_5;
		L_5 = NetworkService2_GetDisplayBundleRoutine_mB1672FCEA37FC8F92D464583E09CC8A9887BB4A8(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		return;
	}
}
// System.Collections.IEnumerator co.techxr.unity.network.NetworkService2::GetDisplayBundleRoutine(System.String,UnityEngine.Transform,UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>,System.Action`1<co.techxr.unity.exceptions.XrException>,UnityEngine.Events.UnityAction`2<UnityEngine.Networking.UnityWebRequest,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkService2_GetDisplayBundleRoutine_mB1672FCEA37FC8F92D464583E09CC8A9887BB4A8 (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, String_t* ___bundleUrl0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform1, UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* ___callback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* ___downloadHandler4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* L_0 = (U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33*)il2cpp_codegen_object_new(U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetDisplayBundleRoutineU3Ed__27__ctor_m28C699FC078F4A402172F0AB19FD8F23F6CEFC9E(L_0, 0, NULL);
		U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_7), (void*)__this);
		U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* L_2 = L_1;
		String_t* L_3 = ___bundleUrl0;
		NullCheck(L_2);
		L_2->___bundleUrl_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___bundleUrl_2), (void*)L_3);
		U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* L_4 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___parentTransform1;
		NullCheck(L_4);
		L_4->___parentTransform_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___parentTransform_3), (void*)L_5);
		U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* L_6 = L_4;
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_7 = ___callback2;
		NullCheck(L_6);
		L_6->___callback_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___callback_4), (void*)L_7);
		U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* L_8 = L_6;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_9 = ___errorCallback3;
		NullCheck(L_8);
		L_8->___errorCallback_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___errorCallback_5), (void*)L_9);
		U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* L_10 = L_8;
		UnityAction_2_tBBCAE2BAA2D03A802BD9EE3CD79CF2F098AE48CF* L_11 = ___downloadHandler4;
		NullCheck(L_10);
		L_10->___downloadHandler_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___downloadHandler_6), (void*)L_11);
		return L_10;
	}
}
// UnityEngine.GameObject co.techxr.unity.network.NetworkService2::GetGameObject(UnityEngine.AssetBundle,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* NetworkService2_GetGameObject_m43146F132D7EBEB4FA29C219F2698312EBD6BF43 (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___bundle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = ___bundle0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_3 = ___bundle0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = AssetBundle_GetAllAssetNames_m44504DB9E055412F0DF2071A769A243219708CC3(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_7 = ___bundle0;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9;
		L_9 = AssetBundle_LoadAsset_m25926A405F3AB79A4DF2447F23A09957EC7F063E(L_7, L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___parentTransform1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_9, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_2 = L_11;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_12 = ___bundle0;
		NullCheck(L_12);
		AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B(L_12, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		V_3 = L_13;
		goto IL_0040;
	}

IL_0035:
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_14 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral626CF85D4262521EF25DABA74161EAC737E9C162)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkService2_GetGameObject_m43146F132D7EBEB4FA29C219F2698312EBD6BF43_RuntimeMethod_var)));
	}

IL_0040:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_3;
		return L_15;
	}
}
// System.Void co.techxr.unity.network.NetworkService2::DownloadFile(System.String,System.String,System.Action`1<System.String>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkService2_DownloadFile_mE27FFB9C949324B3A81E03742BBAAEFCA28C7648 (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, String_t* ___bundleUrl0, String_t* ___filePath1, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___bundleUrl0;
		String_t* L_1 = ___filePath1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___callback2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_3 = ___errorCallback3;
		RuntimeObject* L_4;
		L_4 = NetworkService2_DownloadToFile_m7C5F2A810969BBEA7D8BEE3980AAF3B44725534E(__this, L_0, L_1, L_2, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		return;
	}
}
// System.Collections.IEnumerator co.techxr.unity.network.NetworkService2::DownloadToFile(System.String,System.String,System.Action`1<System.String>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkService2_DownloadToFile_m7C5F2A810969BBEA7D8BEE3980AAF3B44725534E (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, String_t* ___bundleUrl0, String_t* ___filePath1, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* L_0 = (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86*)il2cpp_codegen_object_new(U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDownloadToFileU3Ed__30__ctor_m31C2B90641756366AD3C8B6597DAA32F13F12716(L_0, 0, NULL);
		U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_6), (void*)__this);
		U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* L_2 = L_1;
		String_t* L_3 = ___bundleUrl0;
		NullCheck(L_2);
		L_2->___bundleUrl_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___bundleUrl_2), (void*)L_3);
		U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* L_4 = L_2;
		String_t* L_5 = ___filePath1;
		NullCheck(L_4);
		L_4->___filePath_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___filePath_3), (void*)L_5);
		U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* L_6 = L_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = ___callback2;
		NullCheck(L_6);
		L_6->___callback_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___callback_4), (void*)L_7);
		U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* L_8 = L_6;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_9 = ___errorCallback3;
		NullCheck(L_8);
		L_8->___errorCallback_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___errorCallback_5), (void*)L_9);
		return L_8;
	}
}
// UnityEngine.GameObject co.techxr.unity.network.NetworkService2::readAssetBundle(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* NetworkService2_readAssetBundle_mF334C050E22682339259A7F76F9E8D022E089FEF (NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* __this, String_t* ___filePath0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CA0BD643E2284A937239E91596E11C4B369656D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral833DACEEC399C1DB36E64C2531DCA990DE9835C7);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* V_1 = NULL;
	Exception_t* V_2 = NULL;
	bool V_3 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		V_1 = (AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL;
	}
	try
	{// begin try (depth: 1)
		String_t* L_0 = ___filePath0;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_1;
		L_1 = AssetBundle_LoadFromFile_mAFD7B0E8F0A0A88E9BB60180EBA0A99B8B3F2629(L_0, NULL);
		V_1 = L_1;
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_2 = V_2;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15CE0CD2ECE798D39395268B1AEFC5E4FB9DB08D)), L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		V_1 = (AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002d;
	}// end catch (depth: 1)

IL_002d:
	{
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral833DACEEC399C1DB36E64C2531DCA990DE9835C7, NULL);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_8 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___parentTransform1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = NetworkService2_GetGameObject_m43146F132D7EBEB4FA29C219F2698312EBD6BF43(__this, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_0063;
	}

IL_0050:
	{
		String_t* L_11 = ___filePath0;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1CA0BD643E2284A937239E91596E11C4B369656D, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
	}

IL_0063:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		V_4 = L_13;
		goto IL_0068;
	}

IL_0068:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_4;
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.NetworkService2/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mDEA3A6DB5FD2440E6B479842CF02C11E14370191 (U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.NetworkService2/<>c__DisplayClass17_0::<refreshToken>b__0(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CrefreshTokenU3Eb__0_m4C8E7FFB109CFAE56C823BAA57FB14D91915BBBB (U3CU3Ec__DisplayClass17_0_t0C93F8AB540A19C17A31E4717A4F98B437CE85E6* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ___response0;
		((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___loginResponse_6), (void*)L_0);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_1 = __this->___successCallback_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_2 = ___response0;
		NullCheck(L_1);
		Action_1_Invoke_m614B7318DD7AE0808373F5AFCEE919022F2E976F_inline(L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDisplayBundleRoutineU3Ed__27__ctor_m28C699FC078F4A402172F0AB19FD8F23F6CEFC9E (U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDisplayBundleRoutineU3Ed__27_System_IDisposable_Dispose_m3047EB170DA1121204B0A4F0C6BC18461EF4216D (U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetDisplayBundleRoutineU3Ed__27_MoveNext_mEA1FA2A4BD8358A4805657DBED122D3E3B5664EA (U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29A4312855F13BAD5C4498E8D06594706335674B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52C1EA64C3A4F01A1C9E1E6D202CF7A4A0B643B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B3DE525FD4DD217A12F37DC4284B59ADCCE97EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90CE1F4E4F03543A029787125753CD33C8073A8F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B11_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0061;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		String_t* L_3 = __this->___bundleUrl_2;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral29A4312855F13BAD5C4498E8D06594706335674B, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		String_t* L_5 = __this->___bundleUrl_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6;
		L_6 = UnityWebRequestAssetBundle_GetAssetBundle_mA08565578A5E7A07140D4C6327FD9B51E14D99F9(L_5, NULL);
		__this->___U3CwwwU3E5__1_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__1_8), (void*)L_6);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CwwwU3E5__1_8;
		NullCheck(L_7);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_8;
		L_8 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0061:
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CwwwU3E5__1_8;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_9, NULL);
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_008e;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___U3CwwwU3E5__1_8;
		NullCheck(L_11);
		int64_t L_12;
		L_12 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_11, NULL);
		G_B11_0 = ((((int32_t)((((int64_t)L_12) < ((int64_t)((int64_t)((int32_t)400))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B11_0 = 1;
	}

IL_008f:
	{
		V_1 = (bool)G_B11_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_011d;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CwwwU3E5__1_8;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral90CE1F4E4F03543A029787125753CD33C8073A8F, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = __this->___U3CwwwU3E5__1_8;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_18, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_20 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_20, L_19, NULL);
		__this->___U3CxrExceptionU3E5__2_9 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CxrExceptionU3E5__2_9), (void*)L_20);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_21 = __this->___U3CxrExceptionU3E5__2_9;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___U3CwwwU3E5__1_8;
		NullCheck(L_22);
		int64_t L_23;
		L_23 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_22, NULL);
		NullCheck(L_21);
		XrException_set_errorCode_m2868F9CCCF53990DF0729B2EE637A0280338658F_inline(L_21, ((int32_t)L_23), NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CwwwU3E5__1_8;
		NullCheck(L_24);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_24, NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_25 = __this->___errorCallback_5;
		V_2 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_25) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_0110;
		}
	}
	{
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_27 = __this->___errorCallback_5;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_28 = __this->___U3CxrExceptionU3E5__2_9;
		NullCheck(L_27);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_27, L_28, NULL);
	}

IL_0110:
	{
		__this->___U3CxrExceptionU3E5__2_9 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CxrExceptionU3E5__2_9), (void*)(XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)NULL);
		goto IL_01d3;
	}

IL_011d:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = __this->___U3CwwwU3E5__1_8;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_30;
		L_30 = DownloadHandlerAssetBundle_GetContent_m9E279B7987A8ADAB0D0B441BAB8C5A61C7DEB7C4(L_29, NULL);
		__this->___U3CbundleU3E5__3_10 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbundleU3E5__3_10), (void*)L_30);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_31 = __this->___U3CbundleU3E5__3_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_32;
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_0194;
		}
	}
	{
		NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* L_34 = __this->___U3CU3E4__this_7;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_35 = __this->___U3CbundleU3E5__3_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___parentTransform_3;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = NetworkService2_GetGameObject_m43146F132D7EBEB4FA29C219F2698312EBD6BF43(L_34, L_35, L_36, NULL);
		__this->___U3CarObjectU3E5__4_11 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CarObjectU3E5__4_11), (void*)L_37);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_38 = __this->___U3CwwwU3E5__1_8;
		NullCheck(L_38);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_38, NULL);
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_39 = __this->___callback_4;
		V_4 = (bool)((!(((RuntimeObject*)(UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_40 = V_4;
		if (!L_40)
		{
			goto IL_018a;
		}
	}
	{
		UnityAction_1_tD54AA8F82EC6FBE26C68406BD3CB52F8CC4BF187* L_41 = __this->___callback_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___U3CarObjectU3E5__4_11;
		NullCheck(L_41);
		UnityAction_1_Invoke_mC0B03E675E5A61F6BDCA0F469FA5CCF9C4E52159_inline(L_41, L_42, NULL);
	}

IL_018a:
	{
		__this->___U3CarObjectU3E5__4_11 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CarObjectU3E5__4_11), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		goto IL_01cb;
	}

IL_0194:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8B3DE525FD4DD217A12F37DC4284B59ADCCE97EF, NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_43 = __this->___errorCallback_5;
		V_5 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_43) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_44 = V_5;
		if (!L_44)
		{
			goto IL_01ca;
		}
	}
	{
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_45 = __this->___errorCallback_5;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_46 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		XrException__ctor_m1017F1AF736750DCB0B6F37E1D311AC8D7EAAD91(L_46, _stringLiteral52C1EA64C3A4F01A1C9E1E6D202CF7A4A0B643B9, ((int32_t)200), NULL);
		NullCheck(L_45);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_45, L_46, NULL);
	}

IL_01ca:
	{
	}

IL_01cb:
	{
		__this->___U3CbundleU3E5__3_10 = (AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbundleU3E5__3_10), (void*)(AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL);
	}

IL_01d3:
	{
		return (bool)0;
	}
}
// System.Object co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDisplayBundleRoutineU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8BD88EC4027E9AD1FF8AA158D30587C010E03DB1 (U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDisplayBundleRoutineU3Ed__27_System_Collections_IEnumerator_Reset_mAF2E705479EDE89A7BA64297DBF0E0EF8D40425F (U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetDisplayBundleRoutineU3Ed__27_System_Collections_IEnumerator_Reset_mAF2E705479EDE89A7BA64297DBF0E0EF8D40425F_RuntimeMethod_var)));
	}
}
// System.Object co.techxr.unity.network.NetworkService2/<GetDisplayBundleRoutine>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDisplayBundleRoutineU3Ed__27_System_Collections_IEnumerator_get_Current_m5F846365A54326065BD7DAAD32F36AB43ADCE1D1 (U3CGetDisplayBundleRoutineU3Ed__27_tE9B1AF9C875FB3BC71D2FD7F3966FBE54327BF33* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadToFileU3Ed__30__ctor_m31C2B90641756366AD3C8B6597DAA32F13F12716 (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadToFileU3Ed__30_System_IDisposable_Dispose_m284864A5A300ECF8E333BEBC314DF4D952503588 (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CDownloadToFileU3Ed__30_U3CU3Em__Finally1_mDF7719A1D6D5E26404714E5737160E943DEBBB79(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownloadToFileU3Ed__30_MoveNext_mF532476CCEFC31B749C678223B34D19103D5228C (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0125:
			{// begin fault (depth: 1)
				U3CDownloadToFileU3Ed__30_System_IDisposable_Dispose_m284864A5A300ECF8E333BEBC314DF4D952503588(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_007a_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_012d;
			}

IL_001d_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				String_t* L_3 = __this->___bundleUrl_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_4, L_3, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, NULL);
				__this->___U3CwwwU3E5__1_7 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__1_7), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CwwwU3E5__1_7;
				String_t* L_6 = __this->___filePath_3;
				DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902* L_7 = (DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902*)il2cpp_codegen_object_new(DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				DownloadHandlerFile__ctor_m4AC24ABF5B27F08BFA648A14B7A4BBC538A23102(L_7, L_6, NULL);
				NullCheck(L_5);
				UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_5, L_7, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CwwwU3E5__1_7;
				NullCheck(L_8);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_9;
				L_9 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_8, NULL);
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_012d;
			}

IL_007a_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CwwwU3E5__1_7;
				NullCheck(L_10);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_11;
				L_11 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_10, NULL);
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(5 /* System.Void UnityEngine.Networking.DownloadHandler::Dispose() */, L_11);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CwwwU3E5__1_7;
				NullCheck(L_12);
				int32_t L_13;
				L_13 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_12, NULL);
				V_2 = (bool)((((int32_t)L_13) == ((int32_t)2))? 1 : 0);
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_00ef_1;
				}
			}
			{
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CwwwU3E5__1_7;
				NullCheck(L_15);
				String_t* L_16;
				L_16 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
				Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_17 = __this->___errorCallback_5;
				V_3 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_18 = V_3;
				if (!L_18)
				{
					goto IL_00ec_1;
				}
			}
			{
				Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_19 = __this->___errorCallback_5;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = __this->___U3CwwwU3E5__1_7;
				NullCheck(L_20);
				String_t* L_21;
				L_21 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_20, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___U3CwwwU3E5__1_7;
				NullCheck(L_22);
				int64_t L_23;
				L_23 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_22, NULL);
				XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_24 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var);
				NullCheck(L_24);
				XrException__ctor_m1017F1AF736750DCB0B6F37E1D311AC8D7EAAD91(L_24, L_21, ((int32_t)L_23), NULL);
				NullCheck(L_19);
				Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_19, L_24, NULL);
			}

IL_00ec_1:
			{
				goto IL_0112_1;
			}

IL_00ef_1:
			{
				Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_25 = __this->___callback_4;
				V_4 = (bool)((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_25) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_26 = V_4;
				if (!L_26)
				{
					goto IL_0111_1;
				}
			}
			{
				Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_27 = __this->___callback_4;
				String_t* L_28 = __this->___filePath_3;
				NullCheck(L_27);
				Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_27, L_28, NULL);
			}

IL_0111_1:
			{
			}

IL_0112_1:
			{
				U3CDownloadToFileU3Ed__30_U3CU3Em__Finally1_mDF7719A1D6D5E26404714E5737160E943DEBBB79(__this, NULL);
				__this->___U3CwwwU3E5__1_7 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__1_7), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				V_0 = (bool)0;
				goto IL_012d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012d:
	{
		bool L_29 = V_0;
		return L_29;
	}
}
// System.Void co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadToFileU3Ed__30_U3CU3Em__Finally1_mDF7719A1D6D5E26404714E5737160E943DEBBB79 (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwwwU3E5__1_7;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwwwU3E5__1_7;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadToFileU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE35BA313DB5AA1CC99258E1E959F9BC222C5CC36 (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadToFileU3Ed__30_System_Collections_IEnumerator_Reset_m354FD813D528A26E8BE17A565F2309DE960098A9 (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownloadToFileU3Ed__30_System_Collections_IEnumerator_Reset_m354FD813D528A26E8BE17A565F2309DE960098A9_RuntimeMethod_var)));
	}
}
// System.Object co.techxr.unity.network.NetworkService2/<DownloadToFile>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadToFileU3Ed__30_System_Collections_IEnumerator_get_Current_m7EB504CEF3FD7DB9B11155EA725638870EE399FC (U3CDownloadToFileU3Ed__30_t8D38CB2D585BC2211FB7FB6C300867068829FA86* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.Url::setBaseUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url_setBaseUrl_m4121456E92CD194FD1E419D712EC2BA83B8B26C4 (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->___baseUrl_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->___baseUrl_2), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.network.Url::getFullUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Url_getFullUrl_m2414AB139380C1EA5E6E40F476F07551B06D32FF (String_t* ___partUrl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->___baseUrl_2;
		String_t* L_1 = ___partUrl0;
		String_t* L_2;
		L_2 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void co.techxr.unity.network.Url::setEditorMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url_setEditorMode_m5D357F9406E2207857EFD1AF48DFBF4FBC2D184D (bool ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___mode0;
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->___EDITOR_MODE_0 = L_0;
		return;
	}
}
// System.Void co.techxr.unity.network.Url::getNetworkService2(System.Action`1<co.techxr.unity.network.NetworkService2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url_getNetworkService2_m2D582C3E3B0B089862A65852F39D378428A5380C (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* L_0 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_3 = ___callback0;
		NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* L_4 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_3);
		Action_1_Invoke_mF0C1FA03AB8CD3186D201207F21E8038CC5F1295_inline(L_3, L_4, NULL);
		goto IL_0029;
	}

IL_0020:
	{
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_5 = ___callback0;
		NetworkService2_add_networkServiceListener_mEC88B15359925746BA23B867AF7F038D2171EFF9(L_5, NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void co.techxr.unity.network.Url::getNetworkService(System.Action`1<co.techxr.unity.network.INetworkService>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url_getNetworkService_mD9B700E68A0FB4DEA28C21AC907C2151C342715B (Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CgetNetworkServiceU3Eb__0_mC10095AE41F6BB6EE5B31E3FD9B7070E5E058330_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B* L_0 = (U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m382210D2440785B762A72B777E9F85E0792E757D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B* L_1 = V_0;
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_2 = ___callback0;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		bool L_3 = ((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->___EDITOR_MODE_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* L_5 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B* L_8 = V_0;
		NullCheck(L_8);
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_9 = L_8->___callback_0;
		NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* L_10 = ((NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_StaticFields*)il2cpp_codegen_static_fields_for(NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_9);
		Action_1_Invoke_mE0F7D7153EEB8744CD8C91E451F67B0C69EF4959_inline(L_9, L_10, NULL);
		goto IL_0053;
	}

IL_003f:
	{
		U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B* L_11 = V_0;
		Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE* L_12 = (Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE*)il2cpp_codegen_object_new(Action_1_tB40EF3C6A50E00B2D0A13A412D9C440D7A580ECE_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_m05417F262A16C5381FECC6092E6A32417372ABC5(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CgetNetworkServiceU3Eb__0_mC10095AE41F6BB6EE5B31E3FD9B7070E5E058330_RuntimeMethod_var), NULL);
		NetworkService2_add_networkServiceListener_mEC88B15359925746BA23B867AF7F038D2171EFF9(L_12, NULL);
	}

IL_0053:
	{
		goto IL_0081;
	}

IL_0056:
	{
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		NetworkService_t64A888C1001819C42925F83CA29197037F62175C* L_13 = ((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->____networkService_1;
		V_3 = (bool)((((RuntimeObject*)(NetworkService_t64A888C1001819C42925F83CA29197037F62175C*)L_13) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		NetworkService_t64A888C1001819C42925F83CA29197037F62175C* L_15 = (NetworkService_t64A888C1001819C42925F83CA29197037F62175C*)il2cpp_codegen_object_new(NetworkService_t64A888C1001819C42925F83CA29197037F62175C_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		NetworkService__ctor_m9C6B18432700CA0330024C43B8FEC3E311CCD3EF(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->____networkService_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->____networkService_1), (void*)L_15);
	}

IL_006f:
	{
		U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B* L_16 = V_0;
		NullCheck(L_16);
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_17 = L_16->___callback_0;
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		NetworkService_t64A888C1001819C42925F83CA29197037F62175C* L_18 = ((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->____networkService_1;
		NullCheck(L_17);
		Action_1_Invoke_mE0F7D7153EEB8744CD8C91E451F67B0C69EF4959_inline(L_17, L_18, NULL);
	}

IL_0081:
	{
		return;
	}
}
// System.Void co.techxr.unity.network.Url::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url__ctor_m0FE837F1F772220AD1D23DFADF09B86C4EE7C4EE (Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.Url::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url__cctor_mF1B6F2BDE5C2A38AB51C7AD1165B852DDBCCD045 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56A912BE526D5441F7D252F6E3751DA841A36D26);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->___EDITOR_MODE_0 = (bool)0;
		((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->___baseUrl_2 = _stringLiteral56A912BE526D5441F7D252F6E3751DA841A36D26;
		Il2CppCodeGenWriteBarrier((void**)(&((Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_StaticFields*)il2cpp_codegen_static_fields_for(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var))->___baseUrl_2), (void*)_stringLiteral56A912BE526D5441F7D252F6E3751DA841A36D26);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void co.techxr.unity.network.Url/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m382210D2440785B762A72B777E9F85E0792E757D (U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void co.techxr.unity.network.Url/<>c__DisplayClass7_0::<getNetworkService>b__0(co.techxr.unity.network.NetworkService2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CgetNetworkServiceU3Eb__0_mC10095AE41F6BB6EE5B31E3FD9B7070E5E058330 (U3CU3Ec__DisplayClass7_0_t0757B5CBBE7A9B744D0FEC9109CBBCF62B93513B* __this, NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* ___networkService20, const RuntimeMethod* method) 
{
	Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* G_B2_0 = NULL;
	Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* G_B1_0 = NULL;
	{
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_0 = __this->___callback_0;
		Action_1_t8AFC4692FDE8C5E3CB34F06C0124AC5CF680EE52* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		NetworkService2_t6053DD88535132C0C8805A7A30C23C28C7E569B5* L_2 = ___networkService20;
		NullCheck(G_B2_0);
		Action_1_Invoke_mE0F7D7153EEB8744CD8C91E451F67B0C69EF4959_inline(G_B2_0, L_2, NULL);
	}

IL_0014:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 co.techxr.unity.exceptions.XrException::get_errorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XrException_get_errorCode_m3656DCEDFF67877A04DACB589E83585A3F5A427C (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CerrorCodeU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void co.techxr.unity.exceptions.XrException::set_errorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrException_set_errorCode_m2868F9CCCF53990DF0729B2EE637A0280338658F (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CerrorCodeU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.String co.techxr.unity.exceptions.XrException::get_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334 (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CmessageU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void co.techxr.unity.exceptions.XrException::set_message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrException_set_message_m36363A118F69E297F700D0398BC96339183E61C8 (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CmessageU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmessageU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.exceptions.XrException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		String_t* L_0 = ___msg0;
		XrException_set_message_m36363A118F69E297F700D0398BC96339183E61C8_inline(__this, L_0, NULL);
		String_t* L_1;
		L_1 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_1, NULL);
		return;
	}
}
// System.Void co.techxr.unity.exceptions.XrException::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrException__ctor_m1017F1AF736750DCB0B6F37E1D311AC8D7EAAD91 (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, String_t* ___msg0, int32_t ___code1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		String_t* L_0 = ___msg0;
		XrException_set_message_m36363A118F69E297F700D0398BC96339183E61C8_inline(__this, L_0, NULL);
		int32_t L_1 = ___code1;
		XrException_set_errorCode_m2868F9CCCF53990DF0729B2EE637A0280338658F_inline(__this, L_1, NULL);
		String_t* L_2;
		L_2 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		return;
	}
}
// System.String co.techxr.unity.exceptions.XrException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XrException_ToString_mC125E7F20A14CB3FF00750E68473EF3D533FBE85 (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04CB971E1C7EED56CF28788244596821E1502FD5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(__this, NULL);
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral04CB971E1C7EED56CF28788244596821E1502FD5, L_0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String co.techxr.unity.model.LoginDto::get_email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoginDto_get_email_mF21975A18E45F8BACC182240A4F82F7F9386A71E (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CemailU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.LoginDto::set_email(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginDto_set_email_m56726083368A4674A47E7B1A8BE29D910230B8F5 (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CemailU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CemailU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.LoginDto::get_password()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoginDto_get_password_m3446E0B28386B4BA5D31EB9C986A18B48329C571 (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CpasswordU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.LoginDto::set_password(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginDto_set_password_m944BBD56EAC0B309537CCBC938524D8A9FE0B42D (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CpasswordU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpasswordU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.LoginDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginDto__ctor_m8FF53772151E742C507E19B00D05EB0B0F83AB18 (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String co.techxr.unity.model.LoginResponse::get_access_token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2 (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3Caccess_tokenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.LoginResponse::set_access_token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginResponse_set_access_token_m90D414194B267620F613EED2AB0AA1988C1E0223 (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3Caccess_tokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Caccess_tokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.LoginResponse::get_token_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoginResponse_get_token_type_mC177A6F0F1D37F13DC582DF4CC25560CB08D5050 (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3Ctoken_typeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.LoginResponse::set_token_type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginResponse_set_token_type_m597ECC5A5251502EAC949DDD7DFAA5C42C26F1F6 (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3Ctoken_typeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Ctoken_typeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.LoginResponse::get_refresh_token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoginResponse_get_refresh_token_m47C440EAF8140EF4968EF478A48800CDEFA4669A (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3Crefresh_tokenU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.LoginResponse::set_refresh_token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginResponse_set_refresh_token_m188327AED7B9172C5DCB86BDF5586CF849206040 (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3Crefresh_tokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Crefresh_tokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.LoginResponse::get_expires_in()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoginResponse_get_expires_in_m88DC85A628DCA4444BD331A84014A9AAE7936757 (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3Cexpires_inU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.LoginResponse::set_expires_in(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginResponse_set_expires_in_m7B51862FC2AC03710CA9C5E99E493EB40C93465F (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3Cexpires_inU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cexpires_inU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.LoginResponse::get_scope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoginResponse_get_scope_m2D3A4E3794C95781C76C3B6811C3286BB70EDAAB (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CscopeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.LoginResponse::set_scope(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginResponse_set_scope_mAC34DE95672B700B9DEAFB72357550A72B4CDB24 (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CscopeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CscopeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// co.techxr.unity.model.Profile co.techxr.unity.model.LoginResponse::get_profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* LoginResponse_get_profile_m8BB9DBFBB18D3C30F089A9F53C03DD893E9DE428 (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_0 = __this->___U3CprofileU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.LoginResponse::set_profile(co.techxr.unity.model.Profile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginResponse_set_profile_m5400A35760FAFF2B498CC76EFB865B2C945A4166 (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* ___value0, const RuntimeMethod* method) 
{
	{
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_0 = ___value0;
		__this->___U3CprofileU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprofileU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.LoginResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginResponse__ctor_m3AB20EF5737F6A4921FD3E855AB717BCED75917B (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 co.techxr.unity.model.PasswordChangeDto::get_profileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PasswordChangeDto_get_profileId_m020E9EACB329A6934D838255FB305608B979CBF7 (PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CprofileIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.PasswordChangeDto::set_profileId(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PasswordChangeDto_set_profileId_m31FA7CEAB2D4FA61AD366075896625C462BFD953 (PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CprofileIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String co.techxr.unity.model.PasswordChangeDto::get_password()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PasswordChangeDto_get_password_m6531874A04FE7CA61B501385ECA5B6EA0310E744 (PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CpasswordU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.PasswordChangeDto::set_password(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PasswordChangeDto_set_password_mED37BD68C733CE5056995E1594D7FD4C61E13327 (PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CpasswordU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpasswordU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.PasswordChangeDto::get_confirmPassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PasswordChangeDto_get_confirmPassword_m64752C010535DB231F9D7CF5041757212644FA23 (PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CconfirmPasswordU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.PasswordChangeDto::set_confirmPassword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PasswordChangeDto_set_confirmPassword_mD957467BC7D1ACBE5A202CDF920E0FDE0EE65F95 (PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CconfirmPasswordU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CconfirmPasswordU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.PasswordChangeDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PasswordChangeDto__ctor_mCA031E0400520797BF278C45A24A4ACB079FA9D5 (PasswordChangeDto_tC5407A3B74D04A22D1FCBEB71E3C25EFCB14CE18* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 co.techxr.unity.model.PhoneDto::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PhoneDto_get_id_m24558CAF4E6D54F82C10FF85E62DE52AA986119B (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.PhoneDto::set_id(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneDto_set_id_mA15CDBACD3A34F869E55A281F6CDE0934A142C07 (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String co.techxr.unity.model.PhoneDto::get_countryCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhoneDto_get_countryCode_m628BB1B3AADEC5158B3C2EB405BB2A3595C4166F (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcountryCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.PhoneDto::set_countryCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneDto_set_countryCode_m4B2280A1A5BB654751CF43C8D6F3EAFC9BB95F2A (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CcountryCodeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcountryCodeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.PhoneDto::get_callStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhoneDto_get_callStatus_m0916C6FFF3F67DC627C8BA3672D658B38B5A1930 (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcallStatusU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.PhoneDto::set_callStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneDto_set_callStatus_m4EE9AC838C0C65774DBCE37AFCAE1B56AAB712E7 (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CcallStatusU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcallStatusU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.PhoneDto::get_whatsappStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhoneDto_get_whatsappStatus_mE019B3AA7AC99E215214845C780C29C16099CCEA (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CwhatsappStatusU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.PhoneDto::set_whatsappStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneDto_set_whatsappStatus_m98E71E7E3D93D48027E39345C67DA022341AA422 (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CwhatsappStatusU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwhatsappStatusU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.PhoneDto::get_phoneNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhoneDto_get_phoneNumber_mD5EFB39B8C92ED2C58BF3F15E31ECDEA82D7E224 (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CphoneNumberU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.PhoneDto::set_phoneNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneDto_set_phoneNumber_m35B0A675DA2B019284DCB3B3C9A161E408004DD3 (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CphoneNumberU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CphoneNumberU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.PhoneDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneDto__ctor_mEFCDB2D8EC721F49D729CBF70A810C647E7812BC (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 co.techxr.unity.model.Profile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Profile_get_id_m40667EDC77D22F4C06D40195F80E348748B3D269 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.Profile::set_id(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile_set_id_m1CBDB2B3F367F0F5553E8427AFE3E9B47106ECFA (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String co.techxr.unity.model.Profile::get_firstName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Profile_get_firstName_mF08B60BA0612BFE32571918A14E84289530EEE56 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CfirstNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.Profile::set_firstName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile_set_firstName_m5595E8E80114B7638D56119DE6E9DF0BA8A04965 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CfirstNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfirstNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.Profile::get_lastName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Profile_get_lastName_m26ADC05C54F500389B14ECC74CA8EFF6D2C790B5 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3ClastNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.Profile::set_lastName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile_set_lastName_m00E9B2C0C773EDD78054E3CA8E244FB61C73C0F1 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3ClastNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClastNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.Profile::get_email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Profile_get_email_m28EE47AB3E1B74978158F21B00E57D2A675AFA18 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CemailU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.Profile::set_email(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile_set_email_mA72305D17841A28D066AC19041EBE0059EA18347 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CemailU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CemailU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// co.techxr.unity.model.PhoneDto co.techxr.unity.model.Profile::get_phone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* Profile_get_phone_mA085A5F3D88BADB86B031FE0C8008F33F602FFC5 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_0 = __this->___U3CphoneU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.Profile::set_phone(co.techxr.unity.model.PhoneDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile_set_phone_m08D54AAC84B58867962283A6F1CBAE81385D0A83 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* ___value0, const RuntimeMethod* method) 
{
	{
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_0 = ___value0;
		__this->___U3CphoneU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CphoneU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.Profile::get_address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Profile_get_address_mF916460DFCFACD3CAC3F030DFAE6833B040E464A (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CaddressU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.Profile::set_address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile_set_address_m5F04382B41AAC8A6C67FA99651EAE97A5D5651BF (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CaddressU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.Profile::get_password()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Profile_get_password_m2A63C4F322A81B43840948AB9209F0CA69CB9955 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CpasswordU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.Profile::set_password(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile_set_password_m773FE6B55C385682AD540E4B4CAD0495E15A987D (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CpasswordU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpasswordU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.Profile::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Profile_get_image_mC8112C820224FB7D82DF5B6C271BC29D0A7F760E (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CimageU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.Profile::set_image(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile_set_image_m5E908943B98F3406D8D1F573E1CE04B4DFFCEC6B (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CimageU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimageU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Boolean co.techxr.unity.model.Profile::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Profile_get_active_mF1EE18B048C9CB62AAE5791E32B036102A59853D (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CactiveU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.Profile::set_active(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile_set_active_mA8EAC62A263D18F7A13B629209978B1D707C5969 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CactiveU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.String> co.techxr.unity.model.Profile::get_roles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Profile_get_roles_m209D1BEB8804C6EEB82C77035826E55B5B30C8BA (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CrolesU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.Profile::set_roles(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile_set_roles_mDF21B762F1082630D973D137A7E0EE9B9C9C7453 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CrolesU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrolesU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.Profile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile__ctor_m5113FE34C065AC977909C870C7C1FC5E21934A38 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CactiveU3Ek__BackingField_8 = (bool)0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___U3CrolesU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrolesU3Ek__BackingField_9), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String co.techxr.unity.model.DocumentDto::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DocumentDto_get_url_m062EC69C1E79731B6CB0C20417084C2E8391FF7D (DocumentDto_tE851E366B609CE34E8796DFA485D87A439B1D49C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CurlU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.DocumentDto::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentDto_set_url_m9E48CF067D43363F783DE7F06304A0B18A0BF170 (DocumentDto_tE851E366B609CE34E8796DFA485D87A439B1D49C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CurlU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CurlU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.DocumentDto::get_documentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DocumentDto_get_documentType_mC81325751CA48F7F92F4CC4A202E579826D7FBB2 (DocumentDto_tE851E366B609CE34E8796DFA485D87A439B1D49C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdocumentTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.DocumentDto::set_documentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentDto_set_documentType_m5AF2A51B4416CF7911657935E9D3CED3AF1BC7E3 (DocumentDto_tE851E366B609CE34E8796DFA485D87A439B1D49C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CdocumentTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdocumentTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int64 co.techxr.unity.model.DocumentDto::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DocumentDto_get_size_m8D8D3FD71A3C47E009C1B92B1D97533C3FEADA49 (DocumentDto_tE851E366B609CE34E8796DFA485D87A439B1D49C* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CsizeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.DocumentDto::set_size(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentDto_set_size_mD29AB9125CFE34E2BCF8B651519E96ABCA68C167 (DocumentDto_tE851E366B609CE34E8796DFA485D87A439B1D49C* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CsizeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void co.techxr.unity.model.DocumentDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentDto__ctor_mF0247C2E0BF16DED774982221646BBF687BDBCD8 (DocumentDto_tE851E366B609CE34E8796DFA485D87A439B1D49C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String co.techxr.unity.model.GenericAsset::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericAsset_get_id_m49B93FC2A7EEE25FFA614056F0E3C218BA29AB2E (GenericAsset_t7DBD632872843B9907680830D85AF1FE8EB1E357* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.GenericAsset::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericAsset_set_id_mA5837CC5CD634C6276EB279C487152F3DDCC50D2 (GenericAsset_t7DBD632872843B9907680830D85AF1FE8EB1E357* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.GenericAsset::get_displayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericAsset_get_displayName_m6BAF028DA34D4ED6097C700C8595A41125D10E74 (GenericAsset_t7DBD632872843B9907680830D85AF1FE8EB1E357* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.GenericAsset::set_displayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericAsset_set_displayName_m8C78FA1B3D863C64639DB9319E0F26CA970CBECE (GenericAsset_t7DBD632872843B9907680830D85AF1FE8EB1E357* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CdisplayNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdisplayNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.GenericAsset::get_imageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericAsset_get_imageUrl_m91FB43B47240A8D0142BED3CFD1498F7EFC0985B (GenericAsset_t7DBD632872843B9907680830D85AF1FE8EB1E357* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CimageUrlU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.GenericAsset::set_imageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericAsset_set_imageUrl_m89EB835CEC9DB76CFE946FB99A98BC0D627829E1 (GenericAsset_t7DBD632872843B9907680830D85AF1FE8EB1E357* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CimageUrlU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimageUrlU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.GenericAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericAsset__ctor_mBA5B53726CDB72315F54C66394401EF424835D9E (GenericAsset_t7DBD632872843B9907680830D85AF1FE8EB1E357* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String co.techxr.unity.model.SpecificAsset::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_id_m40DDF72D037CA4F5391A99CD3BB100BBC6700F8C (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SpecificAsset::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecificAsset_set_id_mFC77CDFE2E863FB1DE44EBA0B11F52C98858D3D7 (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.SpecificAsset::get_displayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_displayName_mC46DA27301E3A69D0F39023E860B0A144F684542 (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SpecificAsset::set_displayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecificAsset_set_displayName_m189DA6DC64CF27865F0D16CCC6948E4E606CCE84 (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CdisplayNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdisplayNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.SpecificAsset::get_imageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_imageUrl_m6C96F686B924458AA1CDEBD8E6D5ACA94885A783 (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CimageUrlU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SpecificAsset::set_imageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecificAsset_set_imageUrl_mDC628291472CF563341F8E99F23994C84A0E6A01 (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CimageUrlU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimageUrlU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.SpecificAsset::get_unityPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_unityPlatform_m34DFDFC15271AE24C255D5176209B3F262D95FE6 (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CunityPlatformU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SpecificAsset::set_unityPlatform(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecificAsset_set_unityPlatform_m37060F16BA152A1EE8341E5849522C3E1A1BFBC8 (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CunityPlatformU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CunityPlatformU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.SpecificAsset::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_url_mE22B4F47D24536C1BB863D1D0787F2F21F40F30B (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CurlU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SpecificAsset::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecificAsset_set_url_m7D13B28F63BBCB900E849BE86ABD651ED55FB345 (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CurlU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CurlU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.SpecificAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecificAsset__ctor_mF47994AECF61128901606D9BBD22FD08BD7A92A4 (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String co.techxr.unity.model.ActivationDto::get_installationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ActivationDto_get_installationId_m1052F52605DFFBEE766077AA249F5E7ADA445EC5 (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CinstallationIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.ActivationDto::set_installationId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationDto_set_installationId_m70E0007369443F61179B322E0864D702CE43D75A (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CinstallationIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallationIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int64 co.techxr.unity.model.ActivationDto::get_profileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ActivationDto_get_profileId_m0FF7C2A4B64E7E5566AD0AE5F2D8F00EDB00AAC4 (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CprofileIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.ActivationDto::set_profileId(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationDto_set_profileId_m1261859BCDC5792312ECE8C26CDD93C93E497007 (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CprofileIdU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean co.techxr.unity.model.ActivationDto::get_allowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivationDto_get_allowed_m9047CAAD46B35CABB1DB957614FDFA4939A3FB0D (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CallowedU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.ActivationDto::set_allowed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationDto_set_allowed_mE359CA4E5D77E346385A561C444B0D5B7CAE9548 (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CallowedU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String co.techxr.unity.model.ActivationDto::get_activationTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ActivationDto_get_activationTime_m74D733D03C26700A89D84BC9F16C6B1547E2BA39 (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CactivationTimeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.ActivationDto::set_activationTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationDto_set_activationTime_m97E86FC64E2BCF20169557715028BA972EB55ED2 (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CactivationTimeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CactivationTimeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.ActivationDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationDto__ctor_m1E4240E30C31452306752D7AB53B18D37525C26D (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 co.techxr.unity.model.ApplicationDto::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ApplicationDto_get_id_mA2C790803B0D6DC863DF461938C1184225DA7F95 (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.ApplicationDto::set_id(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationDto_set_id_mA18CA7A23CC8178251CFB5C2B4ADF7DA64335336 (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String co.techxr.unity.model.ApplicationDto::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApplicationDto_get_name_m6659980FB97736C42C750C4AA43FFF7BBDCE10B2 (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.ApplicationDto::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationDto_set_name_m0C0233F10079C9B4169F1A8FC399D71C25072AF3 (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.ApplicationDto::get_description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApplicationDto_get_description_mA2A508DB1DB08CCC39ACC304B376C8C869995F34 (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdescriptionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.ApplicationDto::set_description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationDto_set_description_mA0787BB5366E856E5C28DB5F930D1E271E1599B3 (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CdescriptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdescriptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int64 co.techxr.unity.model.ApplicationDto::get_developerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ApplicationDto_get_developerId_m144BF9C2177AE1105B5CC398782E23A4E82AD894 (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CdeveloperIdU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.ApplicationDto::set_developerId(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationDto_set_developerId_mB5841D01BA702B5412AB43C5C1CBE89EDB3DBB40 (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CdeveloperIdU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.String co.techxr.unity.model.ApplicationDto::get_key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApplicationDto_get_key_m26394685D851659AD6F338170E9659581BDF96B0 (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CkeyU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.ApplicationDto::set_key(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationDto_set_key_m289AA9972333CA7126EAD263ECAE38079B65B271 (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CkeyU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkeyU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.ApplicationDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationDto__ctor_mC7FA1590FC90B43BF95F9CFB67A1160DD7E3215E (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String co.techxr.unity.model.AppLoginDto::get_installationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppLoginDto_get_installationId_mA11FC77D95E22D33C0998CFCBB61A25DB1354464 (AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CinstallationIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.AppLoginDto::set_installationId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppLoginDto_set_installationId_mC8D6D6634A5CC71AC77932AEEE5AE990A0505419 (AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CinstallationIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallationIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.AppLoginDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppLoginDto__ctor_mA6F37AE4F23814DB7134120F7133215EA7670419 (AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String co.techxr.unity.model.SenseInstallDto::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SenseInstallDto_get_id_m8ADF48D62058A614962DFFD62B7BB09347ACF088 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SenseInstallDto::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInstallDto_set_id_m8405AAEE54E9C1BDA3FCBD3872CABCB25D22D588 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.SenseInstallDto::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SenseInstallDto_get_deviceId_m26A967E42AFBA992EB77D1B7C9E8439180E21A19 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdeviceIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SenseInstallDto::set_deviceId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInstallDto_set_deviceId_m4BDB96E294EF035AAF0B19FE499C13A9998C6304 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CdeviceIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdeviceIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.SenseInstallDto::get_os()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SenseInstallDto_get_os_m046CE3CD5CEF66A8472993A9F82F0DE390BAA679 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CosU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SenseInstallDto::set_os(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInstallDto_set_os_mBE971C58164102625421358605B2EDDAFDA0284A (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CosU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CosU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String co.techxr.unity.model.SenseInstallDto::get_hardware()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SenseInstallDto_get_hardware_m08522DA3825FBC87F99329042B7A31F14E027022 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3ChardwareU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SenseInstallDto::set_hardware(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInstallDto_set_hardware_m7477BDD4CCC7BCD09C15A9C7C78009260FB639F4 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3ChardwareU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChardwareU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int64 co.techxr.unity.model.SenseInstallDto::get_applicationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SenseInstallDto_get_applicationId_m65D224C5D23972499D619C7F1C67DFE1A05C3342 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CapplicationIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SenseInstallDto::set_applicationId(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInstallDto_set_applicationId_mF9F3E7ED29DE96521FD794FD63E0972516ED3F1F (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CapplicationIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String co.techxr.unity.model.SenseInstallDto::get_installType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SenseInstallDto_get_installType_mB9026F8FF5F1EE3D4CBD40D028B6785A72B4E812 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CinstallTypeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SenseInstallDto::set_installType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInstallDto_set_installType_mEEC8440AF8A02540773EE806110DBB408D97C556 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CinstallTypeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallTypeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Int32 co.techxr.unity.model.SenseInstallDto::get_installIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SenseInstallDto_get_installIndex_mEA872B3A6404A855204339DDB5C2B02F3F914EA8 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CinstallIndexU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SenseInstallDto::set_installIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInstallDto_set_installIndex_m0B74924971E7C8395BECC84CB8B9527D07F6D746 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CinstallIndexU3Ek__BackingField_6 = L_0;
		return;
	}
}
// co.techxr.unity.model.ActivationDto co.techxr.unity.model.SenseInstallDto::get_activation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* SenseInstallDto_get_activation_mC304D92E2BC933DED5F6D03804D40C1BAF12222F (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) 
{
	{
		ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* L_0 = __this->___U3CactivationU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void co.techxr.unity.model.SenseInstallDto::set_activation(co.techxr.unity.model.ActivationDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInstallDto_set_activation_m99EE1947E42F5A150754F75303123DE7F2835F7C (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* ___value0, const RuntimeMethod* method) 
{
	{
		ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* L_0 = ___value0;
		__this->___U3CactivationU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CactivationU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void co.techxr.unity.model.SenseInstallDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInstallDto__ctor_mD8FC3F4C86D7567D8DEAFEF345403BC7C20A0107 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RefreshTokenDto_set_refreshToken_m1334C423AC14D9AD7365007C00CE605B9CF257E4_inline (RefreshTokenDto_tE03773317CB730E61901242E3ABCD1B8889E4D77* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CrefreshTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrefreshTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_id_m40DDF72D037CA4F5391A99CD3BB100BBC6700F8C_inline (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_displayName_mC46DA27301E3A69D0F39023E860B0A144F684542_inline (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SpecificAsset_get_url_mE22B4F47D24536C1BB863D1D0787F2F21F40F30B_inline (SpecificAsset_tA44840364E6C9707F8BA0CB4EC70AAAB66D6851F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CurlU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* LoginResponse_get_profile_m8BB9DBFBB18D3C30F089A9F53C03DD893E9DE428_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_0 = __this->___U3CprofileU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Profile_get_id_m40667EDC77D22F4C06D40195F80E348748B3D269_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FileParameter_get_FileName_m1E05B51AC97239BC65696B3A074ABE7784EC335B_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFileNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FileParameter_get_ContentType_m95B93C7E2AD50275789F15C87CB446D5FEB0D27F_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CContentTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FileParameter_get_File_m4071647FDFA238706C1A859B57AA07CDDA87F561_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CFileU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileParameter_set_File_mCC1203F6E4F5DA5FE1D7D276ABB3E64A9E23EBA4_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CFileU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFileU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileParameter_set_FileName_mAA2377EF759FB804D7A5FA1EA50BA3C24298DDB8_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFileNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFileNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileParameter_set_ContentType_m9B1C99EFAE8620446518813743BBB63BD683A777_inline (FileParameter_t3A82BFB85B50F7E0D138650AED414F2F67761E8D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CContentTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApplicationDto_set_key_m289AA9972333CA7126EAD263ECAE38079B65B271_inline (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CkeyU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkeyU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3Caccess_tokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* __this, const RuntimeMethod* method) 
{
	{
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_0 = __this->___m_Response_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoginResponse_get_refresh_token_m47C440EAF8140EF4968EF478A48800CDEFA4669A_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3Crefresh_tokenU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XrException_set_errorCode_m2868F9CCCF53990DF0729B2EE637A0280338658F_inline (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CerrorCodeU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XrException_set_message_m36363A118F69E297F700D0398BC96339183E61C8_inline (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CmessageU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmessageU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CmessageU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m777839BF9CB9F96B081106B47202D06FB35326CA_gshared_inline (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg00, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
