// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_ApplicationCache_h
#define blink_protocol_ApplicationCache_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace ApplicationCache {

// ------------- Forward and enum declarations.
class ApplicationCacheResource;
class ApplicationCache;
class FrameWithManifest;
class ApplicationCacheStatusUpdatedNotification;
class NetworkStateUpdatedNotification;

// ------------- Type and builder declarations.

class CORE_EXPORT ApplicationCacheResource : public Serializable{
    PROTOCOL_DISALLOW_COPY(ApplicationCacheResource);
public:
    static std::unique_ptr<ApplicationCacheResource> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ApplicationCacheResource() override { }

    String getUrl() { return m_url; }
    void setUrl(const String& value) { m_url = value; }

    int getSize() { return m_size; }
    void setSize(int value) { m_size = value; }

    String getType() { return m_type; }
    void setType(const String& value) { m_type = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ApplicationCacheResource> clone() const;

    template<int STATE>
    class ApplicationCacheResourceBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            UrlSet = 1 << 1,
            SizeSet = 1 << 2,
            TypeSet = 1 << 3,
            AllFieldsSet = (UrlSet | SizeSet | TypeSet | 0)};


        ApplicationCacheResourceBuilder<STATE | UrlSet>& setUrl(const String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        ApplicationCacheResourceBuilder<STATE | SizeSet>& setSize(int value)
        {
            static_assert(!(STATE & SizeSet), "property size should not be set yet");
            m_result->setSize(value);
            return castState<SizeSet>();
        }

        ApplicationCacheResourceBuilder<STATE | TypeSet>& setType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        std::unique_ptr<ApplicationCacheResource> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ApplicationCacheResource;
        ApplicationCacheResourceBuilder() : m_result(new ApplicationCacheResource()) { }

        template<int STEP> ApplicationCacheResourceBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ApplicationCacheResourceBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ApplicationCache::ApplicationCacheResource> m_result;
    };

    static ApplicationCacheResourceBuilder<0> create()
    {
        return ApplicationCacheResourceBuilder<0>();
    }

private:
    ApplicationCacheResource()
    {
          m_size = 0;
    }

    String m_url;
    int m_size;
    String m_type;
};


class CORE_EXPORT ApplicationCache : public Serializable{
    PROTOCOL_DISALLOW_COPY(ApplicationCache);
public:
    static std::unique_ptr<ApplicationCache> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ApplicationCache() override { }

    String getManifestURL() { return m_manifestURL; }
    void setManifestURL(const String& value) { m_manifestURL = value; }

    double getSize() { return m_size; }
    void setSize(double value) { m_size = value; }

    double getCreationTime() { return m_creationTime; }
    void setCreationTime(double value) { m_creationTime = value; }

    double getUpdateTime() { return m_updateTime; }
    void setUpdateTime(double value) { m_updateTime = value; }

    protocol::Array<protocol::ApplicationCache::ApplicationCacheResource>* getResources() { return m_resources.get(); }
    void setResources(std::unique_ptr<protocol::Array<protocol::ApplicationCache::ApplicationCacheResource>> value) { m_resources = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ApplicationCache> clone() const;

    template<int STATE>
    class ApplicationCacheBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ManifestURLSet = 1 << 1,
            SizeSet = 1 << 2,
            CreationTimeSet = 1 << 3,
            UpdateTimeSet = 1 << 4,
            ResourcesSet = 1 << 5,
            AllFieldsSet = (ManifestURLSet | SizeSet | CreationTimeSet | UpdateTimeSet | ResourcesSet | 0)};


        ApplicationCacheBuilder<STATE | ManifestURLSet>& setManifestURL(const String& value)
        {
            static_assert(!(STATE & ManifestURLSet), "property manifestURL should not be set yet");
            m_result->setManifestURL(value);
            return castState<ManifestURLSet>();
        }

        ApplicationCacheBuilder<STATE | SizeSet>& setSize(double value)
        {
            static_assert(!(STATE & SizeSet), "property size should not be set yet");
            m_result->setSize(value);
            return castState<SizeSet>();
        }

        ApplicationCacheBuilder<STATE | CreationTimeSet>& setCreationTime(double value)
        {
            static_assert(!(STATE & CreationTimeSet), "property creationTime should not be set yet");
            m_result->setCreationTime(value);
            return castState<CreationTimeSet>();
        }

