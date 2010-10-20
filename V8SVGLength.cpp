/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#include "config.h"
#include "V8SVGLength.h"

#if ENABLE(SVG)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGPODTypeWrapper.h"

namespace WebCore {

WrapperTypeInfo V8SVGLength::info = { V8SVGLength::GetTemplate, V8SVGLength::derefObject, 0 };

namespace SVGLengthInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> unitTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLength.unitType._get");
    V8SVGPODTypeWrapper<SVGLength>* impWrapper = V8SVGPODTypeWrapper<SVGLength>::toNative(info.Holder());
    SVGLength impInstance = *impWrapper;
    SVGLength* imp = &impInstance;
    return v8::Integer::New(imp->unitType());
}

static void valueAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLength.value._set");
    V8SVGPODTypeWrapper<SVGLength>* wrapper = V8SVGPODTypeWrapper<SVGLength>::toNative(info.Holder());
    SVGLength impInstance = *wrapper;
    SVGLength* imp = &impInstance;
    float v = static_cast<float>(value->NumberValue());
    imp->setValue(v);
    wrapper->commitChange(*imp, V8Proxy::svgContext(wrapper));
    return;
}

static v8::Handle<v8::Value> valueInSpecifiedUnitsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLength.valueInSpecifiedUnits._get");
    V8SVGPODTypeWrapper<SVGLength>* impWrapper = V8SVGPODTypeWrapper<SVGLength>::toNative(info.Holder());
    SVGLength impInstance = *impWrapper;
    SVGLength* imp = &impInstance;
    return v8::Number::New(imp->valueInSpecifiedUnits());
}

static void valueInSpecifiedUnitsAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLength.valueInSpecifiedUnits._set");
    V8SVGPODTypeWrapper<SVGLength>* wrapper = V8SVGPODTypeWrapper<SVGLength>::toNative(info.Holder());
    SVGLength impInstance = *wrapper;
    SVGLength* imp = &impInstance;
    float v = static_cast<float>(value->NumberValue());
    imp->setValueInSpecifiedUnits(v);
    wrapper->commitChange(*imp, V8Proxy::svgContext(wrapper));
    return;
}

static v8::Handle<v8::Value> valueAsStringAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLength.valueAsString._get");
    V8SVGPODTypeWrapper<SVGLength>* impWrapper = V8SVGPODTypeWrapper<SVGLength>::toNative(info.Holder());
    SVGLength impInstance = *impWrapper;
    SVGLength* imp = &impInstance;
    return v8String(imp->valueAsString());
}

static void valueAsStringAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLength.valueAsString._set");
    V8SVGPODTypeWrapper<SVGLength>* wrapper = V8SVGPODTypeWrapper<SVGLength>::toNative(info.Holder());
    SVGLength impInstance = *wrapper;
    SVGLength* imp = &impInstance;
    V8Parameter<WithNullCheck> v = value;
    imp->setValueAsString(v);
    wrapper->commitChange(*imp, V8Proxy::svgContext(wrapper));
    return;
}

static v8::Handle<v8::Value> newValueSpecifiedUnitsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGLength.newValueSpecifiedUnits");
    V8SVGPODTypeWrapper<SVGLength>* impWrapper = V8SVGPODTypeWrapper<SVGLength>::toNative(args.Holder());
    SVGLength impInstance = *impWrapper;
    SVGLength* imp = &impInstance;
    EXCEPTION_BLOCK(int, unitType, toUInt32(args[0]));
    EXCEPTION_BLOCK(float, valueInSpecifiedUnits, static_cast<float>(args[1]->NumberValue()));
    imp->newValueSpecifiedUnits(unitType, valueInSpecifiedUnits);
    SVGElement* context = V8Proxy::svgContext(impWrapper);
    impWrapper->commitChange(impInstance, context);
    return v8::Handle<v8::Value>();
}

} // namespace SVGLengthInternal

