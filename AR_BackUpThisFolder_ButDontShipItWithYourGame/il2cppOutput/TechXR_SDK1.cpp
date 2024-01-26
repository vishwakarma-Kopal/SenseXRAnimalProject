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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<co.techxr.unity.model.LoginResponse>
struct Action_1_t364C94423BE312DFF449DB8389178799569DCF01;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<co.techxr.unity.model.PhoneDto>
struct Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9;
// System.Action`1<co.techxr.unity.model.Profile>
struct Action_1_t21368F37D8368081C267784197A861AE2EF93602;
// System.Action`1<co.techxr.unity.model.SenseInstallDto>
struct Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<co.techxr.unity.exceptions.XrException>
struct Action_1_t77330DAB4B6364644857E237915461B112A9D589;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct ConcurrentDictionary_2_t847EC94864EAD4D4DAAC178360D815D61414FB0D;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.Metadata.JsonTypeInfo>
struct ConcurrentDictionary_2_tBB3D7D3E921EC4D2A5836C85E459C1871641CB32;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct Dictionary_2_t0483416E2612BB76C51CC68E3BC2D3CCAB6198D9;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`3<System.Type,System.Text.Json.JsonSerializerOptions,System.Text.Json.Serialization.Metadata.JsonTypeInfo>
struct Func_3_t80B18BCDC791D3FBC519B36E97931215F647CFD7;
// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter>
struct IList_1_tC0B13B2863B707AF8F570191723FA59FC26BABEA;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Text.Json.Serialization.JsonConverter[]
struct JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// co.techxr.unity.model.ActivationDto
struct ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// co.techxr.unity.model.AppLoginDto
struct AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B;
// co.techxr.unity.model.ApplicationDto
struct ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// co.techxr.unity.network.AuthService
struct AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94;
// TechXR.Core.Sense.AuthenticationManager
struct AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB;
// TechXR.Core.Sense.AuthenticationService
struct AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// co.techxr.unity.network.IAuthService
struct IAuthService_t3127A52979829720A42D265715C947BE56700ED3;
// co.techxr.unity.network.IAuthServiceMono
struct IAuthServiceMono_t160D1561A50C713F623AD6AE1D15C8F5655AC54C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// co.techxr.unity.network.ILicenseService
struct ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C;
// co.techxr.unity.network.INetworkService
struct INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// TechXR.Core.Sense.InputValidation
struct InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22;
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
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// co.techxr.unity.network.LicenseService
struct LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759;
// TechXR.Core.Sense.Loader
struct Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669;
// TechXR.Core.Sense.LoaderRotation
struct LoaderRotation_t4E2DE463B58A112E1795A2B5B90B1D1906ABF1E2;
// co.techxr.unity.model.LoginDto
struct LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664;
// co.techxr.unity.model.LoginResponse
struct LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Text.Json.Serialization.Metadata.MemberAccessor
struct MemberAccessor_tB287B55E0A8EBD4AA3EBF99FBCA7F7AEF76347AC;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// co.techxr.unity.model.PhoneDto
struct PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB;
// co.techxr.unity.model.Profile
struct Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.Json.Serialization.ReferenceHandler
struct ReferenceHandler_t1630C9ADF53E934E6EE593185A0B1C4CFCED6FD5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// co.techxr.unity.model.SenseInstallDto
struct SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// TechXR.Core.Sense.StorageUtil
struct StorageUtil_t437195D6BA505EA17F8B413276504D421E24F384;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TechXR.Core.Sense.TechXRConfiguration
struct TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// TechXR.Core.Sense.UserVerificationManager
struct UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A;
// TechXR.Core.Sense.UserVerificationService
struct UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// co.techxr.unity.exceptions.XrException
struct XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F;
// TechXR.Core.Sense.AuthenticationManager/PostLogin
struct PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7;
// TechXR.Core.Sense.AuthenticationService/<>c
struct U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B;
// TechXR.Core.Sense.AuthenticationService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;
// TechXR.Core.Sense.UserVerificationManager/<>c
struct U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0;
// TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t15176CCE69315353413C866E2C08CC1C5CB78E8E;
// TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tE2948E0D7FCAB99E2B37B13A9FEF18B8CDC9B124;
// TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E;
// TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1
struct U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA;
// TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t21368F37D8368081C267784197A861AE2EF93602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08D29A3C6956B411AF7AB2251D649418ACDBAFE6;
IL2CPP_EXTERN_C String_t* _stringLiteral0DEAF6236E883D31B368FA3F2A0448F8C1BD7E24;
IL2CPP_EXTERN_C String_t* _stringLiteral260061FC15C64A0D5DDFEC5895DF20810F82405F;
IL2CPP_EXTERN_C String_t* _stringLiteral26599195A12290C07C0FC683839A2A5F739DF240;
IL2CPP_EXTERN_C String_t* _stringLiteral328A911328354687B37D76895A9A9B8D7C428F31;
IL2CPP_EXTERN_C String_t* _stringLiteral3B9952B7618AEC6C5F5B70D58782DC8308347611;
IL2CPP_EXTERN_C String_t* _stringLiteral49CFC9EF229D3FF85003ECF21513FA580AD57A60;
IL2CPP_EXTERN_C String_t* _stringLiteral49E80EDC8426AF3D265E316A171B8B0B0A8399BB;
IL2CPP_EXTERN_C String_t* _stringLiteral4F0A3D60F895C2CF7D9300A212D385B6791CD361;
IL2CPP_EXTERN_C String_t* _stringLiteral55682B4DCFD8F02CA3ECB86562356D1DD3C7A420;
IL2CPP_EXTERN_C String_t* _stringLiteral67EA3A0E625A4982642B4DE8200AE7B7A736EB15;
IL2CPP_EXTERN_C String_t* _stringLiteral6D931A88BE039DE3AF765BFC224763F1F0D71EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral72CDE9F434D68E10B16E4AB5969DFF0BA85644AD;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral7A6F3465452F5D3892CC8C8C587154AB5CEFD422;
IL2CPP_EXTERN_C String_t* _stringLiteral7DACF0DE919AE0207D8DD908B9CD4FF9229FA53D;
IL2CPP_EXTERN_C String_t* _stringLiteral81E3C5C7539514A78704AE815EE017AEFABE4632;
IL2CPP_EXTERN_C String_t* _stringLiteral81F2D69D4EE92F820DD6FE0716B457209D443E60;
IL2CPP_EXTERN_C String_t* _stringLiteral8309131CDB2CF0DE3EE6CB11D10EAE48DC100918;
IL2CPP_EXTERN_C String_t* _stringLiteral84BEF2BBBA709D39E6088E032114AC9F810A5B7A;
IL2CPP_EXTERN_C String_t* _stringLiteral853327E41FE4DDB0AB25A16048FB06169BDA3C64;
IL2CPP_EXTERN_C String_t* _stringLiteral8705038A3C6DB55151C9D02BE2C329BDAA2B47D7;
IL2CPP_EXTERN_C String_t* _stringLiteral8D2764F15C5654BF385B3F6CC295E8D28C084612;
IL2CPP_EXTERN_C String_t* _stringLiteralB3EF677BCA373CFB6989962B9A8D407936FFEF2A;
IL2CPP_EXTERN_C String_t* _stringLiteralBF237075835B5AEE36B44B1BE5641128C9B8D992;
IL2CPP_EXTERN_C String_t* _stringLiteralBF8860C0853E0892A2E8AFB0D3530E6679E2F2E4;
IL2CPP_EXTERN_C String_t* _stringLiteralBF93DD0CBDF08B8AF53DECF67CA31C2D76207D47;
IL2CPP_EXTERN_C String_t* _stringLiteralCEAED8D1FE8B625AFF7C1574C883F2B98150C75D;
IL2CPP_EXTERN_C String_t* _stringLiteralD6A67723594B708070A94074E00762A8952F7C44;
IL2CPP_EXTERN_C String_t* _stringLiteralD6D00488A86BB91E9E487C138BA4148B14F3EA45;
IL2CPP_EXTERN_C String_t* _stringLiteralD79935931D8A08BD57CEAAF3E238069B52D4BE96;
IL2CPP_EXTERN_C String_t* _stringLiteralDD9AF65A3432ED073C04078C9DB845E5328EF269;
IL2CPP_EXTERN_C String_t* _stringLiteralE3897281AF4E95A4F5FE68FCE0CDDF9BE9F23A64;
IL2CPP_EXTERN_C String_t* _stringLiteralE6F07D269AA06FC60EB5DB6FD3E0D67DF667DC5D;
IL2CPP_EXTERN_C String_t* _stringLiteralE757EE80D44BA0872B4351E2E862F2DBA78AB0D6;
IL2CPP_EXTERN_C String_t* _stringLiteralED003B9AC9032F4FCD8BB59AABFC166D92FCD7CA;
IL2CPP_EXTERN_C String_t* _stringLiteralF54E9B5DA0DF7531EBC3CD9179F1D310E8484A76;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationManager_U3CForgotPasswordU3Eb__32_0_m2241A953B8AEB028A842386414B40DEF34463DAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationManager_U3CForgotPasswordU3Eb__32_1_m7B953C04748A4E2B1276545520D5EE8B44CE5D9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationManager_U3CSendOtpValueU3Eb__31_0_mEFF7C1F8937141B4C84192900768F05148DA9F48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationManager_U3CSendOtpValueU3Eb__31_1_m87864BC46B86708DBBBEE40530A3E3F89271824D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationManager_U3CSignUpNewUserU3Eb__29_0_m9C7C6C658B04780EE6065B527BBA5AE43E8FBC9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationManager_U3CSignUpNewUserU3Eb__29_1_m6317D7FE376F2364CC039F956DC03F210D453FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationManager_U3CSubmitUsernamePasswordU3Eb__26_0_mD49ECB85C3C4ED6CCFC517B336AF6140740CABA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationManager_U3CSubmitUsernamePasswordU3Eb__26_1_mAEED9A4EEB76B870747FAB89E3A29733CCF51F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisAuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB_m06AF8A6278B537E58CF9689FA98E2F32B26DF07F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_mFA6392BFBD3E25B1775B0DF28661F2FF9FFF2C2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_m244241D50126BE9D4E004ECBF2B93D5EF6EA17D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Serialize_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_m0A74908978F138823705E0E9E8347752015B2CEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Serialize_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_m4988DDECA9EFABE02FAAC6EADA19A5274488B177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSignUpU3Eb__3_1_mFC96A3A77D0DAB60F196713F1DA16137982E9985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__0_mAA51B7254130639C3360CC18013626B82670C104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__1_m8683FE1CB559C447FA66EFE70782C9CCA270FAB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__2_m33C83F15FA05604166EFBE79C7C3287FE30112D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__3_mB2EBD1F5CB9523C5C2972E885F7134A07AE2538E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CSignUpU3Eb__0_m8E4CF63CC252360B7AAE87A23A92B0331DA1942F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__2_m7FE07635A3CA1A0831480A76AEEAB29480E38C4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__3_m6BFA7EC5730E967B7BA7516BE213069067477D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__4_mB07087987E009391B5005D39F438D95623A4EE88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__5_m826AFD7820CDC200B6D1448999EC047EE5A7BBEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__6_m4EE1C2FB9F1CCCE88B99CB7DC2CAB3330B1C7815_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// TechXR.Core.Sense.AuthenticationService
struct AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7  : public RuntimeObject
{
	// co.techxr.unity.network.IAuthService TechXR.Core.Sense.AuthenticationService::m_AuthService
	RuntimeObject* ___m_AuthService_0;
};

// TechXR.Core.Sense.InputValidation
struct InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22  : public RuntimeObject
{
	// System.Text.RegularExpressions.Regex TechXR.Core.Sense.InputValidation::emailRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___emailRegex_0;
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

// TechXR.Core.Sense.Loader
struct Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669  : public RuntimeObject
{
	// UnityEngine.GameObject TechXR.Core.Sense.Loader::m_Loader
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Loader_0;
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

// TechXR.Core.Sense.StorageUtil
struct StorageUtil_t437195D6BA505EA17F8B413276504D421E24F384  : public RuntimeObject
{
};

struct StorageUtil_t437195D6BA505EA17F8B413276504D421E24F384_StaticFields
{
	// co.techxr.unity.model.ApplicationDto TechXR.Core.Sense.StorageUtil::_applicationDto
	ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* ____applicationDto_0;
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

// TechXR.Core.Sense.TechXRConstant
struct TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890  : public RuntimeObject
{
};

struct TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_StaticFields
{
	// System.String TechXR.Core.Sense.TechXRConstant::APPLICATION_DTO
	String_t* ___APPLICATION_DTO_0;
	// System.String TechXR.Core.Sense.TechXRConstant::SENSE_INSTALL_DTO
	String_t* ___SENSE_INSTALL_DTO_1;
};

// TechXR.Core.Sense.UserVerificationManager
struct UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A  : public RuntimeObject
{
	// co.techxr.unity.model.LoginResponse TechXR.Core.Sense.UserVerificationManager::LoginResponseObject
	LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___LoginResponseObject_0;
	// System.Boolean TechXR.Core.Sense.UserVerificationManager::IsUserVerificationProcessStarted
	bool ___IsUserVerificationProcessStarted_1;
	// TechXR.Core.Sense.UserVerificationService TechXR.Core.Sense.UserVerificationManager::m_UserVerificationService
	UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* ___m_UserVerificationService_2;
	// UnityEngine.GameObject TechXR.Core.Sense.UserVerificationManager::m_LoginInterface
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LoginInterface_3;
};

// TechXR.Core.Sense.UserVerificationService
struct UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F  : public RuntimeObject
{
	// co.techxr.unity.network.ILicenseService TechXR.Core.Sense.UserVerificationService::m_LicenseService
	RuntimeObject* ___m_LicenseService_0;
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

// TechXR.Core.Sense.AuthenticationService/<>c
struct U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B  : public RuntimeObject
{
};

struct U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_StaticFields
{
	// TechXR.Core.Sense.AuthenticationService/<>c TechXR.Core.Sense.AuthenticationService/<>c::<>9
	U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B* ___U3CU3E9_0;
	// System.Action`1<co.techxr.unity.exceptions.XrException> TechXR.Core.Sense.AuthenticationService/<>c::<>9__3_1
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___U3CU3E9__3_1_1;
};

// TechXR.Core.Sense.AuthenticationService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297  : public RuntimeObject
{
	// TechXR.Core.Sense.AuthenticationService TechXR.Core.Sense.AuthenticationService/<>c__DisplayClass3_0::<>4__this
	AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* ___U3CU3E4__this_0;
	// co.techxr.unity.model.Profile TechXR.Core.Sense.AuthenticationService/<>c__DisplayClass3_0::profile
	Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* ___profile_1;
	// System.Action`1<co.techxr.unity.model.PhoneDto> TechXR.Core.Sense.AuthenticationService/<>c__DisplayClass3_0::OnSuccess
	Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* ___OnSuccess_2;
	// System.Action`1<co.techxr.unity.exceptions.XrException> TechXR.Core.Sense.AuthenticationService/<>c__DisplayClass3_0::OnError
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError_3;
};

// TechXR.Core.Sense.UserVerificationManager/<>c
struct U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0  : public RuntimeObject
{
};