        ApplicationCacheBuilder<STATE | UpdateTimeSet>& setUpdateTime(double value)
        {
            static_assert(!(STATE & UpdateTimeSet), "property updateTime should not be set yet");
            m_result->setUpdateTime(value);
            return castState<UpdateTimeSet>();
        }

        ApplicationCacheBuilder<STATE | ResourcesSet>& setResources(std::unique_ptr<protocol::Array<protocol::ApplicationCache::ApplicationCacheResource>> value)
        {
            static_assert(!(STATE & ResourcesSet), "property resources should not be set yet");
            m_result->setResources(std::move(value));
            return castState<ResourcesSet>();
        }

        std::unique_ptr<ApplicationCache> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ApplicationCache;
        ApplicationCacheBuilder() : m_result(new ApplicationCache()) { }

        template<int STEP> ApplicationCacheBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ApplicationCacheBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ApplicationCache::ApplicationCache> m_result;
    };

    static ApplicationCacheBuilder<0> create()
    {
        return ApplicationCacheBuilder<0>();
    }

private:
    ApplicationCache()
    {
          m_size = 0;
          m_creationTime = 0;
          m_updateTime = 0;
    }

    String m_manifestURL;
    double m_size;
    double m_creationTime;
    double m_updateTime;
    std::unique_ptr<protocol::Array<protocol::ApplicationCache::ApplicationCacheResource>> m_resources;
};


class CORE_EXPORT FrameWithManifest : public Serializable{
    PROTOCOL_DISALLOW_COPY(FrameWithManifest);
public:
    static std::unique_ptr<FrameWithManifest> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~FrameWithManifest() override { }

    String getFrameId() { return m_frameId; }
    void setFrameId(const String& value) { m_frameId = value; }

    String getManifestURL() { return m_manifestURL; }
    void setManifestURL(const String& value) { m_manifestURL = value; }

    int getStatus() { return m_status; }
    void setStatus(int value) { m_status = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<FrameWithManifest> clone() const;

    template<int STATE>
    class FrameWithManifestBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            FrameIdSet = 1 << 1,
            ManifestURLSet = 1 << 2,
            StatusSet = 1 << 3,
            AllFieldsSet = (FrameIdSet | ManifestURLSet | StatusSet | 0)};


        FrameWithManifestBuilder<STATE | FrameIdSet>& setFrameId(const String& value)
        {
            static_assert(!(STATE & FrameIdSet), "property frameId should not be set yet");
            m_result->setFrameId(value);
            return castState<FrameIdSet>();
        }

        FrameWithManifestBuilder<STATE | ManifestURLSet>& setManifestURL(const String& value)
        {
            static_assert(!(STATE & ManifestURLSet), "property manifestURL should not be set yet");
            m_result->setManifestURL(value);
            return castState<ManifestURLSet>();
        }

        FrameWithManifestBuilder<STATE | StatusSet>& setStatus(int value)
        {
            static_assert(!(STATE & StatusSet), "property status should not be set yet");
            m_result->setStatus(value);
            return castState<StatusSet>();
        }

        std::unique_ptr<FrameWithManifest> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class FrameWithManifest;
        FrameWithManifestBuilder() : m_result(new FrameWithManifest()) { }

        template<int STEP> FrameWithManifestBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<FrameWithManifestBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ApplicationCache::FrameWithManifest> m_result;
    };

    static FrameWithManifestBuilder<0> create()
    {
        return FrameWithManifestBuilder<0>();
    }

private:
    FrameWithManifest()
    {
          m_status = 0;
    }

    String m_frameId;
    String m_manifestURL;
    int m_status;
};


