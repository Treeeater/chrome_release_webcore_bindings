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
#include "V8Notification.h"

#if ENABLE(NOTIFICATIONS)

#include "EventListener.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8Notification::info = { V8Notification::GetTemplate, V8Notification::derefObject, 0 };

namespace NotificationInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> ondisplayAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Notification.ondisplay._get");
    Notification* imp = V8Notification::toNative(info.Holder());
    return imp->ondisplay() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->ondisplay())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void ondisplayAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Notification.ondisplay._set");
    Notification* imp = V8Notification::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->ondisplay(), value, V8Notification::eventListenerCacheIndex);
    imp->setOndisplay(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onerrorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Notification.onerror._get");
    Notification* imp = V8Notification::toNative(info.Holder());
    return imp->onerror() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onerror())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onerrorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Notification.onerror._set");
    Notification* imp = V8Notification::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onerror(), value, V8Notification::eventListenerCacheIndex);
    imp->setOnerror(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> oncloseAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Notification.onclose._get");
    Notification* imp = V8Notification::toNative(info.Holder());
    return imp->onclose() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onclose())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void oncloseAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Notification.onclose._set");
    Notification* imp = V8Notification::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onclose(), value, V8Notification::eventListenerCacheIndex);
    imp->setOnclose(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> dirAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Notification.dir._get");
    Notification* imp = V8Notification::toNative(info.Holder());
    return v8String(imp->dir());
}

static void dirAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Notification.dir._set");
    Notification* imp = V8Notification::toNative(info.Holder());
    V8Parameter<> v = value;
    imp->setDir(v);
    return;
}

static v8::Handle<v8::Value> replaceIdAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Notification.replaceId._get");
    Notification* imp = V8Notification::toNative(info.Holder());
    return v8String(imp->replaceId());
}

static void replaceIdAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Notification.replaceId._set");
    Notification* imp = V8Notification::toNative(info.Holder());
    V8Parameter<> v = value;
    imp->setReplaceId(v);
    return;
}

static v8::Handle<v8::Value> showCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Notification.show");
    Notification* imp = V8Notification::toNative(args.Holder());
    imp->show();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> cancelCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Notification.cancel");
    Notification* imp = V8Notification::toNative(args.Holder());
    imp->cancel();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Notification.addEventListener()");
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8Notification::toNative(args.Holder())->addEventListener(v8ValueToAtomicWebCoreString(args[0]), listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8Notification::eventListenerCacheIndex);
    }
    return v8::Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Notification.removeEventListener()");
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8Notification::toNative(args.Holder())->removeEventListener(v8ValueToAtomicWebCoreString(args[0]), listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8Notification::eventListenerCacheIndex);
    }
    return v8::Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Notification.dispatchEvent");
    Notification* imp = V8Notification::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Event*, evt, V8Event::HasInstance(args[0]) ? V8Event::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    bool result = imp->dispatchEvent(evt, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Boolean(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace NotificationInternal

static const BatchedAttribute NotificationAttrs[] = {
    // Attribute 'ondisplay' (Type: 'attribute' ExtAttr: '')
    {"ondisplay", NotificationInternal::ondisplayAttrGetter, NotificationInternal::ondisplayAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onerror' (Type: 'attribute' ExtAttr: '')
    {"onerror", NotificationInternal::onerrorAttrGetter, NotificationInternal::onerrorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onclose' (Type: 'attribute' ExtAttr: '')
    {"onclose", NotificationInternal::oncloseAttrGetter, NotificationInternal::oncloseAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dir' (Type: 'attribute' ExtAttr: '')
    {"dir", NotificationInternal::dirAttrGetter, NotificationInternal::dirAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'replaceId' (Type: 'attribute' ExtAttr: '')
    {"replaceId", NotificationInternal::replaceIdAttrGetter, NotificationInternal::replaceIdAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback NotificationCallbacks[] = {
    {"show", NotificationInternal::showCallback},
    {"cancel", NotificationInternal::cancelCallback},
    {"addEventListener", NotificationInternal::addEventListenerCallback},
    {"removeEventListener", NotificationInternal::removeEventListenerCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8NotificationTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Notification", v8::Persistent<v8::FunctionTemplate>(), V8Notification::internalFieldCount,
        NotificationAttrs, sizeof(NotificationAttrs) / sizeof(*NotificationAttrs),
        NotificationCallbacks, sizeof(NotificationCallbacks) / sizeof(*NotificationCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::New("dispatchEvent"), v8::FunctionTemplate::New(NotificationInternal::dispatchEventCallback, v8::Handle<v8::Value>(), dispatchEventSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Notification::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8NotificationRawCache = createRawTemplate();
    return V8NotificationRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8Notification::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8NotificationCache = ConfigureV8NotificationTemplate(GetRawTemplate());
    return V8NotificationCache;
}

Notification* V8Notification::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<Notification*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8Notification::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Notification::wrap(Notification* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<Notification > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(Notification* impl)
{
    if (!impl)
        return v8::Null();
    return V8Notification::wrap(impl);
}

void V8Notification::derefObject(void* object)
{
    static_cast<Notification*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(NOTIFICATIONS)