struct U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0_StaticFields
{
	// TechXR.Core.Sense.UserVerificationManager/<>c TechXR.Core.Sense.UserVerificationManager/<>c::<>9
	U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0* ___U3CU3E9_0;
	// System.Action`1<co.techxr.unity.exceptions.XrException> TechXR.Core.Sense.UserVerificationManager/<>c::<>9__5_1
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___U3CU3E9__5_1_1;
};

// TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t15176CCE69315353413C866E2C08CC1C5CB78E8E  : public RuntimeObject
{
	// co.techxr.unity.model.SenseInstallDto TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass5_0::sid
	SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___sid_0;
	// UnityEngine.GameObject TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass5_0::loginInterface
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loginInterface_1;
	// System.Action`1<System.Boolean> TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass5_0::OnSuccess
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnSuccess_2;
};

// TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tE2948E0D7FCAB99E2B37B13A9FEF18B8CDC9B124  : public RuntimeObject
{
	// TechXR.Core.Sense.UserVerificationManager TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass7_0::<>4__this
	UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* ___U3CU3E4__this_0;
	// System.String TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass7_0::appKey
	String_t* ___appKey_1;
	// System.Action`1<System.Boolean> TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass7_0::OnSuccess
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnSuccess_2;
	// System.Action`1<co.techxr.unity.exceptions.XrException> TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass7_0::OnError
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError_3;
};

// TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E  : public RuntimeObject
{
	// TechXR.Core.Sense.UserVerificationManager TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_0::<>4__this
	UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* ___U3CU3E4__this_0;
	// System.Action`1<System.Boolean> TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_0::OnSuccess
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnSuccess_1;
	// System.Action`1<co.techxr.unity.exceptions.XrException> TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_0::OnError
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError_2;
};

// TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1
struct U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA  : public RuntimeObject
{
	// co.techxr.unity.model.SenseInstallDto TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::sid
	SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___sid_0;
	// TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_0 TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* ___CSU24U3CU3E8__locals1_1;
	// System.Action`1<co.techxr.unity.model.LoginResponse> TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::<>9__4
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___U3CU3E9__4_2;
	// System.Action`1<co.techxr.unity.model.LoginResponse> TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::<>9__6
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___U3CU3E9__6_3;
	// System.Action`1<co.techxr.unity.exceptions.XrException> TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::<>9__5
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___U3CU3E9__5_4;
};

// TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF  : public RuntimeObject
{
	// System.Action`1<co.techxr.unity.model.SenseInstallDto> TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::OnSuccess
	Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* ___OnSuccess_0;
	// TechXR.Core.Sense.UserVerificationService TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::<>4__this
	UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* ___U3CU3E4__this_1;
	// System.String TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::appKey
	String_t* ___appKey_2;
	// System.Action`1<co.techxr.unity.exceptions.XrException> TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::OnError
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError_3;
	// System.Action`1<co.techxr.unity.model.SenseInstallDto> TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::<>9__2
	Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* ___U3CU3E9__2_4;
	// System.Action`1<co.techxr.unity.exceptions.XrException> TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::<>9__3
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___U3CU3E9__3_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E__padding[72];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t79A2AFA24FD757D0BE30B308938937E92758A2EA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t79A2AFA24FD757D0BE30B308938937E92758A2EA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::34E8060187F10786C5B726834660C973DBC401421508CE2BB5362FC9ECD7BB5A
	__StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E ___34E8060187F10786C5B726834660C973DBC401421508CE2BB5362FC9ECD7BB5A_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::527397CDC1E565C54F1EA26BFE88C8FCA352D668FEEE8BA6644BE556339FBEE3
	__StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E ___527397CDC1E565C54F1EA26BFE88C8FCA352D668FEEE8BA6644BE556339FBEE3_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::5B5780BDA651647DB41FBC026BA70E68A3E77BFC303B8ED666C6E47B741C8AB6
	__StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E ___5B5780BDA651647DB41FBC026BA70E68A3E77BFC303B8ED666C6E47B741C8AB6_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::5BE60A107568C570D3B671A2458A443E89490F93AC661E05790B338233DB7290
	__StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E ___5BE60A107568C570D3B671A2458A443E89490F93AC661E05790B338233DB7290_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::6A1BA18F64199CE29DD94261AAD214C4631B23ADC29F432AD53DE605F297A656
	__StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E ___6A1BA18F64199CE29DD94261AAD214C4631B23ADC29F432AD53DE605F297A656_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::828780F6A287F306AE1BD8EB83ECBE851B1D0B445BE82C1F368E17BB35D21FF9
	__StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E ___828780F6A287F306AE1BD8EB83ECBE851B1D0B445BE82C1F368E17BB35D21FF9_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::B54A6BB489B34A985C71A02D0C873FD0DEB964F5B891CA28C71145BCC95A9CB1
	__StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E ___B54A6BB489B34A985C71A02D0C873FD0DEB964F5B891CA28C71145BCC95A9CB1_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::BF30DA755FBBD0E245EE99C7FEC7739A81238DEEFA9BC7105A1F622D8B57646D
	__StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E ___BF30DA755FBBD0E245EE99C7FEC7739A81238DEEFA9BC7105A1F622D8B57646D_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::F230599F6577C4293EFADF1660FD0CBFCF41092F225293221DB065A7E8398E93
	__StaticArrayInitTypeSizeU3D72_t60742BD622F725583B186BAA9BDF27C0AD41968E ___F230599F6577C4293EFADF1660FD0CBFCF41092F225293221DB065A7E8398E93_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.model.LoginResponse>
struct Action_1_t364C94423BE312DFF449DB8389178799569DCF01  : public MulticastDelegate_t
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

// System.Action`1<co.techxr.unity.exceptions.XrException>
struct Action_1_t77330DAB4B6364644857E237915461B112A9D589  : public MulticastDelegate_t
{
};

// TechXR.Core.Utils.SingletonScriptableObject`1<TechXR.Core.Sense.TechXRConfiguration>
struct SingletonScriptableObject_1_tA898FCDB45DF9AC26B67549B9FD0B77E0E39292D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

struct SingletonScriptableObject_1_tA898FCDB45DF9AC26B67549B9FD0B77E0E39292D_StaticFields
{
	// T TechXR.Core.Utils.SingletonScriptableObject`1::instance
	TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* ___instance_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TechXR.Core.Sense.AuthenticationManager/PostLogin
struct PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// TechXR.Core.Sense.TechXRConfiguration
struct TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0  : public SingletonScriptableObject_1_tA898FCDB45DF9AC26B67549B9FD0B77E0E39292D
{
	// System.String TechXR.Core.Sense.TechXRConfiguration::m_AppKey
	String_t* ___m_AppKey_5;
};

// TechXR.Core.Sense.AuthenticationManager
struct AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TechXR.Core.Sense.Loader TechXR.Core.Sense.AuthenticationManager::Loader
	Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* ___Loader_4;
	// TMPro.TMP_InputField TechXR.Core.Sense.AuthenticationManager::UserName
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___UserName_5;
	// TMPro.TMP_InputField TechXR.Core.Sense.AuthenticationManager::Password
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___Password_6;
	// TMPro.TMP_Text TechXR.Core.Sense.AuthenticationManager::ToastMessage
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___ToastMessage_7;
	// UnityEngine.Animator TechXR.Core.Sense.AuthenticationManager::ToastAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___ToastAnim_8;
	// UnityEngine.GameObject TechXR.Core.Sense.AuthenticationManager::OTP_Panel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___OTP_Panel_9;
	// UnityEngine.GameObject TechXR.Core.Sense.AuthenticationManager::SignupPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SignupPanel_10;
	// UnityEngine.GameObject TechXR.Core.Sense.AuthenticationManager::LoginPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LoginPanel_11;
	// UnityEngine.GameObject TechXR.Core.Sense.AuthenticationManager::ForgetPasswordPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ForgetPasswordPanel_12;
	// TMPro.TMP_Text TechXR.Core.Sense.AuthenticationManager::Otp_dynamic_text
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___Otp_dynamic_text_13;
	// TMPro.TMP_InputField TechXR.Core.Sense.AuthenticationManager::FirstName
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___FirstName_14;
	// TMPro.TMP_InputField TechXR.Core.Sense.AuthenticationManager::LastName
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___LastName_15;
	// TMPro.TMP_InputField TechXR.Core.Sense.AuthenticationManager::Email
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___Email_16;
	// TMPro.TMP_InputField TechXR.Core.Sense.AuthenticationManager::PhoneNumer
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___PhoneNumer_17;
	// TMPro.TMP_InputField TechXR.Core.Sense.AuthenticationManager::Otp_Input
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___Otp_Input_18;
	// TMPro.TMP_InputField TechXR.Core.Sense.AuthenticationManager::ForgotPassword_Input
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___ForgotPassword_Input_19;
	// TechXR.Core.Sense.AuthenticationService TechXR.Core.Sense.AuthenticationManager::m_AuthenticationService
	AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* ___m_AuthenticationService_20;
	// TechXR.Core.Sense.InputValidation TechXR.Core.Sense.AuthenticationManager::m_InputValidation
	InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22* ___m_InputValidation_21;
	// co.techxr.unity.model.PhoneDto TechXR.Core.Sense.AuthenticationManager::m_PhoneDtoResonse
	PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* ___m_PhoneDtoResonse_22;
	// TechXR.Core.Sense.AuthenticationManager/PostLogin TechXR.Core.Sense.AuthenticationManager::postLogin
	PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* ___postLogin_23;
	// System.Action`1<co.techxr.unity.model.LoginResponse> TechXR.Core.Sense.AuthenticationManager::pLogin
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___pLogin_24;
	// System.Action`1<co.techxr.unity.exceptions.XrException> TechXR.Core.Sense.AuthenticationManager::onError
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___onError_25;
};

// TechXR.Core.Sense.LoaderRotation
struct LoaderRotation_t4E2DE463B58A112E1795A2B5B90B1D1906ABF1E2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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


// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String System.Text.Json.JsonSerializer::Serialize<System.Object>(TValue,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_gshared (RuntimeObject* ___value0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method) ;
// T TechXR.Core.Utils.SingletonScriptableObject`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingletonScriptableObject_1_get_Instance_mC8E7F9B2079C26DBE2286A49480D55BB07EA172D_gshared (const RuntimeMethod* method) ;
// TValue System.Text.Json.JsonSerializer::Deserialize<System.Object>(System.String,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializer_Deserialize_TisRuntimeObject_m83DA6E6B82EAC695F47C9EAA9383BF4578429047_gshared (String_t* ___json0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.SenseInstallDto::set_activation(co.techxr.unity.model.ActivationDto)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInstallDto_set_activation_m99EE1947E42F5A150754F75303123DE7F2835F7C_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* ___value0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.StorageUtil::storeInstallationDetails(co.techxr.unity.model.SenseInstallDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageUtil_storeInstallationDetails_m221DD9AAD15D17748DDAFF4DDC6D2970F4338290 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___sid0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean co.techxr.unity.model.ActivationDto::get_allowed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ActivationDto_get_allowed_m9047CAAD46B35CABB1DB957614FDFA4939A3FB0D_inline (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m20187873B7C3FF385C74AFBD0B5D371DBF5867CE (U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.exceptions.XrException::get_message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.StorageUtil::storeApplicationDetail(co.techxr.unity.model.ApplicationDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageUtil_storeApplicationDetail_m192467F4E116F32F000CD156F8382559C37FEDBE (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* ___applicationDto0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.UserVerificationManager::CheckVerification2(System.String,System.Action`1<System.Boolean>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationManager_CheckVerification2_m45910AA3456610A1C81A11283FDC4BC11F943398 (UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* __this, String_t* ___appKey0, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.exceptions.XrException>::Invoke(T)
inline void Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline (Action_1_t77330DAB4B6364644857E237915461B112A9D589* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t77330DAB4B6364644857E237915461B112A9D589*, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1__ctor_m497219E64BBB5D00C872AF6107FA6CADBAFED166 (U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.model.SenseInstallDto::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SenseInstallDto_get_id_m8ADF48D62058A614962DFFD62B7BB09347ACF088_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.LoginResponse>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20 (Action_1_t364C94423BE312DFF449DB8389178799569DCF01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<co.techxr.unity.exceptions.XrException>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696 (Action_1_t77330DAB4B6364644857E237915461B112A9D589* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t77330DAB4B6364644857E237915461B112A9D589*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TechXR.Core.Sense.UserVerificationService::LoginThroughAppKey(System.String,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationService_LoginThroughAppKey_mCC09CE2C31C3C7B6FFB144DF0AD9BBBADCC010D0 (UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* __this, String_t* ___installationId0, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) ;
// co.techxr.unity.model.Profile co.techxr.unity.model.LoginResponse::get_profile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* LoginResponse_get_profile_m8BB9DBFBB18D3C30F089A9F53C03DD893E9DE428_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) ;
// System.Int64 co.techxr.unity.model.Profile::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Profile_get_id_m40667EDC77D22F4C06D40195F80E348748B3D269_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.UserVerificationManager::ActivateAndSaveInstallation(System.Int64,co.techxr.unity.model.SenseInstallDto,UnityEngine.GameObject,System.Action`1<System.Boolean>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationManager_ActivateAndSaveInstallation_m41AC2285B23853B2D778E29FF814CD6F25CB06C0 (UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* __this, int64_t ___profileId0, SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___sid1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loginInterface2, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnSuccess3, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// co.techxr.unity.network.AuthService co.techxr.unity.network.AuthService::getInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* AuthService_getInstance_m1B3605F5359ED6DC80490736B7C1D4076E14FF33 (const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<TechXR.Core.Sense.AuthenticationManager>()
inline AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* GameObject_GetComponentInChildren_TisAuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB_m06AF8A6278B537E58CF9689FA98E2F32B26DF07F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void TechXR.Core.Sense.AuthenticationManager::AddPostLoginInvoker(System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_AddPostLoginInvoker_m881418E3D746141CF05ED3661547DB70CDE0AA0F (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___post0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError1, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.Url::setEditorMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url_setEditorMode_m5D357F9406E2207857EFD1AF48DFBF4FBC2D184D (bool ___mode0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.LicenseService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService__ctor_m53521AA6FC5F8F72E2301B8A06B7ED9235927563 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m2AD9472E78233918D7C242C068D8E4F95DCECD2E (U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// co.techxr.unity.model.SenseInstallDto TechXR.Core.Sense.StorageUtil::getInstallationDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* StorageUtil_getInstallationDetails_mC96B0515D7A71753FD0154E370991CEC0DDBA60B (const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.SenseInstallDto>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD730EC9F4BBAE490C70EF06D2E30BCC87BBCA301 (Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TechXR.Core.Sense.UserVerificationService::CheckInstallationIdWithServer(System.String,System.Action`1<co.techxr.unity.model.SenseInstallDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationService_CheckInstallationIdWithServer_m5C78F2C44E2CD53431415B671254C3E4A5CE325A (UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* __this, String_t* ___appKey0, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.SenseInstallDto>::Invoke(T)
inline void Action_1_Invoke_mD5F70C7F18D18DFB490A27DDEC68A927F6F33314_inline (Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* __this, SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D*, SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void co.techxr.unity.model.AppLoginDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppLoginDto__ctor_mA6F37AE4F23814DB7134120F7133215EA7670419 (AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.AppLoginDto::set_installationId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppLoginDto_set_installationId_mC8D6D6634A5CC71AC77932AEEE5AE990A0505419_inline (AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.StorageUtil::getApplicationDetail(System.Action`1<co.techxr.unity.model.ApplicationDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageUtil_getApplicationDetail_mA4F4626ED2DB157AE2E7D3AB60F3A48054CC642F (Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* ___successCallback0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback1, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.SenseInstallDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInstallDto__ctor_mD8FC3F4C86D7567D8DEAFEF345403BC7C20A0107 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC (const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.SenseInstallDto::set_deviceId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInstallDto_set_deviceId_m4BDB96E294EF035AAF0B19FE499C13A9998C6304_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D (const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.SenseInstallDto::set_os(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInstallDto_set_os_mBE971C58164102625421358605B2EDDAFDA0284A_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E (const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.SenseInstallDto::set_hardware(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInstallDto_set_hardware_m7477BDD4CCC7BCD09C15A9C7C78009260FB639F4_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.SenseInstallDto::set_installType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInstallDto_set_installType_mEEC8440AF8A02540773EE806110DBB408D97C556_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.UserVerificationService::CreateNewInstallationId(System.String,co.techxr.unity.model.SenseInstallDto,System.Action`1<co.techxr.unity.model.SenseInstallDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationService_CreateNewInstallationId_m96BF7D29CBDDE29828268E3095E95A69FA1409E0 (UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* __this, String_t* ___appKey0, SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___sid1, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* ___OnSuccess2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.AuthenticationService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService__ctor_m876BC37F2D013E724ADAC49A1EDEE0BEEADC5811 (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.InputValidation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputValidation__ctor_m2073454E8EDCF7964DBC0CA4DE82C8CE7D14FBA6 (InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader__ctor_m862FCD8413D78547B0FDE344F0A08E3C58263F08 (Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.Loader::CreateLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_CreateLoader_mE008FE64C0CBA9D6B0ADFBCEE60C32FDDA76137C (Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.AuthenticationManager::StartToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15 (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.Loader::StartLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_StartLoader_m1115DF05CA28BA3C1562C0E59B04F271085EE116 (Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* __this, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Boolean TechXR.Core.Sense.AuthenticationManager::ValidateLoginCredentials(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationManager_ValidateLoginCredentials_mC5B301A70CEFB227FF1C1285108F82741BE74D0F (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, String_t* ___username0, String_t* ___password1, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.AuthenticationService::Login(System.String,System.String,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService_Login_m99AF1F29F1C274A7841C1A2F0B220E684C50B901 (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* __this, String_t* ___username0, String_t* ___password1, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___OnSuccess2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError3, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.Loader::StopLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0 (Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_contentType(TMPro.TMP_InputField/ContentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_contentType_mB9BCF78B6868FBB3CDE671DDF008E3716D3ADC91 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::ForceLabelUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_ForceLabelUpdate_m06F01A5D3EF44553E23404EC82D65B405A842C11 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Boolean TechXR.Core.Sense.AuthenticationManager::ValidateNewUser(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationManager_ValidateNewUser_m174878EDBE035D3B65214CB8DDAF86DBBCCA54D4 (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, String_t* ___firstName0, String_t* ___lastName1, String_t* ___email2, String_t* ___phoneNumber3, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.PhoneDto>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m494AB0D0A6657C76BD2A08933DFF8CBA15D80A8C (Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TechXR.Core.Sense.AuthenticationService::SignUp(System.String,System.String,System.String,System.String,System.Action`1<co.techxr.unity.model.PhoneDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService_SignUp_m5B4AD47FE9C2FEB1FD933F597EDF3B3C18ED89D6 (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* __this, String_t* ___phoneNumber0, String_t* ___firstName1, String_t* ___lastName2, String_t* ___email3, Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* ___OnSuccess4, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError5, const RuntimeMethod* method) ;
// System.Boolean TechXR.Core.Sense.InputValidation::ValidateEmail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValidation_ValidateEmail_mF22936A28C061AAE45E170D40EA450792D939017 (InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22* __this, String_t* ___email0, const RuntimeMethod* method) ;
// System.Boolean TechXR.Core.Sense.InputValidation::ValidatePhone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValidation_ValidatePhone_m676480D95455255D56C949E112B771D68B2A0A05 (InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22* __this, String_t* ___phoneNumber0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.AuthenticationService::OtpValue(co.techxr.unity.model.PhoneDto,System.Int32,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService_OtpValue_m92B2737FFE03CA3CEBA2D2072571DA6CC4EE138A (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* __this, PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* ___phoneDto0, int32_t ___otp1, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___OnSuccess2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError3, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.Profile>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m32CEB8445399820BBF3EBCCFC1B6E1D41A07455C (Action_1_t21368F37D8368081C267784197A861AE2EF93602* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t21368F37D8368081C267784197A861AE2EF93602*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TechXR.Core.Sense.AuthenticationService::ForgotPassword(System.String,System.Action`1<co.techxr.unity.model.Profile>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService_ForgotPassword_m0DE69F7CB1D393E4A834D062C907F9E44A61517A (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* __this, String_t* ___email0, Action_1_t21368F37D8368081C267784197A861AE2EF93602* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.LoginResponse>::Invoke(T)
inline void Action_1_Invoke_m614B7318DD7AE0808373F5AFCEE919022F2E976F_inline (Action_1_t364C94423BE312DFF449DB8389178799569DCF01* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Int64 co.techxr.unity.model.PhoneDto::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t PhoneDto_get_id_m24558CAF4E6D54F82C10FF85E62DE52AA986119B_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.model.PhoneDto::get_phoneNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PhoneDto_get_phoneNumber_mD5EFB39B8C92ED2C58BF3F15E31ECDEA82D7E224_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.model.LoginResponse::get_access_token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) ;
// System.String co.techxr.unity.model.Profile::get_email()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Profile_get_email_m28EE47AB3E1B74978158F21B00E57D2A675AFA18_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.LoginDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginDto__ctor_m8FF53772151E742C507E19B00D05EB0B0F83AB18 (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.LoginDto::set_email(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoginDto_set_email_m56726083368A4674A47E7B1A8BE29D910230B8F5_inline (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.LoginDto::set_password(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoginDto_set_password_m944BBD56EAC0B309537CCBC938524D8A9FE0B42D_inline (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.AuthenticationService/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mE43F265B6E5AC87951FBD69DACCA8494F0BCC635 (U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.PhoneDto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneDto__ctor_mEFCDB2D8EC721F49D729CBF70A810C647E7812BC (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.PhoneDto::set_phoneNumber(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhoneDto_set_phoneNumber_m35B0A675DA2B019284DCB3B3C9A161E408004DD3_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.PhoneDto::set_callStatus(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhoneDto_set_callStatus_m4EE9AC838C0C65774DBCE37AFCAE1B56AAB712E7_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.PhoneDto::set_whatsappStatus(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhoneDto_set_whatsappStatus_m98E71E7E3D93D48027E39345C67DA022341AA422_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.PhoneDto::set_countryCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhoneDto_set_countryCode_m4B2280A1A5BB654751CF43C8D6F3EAFC9BB95F2A_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.Profile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile__ctor_m5113FE34C065AC977909C870C7C1FC5E21934A38 (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.Profile::set_firstName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profile_set_firstName_m5595E8E80114B7638D56119DE6E9DF0BA8A04965_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.Profile::set_lastName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profile_set_lastName_m00E9B2C0C773EDD78054E3CA8E244FB61C73C0F1_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.Profile::set_email(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profile_set_email_mA72305D17841A28D066AC19041EBE0059EA18347_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.model.Profile::set_phone(co.techxr.unity.model.PhoneDto)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profile_set_phone_m08D54AAC84B58867962283A6F1CBAE81385D0A83_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.ApplicationDto>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8033DEC4F02C19E9FB0C9C30B2F24ADA694312A7 (Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Int64 co.techxr.unity.model.ApplicationDto::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ApplicationDto_get_id_mA2C790803B0D6DC863DF461938C1184225DA7F95_inline (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.AuthenticationService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC1CAEE857417C709624362CBDE78EDA489B97024 (U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.Boolean TechXR.Core.Sense.InputValidation::<ValidatePhone>g__isDigit|2_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValidation_U3CValidatePhoneU3Eg__isDigitU7C2_0_m7DB73A7B530601CD228B08188C533E507001F343 (String_t* ___number0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Text.Json.JsonSerializer::Serialize<co.techxr.unity.model.ApplicationDto>(TValue,System.Text.Json.JsonSerializerOptions)
inline String_t* JsonSerializer_Serialize_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_m0A74908978F138823705E0E9E8347752015B2CEB (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* ___value0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_gshared)(___value0, ___options1, method);
}
// T TechXR.Core.Utils.SingletonScriptableObject`1<TechXR.Core.Sense.TechXRConfiguration>::get_Instance()
inline TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5 (const RuntimeMethod* method)
{
	return ((  TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* (*) (const RuntimeMethod*))SingletonScriptableObject_1_get_Instance_mC8E7F9B2079C26DBE2286A49480D55BB07EA172D_gshared)(method);
}
// System.String TechXR.Core.Sense.TechXRConfiguration::get_AppKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TechXRConfiguration_get_AppKey_m5D7EA829C9649F8F816A1EA9BC020DBC84D310D0 (TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* __this, const RuntimeMethod* method) ;
// System.String TechXR.Core.Sense.StorageUtil::constructKey(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageUtil_constructKey_mD9F8608317D30873EF7A2EDDC76400ECD4888025 (String_t* ___classIdentifier0, String_t* ___appKey1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// TValue System.Text.Json.JsonSerializer::Deserialize<co.techxr.unity.model.ApplicationDto>(System.String,System.Text.Json.JsonSerializerOptions)
inline ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* JsonSerializer_Deserialize_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_mFA6392BFBD3E25B1775B0DF28661F2FF9FFF2C2B (String_t* ___json0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* (*) (String_t*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m83DA6E6B82EAC695F47C9EAA9383BF4578429047_gshared)(___json0, ___options1, method);
}
// System.Void System.Action`1<co.techxr.unity.model.ApplicationDto>::Invoke(T)
inline void Action_1_Invoke_m251AC91981B535BE2564D92A8C0304D4396C82CC_inline (Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* __this, ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270*, ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void co.techxr.unity.exceptions.XrException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.Text.Json.JsonSerializer::Serialize<co.techxr.unity.model.SenseInstallDto>(TValue,System.Text.Json.JsonSerializerOptions)
inline String_t* JsonSerializer_Serialize_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_m4988DDECA9EFABE02FAAC6EADA19A5274488B177 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___value0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Serialize_TisRuntimeObject_m20C8AC67164024988AAEC7EA16917A81157AFCDE_gshared)(___value0, ___options1, method);
}
// TValue System.Text.Json.JsonSerializer::Deserialize<co.techxr.unity.model.SenseInstallDto>(System.String,System.Text.Json.JsonSerializerOptions)
inline SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* JsonSerializer_Deserialize_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_m244241D50126BE9D4E004ECBF2B93D5EF6EA17D1 (String_t* ___json0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method)
{
	return ((  SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* (*) (String_t*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m83DA6E6B82EAC695F47C9EAA9383BF4578429047_gshared)(___json0, ___options1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mFD3E034EA884847E3DB38B13D001235552397B08 (U3CU3Ec__DisplayClass5_0_t15176CCE69315353413C866E2C08CC1C5CB78E8E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass5_0::<ActivateAndSaveInstallation>b__0(co.techxr.unity.model.ActivationDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CActivateAndSaveInstallationU3Eb__0_m19F5E6848844A3AFB33A0853E9E344EB5B601A16 (U3CU3Ec__DisplayClass5_0_t15176CCE69315353413C866E2C08CC1C5CB78E8E* __this, ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* ___activationDto0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_0 = __this->___sid_0;
		ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* L_1 = ___activationDto0;
		NullCheck(L_0);
		SenseInstallDto_set_activation_m99EE1947E42F5A150754F75303123DE7F2835F7C_inline(L_0, L_1, NULL);
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_2 = __this->___sid_0;
		StorageUtil_storeInstallationDetails_m221DD9AAD15D17748DDAFF4DDC6D2970F4338290(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___loginInterface_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___loginInterface_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
	}

IL_0036:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = __this->___OnSuccess_2;
		ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* L_8 = ___activationDto0;
		NullCheck(L_8);
		bool L_9;
		L_9 = ActivationDto_get_allowed_m9047CAAD46B35CABB1DB957614FDFA4939A3FB0D_inline(L_8, NULL);
		NullCheck(L_7);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_7, L_9, NULL);
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
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m17E52F8536E603F2963333A16B1FF2B59C5064FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0* L_0 = (U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0*)il2cpp_codegen_object_new(U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m20187873B7C3FF385C74AFBD0B5D371DBF5867CE(L_0, NULL);
		((U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m20187873B7C3FF385C74AFBD0B5D371DBF5867CE (U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c::<ActivateAndSaveInstallation>b__5_1(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CActivateAndSaveInstallationU3Eb__5_1_mE7C6AE3B92FD1435CF7A6C02A64AC4FBE84DFC4C (U3CU3Ec_tD553BD6BB852124FF4988CFFF819EF5F26262DD0* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_0 = ___ex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
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
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mDB1C809B58E80478912ABB4D4D161F094D99DEEA (U3CU3Ec__DisplayClass7_0_tE2948E0D7FCAB99E2B37B13A9FEF18B8CDC9B124* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass7_0::<CheckVerification>b__0(co.techxr.unity.model.ApplicationDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CCheckVerificationU3Eb__0_mC7E4DB4D0026B6C1B782C65637F9B8E2B100B8F7 (U3CU3Ec__DisplayClass7_0_tE2948E0D7FCAB99E2B37B13A9FEF18B8CDC9B124* __this, ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* ___c0, const RuntimeMethod* method) 
{
	{
		ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* L_0 = ___c0;
		StorageUtil_storeApplicationDetail_m192467F4E116F32F000CD156F8382559C37FEDBE(L_0, NULL);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_1 = __this->___U3CU3E4__this_0;
		String_t* L_2 = __this->___appKey_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = __this->___OnSuccess_2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_4 = __this->___OnError_3;
		NullCheck(L_1);
		UserVerificationManager_CheckVerification2_m45910AA3456610A1C81A11283FDC4BC11F943398(L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass7_0::<CheckVerification>b__1(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CCheckVerificationU3Eb__1_mFB2AB15960A6196ACD0D7BB0BAA9B9B78B7AA8AF (U3CU3Ec__DisplayClass7_0_tE2948E0D7FCAB99E2B37B13A9FEF18B8CDC9B124* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DEAF6236E883D31B368FA3F2A0448F8C1BD7E24);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_0 = ___ex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_0);
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral0DEAF6236E883D31B368FA3F2A0448F8C1BD7E24, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_3 = __this->___OnError_3;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_5 = __this->___OnError_3;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_6 = ___ex0;
		NullCheck(L_5);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_5, L_6, NULL);
	}

IL_0031:
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
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mE0577E404669352E2ED5E1122E861C63852D7790 (U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_0::<CheckVerification2>b__0(co.techxr.unity.model.SenseInstallDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CCheckVerification2U3Eb__0_m4529D547CE25CF4F3372598EEF80129780622A22 (U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* __this, SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___sid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__2_m7FE07635A3CA1A0831480A76AEEAB29480E38C4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__3_m6BFA7EC5730E967B7BA7516BE213069067477D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* L_0 = (U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_1__ctor_m497219E64BBB5D00C872AF6107FA6CADBAFED166(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_1), (void*)__this);
		U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* L_2 = V_0;
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_3 = ___sid0;
		NullCheck(L_2);
		L_2->___sid_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sid_0), (void*)L_3);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* L_5 = L_4->___m_UserVerificationService_2;
		U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* L_6 = V_0;
		NullCheck(L_6);
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_7 = L_6->___sid_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = SenseInstallDto_get_id_m8ADF48D62058A614962DFFD62B7BB09347ACF088_inline(L_7, NULL);
		U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* L_9 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_10 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__2_m7FE07635A3CA1A0831480A76AEEAB29480E38C4B_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* L_11 = V_0;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_12 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__3_m6BFA7EC5730E967B7BA7516BE213069067477D7F_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UserVerificationService_LoginThroughAppKey_mCC09CE2C31C3C7B6FFB144DF0AD9BBBADCC010D0(L_5, L_8, L_10, L_12, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_0::<CheckVerification2>b__1(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CCheckVerification2U3Eb__1_m174688F975DDDCA91B7F9D122F4127A96B247304 (U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_0 = ___ex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_2 = __this->___OnError_2;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_3 = ___ex0;
		NullCheck(L_2);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_2, L_3, NULL);
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
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1__ctor_m497219E64BBB5D00C872AF6107FA6CADBAFED166 (U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::<CheckVerification2>b__2(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__2_m7FE07635A3CA1A0831480A76AEEAB29480E38C4B (U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_1 = L_0->___U3CU3E4__this_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_2 = ___loginResponse0;
		NullCheck(L_1);
		L_1->___LoginResponseObject_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___LoginResponseObject_0), (void*)L_2);
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_4 = L_3->___U3CU3E4__this_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_5 = ___loginResponse0;
		NullCheck(L_5);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_6;
		L_6 = LoginResponse_get_profile_m8BB9DBFBB18D3C30F089A9F53C03DD893E9DE428_inline(L_5, NULL);
		NullCheck(L_6);
		int64_t L_7;
		L_7 = Profile_get_id_m40667EDC77D22F4C06D40195F80E348748B3D269_inline(L_6, NULL);
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_8 = __this->___sid_0;
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_9 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_9);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = L_9->___OnSuccess_1;
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_11 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_11);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_12 = L_11->___OnError_2;
		NullCheck(L_4);
		UserVerificationManager_ActivateAndSaveInstallation_m41AC2285B23853B2D778E29FF814CD6F25CB06C0(L_4, L_7, L_8, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, L_10, L_12, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::<CheckVerification2>b__3(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__3_m6BFA7EC5730E967B7BA7516BE213069067477D7F (U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__4_mB07087987E009391B5005D39F438D95623A4EE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__5_m826AFD7820CDC200B6D1448999EC047EE5A7BBEC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* V_2 = NULL;
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* V_3 = NULL;
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* G_B5_0 = NULL;
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* G_B4_0 = NULL;
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_0 = ___ex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* L_4;
		L_4 = AuthService_getInstance_m1B3605F5359ED6DC80490736B7C1D4076E14FF33(NULL);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_6 = __this->___U3CU3E9__4_2;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_7 = L_6;
		G_B2_0 = L_7;
		G_B2_1 = L_5;
		if (L_7)
		{
			G_B3_0 = L_7;
			G_B3_1 = L_5;
			goto IL_003d;
		}
	}
	{
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_8 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_8, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__4_mB07087987E009391B5005D39F438D95623A4EE88_RuntimeMethod_var), NULL);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_9 = L_8;
		V_2 = L_9;
		__this->___U3CU3E9__4_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__4_2), (void*)L_9);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_10 = V_2;
		G_B3_0 = L_10;
		G_B3_1 = G_B2_1;
	}

IL_003d:
	{
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_11 = __this->___U3CU3E9__5_4;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_12 = L_11;
		G_B4_0 = L_12;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		if (L_12)
		{
			G_B5_0 = L_12;
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			goto IL_005c;
		}
	}
	{
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_13 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_13, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__5_m826AFD7820CDC200B6D1448999EC047EE5A7BBEC_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_14 = L_13;
		V_3 = L_14;
		__this->___U3CU3E9__5_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__5_4), (void*)L_14);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_15 = V_3;
		G_B5_0 = L_15;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_005c:
	{
		NullCheck(G_B5_2);
		InterfaceActionInvoker2< Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(0 /* System.Void co.techxr.unity.network.IAuthService::savedLogin(System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var, G_B5_2, G_B5_1, G_B5_0);
		goto IL_0079;
	}

IL_0065:
	{
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_16 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_16);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_17 = L_16->___OnError_2;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_18 = ___ex0;
		NullCheck(L_17);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_17, L_18, NULL);
	}

IL_0079:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::<CheckVerification2>b__4(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__4_mB07087987E009391B5005D39F438D95623A4EE88 (U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF237075835B5AEE36B44B1BE5641128C9B8D992);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBF237075835B5AEE36B44B1BE5641128C9B8D992, NULL);
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_1 = L_0->___U3CU3E4__this_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_2 = ___c0;
		NullCheck(L_2);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_3;
		L_3 = LoginResponse_get_profile_m8BB9DBFBB18D3C30F089A9F53C03DD893E9DE428_inline(L_2, NULL);
		NullCheck(L_3);
		int64_t L_4;
		L_4 = Profile_get_id_m40667EDC77D22F4C06D40195F80E348748B3D269_inline(L_3, NULL);
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_5 = __this->___sid_0;
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_6 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_6);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_7 = L_6->___U3CU3E4__this_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___m_LoginInterface_3;
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_9 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_9);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = L_9->___OnSuccess_1;
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_11 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_11);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_12 = L_11->___OnError_2;
		NullCheck(L_1);
		UserVerificationManager_ActivateAndSaveInstallation_m41AC2285B23853B2D778E29FF814CD6F25CB06C0(L_1, L_4, L_5, L_8, L_10, L_12, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::<CheckVerification2>b__5(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__5_m826AFD7820CDC200B6D1448999EC047EE5A7BBEC (U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ____ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisAuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB_m06AF8A6278B537E58CF9689FA98E2F32B26DF07F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__6_m4EE1C2FB9F1CCCE88B99CB7DC2CAB3330B1C7815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55682B4DCFD8F02CA3ECB86562356D1DD3C7A420);
		s_Il2CppMethodInitialized = true;
	}
	AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* V_0 = NULL;
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* V_1 = NULL;
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* G_B2_0 = NULL;
	AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* G_B2_1 = NULL;
	Action_1_t364C94423BE312DFF449DB8389178799569DCF01* G_B1_0 = NULL;
	AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* G_B1_1 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_1 = L_0->___U3CU3E4__this_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteral55682B4DCFD8F02CA3ECB86562356D1DD3C7A420, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___m_LoginInterface_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___m_LoginInterface_3), (void*)L_3);
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_4 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_4);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_5 = L_4->___U3CU3E4__this_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___m_LoginInterface_3;
		NullCheck(L_6);
		AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* L_7;
		L_7 = GameObject_GetComponentInChildren_TisAuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB_m06AF8A6278B537E58CF9689FA98E2F32B26DF07F(L_6, GameObject_GetComponentInChildren_TisAuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB_m06AF8A6278B537E58CF9689FA98E2F32B26DF07F_RuntimeMethod_var);
		V_0 = L_7;
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_8 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_8);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_9 = L_8->___U3CU3E4__this_0;
		NullCheck(L_9);
		L_9->___IsUserVerificationProcessStarted_1 = (bool)1;
		AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* L_10 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_11 = __this->___U3CU3E9__6_3;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_12 = L_11;
		G_B1_0 = L_12;
		G_B1_1 = L_10;
		if (L_12)
		{
			G_B2_0 = L_12;
			G_B2_1 = L_10;
			goto IL_006c;
		}
	}
	{
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_13 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_13, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__6_m4EE1C2FB9F1CCCE88B99CB7DC2CAB3330B1C7815_RuntimeMethod_var), NULL);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_14 = L_13;
		V_1 = L_14;
		__this->___U3CU3E9__6_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__6_3), (void*)L_14);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_15 = V_1;
		G_B2_0 = L_15;
		G_B2_1 = G_B1_1;
	}

IL_006c:
	{
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_16 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_16);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_17 = L_16->___OnError_2;
		NullCheck(G_B2_1);
		AuthenticationManager_AddPostLoginInvoker_m881418E3D746141CF05ED3661547DB70CDE0AA0F(G_B2_1, G_B2_0, L_17, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationManager/<>c__DisplayClass8_1::<CheckVerification2>b__6(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1_U3CCheckVerification2U3Eb__6_m4EE1C2FB9F1CCCE88B99CB7DC2CAB3330B1C7815 (U3CU3Ec__DisplayClass8_1_tA7CB7857C6D5DF1D5BB9149E073C2510E92F89DA* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF237075835B5AEE36B44B1BE5641128C9B8D992);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBF237075835B5AEE36B44B1BE5641128C9B8D992, NULL);
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_1 = L_0->___U3CU3E4__this_0;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_2 = ___c0;
		NullCheck(L_2);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_3;
		L_3 = LoginResponse_get_profile_m8BB9DBFBB18D3C30F089A9F53C03DD893E9DE428_inline(L_2, NULL);
		NullCheck(L_3);
		int64_t L_4;
		L_4 = Profile_get_id_m40667EDC77D22F4C06D40195F80E348748B3D269_inline(L_3, NULL);
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_5 = __this->___sid_0;
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_6 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_6);
		UserVerificationManager_tC5C241CA108A6F203D479360486A93FD44D2B00A* L_7 = L_6->___U3CU3E4__this_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___m_LoginInterface_3;
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_9 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_9);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = L_9->___OnSuccess_1;
		U3CU3Ec__DisplayClass8_0_t3C4369E43C1EC12FD0EAC7257AF1F3B50E81675E* L_11 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_11);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_12 = L_11->___OnError_2;
		NullCheck(L_1);
		UserVerificationManager_ActivateAndSaveInstallation_m41AC2285B23853B2D778E29FF814CD6F25CB06C0(L_1, L_4, L_5, L_8, L_10, L_12, NULL);
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
// System.Void TechXR.Core.Sense.UserVerificationService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationService__ctor_mF0B58662844BDFD98296885B263756C5D3EDAE47 (UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		Url_setEditorMode_m5D357F9406E2207857EFD1AF48DFBF4FBC2D184D((bool)1, NULL);
	}

IL_001b:
	{
		LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* L_2 = (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759*)il2cpp_codegen_object_new(LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LicenseService__ctor_m53521AA6FC5F8F72E2301B8A06B7ED9235927563(L_2, NULL);
		__this->___m_LicenseService_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LicenseService_0), (void*)L_2);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationService::GetInstallationId(System.String,System.Action`1<co.techxr.unity.model.SenseInstallDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationService_GetInstallationId_mDB1A9E2A76229D894AE25D304E1E1576769082F2 (UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* __this, String_t* ___appKey0, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__0_mAA51B7254130639C3360CC18013626B82670C104_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__1_m8683FE1CB559C447FA66EFE70782C9CCA270FAB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6A67723594B708070A94074E00762A8952F7C44);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* V_0 = NULL;
	SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* V_1 = NULL;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* L_0 = (U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m2AD9472E78233918D7C242C068D8E4F95DCECD2E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* L_1 = V_0;
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_2 = ___OnSuccess1;
		NullCheck(L_1);
		L_1->___OnSuccess_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___OnSuccess_0), (void*)L_2);
		U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* L_4 = V_0;
		String_t* L_5 = ___appKey0;
		NullCheck(L_4);
		L_4->___appKey_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___appKey_2), (void*)L_5);
		U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* L_6 = V_0;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_7 = ___OnError2;
		NullCheck(L_6);
		L_6->___OnError_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnError_3), (void*)L_7);
		U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___appKey_2;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD6A67723594B708070A94074E00762A8952F7C44, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_11;
		L_11 = StorageUtil_getInstallationDetails_mC96B0515D7A71753FD0154E370991CEC0DDBA60B(NULL);
		V_1 = L_11;
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_12 = V_1;
		V_2 = (bool)((((RuntimeObject*)(SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = L_14->___appKey_2;
		U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* L_16 = V_0;
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_17 = (Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D*)il2cpp_codegen_object_new(Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_mD730EC9F4BBAE490C70EF06D2E30BCC87BBCA301(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__0_mAA51B7254130639C3360CC18013626B82670C104_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* L_18 = V_0;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_19 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__1_m8683FE1CB559C447FA66EFE70782C9CCA270FAB8_RuntimeMethod_var), NULL);
		UserVerificationService_CheckInstallationIdWithServer_m5C78F2C44E2CD53431415B671254C3E4A5CE325A(__this, L_15, L_17, L_19, NULL);
		goto IL_007f;
	}

IL_0070:
	{
		U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* L_20 = V_0;
		NullCheck(L_20);
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_21 = L_20->___OnSuccess_0;
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_22 = V_1;
		NullCheck(L_21);
		Action_1_Invoke_mD5F70C7F18D18DFB490A27DDEC68A927F6F33314_inline(L_21, L_22, NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationService::CheckInstallationIdWithServer(System.String,System.Action`1<co.techxr.unity.model.SenseInstallDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationService_CheckInstallationIdWithServer_m5C78F2C44E2CD53431415B671254C3E4A5CE325A (UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* __this, String_t* ___appKey0, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED003B9AC9032F4FCD8BB59AABFC166D92FCD7CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___appKey0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralED003B9AC9032F4FCD8BB59AABFC166D92FCD7CA, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		RuntimeObject* L_2 = __this->___m_LicenseService_0;
		String_t* L_3 = ___appKey0;
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_4 = ___OnSuccess1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_5 = ___OnError2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(0 /* System.Void co.techxr.unity.network.ILicenseService::getCurrentInstallation(System.String,System.Action`1<co.techxr.unity.model.SenseInstallDto>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationService::CreateNewInstallationId(System.String,co.techxr.unity.model.SenseInstallDto,System.Action`1<co.techxr.unity.model.SenseInstallDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationService_CreateNewInstallationId_m96BF7D29CBDDE29828268E3095E95A69FA1409E0 (UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* __this, String_t* ___appKey0, SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___sid1, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* ___OnSuccess2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE757EE80D44BA0872B4351E2E862F2DBA78AB0D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___appKey0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE757EE80D44BA0872B4351E2E862F2DBA78AB0D6, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		RuntimeObject* L_2 = __this->___m_LicenseService_0;
		String_t* L_3 = ___appKey0;
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_4 = ___sid1;
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_5 = ___OnSuccess2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_6 = ___OnError3;
		NullCheck(L_2);
		InterfaceActionInvoker4< String_t*, SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3*, Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(1 /* System.Void co.techxr.unity.network.ILicenseService::installNewApplication(System.String,co.techxr.unity.model.SenseInstallDto,System.Action`1<co.techxr.unity.model.SenseInstallDto>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, L_6);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationService::LoginThroughAppKey(System.String,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationService_LoginThroughAppKey_mCC09CE2C31C3C7B6FFB144DF0AD9BBBADCC010D0 (UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* __this, String_t* ___installationId0, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral853327E41FE4DDB0AB25A16048FB06169BDA3C64);
		s_Il2CppMethodInitialized = true;
	}
	AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* V_0 = NULL;
	{
		AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* L_0 = (AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B*)il2cpp_codegen_object_new(AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AppLoginDto__ctor_mA6F37AE4F23814DB7134120F7133215EA7670419(L_0, NULL);
		V_0 = L_0;
		AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* L_1 = V_0;
		String_t* L_2 = ___installationId0;
		NullCheck(L_1);
		AppLoginDto_set_installationId_mC8D6D6634A5CC71AC77932AEEE5AE990A0505419_inline(L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral853327E41FE4DDB0AB25A16048FB06169BDA3C64, NULL);
		RuntimeObject* L_3 = __this->___m_LicenseService_0;
		AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* L_4 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_5 = ___OnSuccess1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_6 = ___OnError2;
		NullCheck(L_3);
		InterfaceActionInvoker3< AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B*, Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(2 /* System.Void co.techxr.unity.network.ILicenseService::loginThroughApplication(co.techxr.unity.model.AppLoginDto,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var, L_3, L_4, L_5, L_6);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationService::GetApplicationDetails(System.String,System.Action`1<co.techxr.unity.model.ApplicationDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationService_GetApplicationDetails_m17D7111AC25C6086AFE53065AC030308387CC354 (UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* __this, String_t* ___appKey0, Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) 
{
	{
		Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* L_0 = ___OnSuccess1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_1 = ___OnError2;
		StorageUtil_getApplicationDetail_mA4F4626ED2DB157AE2E7D3AB60F3A48054CC642F(L_0, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationService::ActivateInstallationId(System.String,System.Int64,System.Action`1<co.techxr.unity.model.ActivationDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserVerificationService_ActivateInstallationId_m13D7A07504C945B9045B50B687AE843EB3203C6C (UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* __this, String_t* ___installationId0, int64_t ___profileId1, Action_1_tA8035876F91F5C6A5ABAE8A302E57B519C1DCDA9* ___OnSuccess2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6D00488A86BB91E9E487C138BA4148B14F3EA45);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD6D00488A86BB91E9E487C138BA4148B14F3EA45, NULL);
		RuntimeObject* L_0 = __this->___m_LicenseService_0;
		String_t* L_1 = ___installationId0;
		int64_t L_2 = ___profileId1;
		Action_1_tA8035876F91F5C6A5ABAE8A302E57B519C1DCDA9* L_3 = ___OnSuccess2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_4 = ___OnError3;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, int64_t, Action_1_tA8035876F91F5C6A5ABAE8A302E57B519C1DCDA9*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(3 /* System.Void co.techxr.unity.network.ILicenseService::activateInstallation(System.String,System.Int64,System.Action`1<co.techxr.unity.model.ActivationDto>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
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
// System.Void TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m2AD9472E78233918D7C242C068D8E4F95DCECD2E (U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::<GetInstallationId>b__0(co.techxr.unity.model.SenseInstallDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__0_mAA51B7254130639C3360CC18013626B82670C104 (U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* __this, SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___sidObject0, const RuntimeMethod* method) 
{
	{
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_0 = ___sidObject0;
		StorageUtil_storeInstallationDetails_m221DD9AAD15D17748DDAFF4DDC6D2970F4338290(L_0, NULL);
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_1 = __this->___OnSuccess_0;
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_2 = ___sidObject0;
		NullCheck(L_1);
		Action_1_Invoke_mD5F70C7F18D18DFB490A27DDEC68A927F6F33314_inline(L_1, L_2, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::<GetInstallationId>b__1(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__1_m8683FE1CB559C447FA66EFE70782C9CCA270FAB8 (U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__2_m33C83F15FA05604166EFBE79C7C3287FE30112D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__3_mB2EBD1F5CB9523C5C2972E885F7134A07AE2538E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81E3C5C7539514A78704AE815EE017AEFABE4632);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3EF677BCA373CFB6989962B9A8D407936FFEF2A);
		s_Il2CppMethodInitialized = true;
	}
	SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* V_0 = NULL;
	bool V_1 = false;
	Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* V_2 = NULL;
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* V_3 = NULL;
	Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* G_B4_0 = NULL;
	SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* G_B4_3 = NULL;
	Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* G_B3_0 = NULL;
	SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* G_B3_3 = NULL;
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* G_B6_0 = NULL;
	Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* G_B6_1 = NULL;
	SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* G_B6_4 = NULL;
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* G_B5_0 = NULL;
	Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* G_B5_1 = NULL;
	SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* G_B5_4 = NULL;
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_0 = ___ex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral81E3C5C7539514A78704AE815EE017AEFABE4632, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_3 = (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3*)il2cpp_codegen_object_new(SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		SenseInstallDto__ctor_mD8FC3F4C86D7567D8DEAFEF345403BC7C20A0107(L_3, NULL);
		V_0 = L_3;
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_4 = V_0;
		String_t* L_5;
		L_5 = SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC(NULL);
		NullCheck(L_4);
		SenseInstallDto_set_deviceId_m4BDB96E294EF035AAF0B19FE499C13A9998C6304_inline(L_4, L_5, NULL);
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_6 = V_0;
		String_t* L_7;
		L_7 = SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D(NULL);
		NullCheck(L_6);
		SenseInstallDto_set_os_mBE971C58164102625421358605B2EDDAFDA0284A_inline(L_6, L_7, NULL);
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_8 = V_0;
		String_t* L_9;
		L_9 = SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E(NULL);
		NullCheck(L_8);
		SenseInstallDto_set_hardware_m7477BDD4CCC7BCD09C15A9C7C78009260FB639F4_inline(L_8, L_9, NULL);
		bool L_10;
		L_10 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_12 = V_0;
		NullCheck(L_12);
		SenseInstallDto_set_installType_mEEC8440AF8A02540773EE806110DBB408D97C556_inline(L_12, _stringLiteralB3EF677BCA373CFB6989962B9A8D407936FFEF2A, NULL);
	}

IL_0056:
	{
		UserVerificationService_tA9D117F71D302BF6A3F3AEA69A1AD629423AA73F* L_13 = __this->___U3CU3E4__this_1;
		String_t* L_14 = __this->___appKey_2;
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_15 = V_0;
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_16 = __this->___U3CU3E9__2_4;
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_17 = L_16;
		G_B3_0 = L_17;
		G_B3_1 = L_15;
		G_B3_2 = L_14;
		G_B3_3 = L_13;
		if (L_17)
		{
			G_B4_0 = L_17;
			G_B4_1 = L_15;
			G_B4_2 = L_14;
			G_B4_3 = L_13;
			goto IL_0082;
		}
	}
	{
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_18 = (Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D*)il2cpp_codegen_object_new(Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_mD730EC9F4BBAE490C70EF06D2E30BCC87BBCA301(L_18, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__2_m33C83F15FA05604166EFBE79C7C3287FE30112D9_RuntimeMethod_var), NULL);
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_19 = L_18;
		V_2 = L_19;
		__this->___U3CU3E9__2_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__2_4), (void*)L_19);
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_20 = V_2;
		G_B4_0 = L_20;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0082:
	{
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_21 = __this->___U3CU3E9__3_5;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_22 = L_21;
		G_B5_0 = L_22;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
		if (L_22)
		{
			G_B6_0 = L_22;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			G_B6_3 = G_B4_2;
			G_B6_4 = G_B4_3;
			goto IL_00a1;
		}
	}
	{
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_23 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_23, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__3_mB2EBD1F5CB9523C5C2972E885F7134A07AE2538E_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_24 = L_23;
		V_3 = L_24;
		__this->___U3CU3E9__3_5 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__3_5), (void*)L_24);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_25 = V_3;
		G_B6_0 = L_25;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
	}

IL_00a1:
	{
		NullCheck(G_B6_4);
		UserVerificationService_CreateNewInstallationId_m96BF7D29CBDDE29828268E3095E95A69FA1409E0(G_B6_4, G_B6_3, G_B6_2, G_B6_1, G_B6_0, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::<GetInstallationId>b__2(co.techxr.unity.model.SenseInstallDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__2_m33C83F15FA05604166EFBE79C7C3287FE30112D9 (U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* __this, SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___sidObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49E80EDC8426AF3D265E316A171B8B0B0A8399BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral49E80EDC8426AF3D265E316A171B8B0B0A8399BB, NULL);
		Action_1_t45A5FFAFD9CFE75CB7FF5A234D555AB41953E46D* L_0 = __this->___OnSuccess_0;
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_1 = ___sidObject0;
		NullCheck(L_0);
		Action_1_Invoke_mD5F70C7F18D18DFB490A27DDEC68A927F6F33314_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.UserVerificationService/<>c__DisplayClass3_0::<GetInstallationId>b__3(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CGetInstallationIdU3Eb__3_mB2EBD1F5CB9523C5C2972E885F7134A07AE2538E (U3CU3Ec__DisplayClass3_0_tA47382A14425DDD7CF979BA1E8DA539B250C75EF* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ____ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD9AF65A3432ED073C04078C9DB845E5328EF269);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDD9AF65A3432ED073C04078C9DB845E5328EF269, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_0 = ____ex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(L_0, NULL);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_1, NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_2 = __this->___OnError_3;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_3 = ____ex0;
		NullCheck(L_2);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_2, L_3, NULL);
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
// System.Void TechXR.Core.Sense.LoaderRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoaderRotation_Update_mBAF5C6CE31C867F7672EEC0D3289F7AA697863DF (LoaderRotation_t4E2DE463B58A112E1795A2B5B90B1D1906ABF1E2* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_0, (0.0f), (0.0f), (-1.0f), 0, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.LoaderRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoaderRotation__ctor_m8491BA4B9C1C7186F05E287825CB5E7B1F635CDE (LoaderRotation_t4E2DE463B58A112E1795A2B5B90B1D1906ABF1E2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TechXR.Core.Sense.Loader::CreateLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_CreateLoader_mE008FE64C0CBA9D6B0ADFBCEE60C32FDDA76137C (Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8705038A3C6DB55151C9D02BE2C329BDAA2B47D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteral8705038A3C6DB55151C9D02BE2C329BDAA2B47D7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___m_Loader_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Loader_0), (void*)L_1);
		return;
	}
}
// System.Void TechXR.Core.Sense.Loader::StartLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_StartLoader_m1115DF05CA28BA3C1562C0E59B04F271085EE116 (Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* __this, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Loader_0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.Loader::StopLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0 (Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* __this, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Loader_0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader__ctor_m862FCD8413D78547B0FDE344F0A08E3C58263F08 (Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* __this, const RuntimeMethod* method) 
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
// System.Void TechXR.Core.Sense.AuthenticationManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_Start_m9FC395DC217FB0F4478CCC635DB9431D6E89D05C (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* L_0 = (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7*)il2cpp_codegen_object_new(AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AuthenticationService__ctor_m876BC37F2D013E724ADAC49A1EDEE0BEEADC5811(L_0, NULL);
		__this->___m_AuthenticationService_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AuthenticationService_20), (void*)L_0);
		InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22* L_1 = (InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22*)il2cpp_codegen_object_new(InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InputValidation__ctor_m2073454E8EDCF7964DBC0CA4DE82C8CE7D14FBA6(L_1, NULL);
		__this->___m_InputValidation_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InputValidation_21), (void*)L_1);
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_2 = (Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669*)il2cpp_codegen_object_new(Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Loader__ctor_m862FCD8413D78547B0FDE344F0A08E3C58263F08(L_2, NULL);
		__this->___Loader_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Loader_4), (void*)L_2);
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_3 = __this->___Loader_4;
		NullCheck(L_3);
		Loader_CreateLoader_mE008FE64C0CBA9D6B0ADFBCEE60C32FDDA76137C(L_3, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::AddPostLoginInvoker(System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_AddPostLoginInvoker_m881418E3D746141CF05ED3661547DB70CDE0AA0F (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___post0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError1, const RuntimeMethod* method) 
{
	{
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_0 = ___post0;
		__this->___pLogin_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pLogin_24), (void*)L_0);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_1 = ___OnError1;
		__this->___onError_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onError_25), (void*)L_1);
		return;
	}
}
// System.Boolean TechXR.Core.Sense.AuthenticationManager::ValidateLoginCredentials(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationManager_ValidateLoginCredentials_mC5B301A70CEFB227FF1C1285108F82741BE74D0F (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, String_t* ___username0, String_t* ___password1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral328A911328354687B37D76895A9A9B8D7C428F31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8309131CDB2CF0DE3EE6CB11D10EAE48DC100918);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		String_t* L_0 = ___username0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___username0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)8203));
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_1, L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, _stringLiteral8309131CDB2CF0DE3EE6CB11D10EAE48DC100918, NULL);
		V_1 = (bool)0;
		goto IL_0073;
	}

IL_0038:
	{
		String_t* L_7 = ___password1;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_8 = ___password1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)8203));
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_8, L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		G_B8_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B8_0 = 1;
	}

IL_005a:
	{
		V_2 = (bool)G_B8_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_006f;
		}
	}
	{
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, _stringLiteral328A911328354687B37D76895A9A9B8D7C428F31, NULL);
		V_1 = (bool)0;
		goto IL_0073;
	}

IL_006f:
	{
		V_1 = (bool)1;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_14 = V_1;
		return L_14;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::SubmitUsernamePassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_SubmitUsernamePassword_mEA7C62951913DDD7BF5C4CA6E03C93A357C7C1AA (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationManager_U3CSubmitUsernamePasswordU3Eb__26_0_mD49ECB85C3C4ED6CCFC517B336AF6140740CABA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationManager_U3CSubmitUsernamePasswordU3Eb__26_1_mAEED9A4EEB76B870747FAB89E3A29733CCF51F0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_0 = __this->___Loader_4;
		NullCheck(L_0);
		Loader_StartLoader_m1115DF05CA28BA3C1562C0E59B04F271085EE116(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = __this->___UserName_5;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_1, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___Password_6;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_3, NULL);
		bool L_5;
		L_5 = AuthenticationManager_ValidateLoginCredentials_mC5B301A70CEFB227FF1C1285108F82741BE74D0F(__this, L_2, L_4, NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* L_7 = __this->___m_AuthenticationService_20;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_8 = __this->___UserName_5;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_8, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_10 = __this->___Password_6;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_10, NULL);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_12 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_12, __this, (intptr_t)((void*)AuthenticationManager_U3CSubmitUsernamePasswordU3Eb__26_0_mD49ECB85C3C4ED6CCFC517B336AF6140740CABA0_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_13 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_13, __this, (intptr_t)((void*)AuthenticationManager_U3CSubmitUsernamePasswordU3Eb__26_1_mAEED9A4EEB76B870747FAB89E3A29733CCF51F0D_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		AuthenticationService_Login_m99AF1F29F1C274A7841C1A2F0B220E684C50B901(L_7, L_9, L_11, L_12, L_13, NULL);
		goto IL_0079;
	}

IL_006b:
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_14 = __this->___Loader_4;
		NullCheck(L_14);
		Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0(L_14, NULL);
	}

IL_0079:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::StartToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15 (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEAED8D1FE8B625AFF7C1574C883F2B98150C75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___ToastMessage_7;
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_0, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_2);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___ToastAnim_8;
		NullCheck(L_3);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_3, _stringLiteralCEAED8D1FE8B625AFF7C1574C883F2B98150C75D, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::TogglePasswordVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_TogglePasswordVisibility_mBC829373898486CA8AD882B701B483E258261858 (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, bool ___isHidden0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___isHidden0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___Password_6;
		NullCheck(L_2);
		TMP_InputField_set_contentType_mB9BCF78B6868FBB3CDE671DDF008E3716D3ADC91(L_2, 0, NULL);
		goto IL_0026;
	}

IL_0017:
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___Password_6;
		NullCheck(L_3);
		TMP_InputField_set_contentType_mB9BCF78B6868FBB3CDE671DDF008E3716D3ADC91(L_3, 7, NULL);
	}

IL_0026:
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4 = __this->___Password_6;
		NullCheck(L_4);
		TMP_InputField_ForceLabelUpdate_m06F01A5D3EF44553E23404EC82D65B405A842C11(L_4, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::SignUpNewUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_SignUpNewUser_mBFD24F26B17A7BF23F5646FC8904F4192ACE1940 (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationManager_U3CSignUpNewUserU3Eb__29_0_m9C7C6C658B04780EE6065B527BBA5AE43E8FBC9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationManager_U3CSignUpNewUserU3Eb__29_1_m6317D7FE376F2364CC039F956DC03F210D453FC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___FirstName_14;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___LastName_15;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_2, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4 = __this->___Email_16;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_4, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = __this->___PhoneNumer_17;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_6, NULL);
		bool L_8;
		L_8 = AuthenticationManager_ValidateNewUser_m174878EDBE035D3B65214CB8DDAF86DBBCCA54D4(__this, L_1, L_3, L_5, L_7, NULL);
		V_0 = L_8;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0095;
		}
	}
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_10 = __this->___Loader_4;
		NullCheck(L_10);
		Loader_StartLoader_m1115DF05CA28BA3C1562C0E59B04F271085EE116(L_10, NULL);
		AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* L_11 = __this->___m_AuthenticationService_20;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_12 = __this->___PhoneNumer_17;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_12, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_14 = __this->___FirstName_14;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_14, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_16 = __this->___LastName_15;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_16, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_18 = __this->___Email_16;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_18, NULL);
		Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* L_20 = (Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9*)il2cpp_codegen_object_new(Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action_1__ctor_m494AB0D0A6657C76BD2A08933DFF8CBA15D80A8C(L_20, __this, (intptr_t)((void*)AuthenticationManager_U3CSignUpNewUserU3Eb__29_0_m9C7C6C658B04780EE6065B527BBA5AE43E8FBC9E_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_21 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_21, __this, (intptr_t)((void*)AuthenticationManager_U3CSignUpNewUserU3Eb__29_1_m6317D7FE376F2364CC039F956DC03F210D453FC7_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		AuthenticationService_SignUp_m5B4AD47FE9C2FEB1FD933F597EDF3B3C18ED89D6(L_11, L_13, L_15, L_17, L_19, L_20, L_21, NULL);
	}

IL_0095:
	{
		return;
	}
}
// System.Boolean TechXR.Core.Sense.AuthenticationManager::ValidateNewUser(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationManager_ValidateNewUser_m174878EDBE035D3B65214CB8DDAF86DBBCCA54D4 (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, String_t* ___firstName0, String_t* ___lastName1, String_t* ___email2, String_t* ___phoneNumber3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26599195A12290C07C0FC683839A2A5F739DF240);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F0A3D60F895C2CF7D9300A212D385B6791CD361);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81F2D69D4EE92F820DD6FE0716B457209D443E60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3897281AF4E95A4F5FE68FCE0CDDF9BE9F23A64);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		String_t* L_0 = ___firstName0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___firstName0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)8203));
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_1, L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, _stringLiteral81F2D69D4EE92F820DD6FE0716B457209D443E60, NULL);
		V_1 = (bool)0;
		goto IL_00c1;
	}

IL_003b:
	{
		String_t* L_7 = ___lastName1;
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_8 = ___lastName1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)8203));
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_8, L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		G_B8_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B8_0 = 1;
	}

IL_005d:
	{
		V_2 = (bool)G_B8_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, _stringLiteralE3897281AF4E95A4F5FE68FCE0CDDF9BE9F23A64, NULL);
		V_1 = (bool)0;
		goto IL_00c1;
	}

IL_0072:
	{
		InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22* L_14 = __this->___m_InputValidation_21;
		String_t* L_15 = ___email2;
		NullCheck(L_14);
		bool L_16;
		L_16 = InputValidation_ValidateEmail_mF22936A28C061AAE45E170D40EA450792D939017(L_14, L_15, NULL);
		V_3 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0096;
		}
	}
	{
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, _stringLiteral4F0A3D60F895C2CF7D9300A212D385B6791CD361, NULL);
		V_1 = (bool)0;
		goto IL_00c1;
	}

IL_0096:
	{
		InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22* L_18 = __this->___m_InputValidation_21;
		String_t* L_19 = ___phoneNumber3;
		NullCheck(L_18);
		bool L_20;
		L_20 = InputValidation_ValidatePhone_m676480D95455255D56C949E112B771D68B2A0A05(L_18, L_19, NULL);
		V_4 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_00bd;
		}
	}
	{
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, _stringLiteral26599195A12290C07C0FC683839A2A5F739DF240, NULL);
		V_1 = (bool)0;
		goto IL_00c1;
	}

IL_00bd:
	{
		V_1 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_22 = V_1;
		return L_22;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::SendOtpValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_SendOtpValue_m1072C2BAA35B0155443787CEAA6C9177407909FE (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationManager_U3CSendOtpValueU3Eb__31_0_mEFF7C1F8937141B4C84192900768F05148DA9F48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationManager_U3CSendOtpValueU3Eb__31_1_m87864BC46B86708DBBBEE40530A3E3F89271824D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___Otp_Input_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		bool L_2;
		L_2 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_1, (&V_0), NULL);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_6 = __this->___Loader_4;
		NullCheck(L_6);
		Loader_StartLoader_m1115DF05CA28BA3C1562C0E59B04F271085EE116(L_6, NULL);
		AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* L_7 = __this->___m_AuthenticationService_20;
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_8 = __this->___m_PhoneDtoResonse_22;
		int32_t L_9 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_10 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_10, __this, (intptr_t)((void*)AuthenticationManager_U3CSendOtpValueU3Eb__31_0_mEFF7C1F8937141B4C84192900768F05148DA9F48_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_11 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_11, __this, (intptr_t)((void*)AuthenticationManager_U3CSendOtpValueU3Eb__31_1_m87864BC46B86708DBBBEE40530A3E3F89271824D_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		AuthenticationService_OtpValue_m92B2737FFE03CA3CEBA2D2072571DA6CC4EE138A(L_7, L_8, L_9, L_10, L_11, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::ForgotPassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_ForgotPassword_mD2F7F9D50D035099ED032F19E570EA1350E63D6E (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t21368F37D8368081C267784197A861AE2EF93602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationManager_U3CForgotPasswordU3Eb__32_0_m2241A953B8AEB028A842386414B40DEF34463DAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationManager_U3CForgotPasswordU3Eb__32_1_m7B953C04748A4E2B1276545520D5EE8B44CE5D9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_0 = __this->___Loader_4;
		NullCheck(L_0);
		Loader_StartLoader_m1115DF05CA28BA3C1562C0E59B04F271085EE116(L_0, NULL);
		AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* L_1 = __this->___m_AuthenticationService_20;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___ForgotPassword_Input_19;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_2, NULL);
		Action_1_t21368F37D8368081C267784197A861AE2EF93602* L_4 = (Action_1_t21368F37D8368081C267784197A861AE2EF93602*)il2cpp_codegen_object_new(Action_1_t21368F37D8368081C267784197A861AE2EF93602_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m32CEB8445399820BBF3EBCCFC1B6E1D41A07455C(L_4, __this, (intptr_t)((void*)AuthenticationManager_U3CForgotPasswordU3Eb__32_0_m2241A953B8AEB028A842386414B40DEF34463DAE_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_5 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_5, __this, (intptr_t)((void*)AuthenticationManager_U3CForgotPasswordU3Eb__32_1_m7B953C04748A4E2B1276545520D5EE8B44CE5D9A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AuthenticationService_ForgotPassword_m0DE69F7CB1D393E4A834D062C907F9E44A61517A(L_1, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager__ctor_mD0A9DE227AD3EBA272C8B32F91EAA2AD6DBB1DBA (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::<SubmitUsernamePassword>b__26_0(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_U3CSubmitUsernamePasswordU3Eb__26_0_mD49ECB85C3C4ED6CCFC517B336AF6140740CABA0 (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D2764F15C5654BF385B3F6CC295E8D28C084612);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_0 = __this->___Loader_4;
		NullCheck(L_0);
		Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8D2764F15C5654BF385B3F6CC295E8D28C084612, NULL);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_1 = __this->___pLogin_24;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_3 = __this->___pLogin_24;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_4 = ___loginResponse0;
		NullCheck(L_3);
		Action_1_Invoke_m614B7318DD7AE0808373F5AFCEE919022F2E976F_inline(L_3, L_4, NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::<SubmitUsernamePassword>b__26_1(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_U3CSubmitUsernamePasswordU3Eb__26_1_mAEED9A4EEB76B870747FAB89E3A29733CCF51F0D (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_0 = __this->___Loader_4;
		NullCheck(L_0);
		Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0(L_0, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_1 = ___ex0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_2, NULL);
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, L_3, NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_4 = __this->___onError_25;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_6 = __this->___onError_25;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_7 = ___ex0;
		NullCheck(L_6);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_6, L_7, NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::<SignUpNewUser>b__29_0(co.techxr.unity.model.PhoneDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_U3CSignUpNewUserU3Eb__29_0_m9C7C6C658B04780EE6065B527BBA5AE43E8FBC9E (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* ___phoneDto0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67EA3A0E625A4982642B4DE8200AE7B7A736EB15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD79935931D8A08BD57CEAAF3E238069B52D4BE96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F07D269AA06FC60EB5DB6FD3E0D67DF667DC5D);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_0 = __this->___Loader_4;
		NullCheck(L_0);
		Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0(L_0, NULL);
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_1 = ___phoneDto0;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = PhoneDto_get_id_m24558CAF4E6D54F82C10FF85E62DE52AA986119B_inline(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral67EA3A0E625A4982642B4DE8200AE7B7A736EB15, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_5 = ___phoneDto0;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = PhoneDto_get_id_m24558CAF4E6D54F82C10FF85E62DE52AA986119B_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_7 = ___phoneDto0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = PhoneDto_get_phoneNumber_mD5EFB39B8C92ED2C58BF3F15E31ECDEA82D7E224_inline(L_7, NULL);
		G_B3_0 = ((((RuntimeObject*)(String_t*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B3_0 = 1;
	}

IL_003f:
	{
		V_1 = (bool)G_B3_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, _stringLiteralE6F07D269AA06FC60EB5DB6FD3E0D67DF667DC5D, NULL);
		goto IL_0092;
	}

IL_0053:
	{
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_10 = ___phoneDto0;
		__this->___m_PhoneDtoResonse_22 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhoneDtoResonse_22), (void*)L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___SignupPanel_10;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___OTP_Panel_9;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_13 = __this->___Otp_dynamic_text_13;
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_14 = ___phoneDto0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = PhoneDto_get_phoneNumber_mD5EFB39B8C92ED2C58BF3F15E31ECDEA82D7E224_inline(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD79935931D8A08BD57CEAAF3E238069B52D4BE96, L_15, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_16);
	}

IL_0092:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::<SignUpNewUser>b__29_1(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_U3CSignUpNewUserU3Eb__29_1_m6317D7FE376F2364CC039F956DC03F210D453FC7 (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260061FC15C64A0D5DDFEC5895DF20810F82405F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_0 = __this->___Loader_4;
		NullCheck(L_0);
		Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0(L_0, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_1 = ___ex0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral260061FC15C64A0D5DDFEC5895DF20810F82405F, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_4 = ___ex0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral260061FC15C64A0D5DDFEC5895DF20810F82405F, L_5, NULL);
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, L_6, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::<SendOtpValue>b__31_0(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_U3CSendOtpValueU3Eb__31_0_mEFF7C1F8937141B4C84192900768F05148DA9F48 (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF93DD0CBDF08B8AF53DECF67CA31C2D76207D47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF54E9B5DA0DF7531EBC3CD9179F1D310E8484A76);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_0 = __this->___Loader_4;
		NullCheck(L_0);
		Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0(L_0, NULL);
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_1 = ___loginResponse0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, _stringLiteralBF93DD0CBDF08B8AF53DECF67CA31C2D76207D47, NULL);
		goto IL_0052;
	}

IL_002a:
	{
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, _stringLiteralF54E9B5DA0DF7531EBC3CD9179F1D310E8484A76, NULL);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_4 = __this->___pLogin_24;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_6 = __this->___pLogin_24;
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_7 = ___loginResponse0;
		NullCheck(L_6);
		Action_1_Invoke_m614B7318DD7AE0808373F5AFCEE919022F2E976F_inline(L_6, L_7, NULL);
	}

IL_0051:
	{
	}

IL_0052:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::<SendOtpValue>b__31_1(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_U3CSendOtpValueU3Eb__31_1_m87864BC46B86708DBBBEE40530A3E3F89271824D (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D29A3C6956B411AF7AB2251D649418ACDBAFE6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_0 = __this->___Loader_4;
		NullCheck(L_0);
		Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0(L_0, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_1 = ___ex0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral08D29A3C6956B411AF7AB2251D649418ACDBAFE6, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_4 = ___ex0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral08D29A3C6956B411AF7AB2251D649418ACDBAFE6, L_5, NULL);
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, L_6, NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_7 = __this->___onError_25;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_9 = __this->___onError_25;
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_10 = ___ex0;
		NullCheck(L_9);
		Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_9, L_10, NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::<ForgotPassword>b__32_0(co.techxr.unity.model.Profile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_U3CForgotPasswordU3Eb__32_0_m2241A953B8AEB028A842386414B40DEF34463DAE (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* ___profile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9952B7618AEC6C5F5B70D58782DC8308347611);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67EA3A0E625A4982642B4DE8200AE7B7A736EB15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F07D269AA06FC60EB5DB6FD3E0D67DF667DC5D);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_0 = __this->___Loader_4;
		NullCheck(L_0);
		Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0(L_0, NULL);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_1 = ___profile0;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = Profile_get_id_m40667EDC77D22F4C06D40195F80E348748B3D269_inline(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral67EA3A0E625A4982642B4DE8200AE7B7A736EB15, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_5 = ___profile0;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = Profile_get_id_m40667EDC77D22F4C06D40195F80E348748B3D269_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_7 = ___profile0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Profile_get_email_m28EE47AB3E1B74978158F21B00E57D2A675AFA18_inline(L_7, NULL);
		G_B3_0 = ((((RuntimeObject*)(String_t*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B3_0 = 1;
	}

IL_003f:
	{
		V_1 = (bool)G_B3_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, _stringLiteralE6F07D269AA06FC60EB5DB6FD3E0D67DF667DC5D, NULL);
		goto IL_0086;
	}

IL_0053:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ForgetPasswordPanel_12;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___LoginPanel_11;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_12 = ___profile0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Profile_get_email_m28EE47AB3E1B74978158F21B00E57D2A675AFA18_inline(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3B9952B7618AEC6C5F5B70D58782DC8308347611, L_13, NULL);
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, L_14, NULL);
	}

IL_0086:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationManager::<ForgotPassword>b__32_1(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_U3CForgotPasswordU3Eb__32_1_m7B953C04748A4E2B1276545520D5EE8B44CE5D9A (AuthenticationManager_tFA3BFC513EDF0E96705D65E51BABFB05913EBBAB* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72CDE9F434D68E10B16E4AB5969DFF0BA85644AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		Loader_tC59971600EBF48F1CC0B1B700DC0B089A0E01669* L_0 = __this->___Loader_4;
		NullCheck(L_0);
		Loader_StopLoader_mA9BC3CC50BCACD24B8616B3BFF407B0543C7BBB0(L_0, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_1 = ___ex0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral72CDE9F434D68E10B16E4AB5969DFF0BA85644AD, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_4 = ___ex0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral72CDE9F434D68E10B16E4AB5969DFF0BA85644AD, L_5, NULL);
		AuthenticationManager_StartToast_m87B32C526762ED87672410BCF47BE39B718C0D15(__this, L_6, NULL);
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
void PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_Multicast(PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* currentDelegate = reinterpret_cast<PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___loginResponse0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenInst(PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method)
{
	NullCheck(___loginResponse0);
	typedef void (*FunctionPointerType) (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___loginResponse0, method);
}
void PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenStatic(PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___loginResponse0, method);
}
void PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenStaticInvoker(PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* >::Invoke(__this->___method_ptr_0, method, NULL, ___loginResponse0);
}
void PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_ClosedStaticInvoker(PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___loginResponse0);
}
void PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenVirtual(PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method)
{
	NullCheck(___loginResponse0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___loginResponse0);
}
void PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenInterface(PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method)
{
	NullCheck(___loginResponse0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___loginResponse0);
}
void PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenGenericVirtual(PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method)
{
	NullCheck(___loginResponse0);
	GenericVirtualActionInvoker0::Invoke(method, ___loginResponse0);
}
void PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenGenericInterface(PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method)
{
	NullCheck(___loginResponse0);
	GenericInterfaceActionInvoker0::Invoke(method, ___loginResponse0);
}
// System.Void TechXR.Core.Sense.AuthenticationManager/PostLogin::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostLogin__ctor_m58E833443271D2020E4D0F62FD7CE671511B79CB (PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenStatic;
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
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31_Multicast;
}
// System.Void TechXR.Core.Sense.AuthenticationManager/PostLogin::Invoke(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostLogin_Invoke_mB0C7E6DF41C01D86A1CF115A8BE81A55DC8DEB31 (PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___loginResponse0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TechXR.Core.Sense.AuthenticationManager/PostLogin::BeginInvoke(co.techxr.unity.model.LoginResponse,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PostLogin_BeginInvoke_mFAF5BAE5B10FDB84C8AA1C366E1A5F502F5181BA (PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___loginResponse0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void TechXR.Core.Sense.AuthenticationManager/PostLogin::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostLogin_EndInvoke_m31D8229D59B156810C2954FDFE63EFD6C8FDBAD6 (PostLogin_t8E013BD316166D5A6C40742AD404ECC6C54701B7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void TechXR.Core.Sense.AuthenticationService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService__ctor_m876BC37F2D013E724ADAC49A1EDEE0BEEADC5811 (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AuthService_t0C5BFB323C59EB2A2241517491D6327B695B6C94* L_0;
		L_0 = AuthService_getInstance_m1B3605F5359ED6DC80490736B7C1D4076E14FF33(NULL);
		__this->___m_AuthService_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AuthService_0), (void*)L_0);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationService::Login(System.String,System.String,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService_Login_m99AF1F29F1C274A7841C1A2F0B220E684C50B901 (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* __this, String_t* ___username0, String_t* ___password1, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___OnSuccess2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* V_0 = NULL;
	{
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_0 = (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664*)il2cpp_codegen_object_new(LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LoginDto__ctor_m8FF53772151E742C507E19B00D05EB0B0F83AB18(L_0, NULL);
		V_0 = L_0;
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_1 = V_0;
		String_t* L_2 = ___username0;
		NullCheck(L_1);
		LoginDto_set_email_m56726083368A4674A47E7B1A8BE29D910230B8F5_inline(L_1, L_2, NULL);
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_3 = V_0;
		String_t* L_4 = ___password1;
		NullCheck(L_3);
		LoginDto_set_password_m944BBD56EAC0B309537CCBC938524D8A9FE0B42D_inline(L_3, L_4, NULL);
		RuntimeObject* L_5 = __this->___m_AuthService_0;
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_6 = V_0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_7 = ___OnSuccess2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_8 = ___OnError3;
		NullCheck(L_5);
		InterfaceActionInvoker4< LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664*, Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, Action_1_t77330DAB4B6364644857E237915461B112A9D589*, bool >::Invoke(1 /* System.Void co.techxr.unity.network.IAuthService::login(co.techxr.unity.model.LoginDto,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>,System.Boolean) */, IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8, (bool)1);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationService::SignUp(System.String,System.String,System.String,System.String,System.Action`1<co.techxr.unity.model.PhoneDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService_SignUp_m5B4AD47FE9C2FEB1FD933F597EDF3B3C18ED89D6 (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* __this, String_t* ___phoneNumber0, String_t* ___firstName1, String_t* ___lastName2, String_t* ___email3, Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* ___OnSuccess4, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSignUpU3Eb__3_1_mFC96A3A77D0DAB60F196713F1DA16137982E9985_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CSignUpU3Eb__0_m8E4CF63CC252360B7AAE87A23A92B0331DA1942F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D931A88BE039DE3AF765BFC224763F1F0D71EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A6F3465452F5D3892CC8C8C587154AB5CEFD422);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* V_0 = NULL;
	PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* V_1 = NULL;
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* G_B2_0 = NULL;
	Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* G_B2_1 = NULL;
	Action_1_t77330DAB4B6364644857E237915461B112A9D589* G_B1_0 = NULL;
	Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* G_B1_1 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* L_0 = (U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mE43F265B6E5AC87951FBD69DACCA8494F0BCC635(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* L_2 = V_0;
		Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* L_3 = ___OnSuccess4;
		NullCheck(L_2);
		L_2->___OnSuccess_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnSuccess_2), (void*)L_3);
		U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* L_4 = V_0;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_5 = ___OnError5;
		NullCheck(L_4);
		L_4->___OnError_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___OnError_3), (void*)L_5);
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_6 = (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB*)il2cpp_codegen_object_new(PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PhoneDto__ctor_mEFCDB2D8EC721F49D729CBF70A810C647E7812BC(L_6, NULL);
		V_1 = L_6;
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_7 = V_1;
		String_t* L_8 = ___phoneNumber0;
		NullCheck(L_7);
		PhoneDto_set_phoneNumber_m35B0A675DA2B019284DCB3B3C9A161E408004DD3_inline(L_7, L_8, NULL);
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_9 = V_1;
		NullCheck(L_9);
		PhoneDto_set_callStatus_m4EE9AC838C0C65774DBCE37AFCAE1B56AAB712E7_inline(L_9, _stringLiteral7A6F3465452F5D3892CC8C8C587154AB5CEFD422, NULL);
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_10 = V_1;
		NullCheck(L_10);
		PhoneDto_set_whatsappStatus_m98E71E7E3D93D48027E39345C67DA022341AA422_inline(L_10, _stringLiteral7A6F3465452F5D3892CC8C8C587154AB5CEFD422, NULL);
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_11 = V_1;
		NullCheck(L_11);
		PhoneDto_set_countryCode_m4B2280A1A5BB654751CF43C8D6F3EAFC9BB95F2A_inline(L_11, _stringLiteral6D931A88BE039DE3AF765BFC224763F1F0D71EE3, NULL);
		U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* L_12 = V_0;
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_13 = (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876*)il2cpp_codegen_object_new(Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Profile__ctor_m5113FE34C065AC977909C870C7C1FC5E21934A38(L_13, NULL);
		NullCheck(L_12);
		L_12->___profile_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___profile_1), (void*)L_13);
		U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* L_14 = V_0;
		NullCheck(L_14);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_15 = L_14->___profile_1;
		String_t* L_16 = ___firstName1;
		NullCheck(L_15);
		Profile_set_firstName_m5595E8E80114B7638D56119DE6E9DF0BA8A04965_inline(L_15, L_16, NULL);
		U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* L_17 = V_0;
		NullCheck(L_17);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_18 = L_17->___profile_1;
		String_t* L_19 = ___lastName2;
		NullCheck(L_18);
		Profile_set_lastName_m00E9B2C0C773EDD78054E3CA8E244FB61C73C0F1_inline(L_18, L_19, NULL);
		U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* L_20 = V_0;
		NullCheck(L_20);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_21 = L_20->___profile_1;
		String_t* L_22 = ___email3;
		NullCheck(L_21);
		Profile_set_email_mA72305D17841A28D066AC19041EBE0059EA18347_inline(L_21, L_22, NULL);
		U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* L_23 = V_0;
		NullCheck(L_23);
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_24 = L_23->___profile_1;
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_25 = V_1;
		NullCheck(L_24);
		Profile_set_phone_m08D54AAC84B58867962283A6F1CBAE81385D0A83_inline(L_24, L_25, NULL);
		U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* L_26 = V_0;
		Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* L_27 = (Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270*)il2cpp_codegen_object_new(Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_m8033DEC4F02C19E9FB0C9C30B2F24ADA694312A7(L_27, L_26, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CSignUpU3Eb__0_m8E4CF63CC252360B7AAE87A23A92B0331DA1942F_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_28 = ((U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_29 = L_28;
		G_B1_0 = L_29;
		G_B1_1 = L_27;
		if (L_29)
		{
			G_B2_0 = L_29;
			G_B2_1 = L_27;
			goto IL_00bb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var);
		U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B* L_30 = ((U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_31 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_31, L_30, (intptr_t)((void*)U3CU3Ec_U3CSignUpU3Eb__3_1_mFC96A3A77D0DAB60F196713F1DA16137982E9985_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_32 = L_31;
		((U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_1 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_1), (void*)L_32);
		G_B2_0 = L_32;
		G_B2_1 = G_B1_1;
	}

IL_00bb:
	{
		StorageUtil_getApplicationDetail_mA4F4626ED2DB157AE2E7D3AB60F3A48054CC642F(G_B2_1, G_B2_0, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationService::OtpValue(co.techxr.unity.model.PhoneDto,System.Int32,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService_OtpValue_m92B2737FFE03CA3CEBA2D2072571DA6CC4EE138A (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* __this, PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* ___phoneDto0, int32_t ___otp1, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___OnSuccess2, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___m_AuthService_0;
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_1 = ___phoneDto0;
		int32_t L_2 = ___otp1;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_3 = ___OnSuccess2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_4 = ___OnError3;
		NullCheck(L_0);
		InterfaceActionInvoker4< PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB*, int32_t, Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(4 /* System.Void co.techxr.unity.network.IAuthService::otpvalue(co.techxr.unity.model.PhoneDto,System.Int32,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationService::ForgotPassword(System.String,System.Action`1<co.techxr.unity.model.Profile>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService_ForgotPassword_m0DE69F7CB1D393E4A834D062C907F9E44A61517A (AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* __this, String_t* ___email0, Action_1_t21368F37D8368081C267784197A861AE2EF93602* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* V_0 = NULL;
	{
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_0 = (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664*)il2cpp_codegen_object_new(LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LoginDto__ctor_m8FF53772151E742C507E19B00D05EB0B0F83AB18(L_0, NULL);
		V_0 = L_0;
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_1 = V_0;
		String_t* L_2 = ___email0;
		NullCheck(L_1);
		LoginDto_set_email_m56726083368A4674A47E7B1A8BE29D910230B8F5_inline(L_1, L_2, NULL);
		RuntimeObject* L_3 = __this->___m_AuthService_0;
		LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* L_4 = V_0;
		Action_1_t21368F37D8368081C267784197A861AE2EF93602* L_5 = ___OnSuccess1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_6 = ___OnError2;
		NullCheck(L_3);
		InterfaceActionInvoker3< LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664*, Action_1_t21368F37D8368081C267784197A861AE2EF93602*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(6 /* System.Void co.techxr.unity.network.IAuthService::forgotPassword(co.techxr.unity.model.LoginDto,System.Action`1<co.techxr.unity.model.Profile>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var, L_3, L_4, L_5, L_6);
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
// System.Void TechXR.Core.Sense.AuthenticationService/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mE43F265B6E5AC87951FBD69DACCA8494F0BCC635 (U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationService/<>c__DisplayClass3_0::<SignUp>b__0(co.techxr.unity.model.ApplicationDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CSignUpU3Eb__0_m8E4CF63CC252360B7AAE87A23A92B0331DA1942F (U3CU3Ec__DisplayClass3_0_t7462CA3E8738B76BCB916CDABF3AD33B6F98E297* __this, ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* ___applicationDto0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* L_0 = ___applicationDto0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* L_1 = ___applicationDto0;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = ApplicationDto_get_id_mA2C790803B0D6DC863DF461938C1184225DA7F95_inline(L_1, NULL);
		G_B3_0 = ((((int64_t)L_2) > ((int64_t)((int64_t)0)))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		AuthenticationService_t873C08A2EFB57B735776B805B846D02B5F2ECCB7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___m_AuthService_0;
		Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* L_6 = __this->___profile_1;
		ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* L_7 = ___applicationDto0;
		NullCheck(L_7);
		int64_t L_8;
		L_8 = ApplicationDto_get_id_mA2C790803B0D6DC863DF461938C1184225DA7F95_inline(L_7, NULL);
		Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9* L_9 = __this->___OnSuccess_2;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_10 = __this->___OnError_3;
		NullCheck(L_5);
		InterfaceActionInvoker4< Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876*, int64_t, Action_1_t0333539D12DAAC7DE9F0409893E81BC4D5C735E9*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(3 /* System.Void co.techxr.unity.network.IAuthService::signUp(co.techxr.unity.model.Profile,System.Int64,System.Action`1<co.techxr.unity.model.PhoneDto>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, IAuthService_t3127A52979829720A42D265715C947BE56700ED3_il2cpp_TypeInfo_var, L_5, L_6, L_8, L_9, L_10);
	}

IL_0040:
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
// System.Void TechXR.Core.Sense.AuthenticationService/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0C2537040684B554381C259543B2BB7922C980AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B* L_0 = (U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B*)il2cpp_codegen_object_new(U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC1CAEE857417C709624362CBDE78EDA489B97024(L_0, NULL);
		((U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC1CAEE857417C709624362CBDE78EDA489B97024 (U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.AuthenticationService/<>c::<SignUp>b__3_1(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSignUpU3Eb__3_1_mFC96A3A77D0DAB60F196713F1DA16137982E9985 (U3CU3Ec_t5AB108BD9B6CFAEB40BC395CC98A400C3743175B* __this, XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___ex0, const RuntimeMethod* method) 
{
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_0 = ___ex0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CSignUpU3Eb__3_1_mFC96A3A77D0DAB60F196713F1DA16137982E9985_RuntimeMethod_var)));
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
// System.Boolean TechXR.Core.Sense.InputValidation::ValidateEmail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValidation_ValidateEmail_mF22936A28C061AAE45E170D40EA450792D939017 (InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22* __this, String_t* ___email0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = __this->___emailRegex_0;
		String_t* L_1 = ___email0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean TechXR.Core.Sense.InputValidation::ValidatePhone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValidation_ValidatePhone_m676480D95455255D56C949E112B771D68B2A0A05 (InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22* __this, String_t* ___phoneNumber0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___phoneNumber0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ___phoneNumber0;
		bool L_3;
		L_3 = InputValidation_U3CValidatePhoneU3Eg__isDigitU7C2_0_m7DB73A7B530601CD228B08188C533E507001F343(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void TechXR.Core.Sense.InputValidation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputValidation__ctor_m2073454E8EDCF7964DBC0CA4DE82C8CE7D14FBA6 (InputValidation_t95B3D0A676F8EF5A4465A1EC99394CB4ADCFDB22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BEF2BBBA709D39E6088E032114AC9F810A5B7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_0, _stringLiteral84BEF2BBBA709D39E6088E032114AC9F810A5B7A, 1, NULL);
		__this->___emailRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___emailRegex_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TechXR.Core.Sense.InputValidation::<ValidatePhone>g__isDigit|2_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValidation_U3CValidatePhoneU3Eg__isDigitU7C2_0_m7DB73A7B530601CD228B08188C533E507001F343 (String_t* ___number0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___number0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_0008:
	{
		String_t* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_2 = L_3;
		Il2CppChar L_4 = V_2;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_001d;
		}
	}
	{
		Il2CppChar L_5 = V_2;
		G_B4_0 = ((((int32_t)L_5) > ((int32_t)((int32_t)57)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 1;
	}

IL_001e:
	{
		V_3 = (bool)G_B4_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_003a;
	}

IL_0027:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		int32_t L_8 = V_1;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0008;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_003a;
	}

IL_003a:
	{
		bool L_11 = V_4;
		return L_11;
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
// System.Void TechXR.Core.Sense.StorageUtil::storeApplicationDetail(co.techxr.unity.model.ApplicationDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageUtil_storeApplicationDetail_m192467F4E116F32F000CD156F8382559C37FEDBE (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* ___applicationDto0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Serialize_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_m0A74908978F138823705E0E9E8347752015B2CEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF8860C0853E0892A2E8AFB0D3530E6679E2F2E4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* L_0 = ___applicationDto0;
		il2cpp_codegen_runtime_class_init_inline(JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = JsonSerializer_Serialize_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_m0A74908978F138823705E0E9E8347752015B2CEB(L_0, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Serialize_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_m0A74908978F138823705E0E9E8347752015B2CEB_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBF8860C0853E0892A2E8AFB0D3530E6679E2F2E4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* L_4;
		L_4 = SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5(SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TechXRConfiguration_get_AppKey_m5D7EA829C9649F8F816A1EA9BC020DBC84D310D0(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var);
		String_t* L_6 = ((TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_StaticFields*)il2cpp_codegen_static_fields_for(TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var))->___APPLICATION_DTO_0;
		String_t* L_7;
		L_7 = StorageUtil_constructKey_mD9F8608317D30873EF7A2EDDC76400ECD4888025(L_5, L_6, NULL);
		String_t* L_8 = V_0;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_7, L_8, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.StorageUtil::getApplicationDetail(System.Action`1<co.techxr.unity.model.ApplicationDto>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageUtil_getApplicationDetail_mA4F4626ED2DB157AE2E7D3AB60F3A48054CC642F (Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* ___successCallback0, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_mFA6392BFBD3E25B1775B0DF28661F2FF9FFF2C2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* V_5 = NULL;
	bool V_6 = false;
	Exception_t* V_7 = NULL;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* L_0;
			L_0 = SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5(SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5_RuntimeMethod_var);
			NullCheck(L_0);
			String_t* L_1;
			L_1 = TechXRConfiguration_get_AppKey_m5D7EA829C9649F8F816A1EA9BC020DBC84D310D0(L_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var);
			String_t* L_2 = ((TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_StaticFields*)il2cpp_codegen_static_fields_for(TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var))->___APPLICATION_DTO_0;
			String_t* L_3;
			L_3 = StorageUtil_constructKey_mD9F8608317D30873EF7A2EDDC76400ECD4888025(L_1, L_2, NULL);
			V_0 = L_3;
			String_t* L_4 = V_0;
			bool L_5;
			L_5 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_4, NULL);
			V_1 = L_5;
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0042_1;
			}
		}
		{
			String_t* L_7 = V_0;
			String_t* L_8;
			L_8 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_7, NULL);
			il2cpp_codegen_runtime_class_init_inline(JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
			ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* L_9;
			L_9 = JsonSerializer_Deserialize_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_mFA6392BFBD3E25B1775B0DF28661F2FF9FFF2C2B(L_8, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Deserialize_TisApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99_mFA6392BFBD3E25B1775B0DF28661F2FF9FFF2C2B_RuntimeMethod_var);
			V_2 = L_9;
			Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* L_10 = ___successCallback0;
			V_3 = (bool)((!(((RuntimeObject*)(Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_11 = V_3;
			if (!L_11)
			{
				goto IL_003f_1;
			}
		}
		{
			Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* L_12 = ___successCallback0;
			ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* L_13 = V_2;
			NullCheck(L_12);
			Action_1_Invoke_m251AC91981B535BE2564D92A8C0304D4396C82CC_inline(L_12, L_13, NULL);
		}

IL_003f_1:
		{
			goto IL_005f_1;
		}

IL_0042_1:
		{
			LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* L_14 = (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759*)il2cpp_codegen_object_new(LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759_il2cpp_TypeInfo_var);
			NullCheck(L_14);
			LicenseService__ctor_m53521AA6FC5F8F72E2301B8A06B7ED9235927563(L_14, NULL);
			V_4 = L_14;
			RuntimeObject* L_15 = V_4;
			TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* L_16;
			L_16 = SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5(SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5_RuntimeMethod_var);
			NullCheck(L_16);
			String_t* L_17;
			L_17 = TechXRConfiguration_get_AppKey_m5D7EA829C9649F8F816A1EA9BC020DBC84D310D0(L_16, NULL);
			Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270* L_18 = ___successCallback0;
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_19 = ___errorCallback1;
			NullCheck(L_15);
			InterfaceActionInvoker3< String_t*, Action_1_tCBB7837C37A8BD0653AB5AEDC43B9A5BFB5C7270*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(4 /* System.Void co.techxr.unity.network.ILicenseService::getApplicationFromKey(System.String,System.Action`1<co.techxr.unity.model.ApplicationDto>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, ILicenseService_t00EAAF8967769A41C1089D0CC0C8084B288C5B7C_il2cpp_TypeInfo_var, L_15, L_17, L_18, L_19);
		}

IL_005f_1:
		{
			goto IL_00a8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0062;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007b;
		}
		throw e;
	}

CATCH_0062:
	{// begin catch(co.techxr.unity.exceptions.XrException)
		{
			V_5 = ((XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)IL2CPP_GET_ACTIVE_EXCEPTION(XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*));
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_20 = ___errorCallback1;
			V_6 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_21 = V_6;
			if (!L_21)
			{
				goto IL_0078;
			}
		}
		{
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_22 = ___errorCallback1;
			XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_23 = V_5;
			NullCheck(L_22);
			Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_22, L_23, NULL);
		}

IL_0078:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a8;
		}
	}// end catch (depth: 1)

CATCH_007b:
	{// begin catch(System.Exception)
		{
			V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_24 = ___errorCallback1;
			V_8 = (bool)((!(((RuntimeObject*)(Action_1_t77330DAB4B6364644857E237915461B112A9D589*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_25 = V_8;
			if (!L_25)
			{
				goto IL_00a5;
			}
		}
		{
			Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_26 = ___errorCallback1;
			Exception_t* L_27 = V_7;
			NullCheck(L_27);
			String_t* L_28;
			L_28 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_27);
			String_t* L_29;
			L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral49CFC9EF229D3FF85003ECF21513FA580AD57A60)), L_28, NULL);
			XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_30 = (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F_il2cpp_TypeInfo_var)));
			NullCheck(L_30);
			XrException__ctor_m087F2B81D17A632DD0AE25D8688982B0DBA9FDDE(L_30, L_29, NULL);
			NullCheck(L_26);
			Action_1_Invoke_m22F5DE35399A5E2BF30D0CEC4103BA92B79C1E14_inline(L_26, L_30, NULL);
		}

IL_00a5:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a8;
		}
	}// end catch (depth: 1)

IL_00a8:
	{
		return;
	}
}
// System.String TechXR.Core.Sense.StorageUtil::constructKey(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageUtil_constructKey_mD9F8608317D30873EF7A2EDDC76400ECD4888025 (String_t* ___classIdentifier0, String_t* ___appKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___classIdentifier0;
		String_t* L_1 = ___appKey1;
		String_t* L_2;
		L_2 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void TechXR.Core.Sense.StorageUtil::storeInstallationDetails(co.techxr.unity.model.SenseInstallDto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageUtil_storeInstallationDetails_m221DD9AAD15D17748DDAFF4DDC6D2970F4338290 (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* ___sid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Serialize_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_m4988DDECA9EFABE02FAAC6EADA19A5274488B177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DACF0DE919AE0207D8DD908B9CD4FF9229FA53D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_0 = ___sid0;
		il2cpp_codegen_runtime_class_init_inline(JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = JsonSerializer_Serialize_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_m4988DDECA9EFABE02FAAC6EADA19A5274488B177(L_0, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Serialize_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_m4988DDECA9EFABE02FAAC6EADA19A5274488B177_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7DACF0DE919AE0207D8DD908B9CD4FF9229FA53D, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* L_4;
		L_4 = SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5(SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TechXRConfiguration_get_AppKey_m5D7EA829C9649F8F816A1EA9BC020DBC84D310D0(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var);
		String_t* L_6 = ((TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_StaticFields*)il2cpp_codegen_static_fields_for(TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var))->___SENSE_INSTALL_DTO_1;
		String_t* L_7;
		L_7 = StorageUtil_constructKey_mD9F8608317D30873EF7A2EDDC76400ECD4888025(L_5, L_6, NULL);
		String_t* L_8 = V_0;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_7, L_8, NULL);
		return;
	}
}
// co.techxr.unity.model.SenseInstallDto TechXR.Core.Sense.StorageUtil::getInstallationDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* StorageUtil_getInstallationDetails_mC96B0515D7A71753FD0154E370991CEC0DDBA60B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_m244241D50126BE9D4E004ECBF2B93D5EF6EA17D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* V_2 = NULL;
	{
		TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* L_0;
		L_0 = SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5(SingletonScriptableObject_1_get_Instance_m345011B9AB31BACE0962FE17568788677BD94CB5_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TechXRConfiguration_get_AppKey_m5D7EA829C9649F8F816A1EA9BC020DBC84D310D0(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_StaticFields*)il2cpp_codegen_static_fields_for(TechXRConstant_t7652891B36DAF688373899F1E23AE3F66147F890_il2cpp_TypeInfo_var))->___SENSE_INSTALL_DTO_1;
		String_t* L_3;
		L_3 = StorageUtil_constructKey_mD9F8608317D30873EF7A2EDDC76400ECD4888025(L_1, L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_9;
		L_9 = JsonSerializer_Deserialize_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_m244241D50126BE9D4E004ECBF2B93D5EF6EA17D1(L_8, (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL, JsonSerializer_Deserialize_TisSenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3_m244241D50126BE9D4E004ECBF2B93D5EF6EA17D1_RuntimeMethod_var);
		V_2 = L_9;
		goto IL_0035;
	}

IL_0030:
	{
		V_2 = (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3*)NULL;
		goto IL_0035;
	}

IL_0035:
	{
		SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* L_10 = V_2;
		return L_10;
	}
}
// System.Void TechXR.Core.Sense.StorageUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageUtil__ctor_mB4793704211644F11469942F27DAB6D12E544CBA (StorageUtil_t437195D6BA505EA17F8B413276504D421E24F384* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInstallDto_set_activation_m99EE1947E42F5A150754F75303123DE7F2835F7C_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* ___value0, const RuntimeMethod* method) 
{
	{
		ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* L_0 = ___value0;
		__this->___U3CactivationU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CactivationU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ActivationDto_get_allowed_m9047CAAD46B35CABB1DB957614FDFA4939A3FB0D_inline (ActivationDto_t2F81ABD9FE0BB27C9DAE5DC2BAB2833A6F257EF5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CallowedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XrException_get_message_m48B86C574D0983D23FF35BD1EC736B7C147C1334_inline (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CmessageU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SenseInstallDto_get_id_m8ADF48D62058A614962DFFD62B7BB09347ACF088_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppLoginDto_set_installationId_mC8D6D6634A5CC71AC77932AEEE5AE990A0505419_inline (AppLoginDto_tB96ACE65EEB6BA77CB6B7D1A87769FBC79153E3B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CinstallationIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallationIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInstallDto_set_deviceId_m4BDB96E294EF035AAF0B19FE499C13A9998C6304_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CdeviceIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdeviceIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInstallDto_set_os_mBE971C58164102625421358605B2EDDAFDA0284A_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CosU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CosU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInstallDto_set_hardware_m7477BDD4CCC7BCD09C15A9C7C78009260FB639F4_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3ChardwareU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChardwareU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInstallDto_set_installType_mEEC8440AF8A02540773EE806110DBB408D97C556_inline (SenseInstallDto_t70B1EE7C14F1F8F3EC73384FD844EB685A0C5FD3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CinstallTypeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallTypeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t PhoneDto_get_id_m24558CAF4E6D54F82C10FF85E62DE52AA986119B_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PhoneDto_get_phoneNumber_mD5EFB39B8C92ED2C58BF3F15E31ECDEA82D7E224_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CphoneNumberU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3Caccess_tokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Profile_get_email_m28EE47AB3E1B74978158F21B00E57D2A675AFA18_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CemailU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoginDto_set_email_m56726083368A4674A47E7B1A8BE29D910230B8F5_inline (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CemailU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CemailU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoginDto_set_password_m944BBD56EAC0B309537CCBC938524D8A9FE0B42D_inline (LoginDto_t6A668E4E955F3AD5F0FF3E48A3387C63942B7664* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CpasswordU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpasswordU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhoneDto_set_phoneNumber_m35B0A675DA2B019284DCB3B3C9A161E408004DD3_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CphoneNumberU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CphoneNumberU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhoneDto_set_callStatus_m4EE9AC838C0C65774DBCE37AFCAE1B56AAB712E7_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CcallStatusU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcallStatusU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhoneDto_set_whatsappStatus_m98E71E7E3D93D48027E39345C67DA022341AA422_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CwhatsappStatusU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwhatsappStatusU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhoneDto_set_countryCode_m4B2280A1A5BB654751CF43C8D6F3EAFC9BB95F2A_inline (PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CcountryCodeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcountryCodeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profile_set_firstName_m5595E8E80114B7638D56119DE6E9DF0BA8A04965_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CfirstNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfirstNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profile_set_lastName_m00E9B2C0C773EDD78054E3CA8E244FB61C73C0F1_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3ClastNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClastNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profile_set_email_mA72305D17841A28D066AC19041EBE0059EA18347_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CemailU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CemailU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profile_set_phone_m08D54AAC84B58867962283A6F1CBAE81385D0A83_inline (Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* __this, PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* ___value0, const RuntimeMethod* method) 
{
	{
		PhoneDto_t2EFEF6C8E86F1DFB9C7006F639AD1B4279CB84BB* L_0 = ___value0;
		__this->___U3CphoneU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CphoneU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ApplicationDto_get_id_mA2C790803B0D6DC863DF461938C1184225DA7F95_inline (ApplicationDto_t73E892E4AF0EA7B999A5428247E50688B9ECFC99* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
