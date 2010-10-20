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
#include "V8DirectoryReader.h"

#if ENABLE(FILE_SYSTEM)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8EntriesCallback.h"
#include "V8ErrorCallback.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8DirectoryReader::info = { V8DirectoryReader::GetTemplate, V8DirectoryReader::derefObject, 0 };

namespace DirectoryReaderInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> readEntriesCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.DirectoryReader.readEntries");
    DirectoryReader* imp = V8DirectoryReader::toNative(args.Holder());
    if (args.Length() <= 0 || !args[0]->IsObject())
        return throwError(TYPE_MISMATCH_ERR);
    RefPtr<EntriesCallback> successCallback = V8EntriesCallback::create(args[0], getScriptExecutionContext());
    RefPtr<ErrorCallback> errorCallback;
    if (args.Length() > 1 && !args[1]->IsNull() && !args[1]->IsUndefined()) {
        if (!args[1]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        errorCallback = V8ErrorCallback::create(args[1], getScriptExecutionContext());
    }
    imp->readEntries(successCallback, errorCallback);
    return v8::Handle<v8::Value>();
}

} // namespace DirectoryReaderInternal

static const BatchedCallback DirectoryReaderCallbacks[] = {
    {"readEntries", DirectoryReaderInternal::readEntriesCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8DirectoryReaderTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "DirectoryReader", v8::Persistent<v8::FunctionTemplate>(), V8DirectoryReader::internalFieldCount,
        0, 0,
        DirectoryReaderCallbacks, sizeof(DirectoryReaderCallbacks) / sizeof(*DirectoryReaderCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DirectoryReader::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DirectoryReaderRawCache = createRawTemplate();
    return V8DirectoryReaderRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8DirectoryReader::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DirectoryReaderCache = ConfigureV8DirectoryReaderTemplate(GetRawTemplate());
    return V8DirectoryReaderCache;
}

DirectoryReader* V8DirectoryReader::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<DirectoryReader*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8DirectoryReader::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DirectoryReader::wrap(DirectoryReader* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<DirectoryReader > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(DirectoryReader* impl)
{
    if (!impl)
        return v8::Null();
    return V8DirectoryReader::wrap(impl);
}

void V8DirectoryReader::derefObject(void* object)
{
    static_cast<DirectoryReader*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(FILE_SYSTEM)