static const BatchedAttribute SVGLengthAttrs[] = {
    // Attribute 'unitType' (Type: 'readonly attribute' ExtAttr: '')
    {"unitType", SVGLengthInternal::unitTypeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'value' (Type: 'attribute' ExtAttr: 'CustomGetter')
    {"value", V8SVGLength::valueAccessorGetter, SVGLengthInternal::valueAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'valueInSpecifiedUnits' (Type: 'attribute' ExtAttr: '')
    {"valueInSpecifiedUnits", SVGLengthInternal::valueInSpecifiedUnitsAttrGetter, SVGLengthInternal::valueInSpecifiedUnitsAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'valueAsString' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"valueAsString", SVGLengthInternal::valueAsStringAttrGetter, SVGLengthInternal::valueAsStringAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback SVGLengthCallbacks[] = {
    {"newValueSpecifiedUnits", SVGLengthInternal::newValueSpecifiedUnitsCallback},
    {"convertToSpecifiedUnits", V8SVGLength::convertToSpecifiedUnitsCallback},
};
static const BatchedConstant SVGLengthConsts[] = {
    {"SVG_LENGTHTYPE_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_LENGTHTYPE_NUMBER", static_cast<signed int>(1)},
    {"SVG_LENGTHTYPE_PERCENTAGE", static_cast<signed int>(2)},
    {"SVG_LENGTHTYPE_EMS", static_cast<signed int>(3)},
    {"SVG_LENGTHTYPE_EXS", static_cast<signed int>(4)},
    {"SVG_LENGTHTYPE_PX", static_cast<signed int>(5)},
    {"SVG_LENGTHTYPE_CM", static_cast<signed int>(6)},
    {"SVG_LENGTHTYPE_MM", static_cast<signed int>(7)},
    {"SVG_LENGTHTYPE_IN", static_cast<signed int>(8)},
    {"SVG_LENGTHTYPE_PT", static_cast<signed int>(9)},
    {"SVG_LENGTHTYPE_PC", static_cast<signed int>(10)},
};

COMPILE_ASSERT(0 == SVGLength::SVG_LENGTHTYPE_UNKNOWN, SVGLengthEnumSVG_LENGTHTYPE_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGLength::SVG_LENGTHTYPE_NUMBER, SVGLengthEnumSVG_LENGTHTYPE_NUMBERIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGLength::SVG_LENGTHTYPE_PERCENTAGE, SVGLengthEnumSVG_LENGTHTYPE_PERCENTAGEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == SVGLength::SVG_LENGTHTYPE_EMS, SVGLengthEnumSVG_LENGTHTYPE_EMSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == SVGLength::SVG_LENGTHTYPE_EXS, SVGLengthEnumSVG_LENGTHTYPE_EXSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == SVGLength::SVG_LENGTHTYPE_PX, SVGLengthEnumSVG_LENGTHTYPE_PXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == SVGLength::SVG_LENGTHTYPE_CM, SVGLengthEnumSVG_LENGTHTYPE_CMIsWrongUseDontCheckEnums);
COMPILE_ASSERT(7 == SVGLength::SVG_LENGTHTYPE_MM, SVGLengthEnumSVG_LENGTHTYPE_MMIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == SVGLength::SVG_LENGTHTYPE_IN, SVGLengthEnumSVG_LENGTHTYPE_INIsWrongUseDontCheckEnums);
COMPILE_ASSERT(9 == SVGLength::SVG_LENGTHTYPE_PT, SVGLengthEnumSVG_LENGTHTYPE_PTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(10 == SVGLength::SVG_LENGTHTYPE_PC, SVGLengthEnumSVG_LENGTHTYPE_PCIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGLengthTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGLength", v8::Persistent<v8::FunctionTemplate>(), V8SVGLength::internalFieldCount,
        SVGLengthAttrs, sizeof(SVGLengthAttrs) / sizeof(*SVGLengthAttrs),
        SVGLengthCallbacks, sizeof(SVGLengthCallbacks) / sizeof(*SVGLengthCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, SVGLengthConsts, sizeof(SVGLengthConsts) / sizeof(*SVGLengthConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGLength::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGLengthRawCache = createRawTemplate();
    return V8SVGLengthRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGLength::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGLengthCache = ConfigureV8SVGLengthTemplate(GetRawTemplate());
    return V8SVGLengthCache;
}

V8SVGPODTypeWrapper<SVGLength>* V8SVGLength::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<V8SVGPODTypeWrapper<SVGLength>*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGLength::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGLength::wrap(V8SVGPODTypeWrapper<SVGLength>* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
        wrapper = getDOMSVGObjectWithContextMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getDOMSVGObjectWithContextMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<V8SVGPODTypeWrapper<SVGLength> > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(V8SVGPODTypeWrapper<SVGLength>* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGLength::wrap(impl);
}

void V8SVGLength::derefObject(void* object)
{
    static_cast<V8SVGPODTypeWrapper<SVGLength>*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)