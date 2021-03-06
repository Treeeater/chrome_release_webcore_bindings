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
#include "V8CSSStyleDeclaration.h"

#include "CSSMutableStyleDeclaration.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8CSSRule.h"
#include "V8CSSValue.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8CSSStyleDeclaration::info = { V8CSSStyleDeclaration::GetTemplate, V8CSSStyleDeclaration::derefObject, 0 };

namespace CSSStyleDeclarationInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> cssTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSStyleDeclaration.cssText._get");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(info.Holder());
    return v8StringOrNull(imp->cssText());
}

static void cssTextAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSStyleDeclaration.cssText._set");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    ExceptionCode ec = 0;
    imp->setCssText(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSStyleDeclaration.length._get");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

static v8::Handle<v8::Value> parentRuleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSStyleDeclaration.parentRule._get");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(info.Holder());
    RefPtr<CSSRule> result = imp->parentRule();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> getPropertyValueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSStyleDeclaration.getPropertyValue");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, propertyName, args[0]);
    return v8StringOrNull(imp->getPropertyValue(propertyName));
}

static v8::Handle<v8::Value> getPropertyCSSValueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSStyleDeclaration.getPropertyCSSValue");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, propertyName, args[0]);
    return toV8(imp->getPropertyCSSValue(propertyName));
}

static v8::Handle<v8::Value> removePropertyCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSStyleDeclaration.removeProperty");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, propertyName, args[0]);
    String result = imp->removeProperty(propertyName, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8StringOrNull(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getPropertyPriorityCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSStyleDeclaration.getPropertyPriority");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, propertyName, args[0]);
    return v8StringOrNull(imp->getPropertyPriority(propertyName));
}

static v8::Handle<v8::Value> setPropertyCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSStyleDeclaration.setProperty");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, propertyName, args[0]);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<WithNullCheck>, value, args[1]);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, priority, args[2]);
    imp->setProperty(propertyName, value, priority, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> itemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSStyleDeclaration.item");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(args.Holder());
    EXCEPTION_BLOCK(unsigned, index, toUInt32(args[0]));
    return v8String(imp->item(index));
}

static v8::Handle<v8::Value> getPropertyShorthandCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSStyleDeclaration.getPropertyShorthand");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, propertyName, args[0]);
    return v8StringOrNull(imp->getPropertyShorthand(propertyName));
}

static v8::Handle<v8::Value> isPropertyImplicitCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSStyleDeclaration.isPropertyImplicit");
    CSSStyleDeclaration* imp = V8CSSStyleDeclaration::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, propertyName, args[0]);
    return v8Boolean(imp->isPropertyImplicit(propertyName));
}

} // namespace CSSStyleDeclarationInternal

static const BatchedAttribute CSSStyleDeclarationAttrs[] = {
    // Attribute 'cssText' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString ConvertNullStringTo')
    {"cssText", CSSStyleDeclarationInternal::cssTextAttrGetter, CSSStyleDeclarationInternal::cssTextAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", CSSStyleDeclarationInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'parentRule' (Type: 'readonly attribute' ExtAttr: '')
    {"parentRule", CSSStyleDeclarationInternal::parentRuleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback CSSStyleDeclarationCallbacks[] = {
    {"getPropertyValue", CSSStyleDeclarationInternal::getPropertyValueCallback},
    {"getPropertyCSSValue", CSSStyleDeclarationInternal::getPropertyCSSValueCallback},
    {"removeProperty", CSSStyleDeclarationInternal::removePropertyCallback},
    {"getPropertyPriority", CSSStyleDeclarationInternal::getPropertyPriorityCallback},
    {"setProperty", CSSStyleDeclarationInternal::setPropertyCallback},
    {"item", CSSStyleDeclarationInternal::itemCallback},
    {"getPropertyShorthand", CSSStyleDeclarationInternal::getPropertyShorthandCallback},
    {"isPropertyImplicit", CSSStyleDeclarationInternal::isPropertyImplicitCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8CSSStyleDeclarationTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "CSSStyleDeclaration", v8::Persistent<v8::FunctionTemplate>(), V8CSSStyleDeclaration::internalFieldCount,
        CSSStyleDeclarationAttrs, sizeof(CSSStyleDeclarationAttrs) / sizeof(*CSSStyleDeclarationAttrs),
        CSSStyleDeclarationCallbacks, sizeof(CSSStyleDeclarationCallbacks) / sizeof(*CSSStyleDeclarationCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    setCollectionStringIndexedGetter<CSSStyleDeclaration>(desc);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8CSSStyleDeclaration::namedPropertyGetter, V8CSSStyleDeclaration::namedPropertySetter, 0, 0, 0);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8CSSStyleDeclaration::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8CSSStyleDeclarationRawCache = createRawTemplate();
    return V8CSSStyleDeclarationRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8CSSStyleDeclaration::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8CSSStyleDeclarationCache = ConfigureV8CSSStyleDeclarationTemplate(GetRawTemplate());
    return V8CSSStyleDeclarationCache;
}

CSSStyleDeclaration* V8CSSStyleDeclaration::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<CSSStyleDeclaration*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8CSSStyleDeclaration::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8CSSStyleDeclaration::wrap(CSSStyleDeclaration* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
        wrapper = getDOMObjectMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getDOMObjectMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<CSSStyleDeclaration > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(CSSStyleDeclaration* impl)
{
    if (!impl)
        return v8::Null();
    return V8CSSStyleDeclaration::wrap(impl);
}

void V8CSSStyleDeclaration::derefObject(void* object)
{
    static_cast<CSSStyleDeclaration*>(object)->deref();
}

} // namespace WebCore
