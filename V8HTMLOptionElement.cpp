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
#include "V8HTMLOptionElement.h"

#include "ExceptionCode.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8HTMLFormElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLOptionElement::info = { V8HTMLOptionElement::GetTemplate, V8HTMLOptionElement::derefObject, 0 };

namespace HTMLOptionElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> formAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.form._get");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->form());
}

static v8::Handle<v8::Value> defaultSelectedAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.defaultSelected._get");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8Boolean(imp->hasAttribute(WebCore::HTMLNames::selectedAttr));
}

static void defaultSelectedAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.defaultSelected._set");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::selectedAttr, v);
    return;
}

static v8::Handle<v8::Value> textAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.text._get");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->text());
}

static void textAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.text._set");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    ExceptionCode ec = 0;
    imp->setText(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> indexAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.index._get");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8::Integer::New(imp->index());
}

static v8::Handle<v8::Value> disabledAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.disabled._get");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8Boolean(imp->hasAttribute(WebCore::HTMLNames::disabledAttr));
}

static void disabledAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.disabled._set");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::disabledAttr, v);
    return;
}

static v8::Handle<v8::Value> labelAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.label._get");
    return getElementStringAttr(info, HTMLNames::labelAttr);
}

static void labelAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.label._set");
    setElementStringAttr(info, HTMLNames::labelAttr, value);
}

static v8::Handle<v8::Value> selectedAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.selected._get");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8Boolean(imp->selected());
}

static void selectedAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.selected._set");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setSelected(v);
    return;
}

static v8::Handle<v8::Value> valueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.value._get");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->value());
}

static void valueAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionElement.value._set");
    HTMLOptionElement* imp = V8HTMLOptionElement::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    imp->setValue(v);
    return;
}

} // namespace HTMLOptionElementInternal

static const BatchedAttribute HTMLOptionElementAttrs[] = {
    // Attribute 'form' (Type: 'readonly attribute' ExtAttr: '')
    {"form", HTMLOptionElementInternal::formAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'defaultSelected' (Type: 'attribute' ExtAttr: 'Reflect')
    {"defaultSelected", HTMLOptionElementInternal::defaultSelectedAttrGetter, HTMLOptionElementInternal::defaultSelectedAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'text' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"text", HTMLOptionElementInternal::textAttrGetter, HTMLOptionElementInternal::textAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'index' (Type: 'readonly attribute' ExtAttr: '')
    {"index", HTMLOptionElementInternal::indexAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'disabled' (Type: 'attribute' ExtAttr: 'Reflect')
    {"disabled", HTMLOptionElementInternal::disabledAttrGetter, HTMLOptionElementInternal::disabledAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'label' (Type: 'attribute' ExtAttr: 'Reflect')
    {"label", HTMLOptionElementInternal::labelAttrGetter, HTMLOptionElementInternal::labelAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'selected' (Type: 'attribute' ExtAttr: '')
    {"selected", HTMLOptionElementInternal::selectedAttrGetter, HTMLOptionElementInternal::selectedAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'value' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"value", HTMLOptionElementInternal::valueAttrGetter, HTMLOptionElementInternal::valueAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLOptionElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLOptionElement", V8HTMLElement::GetTemplate(), V8HTMLOptionElement::internalFieldCount,
        HTMLOptionElementAttrs, sizeof(HTMLOptionElementAttrs) / sizeof(*HTMLOptionElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLOptionElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLOptionElementRawCache = createRawTemplate();
    return V8HTMLOptionElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLOptionElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLOptionElementCache = ConfigureV8HTMLOptionElementTemplate(GetRawTemplate());
    return V8HTMLOptionElementCache;
}

HTMLOptionElement* V8HTMLOptionElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLOptionElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLOptionElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLOptionElement::wrap(HTMLOptionElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLOptionElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLOptionElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLOptionElement::wrap(impl);
}

void V8HTMLOptionElement::derefObject(void* object)
{
    static_cast<HTMLOptionElement*>(object)->deref();
}

} // namespace WebCore
