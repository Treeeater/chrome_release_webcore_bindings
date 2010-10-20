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
#include "V8HTMLElement.h"

#include "ExceptionCode.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Element.h"
#include "V8HTMLCollection.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8HTMLElement::info = { V8HTMLElement::GetTemplate, V8HTMLElement::derefObject, 0 };

namespace HTMLElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> idAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.id._get");
    return getElementStringAttr(info, HTMLNames::idAttr);
}

static void idAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.id._set");
    setElementStringAttr(info, HTMLNames::idAttr, value);
}

static v8::Handle<v8::Value> titleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.title._get");
    return getElementStringAttr(info, HTMLNames::titleAttr);
}

static void titleAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.title._set");
    setElementStringAttr(info, HTMLNames::titleAttr, value);
}

static v8::Handle<v8::Value> langAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.lang._get");
    return getElementStringAttr(info, HTMLNames::langAttr);
}

static void langAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.lang._set");
    setElementStringAttr(info, HTMLNames::langAttr, value);
}

static v8::Handle<v8::Value> dirAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.dir._get");
    return getElementStringAttr(info, HTMLNames::dirAttr);
}

static void dirAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.dir._set");
    setElementStringAttr(info, HTMLNames::dirAttr, value);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.className._get");
    return getElementStringAttr(info, HTMLNames::classAttr);
}

static void classNameAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.className._set");
    setElementStringAttr(info, HTMLNames::classAttr, value);
}

static v8::Handle<v8::Value> tabIndexAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.tabIndex._get");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8::Integer::New(imp->tabIndex());
}

static void tabIndexAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.tabIndex._set");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setTabIndex(v);
    return;
}

static v8::Handle<v8::Value> draggableAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.draggable._get");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8Boolean(imp->draggable());
}

static void draggableAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.draggable._set");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setDraggable(v);
    return;
}

static v8::Handle<v8::Value> hiddenAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.hidden._get");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8Boolean(imp->hasAttribute(WebCore::HTMLNames::hiddenAttr));
}

static void hiddenAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.hidden._set");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::hiddenAttr, v);
    return;
}

static v8::Handle<v8::Value> innerHTMLAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.innerHTML._get");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->innerHTML());
}

static void innerHTMLAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.innerHTML._set");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
	if (!RO_check(imp)) return;
    V8Parameter<WithNullCheck> v = value;
    ExceptionCode ec = 0;
    imp->setInnerHTML(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> innerTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.innerText._get");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->innerText());
}

static void innerTextAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.innerText._set");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
	if (!RO_check(imp)) return;
    V8Parameter<WithNullCheck> v = value;
    ExceptionCode ec = 0;
    imp->setInnerText(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> outerHTMLAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.outerHTML._get");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->outerHTML());
}

static void outerHTMLAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.outerHTML._set");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
	if (!RO_check(imp)) return;
    V8Parameter<WithNullCheck> v = value;
    ExceptionCode ec = 0;
    imp->setOuterHTML(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> outerTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.outerText._get");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->outerText());
}

static void outerTextAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.outerText._set");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
	if (!RO_check(imp)) return;
    V8Parameter<WithNullCheck> v = value;
    ExceptionCode ec = 0;
    imp->setOuterText(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> childrenAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.children._get");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return toV8(imp->children());
}

static v8::Handle<v8::Value> contentEditableAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.contentEditable._get");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->contentEditable());
}

static void contentEditableAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.contentEditable._set");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    imp->setContentEditable(v);
    return;
}

static v8::Handle<v8::Value> isContentEditableAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLElement.isContentEditable._get");
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8Boolean(imp->isContentEditable());
}