class CORE_EXPORT ApplicationCacheStatusUpdatedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ApplicationCacheStatusUpdatedNotification);
public:
    static std::unique_ptr<ApplicationCacheStatusUpdatedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ApplicationCacheStatusUpdatedNotification() override { }

    String getFrameId() { return m_frameId; }
    void setFrameId(const String& value) { m_frameId = value; }

    String getManifestURL() { return m_manifestURL; }
    void setManifestURL(const String& value) { m_manifestURL = value; }

    int getStatus() { return m_status; }
    void setStatus(int value) { m_status = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ApplicationCacheStatusUpdatedNotification> clone() const;

    template<int STATE>
    class ApplicationCacheStatusUpdatedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            FrameIdSet = 1 << 1,
            ManifestURLSet = 1 << 2,
            StatusSet = 1 << 3,
            AllFieldsSet = (FrameIdSet | ManifestURLSet | StatusSet | 0)};


        ApplicationCacheStatusUpdatedNotificationBuilder<STATE | FrameIdSet>& setFrameId(const String& value)
        {
            static_assert(!(STATE & FrameIdSet), "property frameId should not be set yet");
            m_result->setFrameId(value);
            return castState<FrameIdSet>();
        }

        ApplicationCacheStatusUpdatedNotificationBuilder<STATE | ManifestURLSet>& setManifestURL(const String& value)
        {
            static_assert(!(STATE & ManifestURLSet), "property manifestURL should not be set yet");
            m_result->setManifestURL(value);
            return castState<ManifestURLSet>();
        }

        ApplicationCacheStatusUpdatedNotificationBuilder<STATE | StatusSet>& setStatus(int value)
        {
            static_assert(!(STATE & StatusSet), "property status should not be set yet");
            m_result->setStatus(value);
            return castState<StatusSet>();
        }

        std::unique_ptr<ApplicationCacheStatusUpdatedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ApplicationCacheStatusUpdatedNotification;
        ApplicationCacheStatusUpdatedNotificationBuilder() : m_result(new ApplicationCacheStatusUpdatedNotification()) { }

        template<int STEP> ApplicationCacheStatusUpdatedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ApplicationCacheStatusUpdatedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ApplicationCache::ApplicationCacheStatusUpdatedNotification> m_result;
    };

    static ApplicationCacheStatusUpdatedNotificationBuilder<0> create()
    {
        return ApplicationCacheStatusUpdatedNotificationBuilder<0>();
    }

private:
    ApplicationCacheStatusUpdatedNotification()
    {
          m_status = 0;
    }

    String m_frameId;
    String m_manifestURL;
    int m_status;
};


class CORE_EXPORT NetworkStateUpdatedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(NetworkStateUpdatedNotification);
public:
    static std::unique_ptr<NetworkStateUpdatedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~NetworkStateUpdatedNotification() override { }

    bool getIsNowOnline() { return m_isNowOnline; }
    void setIsNowOnline(bool value) { m_isNowOnline = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<NetworkStateUpdatedNotification> clone() const;

    template<int STATE>
    class NetworkStateUpdatedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            IsNowOnlineSet = 1 << 1,
            AllFieldsSet = (IsNowOnlineSet | 0)};


        NetworkStateUpdatedNotificationBuilder<STATE | IsNowOnlineSet>& setIsNowOnline(bool value)
        {
            static_assert(!(STATE & IsNowOnlineSet), "property isNowOnline should not be set yet");
            m_result->setIsNowOnline(value);
            return castState<IsNowOnlineSet>();
        }

        std::unique_ptr<NetworkStateUpdatedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class NetworkStateUpdatedNotification;
        NetworkStateUpdatedNotificationBuilder() : m_result(new NetworkStateUpdatedNotification()) { }

        template<int STEP> NetworkStateUpdatedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<NetworkStateUpdatedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ApplicationCache::NetworkStateUpdatedNotification> m_result;
    };

    static NetworkStateUpdatedNotificationBuilder<0> create()
    {
        return NetworkStateUpdatedNotificationBuilder<0>();
    }

private:
    NetworkStateUpdatedNotification()
    {
          m_isNowOnline = false;
    }

    bool m_isNowOnline;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse enable() = 0;
    virtual DispatchResponse getApplicationCacheForFrame(const String& in_frameId, std::unique_ptr<protocol::ApplicationCache::ApplicationCache>* out_applicationCache) = 0;
    virtual DispatchResponse getFramesWithManifests(std::unique_ptr<protocol::Array<protocol::ApplicationCache::FrameWithManifest>>* out_frameIds) = 0;
    virtual DispatchResponse getManifestForFrame(const String& in_frameId, String* out_manifestURL) = 0;

    virtual DispatchResponse disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void applicationCacheStatusUpdated(const String& frameId, const String& manifestURL, int status);
    void networkStateUpdated(bool isNowOnline);

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CORE_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace ApplicationCache
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_ApplicationCache_h)
