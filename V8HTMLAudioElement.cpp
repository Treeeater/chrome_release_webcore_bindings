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
#include "V8HTMLAudioElement.h"

#if ENABLE(VIDEO)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLMediaElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLAudioElement::info = { V8HTMLAudioElement::GetTemplate, V8HTMLAudioElement::derefObject, 0 };

namespace HTMLAudioElementInternal {

template <typename T> void V8_USE(T) { }

} // namespace HTMLAudioElementInternal

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLAudioElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLAudioElement", V8HTMLMediaElement::GetTemplate(), V8HTMLAudioElement::internalFieldCount,
        0, 0,
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLAudioElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLAudioElementRawCache = createRawTemplate();
    return V8HTMLAudioElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLAudioElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLAudioElementCache = ConfigureV8HTMLAudioElementTemplate(GetRawTemplate());
    return V8HTMLAudioElementCache;
}

HTMLAudioElement* V8HTMLAudioElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLAudioElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLAudioElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLAudioElement::wrap(HTMLAudioElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLAudioElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLAudioElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLAudioElement::wrap(impl);
}

void V8HTMLAudioElement::derefObject(void* object)
{
    static_cast<HTMLAudioElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(VIDEO)
