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
#include "V8HTMLTableRowElement.h"

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

WrapperTypeInfo V8HTMLTableRowElement::info = { V8HTMLTableRowElement::GetTemplate, V8HTMLTableRowElement::derefObject, 0 };

namespace HTMLTableRowElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> rowIndexAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.rowIndex._get");
    HTMLTableRowElement* imp = V8HTMLTableRowElement::toNative(info.Holder());
    return v8::Integer::New(imp->rowIndex());
}

static v8::Handle<v8::Value> sectionRowIndexAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.sectionRowIndex._get");
    HTMLTableRowElement* imp = V8HTMLTableRowElement::toNative(info.Holder());
    return v8::Integer::New(imp->sectionRowIndex());
}

static v8::Handle<v8::Value> cellsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.cells._get");
    HTMLTableRowElement* imp = V8HTMLTableRowElement::toNative(info.Holder());
    return toV8(imp->cells());
}

static v8::Handle<v8::Value> alignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.align._get");
    return getElementStringAttr(info, HTMLNames::alignAttr);
}

static void alignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.align._set");
    setElementStringAttr(info, HTMLNames::alignAttr, value);
}

static v8::Handle<v8::Value> bgColorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.bgColor._get");
    return getElementStringAttr(info, HTMLNames::bgcolorAttr);
}

static void bgColorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.bgColor._set");
    setElementStringAttr(info, HTMLNames::bgcolorAttr, value);
}

static v8::Handle<v8::Value> chAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.ch._get");
    return getElementStringAttr(info, HTMLNames::charAttr);
}

static void chAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.ch._set");
    setElementStringAttr(info, HTMLNames::charAttr, value);
}

static v8::Handle<v8::Value> chOffAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.chOff._get");
    return getElementStringAttr(info, HTMLNames::charoffAttr);
}

static void chOffAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.chOff._set");
    setElementStringAttr(info, HTMLNames::charoffAttr, value);
}

static v8::Handle<v8::Value> vAlignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.vAlign._get");
    return getElementStringAttr(info, HTMLNames::valignAttr);
}

static void vAlignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableRowElement.vAlign._set");
    setElementStringAttr(info, HTMLNames::valignAttr, value);
}

static v8::Handle<v8::Value> insertCellCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableRowElement.insertCell");
    HTMLTableRowElement* imp = V8HTMLTableRowElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, index, toInt32(args[0]));
    RefPtr<HTMLElement> result = imp->insertCell(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> deleteCellCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableRowElement.deleteCell");
    HTMLTableRowElement* imp = V8HTMLTableRowElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, index, toInt32(args[0]));
    imp->deleteCell(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace HTMLTableRowElementInternal

static const BatchedAttribute HTMLTableRowElementAttrs[] = {
    // Attribute 'rowIndex' (Type: 'readonly attribute' ExtAttr: '')
    {"rowIndex", HTMLTableRowElementInternal::rowIndexAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sectionRowIndex' (Type: 'readonly attribute' ExtAttr: '')
    {"sectionRowIndex", HTMLTableRowElementInternal::sectionRowIndexAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cells' (Type: 'readonly attribute' ExtAttr: '')
    {"cells", HTMLTableRowElementInternal::cellsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'Reflect')
    {"align", HTMLTableRowElementInternal::alignAttrGetter, HTMLTableRowElementInternal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bgColor' (Type: 'attribute' ExtAttr: 'Reflect')
    {"bgColor", HTMLTableRowElementInternal::bgColorAttrGetter, HTMLTableRowElementInternal::bgColorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ch' (Type: 'attribute' ExtAttr: 'Reflect')
    {"ch", HTMLTableRowElementInternal::chAttrGetter, HTMLTableRowElementInternal::chAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'chOff' (Type: 'attribute' ExtAttr: 'Reflect')
    {"chOff", HTMLTableRowElementInternal::chOffAttrGetter, HTMLTableRowElementInternal::chOffAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vAlign' (Type: 'attribute' ExtAttr: 'Reflect')
    {"vAlign", HTMLTableRowElementInternal::vAlignAttrGetter, HTMLTableRowElementInternal::vAlignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback HTMLTableRowElementCallbacks[] = {
    {"insertCell", HTMLTableRowElementInternal::insertCellCallback},
    {"deleteCell", HTMLTableRowElementInternal::deleteCellCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLTableRowElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLTableRowElement", V8HTMLElement::GetTemplate(), V8HTMLTableRowElement::internalFieldCount,
        HTMLTableRowElementAttrs, sizeof(HTMLTableRowElementAttrs) / sizeof(*HTMLTableRowElementAttrs),
        HTMLTableRowElementCallbacks, sizeof(HTMLTableRowElementCallbacks) / sizeof(*HTMLTableRowElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLTableRowElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLTableRowElementRawCache = createRawTemplate();
    return V8HTMLTableRowElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLTableRowElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLTableRowElementCache = ConfigureV8HTMLTableRowElementTemplate(GetRawTemplate());
    return V8HTMLTableRowElementCache;
}

HTMLTableRowElement* V8HTMLTableRowElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLTableRowElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLTableRowElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLTableRowElement::wrap(HTMLTableRowElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLTableRowElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLTableRowElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLTableRowElement::wrap(impl);
}

void V8HTMLTableRowElement::derefObject(void* object)
{
    static_cast<HTMLTableRowElement*>(object)->deref();
}

} // namespace WebCore