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
#include "V8SQLException.h"

#if ENABLE(DATABASE)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8SQLException::info = { V8SQLException::GetTemplate, V8SQLException::derefObject, 0 };

namespace SQLExceptionInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> codeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SQLException.code._get");
    SQLException* imp = V8SQLException::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->code());
}

static v8::Handle<v8::Value> messageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SQLException.message._get");
    SQLException* imp = V8SQLException::toNative(info.Holder());
    return v8String(imp->message());
}

} // namespace SQLExceptionInternal

static const BatchedAttribute SQLExceptionAttrs[] = {
    // Attribute 'code' (Type: 'readonly attribute' ExtAttr: '')
    {"code", SQLExceptionInternal::codeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'message' (Type: 'readonly attribute' ExtAttr: '')
    {"message", SQLExceptionInternal::messageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedConstant SQLExceptionConsts[] = {
    {"UNKNOWN_ERR", static_cast<signed int>(0)},
    {"DATABASE_ERR", static_cast<signed int>(1)},
    {"VERSION_ERR", static_cast<signed int>(2)},
    {"TOO_LARGE_ERR", static_cast<signed int>(3)},
    {"QUOTA_ERR", static_cast<signed int>(4)},
    {"SYNTAX_ERR", static_cast<signed int>(5)},
    {"CONSTRAINT_ERR", static_cast<signed int>(6)},
    {"TIMEOUT_ERR", static_cast<signed int>(7)},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SQLExceptionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SQLException", v8::Persistent<v8::FunctionTemplate>(), V8SQLException::internalFieldCount,
        SQLExceptionAttrs, sizeof(SQLExceptionAttrs) / sizeof(*SQLExceptionAttrs),
        0, 0);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, SQLExceptionConsts, sizeof(SQLExceptionConsts) / sizeof(*SQLExceptionConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SQLException::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SQLExceptionRawCache = createRawTemplate();
    return V8SQLExceptionRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SQLException::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SQLExceptionCache = ConfigureV8SQLExceptionTemplate(GetRawTemplate());
    return V8SQLExceptionCache;
}

SQLException* V8SQLException::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SQLException*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SQLException::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SQLException::wrap(SQLException* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SQLException > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SQLException* impl)
{
    if (!impl)
        return v8::Null();
    return V8SQLException::wrap(impl);
}

void V8SQLException::derefObject(void* object)
{
    static_cast<SQLException*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(DATABASE)
