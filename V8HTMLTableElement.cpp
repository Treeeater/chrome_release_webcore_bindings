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
#include "V8HTMLTableElement.h"

#include "ExceptionCode.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLCollection.h"
#include "V8HTMLElement.h"
#include "V8HTMLTableCaptionElement.h"
#include "V8HTMLTableSectionElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8HTMLTableElement::info = { V8HTMLTableElement::GetTemplate, V8HTMLTableElement::derefObject, 0 };

namespace HTMLTableElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> captionAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.caption._get");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->caption());
}

static void captionAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.caption._set");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(info.Holder());
    HTMLTableCaptionElement* v = V8HTMLTableCaptionElement::HasInstance(value) ? V8HTMLTableCaptionElement::toNative(v8::Handle<v8::Object>::Cast(value)) : 0;
    ExceptionCode ec = 0;
    imp->setCaption(WTF::getPtr(v), ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> tHeadAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.tHead._get");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->tHead());
}

static void tHeadAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.tHead._set");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(info.Holder());
    HTMLTableSectionElement* v = V8HTMLTableSectionElement::HasInstance(value) ? V8HTMLTableSectionElement::toNative(v8::Handle<v8::Object>::Cast(value)) : 0;
    ExceptionCode ec = 0;
    imp->setTHead(WTF::getPtr(v), ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> tFootAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.tFoot._get");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->tFoot());
}

static void tFootAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.tFoot._set");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(info.Holder());
    HTMLTableSectionElement* v = V8HTMLTableSectionElement::HasInstance(value) ? V8HTMLTableSectionElement::toNative(v8::Handle<v8::Object>::Cast(value)) : 0;
    ExceptionCode ec = 0;
    imp->setTFoot(WTF::getPtr(v), ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> rowsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.rows._get");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->rows());
}

static v8::Handle<v8::Value> tBodiesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.tBodies._get");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->tBodies());
}

static v8::Handle<v8::Value> alignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.align._get");
    return getElementStringAttr(info, HTMLNames::alignAttr);
}

static void alignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.align._set");
    setElementStringAttr(info, HTMLNames::alignAttr, value);
}

static v8::Handle<v8::Value> bgColorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.bgColor._get");
    return getElementStringAttr(info, HTMLNames::bgcolorAttr);
}

static void bgColorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.bgColor._set");
    setElementStringAttr(info, HTMLNames::bgcolorAttr, value);
}

static v8::Handle<v8::Value> borderAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.border._get");
    return getElementStringAttr(info, HTMLNames::borderAttr);
}

static void borderAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.border._set");
    setElementStringAttr(info, HTMLNames::borderAttr, value);
}

static v8::Handle<v8::Value> cellPaddingAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.cellPadding._get");
    return getElementStringAttr(info, HTMLNames::cellpaddingAttr);
}

static void cellPaddingAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.cellPadding._set");
    setElementStringAttr(info, HTMLNames::cellpaddingAttr, value);
}

static v8::Handle<v8::Value> cellSpacingAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.cellSpacing._get");
    return getElementStringAttr(info, HTMLNames::cellspacingAttr);
}

static void cellSpacingAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.cellSpacing._set");
    setElementStringAttr(info, HTMLNames::cellspacingAttr, value);
}

static v8::Handle<v8::Value> frameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.frame._get");
    return getElementStringAttr(info, HTMLNames::frameAttr);
}

static void frameAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.frame._set");
    setElementStringAttr(info, HTMLNames::frameAttr, value);
}

static v8::Handle<v8::Value> rulesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.rules._get");
    return getElementStringAttr(info, HTMLNames::rulesAttr);
}

static void rulesAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.rules._set");
    setElementStringAttr(info, HTMLNames::rulesAttr, value);
}

static v8::Handle<v8::Value> summaryAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.summary._get");
    return getElementStringAttr(info, HTMLNames::summaryAttr);
}

static void summaryAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.summary._set");
    setElementStringAttr(info, HTMLNames::summaryAttr, value);
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.width._get");
    return getElementStringAttr(info, HTMLNames::widthAttr);
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLTableElement.width._set");
    setElementStringAttr(info, HTMLNames::widthAttr, value);
}

static v8::Handle<v8::Value> createTHeadCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableElement.createTHead");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(args.Holder());
    return toV8(imp->createTHead());
}

static v8::Handle<v8::Value> deleteTHeadCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableElement.deleteTHead");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(args.Holder());
    imp->deleteTHead();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> createTFootCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableElement.createTFoot");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(args.Holder());
    return toV8(imp->createTFoot());
}

static v8::Handle<v8::Value> deleteTFootCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableElement.deleteTFoot");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(args.Holder());
    imp->deleteTFoot();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> createCaptionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableElement.createCaption");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(args.Holder());
    return toV8(imp->createCaption());
}

