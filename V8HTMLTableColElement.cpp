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
#include "V8HTMLTableColElement.h"

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLTableColElement::info = { V8HTMLTableColElement::GetTemplate, V8HTMLTableColElement::derefObject, 0 };

namespace HTMLTableColElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> alignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.align._get");
    return getElementStringAttr(info, HTMLNames::alignAttr);
}

static void alignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.align._set");
    setElementStringAttr(info, HTMLNames::alignAttr, value);
}

static v8::Handle<v8::Value> chAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.ch._get");
    return getElementStringAttr(info, HTMLNames::charAttr);
}

static void chAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.ch._set");
    setElementStringAttr(info, HTMLNames::charAttr, value);
}

static v8::Handle<v8::Value> chOffAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.chOff._get");
    return getElementStringAttr(info, HTMLNames::charoffAttr);
}

static void chOffAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.chOff._set");
    setElementStringAttr(info, HTMLNames::charoffAttr, value);
}

static v8::Handle<v8::Value> spanAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.span._get");
    HTMLTableColElement* imp = V8HTMLTableColElement::toNative(info.Holder());
    return v8::Integer::New(imp->span());
}

static void spanAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.span._set");
    HTMLTableColElement* imp = V8HTMLTableColElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setSpan(v);
    return;
}

static v8::Handle<v8::Value> vAlignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.vAlign._get");
    return getElementStringAttr(info, HTMLNames::valignAttr);
}

static void vAlignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.vAlign._set");
    setElementStringAttr(info, HTMLNames::valignAttr, value);
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.width._get");
    return getElementStringAttr(info, HTMLNames::widthAttr);
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableColElement.width._set");
    setElementStringAttr(info, HTMLNames::widthAttr, value);
}

} // namespace HTMLTableColElementInternal

static const BatchedAttribute HTMLTableColElementAttrs[] = {
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'Reflect')
    {"align", HTMLTableColElementInternal::alignAttrGetter, HTMLTableColElementInternal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ch' (Type: 'attribute' ExtAttr: 'Reflect')
    {"ch", HTMLTableColElementInternal::chAttrGetter, HTMLTableColElementInternal::chAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'chOff' (Type: 'attribute' ExtAttr: 'Reflect')
    {"chOff", HTMLTableColElementInternal::chOffAttrGetter, HTMLTableColElementInternal::chOffAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'span' (Type: 'attribute' ExtAttr: '')
    {"span", HTMLTableColElementInternal::spanAttrGetter, HTMLTableColElementInternal::spanAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vAlign' (Type: 'attribute' ExtAttr: 'Reflect')
    {"vAlign", HTMLTableColElementInternal::vAlignAttrGetter, HTMLTableColElementInternal::vAlignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'attribute' ExtAttr: 'Reflect')
    {"width", HTMLTableColElementInternal::widthAttrGetter, HTMLTableColElementInternal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLTableColElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLTableColElement", V8HTMLElement::GetTemplate(), V8HTMLTableColElement::internalFieldCount,
        HTMLTableColElementAttrs, sizeof(HTMLTableColElementAttrs) / sizeof(*HTMLTableColElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLTableColElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLTableColElementRawCache = createRawTemplate();
    return V8HTMLTableColElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLTableColElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLTableColElementCache = ConfigureV8HTMLTableColElementTemplate(GetRawTemplate());
    return V8HTMLTableColElementCache;
}

HTMLTableColElement* V8HTMLTableColElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLTableColElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLTableColElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLTableColElement::wrap(HTMLTableColElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLTableColElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLTableColElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLTableColElement::wrap(impl);
}

void V8HTMLTableColElement::derefObject(void* object)
{
    static_cast<HTMLTableColElement*>(object)->deref();
}

} // namespace WebCore