// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/ApplicationCache.h"

#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"

namespace blink {
namespace protocol {
namespace ApplicationCache {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "ApplicationCache";
const char Metainfo::commandPrefix[] = "ApplicationCache.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<ApplicationCacheResource> ApplicationCacheResource::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ApplicationCacheResource> result(new ApplicationCacheResource());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* sizeValue = object->get("size");
    errors->setName("size");
    result->m_size = ValueConversions<int>::fromValue(sizeValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ApplicationCacheResource::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    result->setValue("size", ValueConversions<int>::toValue(m_size));
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    return result;
}

std::unique_ptr<ApplicationCacheResource> ApplicationCacheResource::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ApplicationCache> ApplicationCache::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ApplicationCache> result(new ApplicationCache());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* manifestURLValue = object->get("manifestURL");
    errors->setName("manifestURL");
    result->m_manifestURL = ValueConversions<String>::fromValue(manifestURLValue, errors);
    protocol::Value* sizeValue = object->get("size");
    errors->setName("size");
    result->m_size = ValueConversions<double>::fromValue(sizeValue, errors);
    protocol::Value* creationTimeValue = object->get("creationTime");
    errors->setName("creationTime");
    result->m_creationTime = ValueConversions<double>::fromValue(creationTimeValue, errors);
    protocol::Value* updateTimeValue = object->get("updateTime");
    errors->setName("updateTime");
    result->m_updateTime = ValueConversions<double>::fromValue(updateTimeValue, errors);
    protocol::Value* resourcesValue = object->get("resources");
    errors->setName("resources");
    result->m_resources = ValueConversions<protocol::Array<protocol::ApplicationCache::ApplicationCacheResource>>::fromValue(resourcesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ApplicationCache::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("manifestURL", ValueConversions<String>::toValue(m_manifestURL));
    result->setValue("size", ValueConversions<double>::toValue(m_size));
    result->setValue("creationTime", ValueConversions<double>::toValue(m_creationTime));
    result->setValue("updateTime", ValueConversions<double>::toValue(m_updateTime));
    result->setValue("resources", ValueConversions<protocol::Array<protocol::ApplicationCache::ApplicationCacheResource>>::toValue(m_resources.get()));
    return result;
}

std::unique_ptr<ApplicationCache> ApplicationCache::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<FrameWithManifest> FrameWithManifest::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameWithManifest> result(new FrameWithManifest());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* manifestURLValue = object->get("manifestURL");
    errors->setName("manifestURL");
    result->m_manifestURL = ValueConversions<String>::fromValue(manifestURLValue, errors);
    protocol::Value* statusValue = object->get("status");
    errors->setName("status");
    result->m_status = ValueConversions<int>::fromValue(statusValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameWithManifest::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    result->setValue("manifestURL", ValueConversions<String>::toValue(m_manifestURL));
    result->setValue("status", ValueConversions<int>::toValue(m_status));
    return result;
}

std::unique_ptr<FrameWithManifest> FrameWithManifest::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ApplicationCacheStatusUpdatedNotification> ApplicationCacheStatusUpdatedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ApplicationCacheStatusUpdatedNotification> result(new ApplicationCacheStatusUpdatedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* manifestURLValue = object->get("manifestURL");
    errors->setName("manifestURL");
    result->m_manifestURL = ValueConversions<String>::fromValue(manifestURLValue, errors);
    protocol::Value* statusValue = object->get("status");
    errors->setName("status");
    result->m_status = ValueConversions<int>::fromValue(statusValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ApplicationCacheStatusUpdatedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    result->setValue("manifestURL", ValueConversions<String>::toValue(m_manifestURL));
    result->setValue("status", ValueConversions<int>::toValue(m_status));
    return result;
}

std::unique_ptr<ApplicationCacheStatusUpdatedNotification> ApplicationCacheStatusUpdatedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<NetworkStateUpdatedNotification> NetworkStateUpdatedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<NetworkStateUpdatedNotification> result(new NetworkStateUpdatedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* isNowOnlineValue = object->get("isNowOnline");
    errors->setName("isNowOnline");
    result->m_isNowOnline = ValueConversions<bool>::fromValue(isNowOnlineValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> NetworkStateUpdatedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("isNowOnline", ValueConversions<bool>::toValue(m_isNowOnline));
    return result;
}

std::unique_ptr<NetworkStateUpdatedNotification> NetworkStateUpdatedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::applicationCacheStatusUpdated(const String& frameId, const String& manifestURL, int status)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<ApplicationCacheStatusUpdatedNotification> messageData = ApplicationCacheStatusUpdatedNotification::create()
        .setFrameId(frameId)
        .setManifestURL(manifestURL)
        .setStatus(status)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("ApplicationCache.applicationCacheStatusUpdated", std::move(messageData)));
}

void Frontend::networkStateUpdated(bool isNowOnline)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<NetworkStateUpdatedNotification> messageData = NetworkStateUpdatedNotification::create()
        .setIsNowOnline(isNowOnline)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("ApplicationCache.networkStateUpdated", std::move(messageData)));
}

void Frontend::flush()
{
    m_frontendChannel->flushProtocolNotifications();
}

void Frontend::sendRawNotification(const String& notification)
{
    m_frontendChannel->sendProtocolNotification(InternalRawNotification::create(notification));
}

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend, bool fallThroughForNotFound)
        : DispatcherBase(frontendChannel)
        , m_backend(backend)
        , m_fallThroughForNotFound(fallThroughForNotFound) {
        m_dispatchMap["ApplicationCache.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["ApplicationCache.getApplicationCacheForFrame"] = &DispatcherImpl::getApplicationCacheForFrame;
        m_dispatchMap["ApplicationCache.getFramesWithManifests"] = &DispatcherImpl::getFramesWithManifests;
        m_dispatchMap["ApplicationCache.getManifestForFrame"] = &DispatcherImpl::getManifestForFrame;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getApplicationCacheForFrame(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getFramesWithManifests(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getManifestForFrame(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

    Backend* m_backend;
    bool m_fallThroughForNotFound;
};

DispatchResponse::Status DispatcherImpl::dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject)
{
    protocol::HashMap<String, CallHandler>::iterator it = m_dispatchMap.find(method);
    if (it == m_dispatchMap.end()) {
        if (m_fallThroughForNotFound)
            return DispatchResponse::kFallThrough;
        reportProtocolError(callId, DispatchResponse::kMethodNotFound, "'" + method + "' wasn't found", nullptr);
        return DispatchResponse::kError;
    }

    protocol::ErrorSupport errors;
    return (this->*(it->second))(callId, std::move(messageObject), &errors);
}


DispatchResponse::Status DispatcherImpl::enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->enable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getApplicationCacheForFrame(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    String in_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::ApplicationCache::ApplicationCache> out_applicationCache;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getApplicationCacheForFrame(in_frameId, &out_applicationCache);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("applicationCache", ValueConversions<protocol::ApplicationCache::ApplicationCache>::toValue(out_applicationCache.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getFramesWithManifests(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::Array<protocol::ApplicationCache::FrameWithManifest>> out_frameIds;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getFramesWithManifests(&out_frameIds);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("frameIds", ValueConversions<protocol::Array<protocol::ApplicationCache::FrameWithManifest>>::toValue(out_frameIds.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getManifestForFrame(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    String in_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    String out_manifestURL;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getManifestForFrame(in_frameId, &out_manifestURL);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("manifestURL", ValueConversions<String>::toValue(out_manifestURL));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("ApplicationCache", std::move(dispatcher));
}

} // ApplicationCache
} // namespace blink
} // namespace protocol
