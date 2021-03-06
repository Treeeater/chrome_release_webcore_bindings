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
#include "V8BarInfo.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8BarInfo::info = { V8BarInfo::GetTemplate, V8BarInfo::derefObject, 0 };

namespace BarInfoInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> visibleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.BarInfo.visible._get");
    BarInfo* imp = V8BarInfo::toNative(info.Holder());
    return v8Boolean(imp->visible());
}

} // namespace BarInfoInternal

static const BatchedAttribute BarInfoAttrs[] = {
    // Attribute 'visible' (Type: 'readonly attribute' ExtAttr: '')
    {"visible", BarInfoInternal::visibleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8BarInfoTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "BarInfo", v8::Persistent<v8::FunctionTemplate>(), V8BarInfo::internalFieldCount,
        BarInfoAttrs, sizeof(BarInfoAttrs) / sizeof(*BarInfoAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8BarInfo::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8BarInfoRawCache = createRawTemplate();
    return V8BarInfoRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8BarInfo::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8BarInfoCache = ConfigureV8BarInfoTemplate(GetRawTemplate());
    return V8BarInfoCache;
}

BarInfo* V8BarInfo::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<BarInfo*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8BarInfo::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8BarInfo::wrap(BarInfo* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<BarInfo > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(BarInfo* impl)
{
    if (!impl)
        return v8::Null();
    return V8BarInfo::wrap(impl);
}

void V8BarInfo::derefObject(void* object)
{
    static_cast<BarInfo*>(object)->deref();
}

} // namespace WebCore