static v8::Handle<v8::Value> deleteCaptionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableElement.deleteCaption");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(args.Holder());
    imp->deleteCaption();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> insertRowCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLTableElement.insertRow");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(args.Holder());
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
    INC_STATS("DOM.HTMLTableElement.deleteRow");
    HTMLTableElement* imp = V8HTMLTableElement::toNative(args.Holder());
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

} // namespace HTMLTableElementInternal

static const BatchedAttribute HTMLTableElementAttrs[] = {
    // Attribute 'caption' (Type: 'attribute' ExtAttr: '')
    {"caption", HTMLTableElementInternal::captionAttrGetter, HTMLTableElementInternal::captionAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'tHead' (Type: 'attribute' ExtAttr: '')
    {"tHead", HTMLTableElementInternal::tHeadAttrGetter, HTMLTableElementInternal::tHeadAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'tFoot' (Type: 'attribute' ExtAttr: '')
    {"tFoot", HTMLTableElementInternal::tFootAttrGetter, HTMLTableElementInternal::tFootAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rows' (Type: 'readonly attribute' ExtAttr: '')
    {"rows", HTMLTableElementInternal::rowsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'tBodies' (Type: 'readonly attribute' ExtAttr: '')
    {"tBodies", HTMLTableElementInternal::tBodiesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'Reflect')
    {"align", HTMLTableElementInternal::alignAttrGetter, HTMLTableElementInternal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bgColor' (Type: 'attribute' ExtAttr: 'Reflect')
    {"bgColor", HTMLTableElementInternal::bgColorAttrGetter, HTMLTableElementInternal::bgColorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'border' (Type: 'attribute' ExtAttr: 'Reflect')
    {"border", HTMLTableElementInternal::borderAttrGetter, HTMLTableElementInternal::borderAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cellPadding' (Type: 'attribute' ExtAttr: 'Reflect')
    {"cellPadding", HTMLTableElementInternal::cellPaddingAttrGetter, HTMLTableElementInternal::cellPaddingAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cellSpacing' (Type: 'attribute' ExtAttr: 'Reflect')
    {"cellSpacing", HTMLTableElementInternal::cellSpacingAttrGetter, HTMLTableElementInternal::cellSpacingAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'frame' (Type: 'attribute' ExtAttr: 'Reflect')
    {"frame", HTMLTableElementInternal::frameAttrGetter, HTMLTableElementInternal::frameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rules' (Type: 'attribute' ExtAttr: 'Reflect')
    {"rules", HTMLTableElementInternal::rulesAttrGetter, HTMLTableElementInternal::rulesAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'summary' (Type: 'attribute' ExtAttr: 'Reflect')
    {"summary", HTMLTableElementInternal::summaryAttrGetter, HTMLTableElementInternal::summaryAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'attribute' ExtAttr: 'Reflect')
    {"width", HTMLTableElementInternal::widthAttrGetter, HTMLTableElementInternal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback HTMLTableElementCallbacks[] = {
    {"createTHead", HTMLTableElementInternal::createTHeadCallback},
    {"deleteTHead", HTMLTableElementInternal::deleteTHeadCallback},
    {"createTFoot", HTMLTableElementInternal::createTFootCallback},
    {"deleteTFoot", HTMLTableElementInternal::deleteTFootCallback},
    {"createCaption", HTMLTableElementInternal::createCaptionCallback},
    {"deleteCaption", HTMLTableElementInternal::deleteCaptionCallback},
    {"insertRow", HTMLTableElementInternal::insertRowCallback},
    {"deleteRow", HTMLTableElementInternal::deleteRowCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLTableElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLTableElement", V8HTMLElement::GetTemplate(), V8HTMLTableElement::internalFieldCount,
        HTMLTableElementAttrs, sizeof(HTMLTableElementAttrs) / sizeof(*HTMLTableElementAttrs),
        HTMLTableElementCallbacks, sizeof(HTMLTableElementCallbacks) / sizeof(*HTMLTableElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLTableElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLTableElementRawCache = createRawTemplate();
    return V8HTMLTableElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLTableElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLTableElementCache = ConfigureV8HTMLTableElementTemplate(GetRawTemplate());
    return V8HTMLTableElementCache;
}

HTMLTableElement* V8HTMLTableElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLTableElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLTableElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLTableElement::wrap(HTMLTableElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLTableElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLTableElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLTableElement::wrap(impl);
}

void V8HTMLTableElement::derefObject(void* object)
{
    static_cast<HTMLTableElement*>(object)->deref();
}

} // namespace WebCore
