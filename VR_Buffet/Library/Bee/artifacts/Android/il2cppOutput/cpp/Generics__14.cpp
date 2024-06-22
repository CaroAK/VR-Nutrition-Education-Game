#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

struct Action_1_t20BEB915CF9492833F21779552F71F8BC378DFF4;
struct Action_1_t6DADC37B4AD2BFDAF6F8F80F597870C5693EEE1F;
struct Action_1_tEACDF04A7E59F802BE6074E014636B4DFEECB424;
struct Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8;
struct Action_1_tC7DA3F3177E0ABC8E0B6FB2D4D2F72C303E1A04F;
struct Action_2_t240BAEB1DC7A6558995FFCB7E0186F2ABB2CE346;
struct Action_2_t5F23CC3B7A8A73A4EA03ECC4C0C36453937843DB;
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
struct Action_3_tD4FEFC6A317A295868086BEB12578A006464E2D5;
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct ContinueWithInvoker_t9BFAEFCDB6982ABB39AC323190856609FF7C8961;
struct ContinueWithInvoker_t9224B3C8809CF23BB8FDF74180DEDA9FC41CBA35;
struct ContinueWithInvoker_tE6A6B312613EEC99AD802D15EF2AF586639CC8EB;
struct ContinueWithRemover_t6CB0D72DD7B76F5FFE2CDFB72CC4F428A1CC2D09;
struct ContinueWithRemover_t1BACA370164F2ADE6EF2A843E9ACCA611FC3F871;
struct ContinueWithRemover_t1E316C0F3A3BACE007BA8AF9E409458A609A94A2;
struct DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F;
struct DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7;
struct DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD;
struct DelegateEnumerator_t03CC726F1198053E252AFEE23D3871C1435B4970;
struct DelegateEnumerator_t2D9F0401F1C8389D1335BC9FEE9A280B852DA125;
struct DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4;
struct DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9;
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6;
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27;
struct Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1;
struct Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A;
struct Dictionary_2_t695454913465472BF4309DE335CF2851688D202F;
struct Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B;
struct Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0;
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3;
struct Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F;
struct Dictionary_2_tEBE1E11ABD22357FDFD12EF5F2F7CDC6378162C0;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Dictionary_2_tBA28DDE9EBD7869B2D9C725CB660A33231C09054;
struct Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147;
struct EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA;
struct EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9;
struct EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3;
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE;
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
struct EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66;
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94;
struct FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D;
struct FileSystemEnumerator_1_tA955DE78A8E344B2059ACE249F0647FFF74DA3EA;
struct FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D;
struct FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0;
struct FindTransform_tC499583A33189BE267A9A28ED61DB4DE63B28851;
struct FindTransform_t4AB3CE80560E429B4D6E6793B8BDCDAB4CD297DF;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct IDictionary_2_t87FE7C320472A9B284D1C22AA021ADB7F3848469;
struct IDictionary_2_tA2330C7C8777A06DFEF91DA17F3C4618D7F1FA63;
struct IDictionary_2_t95E1DBA53866F322A3A2A161204CC50695E47794;
struct IDictionary_2_t8D59745A337F5AA0EAD21F2A808CBF2D57A9F5DF;
struct IDictionary_2_tAB1F1ECA3D54D0690E78C26907611DDD706737FF;
struct IDictionary_2_t3471E6A0D970B163CED665B0499BED3F25FCB3A1;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerator_1_tB911D3203476F60A7B3EC5F4B998768AF9BDC1BF;
struct IEnumerator_1_tAA9E173D47F9A415DBE8F74E8C3F53E27F513950;
struct IEnumerator_1_t76419BE1F84E81DA72503668F8B6C115279BA305;
struct IEnumerator_1_t30FDE05E2C45CFEC4CBA4F1F1A4FAEA5A747714C;
struct IEnumerator_1_t893841C358C43F60CA9D69BAAABA34D3C4762181;
struct IEnumerator_1_t5FF79A41CF0301339D4ADE6D8F34870F64B22B7B;
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_t7B9144633093FF69C651B8EA9D6B8EA86E1AF68E;
struct IEqualityComparer_1_tDACC7D28FFD11A83A9FC39CC18863F52A3E7E88F;
struct IEqualityComparer_1_t4C406F82823FF96EEFA77E78C84DE151AFA91A85;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct IEqualityComparer_1_t163D7F9C54435E5B76365D94D35604F441AE60A6;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IList_1_t3C981BB2E5E26A467A42AF86513CF54136025701;
struct IList_1_t1F79F22F068EBEEE2FC8D080E405FD5F950258E3;
struct IList_1_tF939437DA6A736B0D418E652C678C909E9D54240;
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
struct IList_1_tE1DBB5F3DF28BD7B0DD590F3E34EEB324610B113;
struct KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510;
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123;
struct KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290;
struct KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7;
struct KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4;
struct KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB;
struct KeyCollection_t14A233E34A894FE89906139584E0AC0D31029604;
struct KeyCollection_tD41883BBC8736ED071B17D5BF180DF99726496A6;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F;
struct List_1_tDD673E02B713760331F9D857C7B1D1C4A07194EF;
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963;
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA;
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31;
struct Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098;
struct Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96;
struct TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E;
struct ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A;
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F;
struct ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90;
struct ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924;
struct ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9;
struct ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66;
struct ValueCollection_t6768DBC08DBBB251C53F1F4A279C11F55C71F4CC;
struct ValueCollection_t7FD472E5DB27640F09A6E9013C6BCBCE3A44818D;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9;
struct EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D;
struct EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A;
struct EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E;
struct EntryU5BU5D_t26B3DD5E2D21D5C51B4F54D09E27270E2C47644F;
struct EntryU5BU5D_tA03E11E6F7C1A77487C4E826739906917B5350AC;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0;
struct KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4;
struct KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605;
struct KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SortColumnDescriptionU5BU5D_tCC3DBACAFBA412B6F1EA1C4027A27E92D9153948;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0;
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768;
struct Columns_t487EAF3B634F6D919D58F1927099A8883964831B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6;
struct MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA;
struct String_t;
struct TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteral2A57163F65B0EE8A44DC4359CBCD332A446966AA;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9;
struct EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D;
struct EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A;
struct EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E;
struct KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0;
struct KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4;
struct KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605;
struct KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF  : public RuntimeObject
{
	Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};
