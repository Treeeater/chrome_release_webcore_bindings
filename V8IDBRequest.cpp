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
#include "V8IDBRequest.h"

#if ENABLE(INDEXED_DATABASE)

#include "EventListener.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IDBAny.h"
#include "V8IDBDatabaseError.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8IDBRequest::info = { V8IDBRequest::GetTemplate, V8IDBRequest::derefObject, V8IDBRequest::toActiveDOMObject };

namespace IDBRequestInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> readyStateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBRequest.readyState._get");
    IDBRequest* imp = V8IDBRequest::toNative(info.Holder());
    return v8::Integer::New(imp->readyState());
}

static v8::Handle<v8::Value> errorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBRequest.error._get");
    IDBRequest* imp = V8IDBRequest::toNative(info.Holder());
    RefPtr<IDBDatabaseError> result = imp->error();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> resultAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBRequest.result._get");
    IDBRequest* imp = V8IDBRequest::toNative(info.Holder());
    RefPtr<IDBAny> result = imp->result();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> onsuccessAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBRequest.onsuccess._get");
    IDBRequest* imp = V8IDBRequest::toNative(info.Holder());
    return imp->onsuccess() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onsuccess())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onsuccessAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBRequest.onsuccess._set");
    IDBRequest* imp = V8IDBRequest::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onsuccess(), value, V8IDBRequest::eventListenerCacheIndex);
    imp->setOnsuccess(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onerrorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBRequest.onerror._get");
    IDBRequest* imp = V8IDBRequest::toNative(info.Holder());
    return imp->onerror() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onerror())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onerrorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBRequest.onerror._set");
    IDBRequest* imp = V8IDBRequest::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onerror(), value, V8IDBRequest::eventListenerCacheIndex);
    imp->setOnerror(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> abortCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBRequest.abort");
    IDBRequest* imp = V8IDBRequest::toNative(args.Holder());
    imp->abort();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBRequest.addEventListener()");
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8IDBRequest::toNative(args.Holder())->addEventListener(v8ValueToAtomicWebCoreString(args[0]), listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8IDBRequest::eventListenerCacheIndex);
    }
    return v8::Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBRequest.removeEventListener()");
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8IDBRequest::toNative(args.Holder())->removeEventListener(v8ValueToAtomicWebCoreString(args[0]), listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8IDBRequest::eventListenerCacheIndex);
    }
    return v8::Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBRequest.dispatchEvent");
    IDBRequest* imp = V8IDBRequest::toNative(args.Holder());
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

} // namespace IDBRequestInternal

static const BatchedAttribute IDBRequestAttrs[] = {
    // Attribute 'readyState' (Type: 'readonly attribute' ExtAttr: '')
    {"readyState", IDBRequestInternal::readyStateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'error' (Type: 'readonly attribute' ExtAttr: '')
    {"error", IDBRequestInternal::errorAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'result' (Type: 'readonly attribute' ExtAttr: '')
    {"result", IDBRequestInternal::resultAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onsuccess' (Type: 'attribute' ExtAttr: '')
    {"onsuccess", IDBRequestInternal::onsuccessAttrGetter, IDBRequestInternal::onsuccessAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onerror' (Type: 'attribute' ExtAttr: '')
    {"onerror", IDBRequestInternal::onerrorAttrGetter, IDBRequestInternal::onerrorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback IDBRequestCallbacks[] = {
    {"abort", IDBRequestInternal::abortCallback},
    {"addEventListener", IDBRequestInternal::addEventListenerCallback},
    {"removeEventListener", IDBRequestInternal::removeEventListenerCallback},
};
static const BatchedConstant IDBRequestConsts[] = {
    {"INITIAL", static_cast<signed int>(0)},
    {"LOADING", static_cast<signed int>(1)},
    {"DONE", static_cast<signed int>(2)},
};

COMPILE_ASSERT(0 == IDBRequest::INITIAL, IDBRequestEnumINITIALIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == IDBRequest::LOADING, IDBRequestEnumLOADINGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == IDBRequest::DONE, IDBRequestEnumDONEIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8IDBRequestTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "IDBRequest", v8::Persistent<v8::FunctionTemplate>(), V8IDBRequest::internalFieldCount,
        IDBRequestAttrs, sizeof(IDBRequestAttrs) / sizeof(*IDBRequestAttrs),
        IDBRequestCallbacks, sizeof(IDBRequestCallbacks) / sizeof(*IDBRequestCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::New("dispatchEvent"), v8::FunctionTemplate::New(IDBRequestInternal::dispatchEventCallback, v8::Handle<v8::Value>(), dispatchEventSignature));
    batchConfigureConstants(desc, proto, IDBRequestConsts, sizeof(IDBRequestConsts) / sizeof(*IDBRequestConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8IDBRequest::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8IDBRequestRawCache = createRawTemplate();
    return V8IDBRequestRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8IDBRequest::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8IDBRequestCache = ConfigureV8IDBRequestTemplate(GetRawTemplate());
    return V8IDBRequestCache;
}

IDBRequest* V8IDBRequest::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<IDBRequest*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8IDBRequest::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}

ActiveDOMObject* V8IDBRequest::toActiveDOMObject(v8::Handle<v8::Object> object)
{
    return toNative(object);
}      

v8::Handle<v8::Object> V8IDBRequest::wrap(IDBRequest* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
        wrapper = getActiveDOMObjectMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getActiveDOMObjectMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<IDBRequest > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(IDBRequest* impl)
{
    if (!impl)
        return v8::Null();
    return V8IDBRequest::wrap(impl);
}

void V8IDBRequest::derefObject(void* object)
{
    static_cast<IDBRequest*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)