static v8::Handle<v8::Value> insertAdjacentElementCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLElement.insertAdjacentElement");
    HTMLElement* imp = V8HTMLElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, where, args[0]);
    EXCEPTION_BLOCK(Element*, element, V8Element::HasInstance(args[1]) ? V8Element::toNative(v8::Handle<v8::Object>::Cast(args[1])) : 0);
    RefPtr<Element> result = imp->insertAdjacentElement(where, element, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> insertAdjacentHTMLCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLElement.insertAdjacentHTML");
    HTMLElement* imp = V8HTMLElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, where, args[0]);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, html, args[1]);
    imp->insertAdjacentHTML(where, html, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> insertAdjacentTextCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLElement.insertAdjacentText");
    HTMLElement* imp = V8HTMLElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, where, args[0]);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, text, args[1]);
    imp->insertAdjacentText(where, text, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace HTMLElementInternal

static const BatchedAttribute HTMLElementAttrs[] = {
    // Attribute 'id' (Type: 'attribute' ExtAttr: 'Reflect')
    {"id", HTMLElementInternal::idAttrGetter, HTMLElementInternal::idAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'title' (Type: 'attribute' ExtAttr: 'Reflect')
    {"title", HTMLElementInternal::titleAttrGetter, HTMLElementInternal::titleAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'lang' (Type: 'attribute' ExtAttr: 'Reflect')
    {"lang", HTMLElementInternal::langAttrGetter, HTMLElementInternal::langAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dir' (Type: 'attribute' ExtAttr: 'Reflect')
    {"dir", HTMLElementInternal::dirAttrGetter, HTMLElementInternal::dirAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'attribute' ExtAttr: 'Reflect')
    {"className", HTMLElementInternal::classNameAttrGetter, HTMLElementInternal::classNameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'tabIndex' (Type: 'attribute' ExtAttr: '')
    {"tabIndex", HTMLElementInternal::tabIndexAttrGetter, HTMLElementInternal::tabIndexAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'draggable' (Type: 'attribute' ExtAttr: '')
    {"draggable", HTMLElementInternal::draggableAttrGetter, HTMLElementInternal::draggableAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hidden' (Type: 'attribute' ExtAttr: 'Reflect')
    {"hidden", HTMLElementInternal::hiddenAttrGetter, HTMLElementInternal::hiddenAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'innerHTML' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"innerHTML", HTMLElementInternal::innerHTMLAttrGetter, HTMLElementInternal::innerHTMLAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'innerText' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"innerText", HTMLElementInternal::innerTextAttrGetter, HTMLElementInternal::innerTextAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'outerHTML' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"outerHTML", HTMLElementInternal::outerHTMLAttrGetter, HTMLElementInternal::outerHTMLAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'outerText' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"outerText", HTMLElementInternal::outerTextAttrGetter, HTMLElementInternal::outerTextAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'children' (Type: 'readonly attribute' ExtAttr: '')
    {"children", HTMLElementInternal::childrenAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'contentEditable' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"contentEditable", HTMLElementInternal::contentEditableAttrGetter, HTMLElementInternal::contentEditableAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'isContentEditable' (Type: 'readonly attribute' ExtAttr: '')
    {"isContentEditable", HTMLElementInternal::isContentEditableAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback HTMLElementCallbacks[] = {
    {"insertAdjacentHTML", HTMLElementInternal::insertAdjacentHTMLCallback},
    {"insertAdjacentText", HTMLElementInternal::insertAdjacentTextCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLElement", V8Element::GetTemplate(), V8HTMLElement::internalFieldCount,
        HTMLElementAttrs, sizeof(HTMLElementAttrs) / sizeof(*HTMLElementAttrs),
        HTMLElementCallbacks, sizeof(HTMLElementCallbacks) / sizeof(*HTMLElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'insertAdjacentElement'
    const int insertAdjacentElementArgc = 2;
    v8::Handle<v8::FunctionTemplate> insertAdjacentElementArgv[insertAdjacentElementArgc] = { v8::Handle<v8::FunctionTemplate>(), V8Element::GetRawTemplate() };
    v8::Handle<v8::Signature> insertAdjacentElementSignature = v8::Signature::New(desc, insertAdjacentElementArgc, insertAdjacentElementArgv);
    proto->Set(v8::String::New("insertAdjacentElement"), v8::FunctionTemplate::New(HTMLElementInternal::insertAdjacentElementCallback, v8::Handle<v8::Value>(), insertAdjacentElementSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLElementRawCache = createRawTemplate();
    return V8HTMLElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLElementCache = ConfigureV8HTMLElementTemplate(GetRawTemplate());
    return V8HTMLElementCache;
}

HTMLElement* V8HTMLElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLElement::wrap(HTMLElement* impl, bool forceNewObject)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLElement > impl, bool forceNewObject)
{
    return toV8(impl.get(), forceNewObject);
}

void V8HTMLElement::derefObject(void* object)
{
    static_cast<HTMLElement*>(object)->deref();
}

} // namespace WebCore