struct Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* ____keys;
	ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* ____keys;
	ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290* ____keys;
	ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7* ____keys;
	ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t695454913465472BF4309DE335CF2851688D202F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* ____keys;
	ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* ____keys;
	ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t26B3DD5E2D21D5C51B4F54D09E27270E2C47644F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t14A233E34A894FE89906139584E0AC0D31029604* ____keys;
	ValueCollection_t6768DBC08DBBB251C53F1F4A279C11F55C71F4CC* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tA03E11E6F7C1A77487C4E826739906917B5350AC* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD41883BBC8736ED071B17D5BF180DF99726496A6* ____keys;
	ValueCollection_t7FD472E5DB27640F09A6E9013C6BCBCE3A44818D* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147  : public RuntimeObject
{
};
struct EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA  : public RuntimeObject
{
};
struct EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9  : public RuntimeObject
{
};
struct EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3  : public RuntimeObject
{
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE  : public RuntimeObject
{
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};
struct EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66  : public RuntimeObject
{
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94  : public RuntimeObject
{
	DelegateEnumerator_t03CC726F1198053E252AFEE23D3871C1435B4970* ____enumerator;
	FindTransform_tC499583A33189BE267A9A28ED61DB4DE63B28851* ____transform;
	EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B* ____options;
	String_t* ____directory;
	FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* ___U3CShouldIncludePredicateU3Ek__BackingField;
	FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* ___U3CShouldRecursePredicateU3Ek__BackingField;
};
struct FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D  : public RuntimeObject
{
	DelegateEnumerator_t2D9F0401F1C8389D1335BC9FEE9A280B852DA125* ____enumerator;
	FindTransform_t4AB3CE80560E429B4D6E6793B8BDCDAB4CD297DF* ____transform;
	EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B* ____options;
	String_t* ____directory;
	FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* ___U3CShouldIncludePredicateU3Ek__BackingField;
	FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* ___U3CShouldRecursePredicateU3Ek__BackingField;
};
struct KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510  : public RuntimeObject
{
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ____dictionary;
};
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290  : public RuntimeObject
{
	Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ____dictionary;
};
struct KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7  : public RuntimeObject
{
	Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* ____dictionary;
};
struct KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4  : public RuntimeObject
{
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ____dictionary;
};
struct KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB  : public RuntimeObject
{
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ____dictionary;
};
struct List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F  : public RuntimeObject
{
	SortColumnDescriptionU5BU5D_tCC3DBACAFBA412B6F1EA1C4027A27E92D9153948* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A  : public RuntimeObject
{
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ____dictionary;
};
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90  : public RuntimeObject
{
	Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ____dictionary;
};
struct ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924  : public RuntimeObject
{
	Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* ____dictionary;
};
struct ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9  : public RuntimeObject
{
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ____dictionary;
};
struct ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66  : public RuntimeObject
{
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ____dictionary;
};
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768  : public RuntimeObject
{
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_View;
	RuntimeObject* ___m_ItemsSource;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged;
};
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA  : public RuntimeObject
{
	RuntimeObject* ___m_Descriptions;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___changed;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B 
{
	Action_1_t20BEB915CF9492833F21779552F71F8BC378DFF4* ____delegate;
};
struct Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 
{
	Action_1_t6DADC37B4AD2BFDAF6F8F80F597870C5693EEE1F* ____delegate;
};
struct Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 
{
	Action_1_tEACDF04A7E59F802BE6074E014636B4DFEECB424* ____delegate;
};
struct DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* ___m_Getter;
	PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* ___m_Setter;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765 
{
	Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* ____dictionary;
};
struct DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A 
{
	Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54* ____dictionary;
};
struct DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6 
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint8_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F 
{
	uint8_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE 
{
	RuntimeObject* ___m_RootItemIds;
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___m_Tree;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_ParentIds;
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___m_ChildrenIds;
};
struct TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998 
{
	RuntimeObject* ___m_RootItemIds;
	Dictionary_2_tEBE1E11ABD22357FDFD12EF5F2F7CDC6378162C0* ___m_Tree;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_ParentIds;
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___m_ChildrenIds;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0  : public CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768
{
	Dictionary_2_tBA28DDE9EBD7869B2D9C725CB660A33231C09054* ___m_TreeItems;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_RootIndices;
	List_1_tDD673E02B713760331F9D857C7B1D1C4A07194EF* ___m_ItemWrappers;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___m_TreeItemIdsWithItemWrappers;
	List_1_tDD673E02B713760331F9D857C7B1D1C4A07194EF* ___m_WrapperInsertionList;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___flagValues;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___displayNames;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tooltip;
	bool ___flags;
	Type_t* ___underlyingType;
	bool ___unsigned;
	bool ___serializable;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_pinvoke
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Il2CppSafeArray* ___flagValues;
	char** ___displayNames;
	char** ___names;
	char** ___tooltip;
	int32_t ___flags;
	Type_t* ___underlyingType;
	int32_t ___unsigned;
	int32_t ___serializable;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_com
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Il2CppSafeArray* ___flagValues;
	Il2CppChar** ___displayNames;
	Il2CppChar** ___names;
	Il2CppChar** ___tooltip;
	int32_t ___flags;
	Type_t* ___underlyingType;
	int32_t ___unsigned;
	int32_t ___serializable;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
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
struct U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918 
{
	union
	{
		struct
		{
			Il2CppChar ___FixedElementField;
		};
		uint8_t U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918__padding[512];
	};
};
struct U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshaled_pinvoke
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918__padding[512];
	};
};
struct U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshaled_com
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918__padding[512];
	};
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___value;
};
struct Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___value;
};
struct Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___value;
};
struct Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D 
{
	Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 
{
	Guid_t ___key;
	Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___value;
};
struct KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 
{
	Guid_t ___key;
	Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___value;
};
struct KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 
{
	Guid_t ___key;
	Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___value;
};
struct TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96  : public RuntimeObject
{
	TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE ___m_TreeData;
	Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* ___m_IteratorStack;
};
struct TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E  : public RuntimeObject
{
	TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998 ___m_TreeData;
	Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* ___m_IteratorStack;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct FileAttributes_t307E067EF44503B262F446FFD18E6230AF91AA5F 
{
	int32_t ___value__;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct MatchCasing_t00C2F478DF527136D8EE452E63280424A49D2DC6 
{
	int32_t ___value__;
};
struct MatchType_tD32A3D322850DB1FFAAC608A0D2039F4C4AC5404 
{
	int32_t ___value__;
};
struct MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC  : public BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0
{
	MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6* ___m_ColumnController;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A  : public BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0
{
};
struct StretchMode_t717095B19974BD53EBBF6214745B728086EC9007 
{
	int32_t ___value__;
};
struct FileStatusFlags_tB53E2B9A54305CDCEA49884DEEDB8C62C8ACC9C9 
{
	int32_t ___value__;
};
struct NodeType_tA0667DBD8FC8EB3B1202CBEEEC3958E5BC14A76E 
{
	int32_t ___value__;
};
struct DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F  : public MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* ___m_TreeDataController;
};
struct DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7  : public TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A
{
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* ___m_TreeDataController;
};
struct DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD  : public TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* ___m_TreeDataController;
};
struct Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C 
{
	Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B 
{
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A 
{
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 ____current;
	int32_t ____getEnumeratorRetType;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 
{
	int32_t ___Item1;
	RuntimeObject* ___Item2;
};
struct Columns_t487EAF3B634F6D919D58F1927099A8883964831B  : public RuntimeObject
{
	RuntimeObject* ___m_Columns;
	List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4* ___m_DisplayColumns;
	List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4* ___m_VisibleColumns;
	bool ___m_VisibleColumnsDirty;
	int32_t ___m_StretchMode;
	bool ___m_Reorderable;
	bool ___m_Resizable;
	bool ___m_ResizePreview;
	String_t* ___m_PrimaryColumnName;
	Action_1_tC7DA3F3177E0ABC8E0B6FB2D4D2F72C303E1A04F* ___changed;
	Action_2_t5F23CC3B7A8A73A4EA03ECC4C0C36453937843DB* ___columnAdded;
	Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8* ___columnRemoved;
	Action_2_t240BAEB1DC7A6558995FFCB7E0186F2ABB2CE346* ___columnChanged;
	Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8* ___columnResized;
	Action_3_tD4FEFC6A317A295868086BEB12578A006464E2D5* ___columnReordered;
};
struct EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B  : public RuntimeObject
{
	bool ___U3CRecurseSubdirectoriesU3Ek__BackingField;
	bool ___U3CIgnoreInaccessibleU3Ek__BackingField;
	int32_t ___U3CAttributesToSkipU3Ek__BackingField;
	int32_t ___U3CMatchTypeU3Ek__BackingField;
	int32_t ___U3CMatchCasingU3Ek__BackingField;
	bool ___U3CReturnSpecialDirectoriesU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct DirectoryEntry_t4FE272EECFF03032105F6F23CB60435287DB1CA2 
{
	uint8_t* ___Name;
	int32_t ___NameLength;
	int32_t ___InodeType;
};
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	int32_t ___Flags;
	int32_t ___Mode;
	uint32_t ___Uid;
	uint32_t ___Gid;
	int64_t ___Size;
	int64_t ___ATime;
	int64_t ___ATimeNsec;
	int64_t ___MTime;
	int64_t ___MTimeNsec;
	int64_t ___CTime;
	int64_t ___CTimeNsec;
	int64_t ___BirthTime;
	int64_t ___BirthTimeNsec;
	int64_t ___Dev;
	int64_t ___Ino;
	uint32_t ___UserFlags;
};
struct Entry_t087349F3AE170AB56B4363B52E225A982E89F930 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___key;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___value;
};
struct FileSystemEnumerator_1_tA955DE78A8E344B2059ACE249F0647FFF74DA3EA  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	String_t* ____originalRootDirectory;
	String_t* ____rootDirectory;
	EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B* ____options;
	RuntimeObject* ____lock;
	String_t* ____currentPath;
	intptr_t ____directoryHandle;
	bool ____lastEntryFound;
	Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* ____pending;
	DirectoryEntry_t4FE272EECFF03032105F6F23CB60435287DB1CA2 ____entry;
	RuntimeObject* ____current;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____pathBuffer;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____entryBuffer;
};
struct FileSystemEnumerator_1_t9E8DE16DC8DBD063D35FC5A78A1A29C076DD8E41 : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9 {};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty;
};
struct KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 
{
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___key;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___value;
};
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963  : public MulticastDelegate_t
{
};
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	bool ___U3CInitiallyDirectoryU3Ek__BackingField;
	bool ____isDirectory;
	bool ____exists;
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField;
	int32_t ____isDirectory;
	int32_t ____exists;
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField;
	int32_t ____isDirectory;
	int32_t ____exists;
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct DelegateEnumerator_t03CC726F1198053E252AFEE23D3871C1435B4970  : public FileSystemEnumerator_1_tA955DE78A8E344B2059ACE249F0647FFF74DA3EA
{
	FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* ____enumerable;
};
struct DelegateEnumerator_t2D9F0401F1C8389D1335BC9FEE9A280B852DA125 : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9 {};
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 
{
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 ____current;
	int32_t ____getEnumeratorRetType;
};
struct FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B 
{
	DirectoryEntry_t4FE272EECFF03032105F6F23CB60435287DB1CA2 ____directoryEntry;
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____status;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____pathBuffer;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ____fullPath;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ____fileName;
	U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918 ____fileNameBuffer;
	int32_t ____initialAttributes;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___U3CDirectoryU3Ek__BackingField;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___U3CRootDirectoryU3Ek__BackingField;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___U3COriginalRootDirectoryU3Ek__BackingField;
};
struct FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshaled_pinvoke
{
	DirectoryEntry_t4FE272EECFF03032105F6F23CB60435287DB1CA2 ____directoryEntry;
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke ____status;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____pathBuffer;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ____fullPath;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ____fileName;
	U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshaled_pinvoke ____fileNameBuffer;
	int32_t ____initialAttributes;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___U3CDirectoryU3Ek__BackingField;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___U3CRootDirectoryU3Ek__BackingField;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___U3COriginalRootDirectoryU3Ek__BackingField;
};
struct FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshaled_com
{
	DirectoryEntry_t4FE272EECFF03032105F6F23CB60435287DB1CA2 ____directoryEntry;
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com ____status;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____pathBuffer;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ____fullPath;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ____fileName;
	U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshaled_com ____fileNameBuffer;
	int32_t ____initialAttributes;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___U3CDirectoryU3Ek__BackingField;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___U3CRootDirectoryU3Ek__BackingField;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___U3COriginalRootDirectoryU3Ek__BackingField;
};
struct FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D  : public MulticastDelegate_t
{
};
struct FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0  : public MulticastDelegate_t
{
};
struct FindTransform_tC499583A33189BE267A9A28ED61DB4DE63B28851  : public MulticastDelegate_t
{
};
struct FindTransform_t4AB3CE80560E429B4D6E6793B8BDCDAB4CD297DF  : public MulticastDelegate_t
{
};
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147_StaticFields
{
	EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* ___defaultComparer;
};
struct EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA_StaticFields
{
	EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* ___defaultComparer;
};
struct EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9_StaticFields
{
	EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* ___defaultComparer;
};
struct EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3_StaticFields
{
	EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* ___defaultComparer;
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* ___defaultComparer;
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer;
};
struct EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66_StaticFields
{
	EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* ___defaultComparer;
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F_StaticFields
{
	SortColumnDescriptionU5BU5D_tCC3DBACAFBA412B6F1EA1C4027A27E92D9153948* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B_StaticFields
{
	Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* ___Callbacks;
	ContinueWithInvoker_t9BFAEFCDB6982ABB39AC323190856609FF7C8961* ___Invoker;
	ContinueWithRemover_t6CB0D72DD7B76F5FFE2CDFB72CC4F428A1CC2D09* ___Remover;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer;
};
struct Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30_StaticFields
{
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ___Callbacks;
	ContinueWithInvoker_t9224B3C8809CF23BB8FDF74180DEDA9FC41CBA35* ___Invoker;
	ContinueWithRemover_t1BACA370164F2ADE6EF2A843E9ACCA611FC3F871* ___Remover;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer;
};
struct Callback_tD6F76A27427390AB039AE817762327D0D6848CF0_StaticFields
{
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ___Callbacks;
	ContinueWithInvoker_tE6A6B312613EEC99AD802D15EF2AF586639CC8EB* ___Invoker;
	ContinueWithRemover_t1E316C0F3A3BACE007BA8AF9E409458A609A94A2* ___Remover;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer;
};
struct BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___K_ExpandItemByIndex;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CreateWrappers;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B_StaticFields
{
	EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B* ___U3CCompatibleU3Ek__BackingField;
	EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B* ___U3CCompatibleRecursiveU3Ek__BackingField;
	EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B* ___U3CDefaultU3Ek__BackingField;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t087349F3AE170AB56B4363B52E225A982E89F930 m_Items[1];

	inline Entry_t087349F3AE170AB56B4363B52E225A982E89F930 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t087349F3AE170AB56B4363B52E225A982E89F930* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t087349F3AE170AB56B4363B52E225A982E89F930 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___values), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___underlyingType), (void*)NULL);
		#endif
	}
	inline Entry_t087349F3AE170AB56B4363B52E225A982E89F930 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t087349F3AE170AB56B4363B52E225A982E89F930* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t087349F3AE170AB56B4363B52E225A982E89F930 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___values), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___underlyingType), (void*)NULL);
		#endif
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 m_Items[1];

	inline KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___values), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___underlyingType), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___values), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___underlyingType), (void*)NULL);
		#endif
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
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
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 m_Items[1];

	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 m_Items[1];

	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8 m_Items[1];

	inline Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F m_Items[1];

	inline KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517 m_Items[1];

	inline Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 m_Items[1];

	inline KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF m_Items[1];

	inline Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 m_Items[1];

	inline KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 m_Items[1];

	inline Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 m_Items[1];

	inline KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootItems, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemEnumerator_1__ctor_m327F0BF0DB8DD4E57BF05E979D9F4D8827363407_gshared (FileSystemEnumerator_1_tA955DE78A8E344B2059ACE249F0647FFF74DA3EA* __this, String_t* ___0_directory, EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B* ___1_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FindTransform_Invoke_mB1795BBACA6C805624B35FB1B2BCE942B97FE3B6_gshared_inline (FindTransform_tC499583A33189BE267A9A28ED61DB4DE63B28851* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* FileSystemEnumerable_1_get_ShouldRecursePredicate_mAE1C26075F4D8E8BE4DFCF32D2F5F9F47C4C670A_gshared_inline (FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FindPredicate_Invoke_mC431E959AEB6D9456E3C5A09D86622262F9ADBC8_gshared_inline (FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* FileSystemEnumerable_1_get_ShouldIncludePredicate_m4743F78B88F0991B184EBBD3CE5DB0CCD8F187E1_gshared_inline (FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* OVRObjectPool_Dictionary_TisGuid_t_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m5710FF79537BB27FAD3AC68BE44721C698C4DEFE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2__ctor_m22A16E1F14BC6922025ED84A62E37E6C3178BD60_gshared (DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765* __this, Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0** ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRObjectPool_Return_TisRuntimeObject_m59E9AEA1458F1459886C344546AFF3482B15F519_gshared (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2_Dispose_mE9A51086B315348BB8FEE9E2B43D7D633DAF0920_gshared (DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54* OVRObjectPool_Dictionary_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_TisRoomLayoutUuids_t924056D36DEC5EF47FC429727FA024070B6C2B01_m1229F16335BF35A5710BBCCC78D52E21C00D3784_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2__ctor_m77DFC54C989FE7E37D9E0EE775E22C0855E1DDEC_gshared (DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A* __this, Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54** ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2_Dispose_m03ECA77EDBF8E19D8A86D2614D69FE1491589DAD_gshared (DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2__ctor_m05E902562E64805D79F688BA7973164967C6AE1E_gshared (DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2_Dispose_mCE7B16F5D1AC910B5E892D32DB1FD1DC5412E0CE_gshared (DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4B8B43A29F37C828AC628B828E71DA451A41257C_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_gshared_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_gshared_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9EB9EAF293C25B19D013B8D20953FC0EE6F4D1E9_gshared (KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m2E207A3EE3295538D81E11F03E01989AAD959A39_gshared (ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2F068E9587C451B4EF5A91596CBEE4FF413B1E02_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF23DF720149D9D13A547F08E017D056CD5465AFF_gshared (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0_gshared (Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238_gshared (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2FB7681B01D79E97179A80F9B3587C7E41558D22_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m3E05CB11F79CC8E4B9C1AEBEEA0F26308A3AC74D_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m88B6E3FDD04EEC0A70475E014FDE5E789AA0B311_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6EED97C7CFEA5AC5ADCD0387ECB28BFBEE2CBB05_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD98267D964142E0F32E726757BAAC9ACD73577C_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m0779C0DC593B00380D6967F564E301B30B9739C5_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m320B8E136CD42625908A031A8132CBB828CCC2E4_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_gshared_inline (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m355ABF6DC1298ABF3E64E1B701CFB05FF57C7A50_gshared_inline (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mA98A095DD157A276B3485B6BDCA25A9301DEC7E0_gshared (KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290* __this, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m039D5D4E31C5667904FC599057AE4D0B1E4A2CB0_gshared (ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90* __this, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mC082298A1771B44B139F54FF3E51B35900F854A5_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m52FC66026B24488EFD47C9E78791519358D7B3A2_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m96F813E9E9F9710ADCC56FB99A10CA0870BEC0BB_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mDBE39F8DFADAA1D303E8BFC83E07EE048D8BAF4D_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m3528DC82BCBD9770D62D45268C06DBE5047C20FD_gshared (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m628EF991E661825F29F73BCD8BFEA1393808628A_gshared (Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D* __this, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m5D401BD5924F24D7FBFBE4D91D73A1BDF2652915_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C062FB5CD856D5348D363D3E1F74DF57BBB9681_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF1AF375936A728D98523689F3668DB55F1F89399_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m288094CACB7752DB575C0DD5789F376030F4A7E4_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8BEB94760CA6F27CF244C9860AD50B9339089AF4_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6E0C00BA51CEB9257B11032504ACC9D63D784742_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m91950FE975A2DCCD5F7168BE6F529961EB671643_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCDF38D4605A02297FDDAF58EB3E3993F9BED3174_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE51CE59401F0CB81764AF1C585783B4B3660D994_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m253C9E21F37383364B2604EBAE0B9E88F2470CFC_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_gshared_inline (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B KeyValuePair_2_get_Value_m37148D5550A742F6EB107E3C291FC50B010D5D3F_gshared_inline (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m29212657A9682B48550C50B6CDEAC0253382E545_gshared (KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7* __this, Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mE869BBDC5880EC0E297CA75F64F72AB05B13C66D_gshared (ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924* __this, Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mBE0DFA7EA7F5669FCD157D78B633488539F1AE37_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m2B5FD4C028BF3F52314136EBFCED5A0C494D9270_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* EqualityComparer_1_get_Default_m60DA9DC4D4BE7030F4FADB0959D39882D59325BF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m97975460FEBF67F286BF16FCC0035BE77FD6B076_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD338DBFD4865C507282FCE7D520A28FA7BED7906_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m120642B9DE66F5FD29437815289A7E17CAB1A5E6_gshared (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0ACD26E9A2EE682E6CC3A0B0D365EF27D0FB1470_gshared (Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C* __this, Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB5705365F9CEAB45A23D43D727D3D747D0D6CACD_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m63D3C9918ECAD5E3B8C563A40E52810AF3411B8A_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBC81E11EBB602479DA095E71E73909A1CB97772D_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mAAFA70AC0CA3580B86DD1FD6E08AD7B1C24C0B33_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t661347EAF47D1D5B40F8106C40F403A3BABB805B_m4965EBFC7B50B153DAF2AB04C5651635CAD2F3B4_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3E4086A3C89354690177397D2777588D3BB43698_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m28428F52C9134E1DDCA8601B1F94995FF188C486_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m59FF5E4677AF2E899AAE6D8CDC12F528BABAC67C_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1EBACA63008A644E1DC927D1611ED9AB8520C95F_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m800AE3E7FD80DD640F53BF8BC81CDE4EDCAA2729_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m86E7921CDE93630FCF225F97BDD540EBC5BBE4B5_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_gshared_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_gshared_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mFCAE2D2C1C1C81769A4BB332BF9159315918B338_gshared (KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* __this, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m64F5037EDCBBED4AB3AE23C931831DE35BCC4CB4_gshared (ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* __this, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF378C6E7BB4E0256BCC88B18C67B33862EC75EEA_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* EqualityComparer_1_get_Default_m3E61EF636E95121B489A3D0142173FE27834FBD7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m905E588A5819BB00CEE61AED70ADB494B69900D9_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC3A740D0BEE683D33CA05504D9BB614330D909BD_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m24B652BB989676FB54EDD12DA60E7D13A5AF925E_gshared (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168_gshared (Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B* __this, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7B46550CE5C42D59370FA471B7C15509387A88A3_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4024CA680E7BA1C93BD89F4884845528B25A8481_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE4DB1F9EEB1225F57530E4784E02322B93B40DB7_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mDA09E66D1E1827388C42B7E1B2C8C6AB7273F75B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30_mB34E86860EE1F62390E32B010458639D7AE34784_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0C7C6027F177115E2A64D662DBD0109738407518_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD969F6A580D73851321B8BA7F40F58FBFE2554E9_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m23746F45330979DC67FC026FA486871C2EB640D1_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m09BCDE85BD43B188BBA0E73A6FA02687FC4876AA_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m553C37C1F21E3267B21D164E32179ACB0A21D974_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m25395CDFBF35C13C7AAC77FCA1A3BE870559D2BC_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_gshared_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_gshared_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mB71E1278423E4F52365C6CD6134DE178C176DA29_gshared (KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* __this, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m4AEFC1B3E813401366606DE673A32A9135204C46_gshared (ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* __this, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m37D5F1C48F33458B57A78D59A9D1C878BDB06544_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* EqualityComparer_1_get_Default_m7104A9F2362A9A3A3DB4C56FC6DCF132E2370270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAEFCB8652B79869B803B02892152584DD08D65DC_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB6B69CA958F384D051ABC4E9E2EAB692046A7F3E_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB51582F33DA23CDE9D52DC88A9026C5098F4DD2C_gshared (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F_gshared (Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A* __this, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB1D4DCEF3F5048C74DFD0802F27F9CC453013DBB_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2C4C256DE0E3D50E65529675CC5F0B1233C7A0E5_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6ABA7C6D65342343845462EF61478E58B4B14631_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m09F4B9C2DB263EDD0F9CEB5B965DB2FD717438BA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tD6F76A27427390AB039AE817762327D0D6848CF0_m8432547931BAC576423F18B1E75D6896F8F473E6_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A967B5A7922AB2E6CC4935FFB6EFDA8F5EEC029_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m824E7E45149FFA5370C26F71CF1B7D8920DCF8EE_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* EqualityComparer_1_CreateComparer_mE0A7C7D719A999F27B2C6C94F581C2A9B5FF3133_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* EqualityComparer_1_CreateComparer_mA2F00D10E67D114ECAD52D68868F85E6B706A9FE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* EqualityComparer_1_CreateComparer_m25DE8D043E29228C235A21C69D8F45ED3C431B05_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* EqualityComparer_1_CreateComparer_mF0341F8976F6E1BEDB057B5090539BD80B10C598_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* EqualityComparer_1_CreateComparer_m1FBD63CB6C3BD3A53AB512192874FAEB9138A460_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnTreeViewController__ctor_m705FE6CEF71CB478F8FC5A951A337FF5A7B2F919 (MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC* __this, Columns_t487EAF3B634F6D919D58F1927099A8883964831B* ___0_columns, SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* ___1_sortDescriptions, List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* ___2_sortedColumns, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B (BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB (BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734 (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionViewController_RaiseItemIndexChanged_mE12A41E7F1E29A78B60EDE6E02A9D3728D944E77 (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* __this, int32_t ___0_srcIndex, int32_t ___1_dstIndex, const RuntimeMethod* method) ;
inline void TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, const RuntimeMethod* method)
{
	((  void (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, const RuntimeMethod*))TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25_gshared)(__this, method);
}
inline void DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_items, const RuntimeMethod* method)
{
	((  void (*) (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7*, RuntimeObject*, const RuntimeMethod*))DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B_gshared)(__this, ___0_items, method);
}
inline TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method)
{
	return ((  TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* (*) (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7*, const RuntimeMethod*))DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F_gshared)(__this, method);
}
inline void TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootItems, const RuntimeMethod* method)
{
	((  void (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, RuntimeObject*, const RuntimeMethod*))TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E_gshared)(__this, ___0_rootItems, method);
}
inline RuntimeObject* TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC_gshared)(__this, ___0_id, method);
}
inline int32_t TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5_gshared)(__this, ___0_id, method);
}
inline bool TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  bool (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC_gshared)(__this, ___0_id, method);
}
inline RuntimeObject* TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93_gshared)(__this, ___0_id, method);
}
inline bool DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67 (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7*, int32_t, int32_t, const RuntimeMethod*))DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67_gshared)(__this, ___0_childId, ___1_id, method);
}
inline void TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, const RuntimeMethod* method)
{
	((  void (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, int32_t, int32_t, const RuntimeMethod*))TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1_gshared)(__this, ___0_id, ___1_newParentId, ___2_childIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeViewController_RaiseItemParentChanged_m3D91BCB67E4577C1373C9A8A9122C8D7F0457322 (BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0* __this, int32_t ___0_id, int32_t ___1_newParentId, const RuntimeMethod* method) ;
inline bool TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method)
{
	return ((  bool (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, int32_t, const RuntimeMethod*))TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25_gshared)(__this, ___0_childId, ___1_id, method);
}
inline RuntimeObject* TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, RuntimeObject*, const RuntimeMethod*))TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA_gshared)(__this, ___0_rootIds, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeViewController__ctor_m0BA584E2BFF10F466D94E3ED33E4FB9840907AF2 (TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A* __this, const RuntimeMethod* method) ;
inline void FileSystemEnumerator_1__ctor_m327F0BF0DB8DD4E57BF05E979D9F4D8827363407 (FileSystemEnumerator_1_tA955DE78A8E344B2059ACE249F0647FFF74DA3EA* __this, String_t* ___0_directory, EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B* ___1_options, const RuntimeMethod* method)
{
	((  void (*) (FileSystemEnumerator_1_tA955DE78A8E344B2059ACE249F0647FFF74DA3EA*, String_t*, EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B*, const RuntimeMethod*))FileSystemEnumerator_1__ctor_m327F0BF0DB8DD4E57BF05E979D9F4D8827363407_gshared)(__this, ___0_directory, ___1_options, method);
}
inline RuntimeObject* FindTransform_Invoke_mB1795BBACA6C805624B35FB1B2BCE942B97FE3B6_inline (FindTransform_tC499583A33189BE267A9A28ED61DB4DE63B28851* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FindTransform_tC499583A33189BE267A9A28ED61DB4DE63B28851*, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B*, const RuntimeMethod*))FindTransform_Invoke_mB1795BBACA6C805624B35FB1B2BCE942B97FE3B6_gshared_inline)(__this, ___0_entry, method);
}
inline FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* FileSystemEnumerable_1_get_ShouldRecursePredicate_mAE1C26075F4D8E8BE4DFCF32D2F5F9F47C4C670A_inline (FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* __this, const RuntimeMethod* method)
{
	return ((  FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* (*) (FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94*, const RuntimeMethod*))FileSystemEnumerable_1_get_ShouldRecursePredicate_mAE1C26075F4D8E8BE4DFCF32D2F5F9F47C4C670A_gshared_inline)(__this, method);
}
inline bool FindPredicate_Invoke_mC431E959AEB6D9456E3C5A09D86622262F9ADBC8_inline (FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method)
{
	return ((  bool (*) (FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D*, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B*, const RuntimeMethod*))FindPredicate_Invoke_mC431E959AEB6D9456E3C5A09D86622262F9ADBC8_gshared_inline)(__this, ___0_entry, method);
}
inline FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* FileSystemEnumerable_1_get_ShouldIncludePredicate_m4743F78B88F0991B184EBBD3CE5DB0CCD8F187E1_inline (FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* __this, const RuntimeMethod* method)
{
	return ((  FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* (*) (FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94*, const RuntimeMethod*))FileSystemEnumerable_1_get_ShouldIncludePredicate_m4743F78B88F0991B184EBBD3CE5DB0CCD8F187E1_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320 (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320_gshared)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257 (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared)(__this, method);
}
inline Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* OVRObjectPool_Dictionary_TisGuid_t_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m5710FF79537BB27FAD3AC68BE44721C698C4DEFE (const RuntimeMethod* method)
{
	return ((  Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* (*) (const RuntimeMethod*))OVRObjectPool_Dictionary_TisGuid_t_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m5710FF79537BB27FAD3AC68BE44721C698C4DEFE_gshared)(method);
}
inline void DictionaryScope_2__ctor_m22A16E1F14BC6922025ED84A62E37E6C3178BD60 (DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765* __this, Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0** ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765*, Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0**, const RuntimeMethod*))DictionaryScope_2__ctor_m22A16E1F14BC6922025ED84A62E37E6C3178BD60_gshared)(__this, ___0_dictionary, method);
}
inline void OVRObjectPool_Return_TisDictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0_m2A13521A005F38CC9005E44F4726F6CDF3E9D5BF (Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0*, const RuntimeMethod*))OVRObjectPool_Return_TisRuntimeObject_m59E9AEA1458F1459886C344546AFF3482B15F519_gshared)(___0_obj, method);
}
inline void DictionaryScope_2_Dispose_mE9A51086B315348BB8FEE9E2B43D7D633DAF0920 (DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765* __this, const RuntimeMethod* method)
{
	((  void (*) (DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765*, const RuntimeMethod*))DictionaryScope_2_Dispose_mE9A51086B315348BB8FEE9E2B43D7D633DAF0920_gshared)(__this, method);
}
inline Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54* OVRObjectPool_Dictionary_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_TisRoomLayoutUuids_t924056D36DEC5EF47FC429727FA024070B6C2B01_m1229F16335BF35A5710BBCCC78D52E21C00D3784 (const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54* (*) (const RuntimeMethod*))OVRObjectPool_Dictionary_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_TisRoomLayoutUuids_t924056D36DEC5EF47FC429727FA024070B6C2B01_m1229F16335BF35A5710BBCCC78D52E21C00D3784_gshared)(method);
}
inline void DictionaryScope_2__ctor_m77DFC54C989FE7E37D9E0EE775E22C0855E1DDEC (DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A* __this, Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54** ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A*, Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54**, const RuntimeMethod*))DictionaryScope_2__ctor_m77DFC54C989FE7E37D9E0EE775E22C0855E1DDEC_gshared)(__this, ___0_dictionary, method);
}
inline void OVRObjectPool_Return_TisDictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54_m9E7569DD7208077DE18FF30BAAB0A3C3C81F8738 (Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54*, const RuntimeMethod*))OVRObjectPool_Return_TisRuntimeObject_m59E9AEA1458F1459886C344546AFF3482B15F519_gshared)(___0_obj, method);
}
inline void DictionaryScope_2_Dispose_m03ECA77EDBF8E19D8A86D2614D69FE1491589DAD (DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A* __this, const RuntimeMethod* method)
{
	((  void (*) (DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A*, const RuntimeMethod*))DictionaryScope_2_Dispose_m03ECA77EDBF8E19D8A86D2614D69FE1491589DAD_gshared)(__this, method);
}
inline void DictionaryScope_2__ctor_m05E902562E64805D79F688BA7973164967C6AE1E (DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E**, const RuntimeMethod*))DictionaryScope_2__ctor_m05E902562E64805D79F688BA7973164967C6AE1E_gshared)(__this, ___0_dictionary, method);
}
inline void DictionaryScope_2_Dispose_mCE7B16F5D1AC910B5E892D32DB1FD1DC5412E0CE (DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6* __this, const RuntimeMethod* method)
{
	((  void (*) (DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6*, const RuntimeMethod*))DictionaryScope_2_Dispose_mCE7B16F5D1AC910B5E892D32DB1FD1DC5412E0CE_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m4B8B43A29F37C828AC628B828E71DA451A41257C (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m4B8B43A29F37C828AC628B828E71DA451A41257C_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, const RuntimeMethod*))Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 (*) (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37*, const RuntimeMethod*))KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_gshared_inline)(__this, method);
}
inline EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method)
{
	return ((  EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 (*) (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37*, const RuntimeMethod*))KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_m9EB9EAF293C25B19D013B8D20953FC0EE6F4D1E9 (KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510*, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, const RuntimeMethod*))KeyCollection__ctor_m9EB9EAF293C25B19D013B8D20953FC0EE6F4D1E9_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m2E207A3EE3295538D81E11F03E01989AAD959A39 (ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A*, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, const RuntimeMethod*))ValueCollection__ctor_m2E207A3EE3295538D81E11F03E01989AAD959A39_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, const RuntimeMethod*))Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m2F068E9587C451B4EF5A91596CBEE4FF413B1E02 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, const RuntimeMethod*))Dictionary_2_Remove_m2F068E9587C451B4EF5A91596CBEE4FF413B1E02_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, const RuntimeMethod*))Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mF23DF720149D9D13A547F08E017D056CD5465AFF (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, const RuntimeMethod*))KeyValuePair_2__ctor_mF23DF720149D9D13A547F08E017D056CD5465AFF_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0 (Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424*, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238 (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m2FB7681B01D79E97179A80F9B3587C7E41558D22 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, const RuntimeMethod*))Dictionary_2_Resize_m2FB7681B01D79E97179A80F9B3587C7E41558D22_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline bool Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m3E05CB11F79CC8E4B9C1AEBEEA0F26308A3AC74D (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m3E05CB11F79CC8E4B9C1AEBEEA0F26308A3AC74D_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m88B6E3FDD04EEC0A70475E014FDE5E789AA0B311 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, const RuntimeMethod*))Dictionary_2_set_Item_m88B6E3FDD04EEC0A70475E014FDE5E789AA0B311_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m6EED97C7CFEA5AC5ADCD0387ECB28BFBEE2CBB05 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, const RuntimeMethod*))Dictionary_2_ContainsKey_m6EED97C7CFEA5AC5ADCD0387ECB28BFBEE2CBB05_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6 (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7 (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1 (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164 (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mAD98267D964142E0F32E726757BAAC9ACD73577C (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mAD98267D964142E0F32E726757BAAC9ACD73577C_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m0779C0DC593B00380D6967F564E301B30B9739C5 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m0779C0DC593B00380D6967F564E301B30B9739C5_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m320B8E136CD42625908A031A8132CBB828CCC2E4 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m320B8E136CD42625908A031A8132CBB828CCC2E4_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, uint8_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20_gshared)(__this, ___0_key, ___1_value, method);
}
inline uint8_t KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_inline (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F*, const RuntimeMethod*))KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m355ABF6DC1298ABF3E64E1B701CFB05FF57C7A50_inline (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F*, const RuntimeMethod*))KeyValuePair_2_get_Value_m355ABF6DC1298ABF3E64E1B701CFB05FF57C7A50_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mA98A095DD157A276B3485B6BDCA25A9301DEC7E0 (KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290* __this, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290*, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, const RuntimeMethod*))KeyCollection__ctor_mA98A095DD157A276B3485B6BDCA25A9301DEC7E0_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m039D5D4E31C5667904FC599057AE4D0B1E4A2CB0 (ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90* __this, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90*, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, const RuntimeMethod*))ValueCollection__ctor_m039D5D4E31C5667904FC599057AE4D0B1E4A2CB0_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mC082298A1771B44B139F54FF3E51B35900F854A5 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, uint8_t, const RuntimeMethod*))Dictionary_2_FindEntry_mC082298A1771B44B139F54FF3E51B35900F854A5_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m52FC66026B24488EFD47C9E78791519358D7B3A2 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, uint8_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m52FC66026B24488EFD47C9E78791519358D7B3A2_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m96F813E9E9F9710ADCC56FB99A10CA0870BEC0BB (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, uint8_t, const RuntimeMethod*))Dictionary_2_Remove_m96F813E9E9F9710ADCC56FB99A10CA0870BEC0BB_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mDBE39F8DFADAA1D303E8BFC83E07EE048D8BAF4D (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, const RuntimeMethod*))Dictionary_2_get_Count_mDBE39F8DFADAA1D303E8BFC83E07EE048D8BAF4D_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m3528DC82BCBD9770D62D45268C06DBE5047C20FD (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F*, uint8_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m3528DC82BCBD9770D62D45268C06DBE5047C20FD_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m628EF991E661825F29F73BCD8BFEA1393808628A (Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D* __this, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D*, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, int32_t, const RuntimeMethod*))Enumerator__ctor_m628EF991E661825F29F73BCD8BFEA1393808628A_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m5D401BD5924F24D7FBFBE4D91D73A1BDF2652915 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m5D401BD5924F24D7FBFBE4D91D73A1BDF2652915_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m9C062FB5CD856D5348D363D3E1F74DF57BBB9681 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, const RuntimeMethod*))Dictionary_2_Resize_m9C062FB5CD856D5348D363D3E1F74DF57BBB9681_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mF1AF375936A728D98523689F3668DB55F1F89399 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mF1AF375936A728D98523689F3668DB55F1F89399_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m288094CACB7752DB575C0DD5789F376030F4A7E4 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m288094CACB7752DB575C0DD5789F376030F4A7E4_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m8BEB94760CA6F27CF244C9860AD50B9339089AF4 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, uint8_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m8BEB94760CA6F27CF244C9860AD50B9339089AF4_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m6E0C00BA51CEB9257B11032504ACC9D63D784742 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, uint8_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m6E0C00BA51CEB9257B11032504ACC9D63D784742_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m91950FE975A2DCCD5F7168BE6F529961EB671643 (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m91950FE975A2DCCD5F7168BE6F529961EB671643_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mCDF38D4605A02297FDDAF58EB3E3993F9BED3174 (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mCDF38D4605A02297FDDAF58EB3E3993F9BED3174_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mE51CE59401F0CB81764AF1C585783B4B3660D994 (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mE51CE59401F0CB81764AF1C585783B4B3660D994_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m253C9E21F37383364B2604EBAE0B9E88F2470CFC (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, Guid_t, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B, const RuntimeMethod*))Dictionary_2_Add_m253C9E21F37383364B2604EBAE0B9E88F2470CFC_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_inline (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069*, const RuntimeMethod*))KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_gshared_inline)(__this, method);
}
inline Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B KeyValuePair_2_get_Value_m37148D5550A742F6EB107E3C291FC50B010D5D3F_inline (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069* __this, const RuntimeMethod* method)
{
	return ((  Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B (*) (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069*, const RuntimeMethod*))KeyValuePair_2_get_Value_m37148D5550A742F6EB107E3C291FC50B010D5D3F_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m29212657A9682B48550C50B6CDEAC0253382E545 (KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7* __this, Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7*, Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, const RuntimeMethod*))KeyCollection__ctor_m29212657A9682B48550C50B6CDEAC0253382E545_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mE869BBDC5880EC0E297CA75F64F72AB05B13C66D (ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924* __this, Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924*, Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, const RuntimeMethod*))ValueCollection__ctor_mE869BBDC5880EC0E297CA75F64F72AB05B13C66D_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mBE0DFA7EA7F5669FCD157D78B633488539F1AE37 (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_mBE0DFA7EA7F5669FCD157D78B633488539F1AE37_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m2B5FD4C028BF3F52314136EBFCED5A0C494D9270 (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, Guid_t, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m2B5FD4C028BF3F52314136EBFCED5A0C494D9270_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* EqualityComparer_1_get_Default_m60DA9DC4D4BE7030F4FADB0959D39882D59325BF_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m60DA9DC4D4BE7030F4FADB0959D39882D59325BF_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m97975460FEBF67F286BF16FCC0035BE77FD6B076 (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_m97975460FEBF67F286BF16FCC0035BE77FD6B076_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mD338DBFD4865C507282FCE7D520A28FA7BED7906 (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, const RuntimeMethod*))Dictionary_2_get_Count_mD338DBFD4865C507282FCE7D520A28FA7BED7906_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m120642B9DE66F5FD29437815289A7E17CAB1A5E6 (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069*, Guid_t, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B, const RuntimeMethod*))KeyValuePair_2__ctor_m120642B9DE66F5FD29437815289A7E17CAB1A5E6_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m0ACD26E9A2EE682E6CC3A0B0D365EF27D0FB1470 (Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C* __this, Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C*, Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0ACD26E9A2EE682E6CC3A0B0D365EF27D0FB1470_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mB5705365F9CEAB45A23D43D727D3D747D0D6CACD (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mB5705365F9CEAB45A23D43D727D3D747D0D6CACD_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m63D3C9918ECAD5E3B8C563A40E52810AF3411B8A (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, const RuntimeMethod*))Dictionary_2_Resize_m63D3C9918ECAD5E3B8C563A40E52810AF3411B8A_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mBC81E11EBB602479DA095E71E73909A1CB97772D (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mBC81E11EBB602479DA095E71E73909A1CB97772D_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mAAFA70AC0CA3580B86DD1FD6E08AD7B1C24C0B33 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mAAFA70AC0CA3580B86DD1FD6E08AD7B1C24C0B33_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t661347EAF47D1D5B40F8106C40F403A3BABB805B_m4965EBFC7B50B153DAF2AB04C5651635CAD2F3B4 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t661347EAF47D1D5B40F8106C40F403A3BABB805B_m4965EBFC7B50B153DAF2AB04C5651635CAD2F3B4_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m3E4086A3C89354690177397D2777588D3BB43698 (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, Guid_t, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B, const RuntimeMethod*))Dictionary_2_set_Item_m3E4086A3C89354690177397D2777588D3BB43698_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m28428F52C9134E1DDCA8601B1F94995FF188C486 (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m28428F52C9134E1DDCA8601B1F94995FF188C486_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m59FF5E4677AF2E899AAE6D8CDC12F528BABAC67C (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m59FF5E4677AF2E899AAE6D8CDC12F528BABAC67C_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m1EBACA63008A644E1DC927D1611ED9AB8520C95F (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m1EBACA63008A644E1DC927D1611ED9AB8520C95F_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m800AE3E7FD80DD640F53BF8BC81CDE4EDCAA2729 (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m800AE3E7FD80DD640F53BF8BC81CDE4EDCAA2729_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m86E7921CDE93630FCF225F97BDD540EBC5BBE4B5 (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, const RuntimeMethod*))Dictionary_2_Add_m86E7921CDE93630FCF225F97BDD540EBC5BBE4B5_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3*, const RuntimeMethod*))KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_gshared_inline)(__this, method);
}
inline Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method)
{
	return ((  Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 (*) (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3*, const RuntimeMethod*))KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mFCAE2D2C1C1C81769A4BB332BF9159315918B338 (KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* __this, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4*, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, const RuntimeMethod*))KeyCollection__ctor_mFCAE2D2C1C1C81769A4BB332BF9159315918B338_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m64F5037EDCBBED4AB3AE23C931831DE35BCC4CB4 (ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* __this, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9*, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, const RuntimeMethod*))ValueCollection__ctor_m64F5037EDCBBED4AB3AE23C931831DE35BCC4CB4_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mF378C6E7BB4E0256BCC88B18C67B33862EC75EEA (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mF378C6E7BB4E0256BCC88B18C67B33862EC75EEA_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* EqualityComparer_1_get_Default_m3E61EF636E95121B489A3D0142173FE27834FBD7_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m3E61EF636E95121B489A3D0142173FE27834FBD7_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m905E588A5819BB00CEE61AED70ADB494B69900D9 (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_m905E588A5819BB00CEE61AED70ADB494B69900D9_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mC3A740D0BEE683D33CA05504D9BB614330D909BD (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, const RuntimeMethod*))Dictionary_2_get_Count_mC3A740D0BEE683D33CA05504D9BB614330D909BD_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m24B652BB989676FB54EDD12DA60E7D13A5AF925E (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, const RuntimeMethod*))KeyValuePair_2__ctor_m24B652BB989676FB54EDD12DA60E7D13A5AF925E_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168 (Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B* __this, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B*, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, const RuntimeMethod*))Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m7B46550CE5C42D59370FA471B7C15509387A88A3 (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m7B46550CE5C42D59370FA471B7C15509387A88A3_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m4024CA680E7BA1C93BD89F4884845528B25A8481 (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, const RuntimeMethod*))Dictionary_2_Resize_m4024CA680E7BA1C93BD89F4884845528B25A8481_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mE4DB1F9EEB1225F57530E4784E02322B93B40DB7 (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mE4DB1F9EEB1225F57530E4784E02322B93B40DB7_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mDA09E66D1E1827388C42B7E1B2C8C6AB7273F75B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mDA09E66D1E1827388C42B7E1B2C8C6AB7273F75B_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30_mB34E86860EE1F62390E32B010458639D7AE34784 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30_mB34E86860EE1F62390E32B010458639D7AE34784_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m0C7C6027F177115E2A64D662DBD0109738407518 (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, const RuntimeMethod*))Dictionary_2_set_Item_m0C7C6027F177115E2A64D662DBD0109738407518_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mD969F6A580D73851321B8BA7F40F58FBFE2554E9 (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mD969F6A580D73851321B8BA7F40F58FBFE2554E9_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m23746F45330979DC67FC026FA486871C2EB640D1 (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m23746F45330979DC67FC026FA486871C2EB640D1_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m09BCDE85BD43B188BBA0E73A6FA02687FC4876AA (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m09BCDE85BD43B188BBA0E73A6FA02687FC4876AA_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m553C37C1F21E3267B21D164E32179ACB0A21D974 (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m553C37C1F21E3267B21D164E32179ACB0A21D974_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m25395CDFBF35C13C7AAC77FCA1A3BE870559D2BC (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, const RuntimeMethod*))Dictionary_2_Add_m25395CDFBF35C13C7AAC77FCA1A3BE870559D2BC_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191*, const RuntimeMethod*))KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_gshared_inline)(__this, method);
}
inline Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method)
{
	return ((  Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 (*) (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191*, const RuntimeMethod*))KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mB71E1278423E4F52365C6CD6134DE178C176DA29 (KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* __this, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB*, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, const RuntimeMethod*))KeyCollection__ctor_mB71E1278423E4F52365C6CD6134DE178C176DA29_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m4AEFC1B3E813401366606DE673A32A9135204C46 (ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* __this, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66*, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, const RuntimeMethod*))ValueCollection__ctor_m4AEFC1B3E813401366606DE673A32A9135204C46_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332 (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m37D5F1C48F33458B57A78D59A9D1C878BDB06544 (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m37D5F1C48F33458B57A78D59A9D1C878BDB06544_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* EqualityComparer_1_get_Default_m7104A9F2362A9A3A3DB4C56FC6DCF132E2370270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7104A9F2362A9A3A3DB4C56FC6DCF132E2370270_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mAEFCB8652B79869B803B02892152584DD08D65DC (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_mAEFCB8652B79869B803B02892152584DD08D65DC_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mB6B69CA958F384D051ABC4E9E2EAB692046A7F3E (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, const RuntimeMethod*))Dictionary_2_get_Count_mB6B69CA958F384D051ABC4E9E2EAB692046A7F3E_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mB51582F33DA23CDE9D52DC88A9026C5098F4DD2C (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, const RuntimeMethod*))KeyValuePair_2__ctor_mB51582F33DA23CDE9D52DC88A9026C5098F4DD2C_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F (Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A* __this, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A*, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, const RuntimeMethod*))Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mB1D4DCEF3F5048C74DFD0802F27F9CC453013DBB (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mB1D4DCEF3F5048C74DFD0802F27F9CC453013DBB_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m2C4C256DE0E3D50E65529675CC5F0B1233C7A0E5 (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, const RuntimeMethod*))Dictionary_2_Resize_m2C4C256DE0E3D50E65529675CC5F0B1233C7A0E5_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m6ABA7C6D65342343845462EF61478E58B4B14631 (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m6ABA7C6D65342343845462EF61478E58B4B14631_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m09F4B9C2DB263EDD0F9CEB5B965DB2FD717438BA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m09F4B9C2DB263EDD0F9CEB5B965DB2FD717438BA_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tD6F76A27427390AB039AE817762327D0D6848CF0_m8432547931BAC576423F18B1E75D6896F8F473E6 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tD6F76A27427390AB039AE817762327D0D6848CF0_m8432547931BAC576423F18B1E75D6896F8F473E6_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m1A967B5A7922AB2E6CC4935FFB6EFDA8F5EEC029 (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, const RuntimeMethod*))Dictionary_2_set_Item_m1A967B5A7922AB2E6CC4935FFB6EFDA8F5EEC029_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m824E7E45149FFA5370C26F71CF1B7D8920DCF8EE (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m824E7E45149FFA5370C26F71CF1B7D8920DCF8EE_gshared)(__this, ___0_key, method);
}
inline EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* EqualityComparer_1_CreateComparer_mE0A7C7D719A999F27B2C6C94F581C2A9B5FF3133 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE0A7C7D719A999F27B2C6C94F581C2A9B5FF3133_gshared)(method);
}
inline EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* EqualityComparer_1_CreateComparer_mA2F00D10E67D114ECAD52D68868F85E6B706A9FE (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mA2F00D10E67D114ECAD52D68868F85E6B706A9FE_gshared)(method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared)(method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared)(method);
}
inline EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* EqualityComparer_1_CreateComparer_m25DE8D043E29228C235A21C69D8F45ED3C431B05 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m25DE8D043E29228C235A21C69D8F45ED3C431B05_gshared)(method);
}
inline EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* EqualityComparer_1_CreateComparer_mF0341F8976F6E1BEDB057B5090539BD80B10C598 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF0341F8976F6E1BEDB057B5090539BD80B10C598_gshared)(method);
}
inline EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* EqualityComparer_1_CreateComparer_m1FBD63CB6C3BD3A53AB512192874FAEB9138A460 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m1FBD63CB6C3BD3A53AB512192874FAEB9138A460_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* DefaultMultiColumnTreeViewController_1_get_treeDataController_mDB47A4F064CBFF164239CF868BB935E4AF48917B_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* V_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B2_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B1_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_2 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1__ctor_mD82A3F301FC391E9C4B868B7FEF687E15A7F3906_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, Columns_t487EAF3B634F6D919D58F1927099A8883964831B* ___0_columns, SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* ___1_sortDescriptions, List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* ___2_sortedColumns, const RuntimeMethod* method) 
{
	{
		Columns_t487EAF3B634F6D919D58F1927099A8883964831B* L_0 = ___0_columns;
		SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* L_1 = ___1_sortDescriptions;
		List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* L_2 = ___2_sortedColumns;
		MultiColumnTreeViewController__ctor_m705FE6CEF71CB478F8FC5A951A337FF5A7B2F919((MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC*)__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_get_itemsSource_m3014D39CACB92A87B8EBD61F2D631F25545807C4_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_set_itemsSource_mBD91C2CF4E535ED5914CC200626851F26A26D9E9_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		((  void (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		((  void (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_SetRootItems_m16AF10D0A53B12BADB73620CDCDEC0992451E623_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3;
		L_3 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		NullCheck(L_3);
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		NullCheck((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetItemForIndex_m8EB76F61313576AA8E82AB8F063D0C9A4A3AFD29_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t00BE912088ED26BF719AD2BEEA04F0F8D3849672 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t00BE912088ED26BF719AD2BEEA04F0F8D3849672);
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		NullCheck((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		NullCheck(L_0);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_0, L_2, (Il2CppFullySharedGenericAny*)L_3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_3);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultMultiColumnTreeViewController_1_GetParentId_mA7FAE2E5FD0141501FEEFEFA9578C0F9BF6DDE33_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_HasChildren_m55D6A2CF819D7FC5F312ACA9FAA9B80EDCF5EB16_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetChildrenIds_m6F787ABA5F8B8468FE1E740DDF44D629BD559F52_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_Move_m749329237478F8277C929B5BD54C96E62B3DF281_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = ((  bool (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_7;
		L_7 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		NullCheck(L_7);
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		NullCheck((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this);
		CollectionViewController_RaiseItemIndexChanged_mE12A41E7F1E29A78B60EDE6E02A9D3728D944E77((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_IsChildOf_mFDA0E743A2F237D1DC7AC4B8062D113C1EFEEACB_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		NullCheck(L_0);
		bool L_3;
		L_3 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetAllItemIds_mB75CA248757BEF1F74ACC068896292759120BC09_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* V_0 = NULL;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* G_B2_0 = NULL;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* G_B1_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_2 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_get_itemsSource_mD5E0009C4175B06DA4D3841F020E1228BAB1DC1F_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_set_itemsSource_m990048927FAD48D4BE8FDD2592E0C4F99CFECC2A_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3;
		L_3 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		NullCheck(L_3);
		TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		NullCheck((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetItemForIndex_m51774EE1EAD0593BB5AF57EC6D82361FBD11531D_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		NullCheck((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC(L_0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultTreeViewController_1_GetParentId_mDA7CEA92A43CD8EF80F5F0D0163171ABFC5834EE_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_HasChildren_mB043EC1AC806DFDF4AFCD8F904F93FBF22D7C1DC_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		NullCheck(L_0);
		bool L_2;
		L_2 = TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetChildrenIds_mCD860DA6AF532B8BD7FE27462C3D775259E564E1_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_Move_m3428B20395A4FA811B2B7622F933BC23EEE2ACD8_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_7;
		L_7 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		NullCheck(L_7);
		TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		BaseTreeViewController_RaiseItemParentChanged_m3D91BCB67E4577C1373C9A8A9122C8D7F0457322((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		NullCheck(L_0);
		bool L_3;
		L_3 = TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetAllItemIds_mC4A7FF2401C847EC7F3F2F95CAB289808E3BE69B_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1__ctor_m5FA5A68E68E1486756E09EB2EC660B072666BE61_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) 
{
	{
		TreeViewController__ctor_m0BA584E2BFF10F466D94E3ED33E4FB9840907AF2((TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* DefaultTreeViewController_1_get_treeDataController_m7E9E89E1B23E11E0E80778544AED21FCA6CBF54F_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* V_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B2_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B1_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_2 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_get_itemsSource_m71A06943FE19EC53AA0A693BFCA3FEC2D3E5B771_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_set_itemsSource_m397219E85DD9564F50C85B2B01A91C6EB41C9BF2_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		((  void (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		((  void (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_SetRootItems_mFBC214CF0F4E0C67B0114A7D9051268B96D00E2F_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3;
		L_3 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		NullCheck(L_3);
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		NullCheck((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetItemForIndex_m3388DAB31BA3720C4F56BEED24E87A70619E0241_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t70CA3447B7982C0A826E2C517DFA26A303EC7378 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t70CA3447B7982C0A826E2C517DFA26A303EC7378);
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		NullCheck((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		NullCheck(L_0);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_0, L_2, (Il2CppFullySharedGenericAny*)L_3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_3);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultTreeViewController_1_GetParentId_m91D4EF4603F4E16AEB6DA0D366AC81142A60BEAE_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_HasChildren_m7099101A6CE7573FFDE1160588465D7BE7642BEC_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetChildrenIds_mC3602866202DF0714EAE6574A5A3CE531ED6D353_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_Move_m6072DEBDF2580333A0B88C4C3645D7826B513582_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = ((  bool (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_7;
		L_7 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		NullCheck(L_7);
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		NullCheck((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this);
		BaseTreeViewController_RaiseItemParentChanged_m3D91BCB67E4577C1373C9A8A9122C8D7F0457322((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_IsChildOf_m998BC86C72F8779A402B14C89999F49007091CA4_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		NullCheck(L_0);
		bool L_3;
		L_3 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetAllItemIds_mFC937CE83D745461C0116D83CD7B4BD95C070C5A_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1__ctor_m45900DF251FCCA1508967C774740F0DA99D6F0AC_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, const RuntimeMethod* method) 
{
	{
		TreeViewController__ctor_m0BA584E2BFF10F466D94E3ED33E4FB9840907AF2((TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateEnumerator__ctor_m31ED641F3B58C86B023116F98B26736D44168EEB_gshared (DelegateEnumerator_t03CC726F1198053E252AFEE23D3871C1435B4970* __this, FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* ___0_enumerable, const RuntimeMethod* method) 
{
	{
		FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* L_0 = ___0_enumerable;
		NullCheck(L_0);
		String_t* L_1 = L_0->____directory;
		FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* L_2 = ___0_enumerable;
		NullCheck(L_2);
		EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B* L_3 = L_2->____options;
		FileSystemEnumerator_1__ctor_m327F0BF0DB8DD4E57BF05E979D9F4D8827363407((FileSystemEnumerator_1_tA955DE78A8E344B2059ACE249F0647FFF74DA3EA*)__this, L_1, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* L_4 = ___0_enumerable;
		__this->____enumerable = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerable), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateEnumerator_TransformEntry_m84B1C6F6507647F7B27014C5AD374AA87DFB2735_gshared (DelegateEnumerator_t03CC726F1198053E252AFEE23D3871C1435B4970* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method) 
{
	{
		FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* L_0 = __this->____enumerable;
		NullCheck(L_0);
		FindTransform_tC499583A33189BE267A9A28ED61DB4DE63B28851* L_1 = L_0->____transform;
		FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* L_2 = ___0_entry;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = FindTransform_Invoke_mB1795BBACA6C805624B35FB1B2BCE942B97FE3B6_inline(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateEnumerator_ShouldRecurseIntoEntry_mCD915A1CF7062BF688FE872E24EFC8198BA4A360_gshared (DelegateEnumerator_t03CC726F1198053E252AFEE23D3871C1435B4970* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method) 
{
	FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* G_B2_0 = NULL;
	FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* G_B1_0 = NULL;
	{
		FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* L_0 = __this->____enumerable;
		NullCheck(L_0);
		FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* L_1;
		L_1 = FileSystemEnumerable_1_get_ShouldRecursePredicate_mAE1C26075F4D8E8BE4DFCF32D2F5F9F47C4C670A_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
		G_B1_0 = L_2;
	}
	{
		return (bool)1;
	}

IL_0011:
	{
		FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* L_3 = ___0_entry;
		NullCheck(G_B2_0);
		bool L_4;
		L_4 = FindPredicate_Invoke_mC431E959AEB6D9456E3C5A09D86622262F9ADBC8_inline(G_B2_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateEnumerator_ShouldIncludeEntry_mD3DD774D5436298A431C4EA721D0472A3AEE7C0B_gshared (DelegateEnumerator_t03CC726F1198053E252AFEE23D3871C1435B4970* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method) 
{
	FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* G_B2_0 = NULL;
	FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* G_B1_0 = NULL;
	{
		FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* L_0 = __this->____enumerable;
		NullCheck(L_0);
		FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* L_1;
		L_1 = FileSystemEnumerable_1_get_ShouldIncludePredicate_m4743F78B88F0991B184EBBD3CE5DB0CCD8F187E1_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
		G_B1_0 = L_2;
	}
	{
		return (bool)1;
	}

IL_0011:
	{
		FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* L_3 = ___0_entry;
		NullCheck(G_B2_0);
		bool L_4;
		L_4 = FindPredicate_Invoke_mC431E959AEB6D9456E3C5A09D86622262F9ADBC8_inline(G_B2_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateEnumerator__ctor_m1A7283B52893097180E973505B0A48748E8DD4F9_gshared (DelegateEnumerator_t2D9F0401F1C8389D1335BC9FEE9A280B852DA125* __this, FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D* ___0_enumerable, const RuntimeMethod* method) 
{
	{
		FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D* L_0 = ___0_enumerable;
		NullCheck(L_0);
		String_t* L_1 = L_0->____directory;
		FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D* L_2 = ___0_enumerable;
		NullCheck(L_2);
		EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B* L_3 = L_2->____options;
		((  void (*) (FileSystemEnumerator_1_t9E8DE16DC8DBD063D35FC5A78A1A29C076DD8E41*, String_t*, EnumerationOptions_t7C636684933367EC8E4B428073BF1FD4C5CDCA0B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((FileSystemEnumerator_1_t9E8DE16DC8DBD063D35FC5A78A1A29C076DD8E41*)__this, L_1, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D* L_4 = ___0_enumerable;
		il2cpp_codegen_write_instance_field_data<FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateEnumerator_TransformEntry_m1CE5DBA224C45E4A6AC1AE0ACF118EB19597A60B_gshared (DelegateEnumerator_t2D9F0401F1C8389D1335BC9FEE9A280B852DA125* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t191A5D5C513F5CA5B4593E057903FEFD1F92BCFD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TResult_t191A5D5C513F5CA5B4593E057903FEFD1F92BCFD);
	{
		FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D* L_0 = *(FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_0);
		FindTransform_t4AB3CE80560E429B4D6E6793B8BDCDAB4CD297DF* L_1 = L_0->____transform;
		FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* L_2 = ___0_entry;
		NullCheck(L_1);
		InvokerActionInvoker2< FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_1, L_2, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TResult_t191A5D5C513F5CA5B4593E057903FEFD1F92BCFD);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateEnumerator_ShouldRecurseIntoEntry_m785FE9636B50BCE53ABA42A4520FF5E59EA85030_gshared (DelegateEnumerator_t2D9F0401F1C8389D1335BC9FEE9A280B852DA125* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method) 
{
	FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* G_B2_0 = NULL;
	FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* G_B1_0 = NULL;
	{
		FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D* L_0 = *(FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_0);
		FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* L_1;
		L_1 = ((  FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* (*) (FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
		G_B1_0 = L_2;
	}
	{
		return (bool)1;
	}

IL_0011:
	{
		FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* L_3 = ___0_entry;
		NullCheck(G_B2_0);
		bool L_4;
		L_4 = ((  bool (*) (FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0*, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(G_B2_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateEnumerator_ShouldIncludeEntry_mBB84B73E51373CC58AC49287CB13830814B24EF0_gshared (DelegateEnumerator_t2D9F0401F1C8389D1335BC9FEE9A280B852DA125* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method) 
{
	FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* G_B2_0 = NULL;
	FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* G_B1_0 = NULL;
	{
		FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D* L_0 = *(FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_0);
		FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* L_1;
		L_1 = ((  FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* (*) (FileSystemEnumerable_1_tA9B7141BA74991889DD99E5665C74DA1C2B0929D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
		G_B1_0 = L_2;
	}
	{
		return (bool)1;
	}

IL_0011:
	{
		FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* L_3 = ___0_entry;
		NullCheck(G_B2_0);
		bool L_4;
		L_4 = ((  bool (*) (FindPredicate_t15436058F44F6A73D9AF2046503C34C17A5DB3A0*, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(G_B2_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DelegateProperty_2_get_Name_mEED824A0D241861F8FC2831C7A27631DDE0459B0_gshared (DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateProperty_2__ctor_mCC0F3ACE346BA3B05952715FFDB8B276B2F0B6FA_gshared (DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* __this, String_t* ___0_name, PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* ___1_getter, PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* ___2_setter, const RuntimeMethod* method) 
{
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* G_B2_0 = NULL;
	DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* G_B2_1 = NULL;
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* G_B1_0 = NULL;
	DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* G_B1_1 = NULL;
	{
		((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		String_t* L_0 = ___0_name;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* L_1 = ___1_getter;
		PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0020;
		}
		G_B1_0 = L_2;
		G_B1_1 = __this;
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A57163F65B0EE8A44DC4359CBCD332A446966AA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_Getter = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_Getter), (void*)G_B2_0);
		PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* L_4 = ___2_setter;
		__this->___m_Setter = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Setter), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mED6D481F16E8597DF1F8FD3F1A173ED8F0D4D8E9_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* L_0 = ___0_dictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_3 = __this->____enumerator;
		NullCheck(L_3);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_4;
		L_4 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m8D259867AB5E2DC9BB7842AF3E12D610D928B673_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m7EC80AD0D446500C9824A6B681B418A5D0684717_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m7501DF54C4E255F50E90B671CD323B1CD34C65C8_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mB31588BC8CD43AFACC8AA4951D86F21B677419CB_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mB5B330221AC0A9B73F3C3D3297A3E499C6353D10_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mE63FC46E53E46535C7DD59172E65E42BD570D5F3_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_0 = ___0_dictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m6EB9062A7B59C89B18B6B61214B707BE4AA44086_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_2);
		RuntimeObject* L_4 = __this->____enumerator;
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m0990C99F94EA95C5392CA5485B4BFD344BAED6FE_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mD790494FF5E50257030CC045B516A70513EE98A8_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m84A050320869FF83584304FF56D3BA05368095F2_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCD670B5AE8886409051790844BF74853977F5846_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mBAC7702D03B6B7A6496AA713EC06CE6162127B2C_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryPropertyBag_2_get_InstantiationKind_m641573CD1323CD15A7F099323BA1B2546F063182_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPropertyBag_2_Instantiate_m7778199CDF045586687AB5A9F377D8FB3786C1E0_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2__ctor_m22A16E1F14BC6922025ED84A62E37E6C3178BD60_gshared (DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765* __this, Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0** ___0_dictionary, const RuntimeMethod* method) 
{
	Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* V_0 = NULL;
	{
		Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0** L_0 = ___0_dictionary;
		Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* L_1;
		L_1 = OVRObjectPool_Dictionary_TisGuid_t_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m5710FF79537BB27FAD3AC68BE44721C698C4DEFE(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* L_2 = L_1;
		V_0 = L_2;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* L_3 = V_0;
		__this->____dictionary = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryScope_2__ctor_m22A16E1F14BC6922025ED84A62E37E6C3178BD60_AdjustorThunk (RuntimeObject* __this, Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0** ___0_dictionary, const RuntimeMethod* method)
{
	DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765*>(__this + _offset);
	DictionaryScope_2__ctor_m22A16E1F14BC6922025ED84A62E37E6C3178BD60(_thisAdjusted, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2_Dispose_mE9A51086B315348BB8FEE9E2B43D7D633DAF0920_gshared (DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* L_0 = __this->____dictionary;
		OVRObjectPool_Return_TisDictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0_m2A13521A005F38CC9005E44F4726F6CDF3E9D5BF(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryScope_2_Dispose_mE9A51086B315348BB8FEE9E2B43D7D633DAF0920_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryScope_2_tD9FB5BD514FB49A9D1CC9469A88C521261678765*>(__this + _offset);
	DictionaryScope_2_Dispose_mE9A51086B315348BB8FEE9E2B43D7D633DAF0920(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2__ctor_m77DFC54C989FE7E37D9E0EE775E22C0855E1DDEC_gshared (DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A* __this, Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54** ___0_dictionary, const RuntimeMethod* method) 
{
	Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54* V_0 = NULL;
	{
		Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54** L_0 = ___0_dictionary;
		Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54* L_1;
		L_1 = OVRObjectPool_Dictionary_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_TisRoomLayoutUuids_t924056D36DEC5EF47FC429727FA024070B6C2B01_m1229F16335BF35A5710BBCCC78D52E21C00D3784(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54* L_2 = L_1;
		V_0 = L_2;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54* L_3 = V_0;
		__this->____dictionary = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryScope_2__ctor_m77DFC54C989FE7E37D9E0EE775E22C0855E1DDEC_AdjustorThunk (RuntimeObject* __this, Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54** ___0_dictionary, const RuntimeMethod* method)
{
	DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A*>(__this + _offset);
	DictionaryScope_2__ctor_m77DFC54C989FE7E37D9E0EE775E22C0855E1DDEC(_thisAdjusted, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2_Dispose_m03ECA77EDBF8E19D8A86D2614D69FE1491589DAD_gshared (DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54* L_0 = __this->____dictionary;
		OVRObjectPool_Return_TisDictionary_2_tA66D5F4E950CBBE1C34E9DF5B74730148B9B2C54_m9E7569DD7208077DE18FF30BAAB0A3C3C81F8738(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryScope_2_Dispose_m03ECA77EDBF8E19D8A86D2614D69FE1491589DAD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryScope_2_t5B1C48E054724842B82FE98E61CAFD18F25C845A*>(__this + _offset);
	DictionaryScope_2_Dispose_m03ECA77EDBF8E19D8A86D2614D69FE1491589DAD(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2__ctor_m05E902562E64805D79F688BA7973164967C6AE1E_gshared (DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___0_dictionary, const RuntimeMethod* method) 
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* V_0 = NULL;
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_0 = ___0_dictionary;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1;
		L_1 = ((  Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_2 = L_1;
		V_0 = L_2;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_3 = V_0;
		__this->____dictionary = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryScope_2__ctor_m05E902562E64805D79F688BA7973164967C6AE1E_AdjustorThunk (RuntimeObject* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___0_dictionary, const RuntimeMethod* method)
{
	DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6*>(__this + _offset);
	DictionaryScope_2__ctor_m05E902562E64805D79F688BA7973164967C6AE1E(_thisAdjusted, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryScope_2_Dispose_mCE7B16F5D1AC910B5E892D32DB1FD1DC5412E0CE_gshared (DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryScope_2_Dispose_mCE7B16F5D1AC910B5E892D32DB1FD1DC5412E0CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryScope_2_t501C996D75EF91F689E764496447D1511EF3BAD6*>(__this + _offset);
	DictionaryScope_2_Dispose_mCE7B16F5D1AC910B5E892D32DB1FD1DC5412E0CE(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCD6B31F5B3530186D8E934AFF80D9CBE845A5B69_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA383B1AB0AB2AF250446879D6CB9999B48B1970F_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8950A28C8717073F0609029AF6AD32D5AD6415B7_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_5;
		L_5 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m66AC303D073D85C97B7F908D42D9055FF83FB25B_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m4B8B43A29F37C828AC628B828E71DA451A41257C(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4B8B43A29F37C828AC628B828E71DA451A41257C_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* G_B2_0 = NULL;
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* L_11 = ((Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_32;
				L_32 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_33;
				L_33 = KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8C808E852E1B0AF0459850A00A4A1E0B6EFA6D43_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* Dictionary_2_get_Keys_m6892B840DB054FDB84D56B64F11C665F25EDE91F_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* L_1 = (KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m9EB9EAF293C25B19D013B8D20953FC0EE6F4D1E9(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* Dictionary_2_get_Values_m7D06C76F0586895C50345F97D546BE08BD8793C1_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* L_1 = (ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m2E207A3EE3295538D81E11F03E01989AAD959A39(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 Dictionary_2_get_Item_m7A203223AB111056EFE126D4FAD7B549FC19E174_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_6 = ___0_key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m88B6E3FDD04EEC0A70475E014FDE5E789AA0B311_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mAF8A90913A6D7FAE06C5C5CD6A02E57D0687641D_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0;
		L_0 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_1;
		L_1 = KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2111CC51CB335F26A8E8271CD2BD28AAA1E023DE_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0;
		L_0 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_3;
		L_3 = EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_7;
		L_7 = KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m779579499DBFA1ED1D3C6C2190CEE607A02C0E8B_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0;
		L_0 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_3;
		L_3 = EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_7;
		L_7 = KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_9;
		L_9 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m2F068E9587C451B4EF5A91596CBEE4FF413B1E02(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m666FF1131A4EE1BE844E3568A67144431FC82389_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6EED97C7CFEA5AC5ADCD0387ECB28BFBEE2CBB05_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m48C03EF5B9EAE214508BFD11B0A41BA403D4AF9E_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_0 = NULL;
	int32_t V_1 = 0;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_6;
		L_6 = EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF23DF720149D9D13A547F08E017D056CD5465AFF((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 Dictionary_2_GetEnumerator_m829D47E04BF02E0377F6AAB9AB8639A9591D2AAF_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF12C2719F8351F242E5E9DF1E1C676AAF041564F_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mC0EC0EA0B2C931C4DD97CEB77AFEA047AD4D9876_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_6;
		L_6 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_14 = (KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8*)(KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_15 = V_0;
		Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_19;
		L_19 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_5 = (EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5*)(EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t087349F3AE170AB56B4363B52E225A982E89F930* V_10 = NULL;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_24;
		L_24 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___values), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___underlyingType), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_35 = ___0_key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___values), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___underlyingType), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_61 = ___0_key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m2FB7681B01D79E97179A80F9B3587C7E41558D22(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_94 = V_10;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item2), (void*)NULL);
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_96 = V_10;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___values), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___underlyingType), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m52B40F1EE8A13220875F4F8D70C536A30384EC71_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_21;
		L_21 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_24;
		L_24 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_27;
		L_27 = KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2FB7681B01D79E97179A80F9B3587C7E41558D22_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_3 = (EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5*)(EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_5 = __this->____entries;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9));
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* L_17 = (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2F068E9587C451B4EF5A91596CBEE4FF413B1E02_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t087349F3AE170AB56B4363B52E225A982E89F930* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_20;
		L_20 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_21 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_22 = L_21->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_25 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_26 = L_25->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_41 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* L_42 = (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9));
	}

IL_00ff:
	{
	}
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_43 = V_4;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_44 = (EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD598BDD6296B34FFFF1DDC20FB2FE7780F6783B2_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t087349F3AE170AB56B4363B52E225A982E89F930* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_20;
		L_20 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_21 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_22 = L_21->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_25 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_26 = L_25->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_38 = ___1_value;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_39 = V_4;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_40 = L_39->___value;
		*(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___values), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___underlyingType), (void*)NULL);
		#endif
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
	}
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_44 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* L_45 = (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)(&L_44->___key);
		il2cpp_codegen_initobj(L_45, sizeof(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9));
	}

IL_010c:
	{
	}
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_46 = V_4;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_47 = (EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)(&L_46->___value);
		il2cpp_codegen_initobj(L_47, sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList = L_48;
		int32_t L_49 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_52 = V_4;
		int32_t L_53 = L_52->___next;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m00F62CC5B35DEBB8609BEACE26D554224A3EAE31_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_3 = ___1_value;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___values), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___underlyingType), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m61C770F026B44F138615EE3C05509245B3A33D17_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mF64A2C7E9E56B03C38434B32414E2C0923519595_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mFEA470B1AA3B2FF20EC33AB564A5A587DB3BAF86_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mCD7104B8C00067CD53ECCF109E802C63B1BED641_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mF23DF720149D9D13A547F08E017D056CD5465AFF((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51810213C244733F6D3B75333DF72441070B8BF5_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6A88AF53AC16397541B3717BFF35904DC4F09D20_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m679FBC073F96E56CE8BA3F7581021D68756F831D_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, ((*(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)((ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m88599E5C9BE4CC5A6BB7DD9004FFFF199137540F_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m3E05CB11F79CC8E4B9C1AEBEEA0F26308A3AC74D(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)((ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m88B6E3FDD04EEC0A70475E014FDE5E789AA0B311(__this, L_3, ((*(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m050950FB7022D5DC98B09E39A7D135A9B3A19FB2_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m6EED97C7CFEA5AC5ADCD0387ECB28BFBEE2CBB05(__this, ((*(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)((ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF4FB4AB9263230A71593F45CACA341B287B98739_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC25FF6793652922985BFAA4DC8F11A4B0B090CF8_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA647361FB5882A25C765F596760030CB84824C97_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF092F25D416129BCC755E245CEC88345A7E17540_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_5;
		L_5 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD64AC3C289EB7ACAB466AD0B5341F3609CB55199_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B2_0 = NULL;
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* L_11 = ((Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32;
				L_32 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E17FF0178C889BBACDC95DECEB4EF50BB31F65F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_1 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* Dictionary_2_get_Values_mC54912268568667F725754EBE2356518610AE832_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_1 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m04A4017ED4A293A5D3A2164CBCD6A6CB8BCCA116_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4EEACDC46AD23A0E7FA39004DBEDA017B8687FAF_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA39A0BE52118902D1EC9ED983321B0D8B415DF24_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4DB7A9F0B32B7B8DD0D41B3F6611E7B03B9436CA_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9;
		L_9 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m07051E2711DEDC818DC462838A3D89CDD0959D9A_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2E1A55234F27A4F98C337C2202E8241F8E42ED04_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 Dictionary_2_GetEnumerator_m1C2674F51BACC5E23084DA0374A70B0EBB20CB1F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF90BAD88410B5EEFD79B8D5A86638D03C61B08AC_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE2783EE614A6743CAC1102BE510AF8978CE8C547_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_6;
		L_6 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = (KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)(KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_15 = V_0;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_19;
		L_19 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_10 = NULL;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_24;
		L_24 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_35 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_61 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_94 = V_10;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item2), (void*)NULL);
		#endif
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m40CC8AF5495433361FFFBAE6BF3EB27D6A9C9E05_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_21;
		L_21 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_24;
		L_24 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_17 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_20;
		L_20 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_21 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = L_21->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_25 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_26 = L_25->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_41 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_42 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_00ff:
	{
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m96B812D216465C79B9E44915B3C794DA060CA7BC_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_20;
		L_20 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_21 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = L_21->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_25 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_26 = L_25->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		RuntimeObject** L_38 = ___1_value;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_39 = V_4;
		RuntimeObject* L_40 = L_39->___value;
		*(RuntimeObject**)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_38, (void*)L_40);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_44 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_45 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_44->___key);
		il2cpp_codegen_initobj(L_45, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_010c:
	{
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_46 = V_4;
		RuntimeObject** L_47 = (RuntimeObject**)(&L_46->___value);
		il2cpp_codegen_initobj(L_47, sizeof(RuntimeObject*));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList = L_48;
		int32_t L_49 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_52 = V_4;
		int32_t L_53 = L_52->___next;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		RuntimeObject** L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m65316B5BBBCA1E7FA03561A97E22F2860B92FDF5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mCFE3B0F6F63ADFF26FB4623C8EAB4B8920D257EB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m08F8980BA41D175D9D5755E520ECEC499FAECF65_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8B6070F6B012031518CAF9D85C4AA0880199C5E9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3F00D474C864259E96AE8A127C47D3AA12CBC787_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m904B76BE6F9CA0FC90A3E300E03FACB2CD5C8BDE_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m106E312F89A7FF2E8CF9BF88DA09FD2AD89E9652_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m578F26947EC223AF042037DF6D88F725A17C1CD4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m36BF55AAF072CC8471B04911DF96474EA3BC8825_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAA97B6F0E3AA42F45BBCE847BCADC2D626F21112_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE7E563DCFA8A83D43D1077B358C6DC613F78738B_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m88EEEFF844FE740CF9A14946245A4BA58C7FC048_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mAD98267D964142E0F32E726757BAAC9ACD73577C(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE0AE799EA1BCFCDA47500D7D88B1E897D6AE5EA_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mAD98267D964142E0F32E726757BAAC9ACD73577C(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5F534DD40340CF1F0B226E683BDE2B7ED7314042_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mAD98267D964142E0F32E726757BAAC9ACD73577C(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD98267D964142E0F32E726757BAAC9ACD73577C_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m0779C0DC593B00380D6967F564E301B30B9739C5(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_5;
		L_5 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4F0E2A8E61B842DB23BCE3757CDA8F62F49DBB5E_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m320B8E136CD42625908A031A8132CBB828CCC2E4(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m320B8E136CD42625908A031A8132CBB828CCC2E4_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* G_B2_0 = NULL;
	Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mAD98267D964142E0F32E726757BAAC9ACD73577C(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* L_11 = ((Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint8_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				uint8_t L_32;
				L_32 = KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m355ABF6DC1298ABF3E64E1B701CFB05FF57C7A50_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFDC045F138D7F811C0307C2785E7933A3DB13A7B_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mDBE39F8DFADAA1D303E8BFC83E07EE048D8BAF4D_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290* Dictionary_2_get_Keys_m8C5B8519181210735EB5125A0D0BAB23E2806057_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290* L_1 = (KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mA98A095DD157A276B3485B6BDCA25A9301DEC7E0(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90* Dictionary_2_get_Values_m12DC21BEB706CD43C1BE35154FAA74146B862B11_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90* L_1 = (ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m039D5D4E31C5667904FC599057AE4D0B1E4A2CB0(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m8F3D010A0875A7B6F33873C8BD16D7F4A483CEFB_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC082298A1771B44B139F54FF3E51B35900F854A5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		uint8_t L_6 = ___0_key;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8BEB94760CA6F27CF244C9860AD50B9339089AF4_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m52FC66026B24488EFD47C9E78791519358D7B3A2(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m52FC66026B24488EFD47C9E78791519358D7B3A2(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18B006334356520C094ECED454807A43042364D1_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m355ABF6DC1298ABF3E64E1B701CFB05FF57C7A50_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mD0D04B7D68D6260FCA0D26A317BCC7F3A7A89EFE_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC082298A1771B44B139F54FF3E51B35900F854A5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m355ABF6DC1298ABF3E64E1B701CFB05FF57C7A50_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8DBCAF75A9FEA374F00D44912D9CB881B479EFA7_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC082298A1771B44B139F54FF3E51B35900F854A5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m355ABF6DC1298ABF3E64E1B701CFB05FF57C7A50_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint8_t L_9;
		L_9 = KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m96F813E9E9F9710ADCC56FB99A10CA0870BEC0BB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m54A2E48B1C045976FBB970A71190E090E1B71C56_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6E0C00BA51CEB9257B11032504ACC9D63D784742_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC082298A1771B44B139F54FF3E51B35900F854A5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m42FE728D6CAFCB354AD4B9B9E31DA86E51A91128_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m5D401BD5924F24D7FBFBE4D91D73A1BDF2652915_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mDBE39F8DFADAA1D303E8BFC83E07EE048D8BAF4D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint8_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m3528DC82BCBD9770D62D45268C06DBE5047C20FD((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D Dictionary_2_GetEnumerator_m4CC0248131E7D2F264F681F3EAF5049BB392BB8B_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m628EF991E661825F29F73BCD8BFEA1393808628A((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE6A0CF05C86FECF932A824E0B879FE775B54DA96_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m628EF991E661825F29F73BCD8BFEA1393808628A((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m0E2157347A7EDF1B16DBF7D1A83D2AE6C19C2EE6_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_6;
		L_6 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mDBE39F8DFADAA1D303E8BFC83E07EE048D8BAF4D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_14 = (KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0*)(KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_15 = V_0;
		Dictionary_2_CopyTo_m5D401BD5924F24D7FBFBE4D91D73A1BDF2652915(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mC082298A1771B44B139F54FF3E51B35900F854A5_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint8_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_19;
		L_19 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint8_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		uint8_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		uint8_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		uint8_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		uint8_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m0779C0DC593B00380D6967F564E301B30B9739C5_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_5 = (EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9*)(EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m52FC66026B24488EFD47C9E78791519358D7B3A2_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* V_10 = NULL;
	uint8_t V_11 = 0x0;
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m0779C0DC593B00380D6967F564E301B30B9739C5(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint8_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint8_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_24;
		L_24 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint8_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint8_t L_35 = ___0_key;
		uint8_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		uint8_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		uint8_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint8_t L_61 = ___0_key;
		uint8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m9C062FB5CD856D5348D363D3E1F74DF57BBB9681(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_94 = V_10;
		uint8_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mA6A58501F2C18591F76B6576090AAA6150294931_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m0779C0DC593B00380D6967F564E301B30B9739C5(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint8_t L_21;
		L_21 = KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint8_t L_24;
		L_24 = KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m355ABF6DC1298ABF3E64E1B701CFB05FF57C7A50_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C062FB5CD856D5348D363D3E1F74DF57BBB9681_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mF1AF375936A728D98523689F3668DB55F1F89399(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF1AF375936A728D98523689F3668DB55F1F89399_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_3 = (EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9*)(EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_5 = __this->____entries;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint8_t* L_17 = (uint8_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m96F813E9E9F9710ADCC56FB99A10CA0870BEC0BB_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint8_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_20;
		L_20 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_21 = V_4;
		uint8_t L_22 = L_21->___key;
		uint8_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_25 = V_4;
		uint8_t L_26 = L_25->___key;
		uint8_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m264552CC795B3069C5B3098DFDFC764C45BE5C09_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint8_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_20;
		L_20 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_21 = V_4;
		uint8_t L_22 = L_21->___key;
		uint8_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_25 = V_4;
		uint8_t L_26 = L_25->___key;
		uint8_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		RuntimeObject** L_38 = ___1_value;
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_39 = V_4;
		RuntimeObject* L_40 = L_39->___value;
		*(RuntimeObject**)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_38, (void*)L_40);
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_44 = V_4;
		RuntimeObject** L_45 = (RuntimeObject**)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(RuntimeObject*));
	}

IL_0120:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_tFCF3627346C5CFC32C9A38A4DBEA84E5AF6D4BA8* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_014f:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		RuntimeObject** L_53 = ___1_value;
		il2cpp_codegen_initobj(L_53, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4022A44A51658A12965DBA2C5E2A91CB4B94C65D_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC082298A1771B44B139F54FF3E51B35900F854A5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m68949E833B94C89E3560B026F62EC93CD52746C6_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m52FC66026B24488EFD47C9E78791519358D7B3A2(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2E3AA165BAB0EB8C8CD51113246039B11E0CED36_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15AA7C3A9BFE94102E5CC708A1BF58DF1E8387E2_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m5D401BD5924F24D7FBFBE4D91D73A1BDF2652915(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mF422AACA439652354CF51281A9C12CF1D070091F_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mDBE39F8DFADAA1D303E8BFC83E07EE048D8BAF4D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4BDDA478B475904892D0A0A61AC326812B8D72A0* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m5D401BD5924F24D7FBFBE4D91D73A1BDF2652915(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint8_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			uint8_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m3528DC82BCBD9770D62D45268C06DBE5047C20FD((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m7217ABDB3586C07543C47FB0C4EA3D2D5F34CC91_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m628EF991E661825F29F73BCD8BFEA1393808628A((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9E6161925A9336B0CCEE16AA02EE7A35C8DBD763_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m549C4E21FA464C1899C336236DF7EB48092C3AFC_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m288094CACB7752DB575C0DD5789F376030F4A7E4(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mC082298A1771B44B139F54FF3E51B35900F854A5(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m71A1F5079B36F7ACD47B79825683C0AC99726200_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint8_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m8BEB94760CA6F27CF244C9860AD50B9339089AF4(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m288094CACB7752DB575C0DD5789F376030F4A7E4_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mB20FD27EDE7C9D373165F06AA28E61C52CAEC7A4_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m288094CACB7752DB575C0DD5789F376030F4A7E4(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m6E0C00BA51CEB9257B11032504ACC9D63D784742(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m526FA6CBE84F43AEA2C6E3AE190B7E4448D8EA6D_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m628EF991E661825F29F73BCD8BFEA1393808628A((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t8164D9759AE9FDA39A1891E8DB9B68BC7F00323D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4176E311F501886FA3E34A45D9603C3781FF62B6_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m91950FE975A2DCCD5F7168BE6F529961EB671643(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDA605685ED8A233D10C4B6DF3CF0E2633DDA44F2_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m91950FE975A2DCCD5F7168BE6F529961EB671643(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE026FA9EA64AB249F081435B359B8A59B0364BD7_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m91950FE975A2DCCD5F7168BE6F529961EB671643(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m91950FE975A2DCCD5F7168BE6F529961EB671643_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCDF38D4605A02297FDDAF58EB3E3993F9BED3174(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC6B346159D388C76FA849F7D3323F3F5C4F8CEBB_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mE51CE59401F0CB81764AF1C585783B4B3660D994(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE51CE59401F0CB81764AF1C585783B4B3660D994_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* G_B2_0 = NULL;
	Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m91950FE975A2DCCD5F7168BE6F529961EB671643(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* L_11 = ((Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m253C9E21F37383364B2604EBAE0B9E88F2470CFC(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_33;
				L_33 = KeyValuePair_2_get_Value_m37148D5550A742F6EB107E3C291FC50B010D5D3F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m253C9E21F37383364B2604EBAE0B9E88F2470CFC(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m51E0520F5705580F590D9EE5B003103BB7807FAB_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD338DBFD4865C507282FCE7D520A28FA7BED7906_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7* Dictionary_2_get_Keys_m9665422ED1DB61FC6F2AF2D9569A4C0A0AE4B652_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7* L_1 = (KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m29212657A9682B48550C50B6CDEAC0253382E545(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB14DDFD4E85C30A263C01947A99352F06F1545A7* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924* Dictionary_2_get_Values_m0497990F596CFCCED4D16D69B7322108FE3955DA_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924* L_1 = (ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_mE869BBDC5880EC0E297CA75F64F72AB05B13C66D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t1AF7B2585A331CE9B40AA2FA3A92538137851924* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B Dictionary_2_get_Item_m872A9C91C762C987D4F257971ABD2EDBE6D0EAF3_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mBE0DFA7EA7F5669FCD157D78B633488539F1AE37(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B));
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3E4086A3C89354690177397D2777588D3BB43698_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m2B5FD4C028BF3F52314136EBFCED5A0C494D9270(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m253C9E21F37383364B2604EBAE0B9E88F2470CFC_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m2B5FD4C028BF3F52314136EBFCED5A0C494D9270(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m0A8018C44068F468FD4755F3AFCBAD483DFDA1FC_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_1;
		L_1 = KeyValuePair_2_get_Value_m37148D5550A742F6EB107E3C291FC50B010D5D3F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m253C9E21F37383364B2604EBAE0B9E88F2470CFC(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2FF205DB1AE8E3F5DB6A3F180A70D840A15431A1_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mBE0DFA7EA7F5669FCD157D78B633488539F1AE37(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* L_3;
		L_3 = EqualityComparer_1_get_Default_m60DA9DC4D4BE7030F4FADB0959D39882D59325BF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_7;
		L_7 = KeyValuePair_2_get_Value_m37148D5550A742F6EB107E3C291FC50B010D5D3F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mCAB5AE84A86F94D0C8F2892741A4CB2D922458E1_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mBE0DFA7EA7F5669FCD157D78B633488539F1AE37(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* L_3;
		L_3 = EqualityComparer_1_get_Default_m60DA9DC4D4BE7030F4FADB0959D39882D59325BF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_7;
		L_7 = KeyValuePair_2_get_Value_m37148D5550A742F6EB107E3C291FC50B010D5D3F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m97975460FEBF67F286BF16FCC0035BE77FD6B076(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mAD2804AADB17BAA081D3C8C627F213E1FBCD7116_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m28428F52C9134E1DDCA8601B1F94995FF188C486_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mBE0DFA7EA7F5669FCD157D78B633488539F1AE37(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m3D17BB6FFAF52A3C70B9D1098BB38F09C9B30003_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* L_6;
		L_6 = EqualityComparer_1_get_Default_m60DA9DC4D4BE7030F4FADB0959D39882D59325BF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB5705365F9CEAB45A23D43D727D3D747D0D6CACD_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mD338DBFD4865C507282FCE7D520A28FA7BED7906(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m120642B9DE66F5FD29437815289A7E17CAB1A5E6((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C Dictionary_2_GetEnumerator_mEAF9C8949E13D9CD9AF40B0971B7CA5725E301AF_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0ACD26E9A2EE682E6CC3A0B0D365EF27D0FB1470((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mCE0401984AED4E2AE9B623F6B2483B1DDF7B5324_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0ACD26E9A2EE682E6CC3A0B0D365EF27D0FB1470((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mC75846172CD207F48C4C61892AE630243AF1B2BF_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mD338DBFD4865C507282FCE7D520A28FA7BED7906(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_14 = (KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4*)(KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_15 = V_0;
		Dictionary_2_CopyTo_mB5705365F9CEAB45A23D43D727D3D747D0D6CACD(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mBE0DFA7EA7F5669FCD157D78B633488539F1AE37_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCDF38D4605A02297FDDAF58EB3E3993F9BED3174_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_5 = (EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D*)(EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m2B5FD4C028BF3F52314136EBFCED5A0C494D9270_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCDF38D4605A02297FDDAF58EB3E3993F9BED3174(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m63D3C9918ECAD5E3B8C563A40E52810AF3411B8A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_96 = V_10;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->____delegate), (void*)NULL);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m4F138E836BB26F0BEF5025AF9A75EC29FABE55CB_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mCDF38D4605A02297FDDAF58EB3E3993F9BED3174(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_27;
		L_27 = KeyValuePair_2_get_Value_m37148D5550A742F6EB107E3C291FC50B010D5D3F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m253C9E21F37383364B2604EBAE0B9E88F2470CFC(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m63D3C9918ECAD5E3B8C563A40E52810AF3411B8A_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mBC81E11EBB602479DA095E71E73909A1CB97772D(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBC81E11EBB602479DA095E71E73909A1CB97772D_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_3 = (EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D*)(EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_5 = __this->____entries;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m97975460FEBF67F286BF16FCC0035BE77FD6B076_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_41 = V_4;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B* L_42 = (Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0EC9F69280E4FFB76AC204B56477B32E4FC27ABD_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B* L_38 = ___1_value;
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_39 = V_4;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_40 = L_39->___value;
		*(Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B*)L_38)->____delegate), (void*)NULL);
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_44 = V_4;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B* L_45 = (Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B*)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B));
	}

IL_0120:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_t0F70F98F155DD8459334AAA6D062F0F83E5CC517* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_014f:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B* L_53 = ___1_value;
		il2cpp_codegen_initobj(L_53, sizeof(Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1EDB7D2248C272116F06AD75B900249E7175E108_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mBE0DFA7EA7F5669FCD157D78B633488539F1AE37(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B* L_3 = ___1_value;
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B*)L_3)->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m75F8E2DB4A58820FB575DA749FC9490E933DCA5D_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, Guid_t ___0_key, Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m2B5FD4C028BF3F52314136EBFCED5A0C494D9270(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mB7B1D19F029D1FC25A64608FEE406C5EA82A740E_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mE461FCD20556D2D0094530FFCCB19B3DDB4E2FC5_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mB5705365F9CEAB45A23D43D727D3D747D0D6CACD(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mC12D7D7465B92584BD8487C2E6F6BDA5EF44CC67_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mD338DBFD4865C507282FCE7D520A28FA7BED7906(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4500D5069801AFDCF37124FD640E943D04BF29F4* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mB5705365F9CEAB45A23D43D727D3D747D0D6CACD(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m120642B9DE66F5FD29437815289A7E17CAB1A5E6((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9E64255362D9D561E83C5FF39ECFF3F5B8D7D2D9_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0ACD26E9A2EE682E6CC3A0B0D365EF27D0FB1470((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m0604F728BD260088619E5578CCFA5DBAF2898D58_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mFAC8CAF770E266A85C4C261C9F7664EF983BF766_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mAAFA70AC0CA3580B86DD1FD6E08AD7B1C24C0B33(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mBE0DFA7EA7F5669FCD157D78B633488539F1AE37(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t2E0BC7929A3C195AE618D67FF9AA0765833BD32D* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m629BD18BD614455F32DCBA05922AE93DF5E8F0F6_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t661347EAF47D1D5B40F8106C40F403A3BABB805B_m4965EBFC7B50B153DAF2AB04C5651635CAD2F3B4(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m3E4086A3C89354690177397D2777588D3BB43698(__this, L_3, ((*(Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B*)((Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B*)(Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mAAFA70AC0CA3580B86DD1FD6E08AD7B1C24C0B33_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m3418F7B75EB4731C73EAAE9FD09E109C8B1AFE54_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mAAFA70AC0CA3580B86DD1FD6E08AD7B1C24C0B33(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m28428F52C9134E1DDCA8601B1F94995FF188C486(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mA5E96815540E17F6880AE6750756DD63DAD0F19C_gshared (Dictionary_2_tE4DFE53B3A6B85B8CA08934DD9B689E21B16590A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0ACD26E9A2EE682E6CC3A0B0D365EF27D0FB1470((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tE1DBDF139E079499A79B49321FB972E654BB2A1C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDC15D0A86E43055433AF983AAB1B8FC8AE64FF5_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m59FF5E4677AF2E899AAE6D8CDC12F528BABAC67C(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB4AE7B1DEF75B777CBDBC74EB66BF3ACBC4718F0_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m59FF5E4677AF2E899AAE6D8CDC12F528BABAC67C(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5F2C75B3697CF482743E952BB4890D54E70F00E3_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m59FF5E4677AF2E899AAE6D8CDC12F528BABAC67C(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m59FF5E4677AF2E899AAE6D8CDC12F528BABAC67C_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m1EBACA63008A644E1DC927D1611ED9AB8520C95F(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8110DFD22D9DF842C560F86A0D173B121F258D67_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m800AE3E7FD80DD640F53BF8BC81CDE4EDCAA2729(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m800AE3E7FD80DD640F53BF8BC81CDE4EDCAA2729_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* G_B2_0 = NULL;
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m59FF5E4677AF2E899AAE6D8CDC12F528BABAC67C(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* L_11 = ((Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m86E7921CDE93630FCF225F97BDD540EBC5BBE4B5(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_33;
				L_33 = KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m86E7921CDE93630FCF225F97BDD540EBC5BBE4B5(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47FF01A9D4166D4746262351CA4DD19F964B1C4F_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC3A740D0BEE683D33CA05504D9BB614330D909BD_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* Dictionary_2_get_Keys_mA2E594DFE820EC9B7486E5D09099D512E041B2DB_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* L_1 = (KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mFCAE2D2C1C1C81769A4BB332BF9159315918B338(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* Dictionary_2_get_Values_m69759552B985287D50A1B72CB38BFB0E07E4A834_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* L_1 = (ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m64F5037EDCBBED4AB3AE23C931831DE35BCC4CB4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 Dictionary_2_get_Item_mF222629F79EE5214225E1D3BAC1C09A034DE0148_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0C7C6027F177115E2A64D662DBD0109738407518_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF378C6E7BB4E0256BCC88B18C67B33862EC75EEA(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m86E7921CDE93630FCF225F97BDD540EBC5BBE4B5_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF378C6E7BB4E0256BCC88B18C67B33862EC75EEA(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37876434B10D71BC84952B7E31FE10954C0DE09E_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_1;
		L_1 = KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m86E7921CDE93630FCF225F97BDD540EBC5BBE4B5(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m62B3F20CCE15CB77D64BA76FDBA4DB61E29A0030_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_3;
		L_3 = EqualityComparer_1_get_Default_m3E61EF636E95121B489A3D0142173FE27834FBD7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_7;
		L_7 = KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9618832E1B78D81460A2A01B73B65612E2A0444C_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_3;
		L_3 = EqualityComparer_1_get_Default_m3E61EF636E95121B489A3D0142173FE27834FBD7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_7;
		L_7 = KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m905E588A5819BB00CEE61AED70ADB494B69900D9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mD82C467CD621096944DFFE5CC1CB0BBB85A38BAD_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD969F6A580D73851321B8BA7F40F58FBFE2554E9_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7433AA4DC97C265291E5B2EFDA30198D6E46568F_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_6;
		L_6 = EqualityComparer_1_get_Default_m3E61EF636E95121B489A3D0142173FE27834FBD7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7B46550CE5C42D59370FA471B7C15509387A88A3_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC3A740D0BEE683D33CA05504D9BB614330D909BD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m24B652BB989676FB54EDD12DA60E7D13A5AF925E((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B Dictionary_2_GetEnumerator_m24ABA045907BEE80617341777576D521BFEADAC9_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m001D9B04D630E79A86A0B4D00FB7EA16306F8ECD_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m84A95323D5B15202BFD34CE3213BFDC87830841A_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC3A740D0BEE683D33CA05504D9BB614330D909BD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_14 = (KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*)(KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_15 = V_0;
		Dictionary_2_CopyTo_m7B46550CE5C42D59370FA471B7C15509387A88A3(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1EBACA63008A644E1DC927D1611ED9AB8520C95F_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_5 = (EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A*)(EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF378C6E7BB4E0256BCC88B18C67B33862EC75EEA_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m1EBACA63008A644E1DC927D1611ED9AB8520C95F(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m4024CA680E7BA1C93BD89F4884845528B25A8481(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_96 = V_10;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->____delegate), (void*)NULL);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mB06ABA9AD47ED29954EE4974B0C065593E683062_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m1EBACA63008A644E1DC927D1611ED9AB8520C95F(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_27;
		L_27 = KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m86E7921CDE93630FCF225F97BDD540EBC5BBE4B5(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4024CA680E7BA1C93BD89F4884845528B25A8481_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mE4DB1F9EEB1225F57530E4784E02322B93B40DB7(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE4DB1F9EEB1225F57530E4784E02322B93B40DB7_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_3 = (EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A*)(EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_5 = __this->____entries;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m905E588A5819BB00CEE61AED70ADB494B69900D9_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_41 = V_4;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_42 = (Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE691BEE15E10E8CF16D154731A882633B661B170_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_38 = ___1_value;
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_39 = V_4;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_40 = L_39->___value;
		*(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)L_38)->____delegate), (void*)NULL);
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_44 = V_4;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_45 = (Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
	}

IL_0120:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_014f:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_53 = ___1_value;
		il2cpp_codegen_initobj(L_53, sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD66101B781C1B79C723AA9E4DB34A3A29A3E32FE_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_3 = ___1_value;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)L_3)->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m83732769A3B71DD705AAEC559117B9E340506E1A_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF378C6E7BB4E0256BCC88B18C67B33862EC75EEA(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m08001F39ED0AE65C7A5914DE337648E4618D4897_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m62B8B72494D807095C743F5F972D6863FDD2AADA_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m7B46550CE5C42D59370FA471B7C15509387A88A3(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mE29B4B02BC8079E3865A653DFDDD5A4FE940A63A_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC3A740D0BEE683D33CA05504D9BB614330D909BD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m7B46550CE5C42D59370FA471B7C15509387A88A3(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m24B652BB989676FB54EDD12DA60E7D13A5AF925E((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mFF0542792830BF03269057316B594F8CB19395D9_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3F7F86C9AE641D8DB49113AEFABD3BCE9CED957D_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mE7CE88D0A8DE3DDBD0E4469CCF3F53EE13779E7B_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mDA09E66D1E1827388C42B7E1B2C8C6AB7273F75B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mBD0E6412D27BBDDFE37179008884BFDE2A3C9159_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30_mB34E86860EE1F62390E32B010458639D7AE34784(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m0C7C6027F177115E2A64D662DBD0109738407518(__this, L_3, ((*(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)((Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mDA09E66D1E1827388C42B7E1B2C8C6AB7273F75B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mFA7F604C0178446D8011B184753290ADE80E3D51_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mDA09E66D1E1827388C42B7E1B2C8C6AB7273F75B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mD969F6A580D73851321B8BA7F40F58FBFE2554E9(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8F155820C1C913A4556904422F526057CBD8F5B3_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5AB42D09E063AA0219B14519A1AF28CC8A207856_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m23746F45330979DC67FC026FA486871C2EB640D1(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m23013C365E4594A692C8CA74C5DD64359F711D0B_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m23746F45330979DC67FC026FA486871C2EB640D1(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92BD2FC3E1B52D21B5E3E80C6C7CBE2C45DFFCF0_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m23746F45330979DC67FC026FA486871C2EB640D1(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m23746F45330979DC67FC026FA486871C2EB640D1_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m09BCDE85BD43B188BBA0E73A6FA02687FC4876AA(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m53CBF4522B5AFF3CECFE429D3C6080F269B3B510_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m553C37C1F21E3267B21D164E32179ACB0A21D974(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m553C37C1F21E3267B21D164E32179ACB0A21D974_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* G_B2_0 = NULL;
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m23746F45330979DC67FC026FA486871C2EB640D1(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* L_11 = ((Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m25395CDFBF35C13C7AAC77FCA1A3BE870559D2BC(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_33;
				L_33 = KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m25395CDFBF35C13C7AAC77FCA1A3BE870559D2BC(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC5AF9A0ADD55815D150975312306D4A998968C22_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB6B69CA958F384D051ABC4E9E2EAB692046A7F3E_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* Dictionary_2_get_Keys_m08EC609F99F9F2B1E19814A54067A2A65E7F96A1_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* L_1 = (KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mB71E1278423E4F52365C6CD6134DE178C176DA29(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* Dictionary_2_get_Values_m711C50A4393F6BC04DAC860F0465EE0BFE637BF0_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* L_1 = (ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m4AEFC1B3E813401366606DE673A32A9135204C46(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 Dictionary_2_get_Item_m0732E71B9186F8DD5FADD143B3674106EBD052F8_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A967B5A7922AB2E6CC4935FFB6EFDA8F5EEC029_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m37D5F1C48F33458B57A78D59A9D1C878BDB06544(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m25395CDFBF35C13C7AAC77FCA1A3BE870559D2BC_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m37D5F1C48F33458B57A78D59A9D1C878BDB06544(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mA383B6403BB14D94D15DD85678BF045733FD1FC2_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_1;
		L_1 = KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m25395CDFBF35C13C7AAC77FCA1A3BE870559D2BC(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1414A7E1E644FC383069B045726228C100F4C519_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_3;
		L_3 = EqualityComparer_1_get_Default_m7104A9F2362A9A3A3DB4C56FC6DCF132E2370270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_7;
		L_7 = KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mAC0E715DE932077D1810F239A5987234468DD381_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_3;
		L_3 = EqualityComparer_1_get_Default_m7104A9F2362A9A3A3DB4C56FC6DCF132E2370270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_7;
		L_7 = KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mAEFCB8652B79869B803B02892152584DD08D65DC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1D9C7106B98991D9A33F2DAE6C714829759D99BD_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m824E7E45149FFA5370C26F71CF1B7D8920DCF8EE_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mCB053A2AAD9FD19C8146EFBA174A90D2C1247BCB_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_6;
		L_6 = EqualityComparer_1_get_Default_m7104A9F2362A9A3A3DB4C56FC6DCF132E2370270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB1D4DCEF3F5048C74DFD0802F27F9CC453013DBB_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mB6B69CA958F384D051ABC4E9E2EAB692046A7F3E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mB51582F33DA23CDE9D52DC88A9026C5098F4DD2C((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A Dictionary_2_GetEnumerator_m6B407BA3766F4ECDBC0DCFE5E995257B954DBB10_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m160EC9B3A044AD922ACE0369546E79A053208278_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m2A6D55BB9B1367D67DB73AD1A91EEE307F859461_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mB6B69CA958F384D051ABC4E9E2EAB692046A7F3E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_14 = (KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*)(KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 42), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_15 = V_0;
		Dictionary_2_CopyTo_mB1D4DCEF3F5048C74DFD0802F27F9CC453013DBB(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m09BCDE85BD43B188BBA0E73A6FA02687FC4876AA_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_5 = (EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E*)(EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m37D5F1C48F33458B57A78D59A9D1C878BDB06544_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m09BCDE85BD43B188BBA0E73A6FA02687FC4876AA(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m2C4C256DE0E3D50E65529675CC5F0B1233C7A0E5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_96 = V_10;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->____delegate), (void*)NULL);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m6E45D3D4F467F92C7D809A535B7CB7866A8DE439_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m09BCDE85BD43B188BBA0E73A6FA02687FC4876AA(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_27;
		L_27 = KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m25395CDFBF35C13C7AAC77FCA1A3BE870559D2BC(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2C4C256DE0E3D50E65529675CC5F0B1233C7A0E5_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m6ABA7C6D65342343845462EF61478E58B4B14631(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6ABA7C6D65342343845462EF61478E58B4B14631_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_3 = (EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E*)(EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_5 = __this->____entries;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAEFCB8652B79869B803B02892152584DD08D65DC_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_41 = V_4;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_42 = (Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7E19CC3C7CA18BF7334E3FF5888ADD6B560EB558_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_38 = ___1_value;
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_39 = V_4;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_40 = L_39->___value;
		*(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)L_38)->____delegate), (void*)NULL);
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_44 = V_4;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_45 = (Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
	}

IL_0120:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_014f:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_53 = ___1_value;
		il2cpp_codegen_initobj(L_53, sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0E3277A01CFDF475FC375CE9544251F58617A1B0_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_3 = ___1_value;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)L_3)->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m5933BAC94B09BDA316350DAC1337B97D52410AB6_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m37D5F1C48F33458B57A78D59A9D1C878BDB06544(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m6C6FE544EF205C882555C999BDD457D4EE111C77_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m47C52EC7240AC56FDFEFDB093775D514EA8E34F5_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mB1D4DCEF3F5048C74DFD0802F27F9CC453013DBB(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m17B0EACEE873B0DA85339E50C2155B4F96CBB358_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mB6B69CA958F384D051ABC4E9E2EAB692046A7F3E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mB1D4DCEF3F5048C74DFD0802F27F9CC453013DBB(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mB51582F33DA23CDE9D52DC88A9026C5098F4DD2C((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE325C8296E0FF8E37CB54CEFA17F737D0612CF4B_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mB63CB012C9393C0D9458A7B0211D571F8574650C_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mA2F8FC6A7105AF72795975C86BDF423637C8DB9B_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m09F4B9C2DB263EDD0F9CEB5B965DB2FD717438BA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mD8DF77BA9DD3220F681C68EF5134CC758ED8A0AD_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tD6F76A27427390AB039AE817762327D0D6848CF0_m8432547931BAC576423F18B1E75D6896F8F473E6(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m1A967B5A7922AB2E6CC4935FFB6EFDA8F5EEC029(__this, L_3, ((*(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)((Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m09F4B9C2DB263EDD0F9CEB5B965DB2FD717438BA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mDDE168CCA994443673996E37A6FCB6740967A87C_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m09F4B9C2DB263EDD0F9CEB5B965DB2FD717438BA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m824E7E45149FFA5370C26F71CF1B7D8920DCF8EE(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m379E947612E2499523BA360A5D9F98A6E3519F6B_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FindTransform_Invoke_mB1795BBACA6C805624B35FB1B2BCE942B97FE3B6_gshared_inline (FindTransform_tC499583A33189BE267A9A28ED61DB4DE63B28851* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_entry, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* FileSystemEnumerable_1_get_ShouldRecursePredicate_mAE1C26075F4D8E8BE4DFCF32D2F5F9F47C4C670A_gshared_inline (FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* __this, const RuntimeMethod* method) 
{
	{
		FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* L_0 = __this->___U3CShouldRecursePredicateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FindPredicate_Invoke_mC431E959AEB6D9456E3C5A09D86622262F9ADBC8_gshared_inline (FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* __this, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B* ___0_entry, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_entry, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* FileSystemEnumerable_1_get_ShouldIncludePredicate_m4743F78B88F0991B184EBBD3CE5DB0CCD8F187E1_gshared_inline (FileSystemEnumerable_1_t6CDB6C3CCEAAD4602A46A2EA5211E12D2DB57B94* __this, const RuntimeMethod* method) 
{
	{
		FindPredicate_tD904DBA38C8844BD03538991F629C55781F3000D* L_0 = __this->___U3CShouldIncludePredicateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* V_0 = NULL;
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_0 = ((EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE0A7C7D719A999F27B2C6C94F581C2A9B5FF3133(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_gshared_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_gshared_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method) 
{
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* V_0 = NULL;
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_0 = ((EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mA2F00D10E67D114ECAD52D68868F85E6B706A9FE(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_0 = NULL;
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_0 = ((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_0 = NULL;
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0 = ((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_mD020BD94BE8E29B3F934C29E21D4A8C3C68BC601_gshared_inline (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m355ABF6DC1298ABF3E64E1B701CFB05FF57C7A50_gshared_inline (KeyValuePair_2_t3B51106463A1D3484500F33BFD7972E98E98575F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_0 = NULL;
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_0 = ((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m497E2551FA28151A208CF9E7C35A188BB518181F_gshared_inline (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B KeyValuePair_2_get_Value_m37148D5550A742F6EB107E3C291FC50B010D5D3F_gshared_inline (KeyValuePair_2_t1CBD452920BDDC6C3DFB3D254BC81A6310683069* __this, const RuntimeMethod* method) 
{
	{
		Callback_t661347EAF47D1D5B40F8106C40F403A3BABB805B L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* EqualityComparer_1_get_Default_m60DA9DC4D4BE7030F4FADB0959D39882D59325BF_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* V_0 = NULL;
	{
		EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* L_0 = ((EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m25DE8D043E29228C235A21C69D8F45ED3C431B05(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t89A9E0ED70476911EF8BCD2C09EDFB468E886147* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_gshared_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_gshared_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method) 
{
	{
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* EqualityComparer_1_get_Default_m3E61EF636E95121B489A3D0142173FE27834FBD7_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* V_0 = NULL;
	{
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_0 = ((EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mF0341F8976F6E1BEDB057B5090539BD80B10C598(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_gshared_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_gshared_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method) 
{
	{
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* EqualityComparer_1_get_Default_m7104A9F2362A9A3A3DB4C56FC6DCF132E2370270_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* V_0 = NULL;
	{
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_0 = ((EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m1FBD63CB6C3BD3A53AB512192874FAEB9138A460(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_4 = V_0;
		return L_4;
	}
}
