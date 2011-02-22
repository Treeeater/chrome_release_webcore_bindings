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
#include "V8HTMLTableSectionElement.h"

#include "ExceptionCode.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLCollection.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8HTMLTableSectionElement::info = { V8HTMLTableSectionElement::GetTemplate, V8HTMLTableSectionElement::derefObject, 0 };

namespace HTMLTableSectionElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> alignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableSectionElement.align._get");
    return getElementStringAttr(info, HTMLNames::alignAttr);
}

static void alignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableSectionElement.align._set");
    setElementStringAttr(info, HTMLNames::alignAttr, value);
}

static v8::Handle<v8::Value> chAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableSectionElement.ch._get");
    return getElementStringAttr(info, HTMLNames::charAttr);
}

static void chAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableSectionElement.ch._set");
    setElementStringAttr(info, HTMLNames::charAttr, value);
}

static v8::Handle<v8::Value> chOffAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableSectionElement.chOff._get");
    return getElementStringAttr(info, HTMLNames::charoffAttr);
}

static void chOffAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableSectionElement.chOff._set");
    setElementStringAttr(info, HTMLNames::charoffAttr, value);
}

static v8::Handle<v8::Value> vAlignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableSectionElement.vAlign._get");
    return getElementStringAttr(info, HTMLNames::valignAttr);
}

static void vAlignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableSectionElement.vAlign._set");
    setElementStringAttr(info, HTMLNames::valignAttr, value);
}

static v8::Handle<v8::Value> rowsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableSectionElement.rows._get");
    HTMLTableSectionElement* imp = V8HTMLTableSectionElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->rows());
}

static v8::Handle<v8::Value> insertRowCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableSectionElement.insertRow");
    HTMLTableSectionElement* imp = V8HTMLTableSectionElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, index, toInt32(args[0]));
    RefPtr<HTMLElement> result = imp->insertRow(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> deleteRowCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableSectionElement.deleteRow");
    HTMLTableSectionElement* imp = V8HTMLTableSectionElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, index, toInt32(args[0]));
    imp->deleteRow(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace HTMLTableSectionElementInternal

static const BatchedAttribute HTMLTableSectionElementAttrs[] = {
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'Reflect')
    {"align", HTMLTableSectionElementInternal::alignAttrGetter, HTMLTableSectionElementInternal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ch' (Type: 'attribute' ExtAttr: 'Reflect')
    {"ch", HTMLTableSectionElementInternal::chAttrGetter, HTMLTableSectionElementInternal::chAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'chOff' (Type: 'attribute' ExtAttr: 'Reflect')
    {"chOff", HTMLTableSectionElementInternal::chOffAttrGetter, HTMLTableSectionElementInternal::chOffAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vAlign' (Type: 'attribute' ExtAttr: 'Reflect')
    {"vAlign", HTMLTableSectionElementInternal::vAlignAttrGetter, HTMLTableSectionElementInternal::vAlignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rows' (Type: 'readonly attribute' ExtAttr: '')
    {"rows", HTMLTableSectionElementInternal::rowsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback HTMLTableSectionElementCallbacks[] = {
    {"insertRow", HTMLTableSectionElementInternal::insertRowCallback},
    {"deleteRow", HTMLTableSectionElementInternal::deleteRowCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLTableSectionElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLTableSectionElement", V8HTMLElement::GetTemplate(), V8HTMLTableSectionElement::internalFieldCount,
        HTMLTableSectionElementAttrs, sizeof(HTMLTableSectionElementAttrs) / sizeof(*HTMLTableSectionElementAttrs),
        HTMLTableSectionElementCallbacks, sizeof(HTMLTableSectionElementCallbacks) / sizeof(*HTMLTableSectionElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLTableSectionElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLTableSectionElementRawCache = createRawTemplate();
    return V8HTMLTableSectionElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLTableSectionElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLTableSectionElementCache = ConfigureV8HTMLTableSectionElementTemplate(GetRawTemplate());
    return V8HTMLTableSectionElementCache;
}

HTMLTableSectionElement* V8HTMLTableSectionElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLTableSectionElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLTableSectionElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLTableSectionElement::wrap(HTMLTableSectionElement* impl, bool forceNewObject)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl))
            proxy->windowShell()->initContextIfNeeded();
    }

    if (!forceNewObject) {
        wrapper = V8DOMWrapper::getWrapper(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    }

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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLTableSectionElement > impl, bool forceNewObject)
{
    return toV8(impl.get(), forceNewObject);
}

v8::Handle<v8::Value> toV8(HTMLTableSectionElement* impl, bool forceNewObject)
{
    if (!impl)
        return v8::Null();
    return V8HTMLTableSectionElement::wrap(impl, forceNewObject);
}

void V8HTMLTableSectionElement::derefObject(void* object)
{
    static_cast<HTMLTableSectionElement*>(object)->deref();
}

} // namespace WebCore
