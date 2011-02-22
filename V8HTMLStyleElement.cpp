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
#include "V8HTMLStyleElement.h"

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8StyleSheet.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8HTMLStyleElement::info = { V8HTMLStyleElement::GetTemplate, V8HTMLStyleElement::derefObject, 0 };

namespace HTMLStyleElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> disabledAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLStyleElement.disabled._get");
    HTMLStyleElement* imp = V8HTMLStyleElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8Boolean(imp->hasAttribute(WebCore::HTMLNames::disabledAttr));
}

static void disabledAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLStyleElement.disabled._set");
    HTMLStyleElement* imp = V8HTMLStyleElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::disabledAttr, v);
    return;
}

static v8::Handle<v8::Value> mediaAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLStyleElement.media._get");
    return getElementStringAttr(info, HTMLNames::mediaAttr);
}

static void mediaAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLStyleElement.media._set");
    setElementStringAttr(info, HTMLNames::mediaAttr, value);
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLStyleElement.type._get");
    return getElementStringAttr(info, HTMLNames::typeAttr);
}

static void typeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLStyleElement.type._set");
    setElementStringAttr(info, HTMLNames::typeAttr, value);
}

static v8::Handle<v8::Value> sheetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLStyleElement.sheet._get");
    HTMLStyleElement* imp = V8HTMLStyleElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->sheet());
}

} // namespace HTMLStyleElementInternal

static const BatchedAttribute HTMLStyleElementAttrs[] = {
    // Attribute 'disabled' (Type: 'attribute' ExtAttr: 'Reflect')
    {"disabled", HTMLStyleElementInternal::disabledAttrGetter, HTMLStyleElementInternal::disabledAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'media' (Type: 'attribute' ExtAttr: 'Reflect')
    {"media", HTMLStyleElementInternal::mediaAttrGetter, HTMLStyleElementInternal::mediaAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'attribute' ExtAttr: 'Reflect')
    {"type", HTMLStyleElementInternal::typeAttrGetter, HTMLStyleElementInternal::typeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sheet' (Type: 'readonly attribute' ExtAttr: '')
    {"sheet", HTMLStyleElementInternal::sheetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLStyleElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLStyleElement", V8HTMLElement::GetTemplate(), V8HTMLStyleElement::internalFieldCount,
        HTMLStyleElementAttrs, sizeof(HTMLStyleElementAttrs) / sizeof(*HTMLStyleElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLStyleElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLStyleElementRawCache = createRawTemplate();
    return V8HTMLStyleElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLStyleElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLStyleElementCache = ConfigureV8HTMLStyleElementTemplate(GetRawTemplate());
    return V8HTMLStyleElementCache;
}

HTMLStyleElement* V8HTMLStyleElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLStyleElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLStyleElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLStyleElement::wrap(HTMLStyleElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl))
            proxy->windowShell()->initContextIfNeeded();
    }

        wrapper = V8DOMWrapper::getWrapper(impl);
        if (!wrapper.IsEmpty())
            return wrapper;

    v8::Handle<v8::Context> context;
    if (proxy)
        context = proxy->context();

    // Enter the node's context and create the wrapper in that context.
    if (!context.IsEmpty())
        context->Enter();
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    // Exit the node's context if it was entered.
    if (!context.IsEmpty())
        context->Exit();
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getDOMNodeMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLStyleElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLStyleElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLStyleElement::wrap(impl);
}

void V8HTMLStyleElement::derefObject(void* object)
{
    static_cast<HTMLStyleElement*>(object)->deref();
}

} // namespace WebCore
