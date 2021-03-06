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
#include "V8HTMLAllCollection.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Node.h"
#include "V8NodeList.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8HTMLAllCollection::info = { V8HTMLAllCollection::GetTemplate, V8HTMLAllCollection::derefObject, 0 };

namespace HTMLAllCollectionInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAllCollection.length._get");
    HTMLAllCollection* imp = V8HTMLAllCollection::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

static v8::Handle<v8::Value> tagsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLAllCollection.tags");
    HTMLAllCollection* imp = V8HTMLAllCollection::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    return toV8(imp->tags(name));
}

} // namespace HTMLAllCollectionInternal

static const BatchedAttribute HTMLAllCollectionAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", HTMLAllCollectionInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback HTMLAllCollectionCallbacks[] = {
    {"item", V8HTMLAllCollection::itemCallback},
    {"namedItem", V8HTMLAllCollection::namedItemCallback},
    {"tags", HTMLAllCollectionInternal::tagsCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLAllCollectionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLAllCollection", v8::Persistent<v8::FunctionTemplate>(), V8HTMLAllCollection::internalFieldCount,
        HTMLAllCollectionAttrs, sizeof(HTMLAllCollectionAttrs) / sizeof(*HTMLAllCollectionAttrs),
        HTMLAllCollectionCallbacks, sizeof(HTMLAllCollectionCallbacks) / sizeof(*HTMLAllCollectionCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    setCollectionIndexedGetter<HTMLAllCollection, Node>(desc);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8HTMLAllCollection::namedPropertyGetter, 0, 0, 0, 0);
    desc->InstanceTemplate()->SetCallAsFunctionHandler(V8HTMLAllCollection::callAsFunctionCallback);
    desc->InstanceTemplate()->MarkAsUndetectable();

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLAllCollection::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLAllCollectionRawCache = createRawTemplate();
    return V8HTMLAllCollectionRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLAllCollection::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLAllCollectionCache = ConfigureV8HTMLAllCollectionTemplate(GetRawTemplate());
    return V8HTMLAllCollectionCache;
}

HTMLAllCollection* V8HTMLAllCollection::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLAllCollection*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLAllCollection::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLAllCollection::wrap(HTMLAllCollection* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLAllCollection > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLAllCollection* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLAllCollection::wrap(impl);
}

void V8HTMLAllCollection::derefObject(void* object)
{
    static_cast<HTMLAllCollection*>(object)->deref();
}

} // namespace WebCore
