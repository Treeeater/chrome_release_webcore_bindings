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
#include "V8MouseEvent.h"

#include "EventTarget.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Clipboard.h"
#include "V8DOMWindow.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Node.h"
#include "V8Proxy.h"
#include "V8UIEvent.h"

namespace WebCore {

WrapperTypeInfo V8MouseEvent::info = { V8MouseEvent::GetTemplate, V8MouseEvent::derefObject, 0 };

namespace MouseEventInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> screenXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.screenX._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8::Integer::New(imp->screenX());
}

static v8::Handle<v8::Value> screenYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.screenY._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8::Integer::New(imp->screenY());
}

static v8::Handle<v8::Value> clientXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.clientX._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8::Integer::New(imp->clientX());
}

static v8::Handle<v8::Value> clientYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.clientY._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8::Integer::New(imp->clientY());
}

static v8::Handle<v8::Value> ctrlKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.ctrlKey._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Boolean(imp->ctrlKey());
}

static v8::Handle<v8::Value> shiftKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.shiftKey._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Boolean(imp->shiftKey());
}

static v8::Handle<v8::Value> altKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.altKey._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Boolean(imp->altKey());
}

static v8::Handle<v8::Value> metaKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.metaKey._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Boolean(imp->metaKey());
}

static v8::Handle<v8::Value> buttonAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.button._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8::Integer::New(imp->button());
}

static v8::Handle<v8::Value> relatedTargetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.relatedTarget._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return V8DOMWrapper::convertEventTargetToV8Object(imp->relatedTarget());
}

static v8::Handle<v8::Value> offsetXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.offsetX._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8::Integer::New(imp->offsetX());
}

static v8::Handle<v8::Value> offsetYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.offsetY._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8::Integer::New(imp->offsetY());
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.x._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8::Integer::New(imp->x());
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.y._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8::Integer::New(imp->y());
}

static v8::Handle<v8::Value> fromElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.fromElement._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return toV8(imp->fromElement());
}

static v8::Handle<v8::Value> toElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.toElement._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return toV8(imp->toElement());
}

static v8::Handle<v8::Value> dataTransferAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MouseEvent.dataTransfer._get");
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    RefPtr<Clipboard> result = imp->dataTransfer();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> initMouseEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.MouseEvent.initMouseEvent");
    MouseEvent* imp = V8MouseEvent::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, type, args[0]);
    EXCEPTION_BLOCK(bool, canBubble, args[1]->BooleanValue());
    EXCEPTION_BLOCK(bool, cancelable, args[2]->BooleanValue());
    EXCEPTION_BLOCK(DOMWindow*, view, V8DOMWindow::HasInstance(args[3]) ? V8DOMWindow::toNative(v8::Handle<v8::Object>::Cast(args[3])) : 0);
    EXCEPTION_BLOCK(int, detail, toInt32(args[4]));
    EXCEPTION_BLOCK(int, screenX, toInt32(args[5]));
    EXCEPTION_BLOCK(int, screenY, toInt32(args[6]));
    EXCEPTION_BLOCK(int, clientX, toInt32(args[7]));
    EXCEPTION_BLOCK(int, clientY, toInt32(args[8]));
    EXCEPTION_BLOCK(bool, ctrlKey, args[9]->BooleanValue());
    EXCEPTION_BLOCK(bool, altKey, args[10]->BooleanValue());
    EXCEPTION_BLOCK(bool, shiftKey, args[11]->BooleanValue());
    EXCEPTION_BLOCK(bool, metaKey, args[12]->BooleanValue());
    EXCEPTION_BLOCK(int, button, toUInt32(args[13]));
    EXCEPTION_BLOCK(Node*, relatedTarget, V8Node::HasInstance(args[14]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[14])) : 0);
    imp->initMouseEvent(type, canBubble, cancelable, view, detail, screenX, screenY, clientX, clientY, ctrlKey, altKey, shiftKey, metaKey, button, relatedTarget);
    return v8::Handle<v8::Value>();
}

} // namespace MouseEventInternal

static const BatchedAttribute MouseEventAttrs[] = {
    // Attribute 'screenX' (Type: 'readonly attribute' ExtAttr: '')
    {"screenX", MouseEventInternal::screenXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'screenY' (Type: 'readonly attribute' ExtAttr: '')
    {"screenY", MouseEventInternal::screenYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'clientX' (Type: 'readonly attribute' ExtAttr: '')
    {"clientX", MouseEventInternal::clientXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'clientY' (Type: 'readonly attribute' ExtAttr: '')
    {"clientY", MouseEventInternal::clientYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ctrlKey' (Type: 'readonly attribute' ExtAttr: '')
    {"ctrlKey", MouseEventInternal::ctrlKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'shiftKey' (Type: 'readonly attribute' ExtAttr: '')
    {"shiftKey", MouseEventInternal::shiftKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'altKey' (Type: 'readonly attribute' ExtAttr: '')
    {"altKey", MouseEventInternal::altKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'metaKey' (Type: 'readonly attribute' ExtAttr: '')
    {"metaKey", MouseEventInternal::metaKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'button' (Type: 'readonly attribute' ExtAttr: '')
    {"button", MouseEventInternal::buttonAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'relatedTarget' (Type: 'readonly attribute' ExtAttr: '')
    {"relatedTarget", MouseEventInternal::relatedTargetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'offsetX' (Type: 'readonly attribute' ExtAttr: '')
    {"offsetX", MouseEventInternal::offsetXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'offsetY' (Type: 'readonly attribute' ExtAttr: '')
    {"offsetY", MouseEventInternal::offsetYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", MouseEventInternal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", MouseEventInternal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'fromElement' (Type: 'readonly attribute' ExtAttr: '')
    {"fromElement", MouseEventInternal::fromElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'toElement' (Type: 'readonly attribute' ExtAttr: '')
    {"toElement", MouseEventInternal::toElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dataTransfer' (Type: 'readonly attribute' ExtAttr: '')
    {"dataTransfer", MouseEventInternal::dataTransferAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8MouseEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "MouseEvent", V8UIEvent::GetTemplate(), V8MouseEvent::internalFieldCount,
        MouseEventAttrs, sizeof(MouseEventAttrs) / sizeof(*MouseEventAttrs),
        0, 0);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'initMouseEvent'
    const int initMouseEventArgc = 15;
    v8::Handle<v8::FunctionTemplate> initMouseEventArgv[initMouseEventArgc] = { v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), V8DOMWindow::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> initMouseEventSignature = v8::Signature::New(desc, initMouseEventArgc, initMouseEventArgv);
    proto->Set(v8::String::New("initMouseEvent"), v8::FunctionTemplate::New(MouseEventInternal::initMouseEventCallback, v8::Handle<v8::Value>(), initMouseEventSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8MouseEvent::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8MouseEventRawCache = createRawTemplate();
    return V8MouseEventRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8MouseEvent::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8MouseEventCache = ConfigureV8MouseEventTemplate(GetRawTemplate());
    return V8MouseEventCache;
}

MouseEvent* V8MouseEvent::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<MouseEvent*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8MouseEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8MouseEvent::wrap(MouseEvent* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<MouseEvent > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(MouseEvent* impl)
{
    if (!impl)
        return v8::Null();
    return V8MouseEvent::wrap(impl);
}

void V8MouseEvent::derefObject(void* object)
{
    static_cast<MouseEvent*>(object)->deref();
}

} // namespace WebCore