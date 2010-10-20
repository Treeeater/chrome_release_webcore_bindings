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
#include "V8StyleSheetList.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8StyleSheet.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8StyleSheetList::info = { V8StyleSheetList::GetTemplate, V8StyleSheetList::derefObject, 0 };

namespace StyleSheetListInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.StyleSheetList.length._get");
    StyleSheetList* imp = V8StyleSheetList::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

static v8::Handle<v8::Value> itemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.StyleSheetList.item");
    StyleSheetList* imp = V8StyleSheetList::toNative(args.Holder());
    EXCEPTION_BLOCK(unsigned, index, toUInt32(args[0]));
    return toV8(imp->item(index));
}

} // namespace StyleSheetListInternal

static const BatchedAttribute StyleSheetListAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", StyleSheetListInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback StyleSheetListCallbacks[] = {
    {"item", StyleSheetListInternal::itemCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8StyleSheetListTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "StyleSheetList", v8::Persistent<v8::FunctionTemplate>(), V8StyleSheetList::internalFieldCount,
        StyleSheetListAttrs, sizeof(StyleSheetListAttrs) / sizeof(*StyleSheetListAttrs),
        StyleSheetListCallbacks, sizeof(StyleSheetListCallbacks) / sizeof(*StyleSheetListCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    setCollectionIndexedGetter<StyleSheetList, StyleSheet>(desc);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8StyleSheetList::namedPropertyGetter, 0, 0, 0, 0);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8StyleSheetList::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8StyleSheetListRawCache = createRawTemplate();
    return V8StyleSheetListRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8StyleSheetList::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8StyleSheetListCache = ConfigureV8StyleSheetListTemplate(GetRawTemplate());
    return V8StyleSheetListCache;
}

StyleSheetList* V8StyleSheetList::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<StyleSheetList*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8StyleSheetList::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8StyleSheetList::wrap(StyleSheetList* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<StyleSheetList > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(StyleSheetList* impl)
{
    if (!impl)
        return v8::Null();
    return V8StyleSheetList::wrap(impl);
}

void V8StyleSheetList::derefObject(void* object)
{
    static_cast<StyleSheetList*>(object)->deref();
}

} // namespace WebCore