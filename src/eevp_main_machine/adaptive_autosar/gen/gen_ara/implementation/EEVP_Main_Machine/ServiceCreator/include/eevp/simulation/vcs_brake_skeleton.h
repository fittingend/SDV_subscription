///////////////////////////////////////////////////////////////////////////////////////////////////////////
///                                                                                                        
/// Copyright, 2021 PopcornSAR Co., Ltd. All rights reserved.                                              
/// This software is copyright protected and proprietary to PopcornSAR Co., Ltd.                           
/// PopcornSAR Co., Ltd. grants to you only those rights as set out in the license conditions.             
///                                                                                                        
///////////////////////////////////////////////////////////////////////////////////////////////////////////
/// AUTOSAR VERSION                   : R20-11
/// GENERATED BY                      : PARA, ARA::COM Generator
///////////////////////////////////////////////////////////////////////////////////////////////////////////
/// GENERATED FILE NAME               : vcs_brake_skeleton.h
/// SERVICE INTERFACE NAME            : VCS_Brake
/// GENERATED DATE                    : 2024-11-05 15:23:59
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///                                                                                                        
/// CAUTION!! AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                                   
///                                                                                                        
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef PARA_COM_GEN_SERVICE_INTERFACE_VCS_BRAKE_SKELETON_H
#define PARA_COM_GEN_SERVICE_INTERFACE_VCS_BRAKE_SKELETON_H
///////////////////////////////////////////////////////////////////////////////////////////////////////////
/// INCLUSION HEADER FILES
///////////////////////////////////////////////////////////////////////////////////////////////////////////
/// @uptrace{SWS_CM_01004}
#include "vcs_brake_common.h"
#include "para/com/skeleton/skeleton_interface.h"
/// @uptrace{SWS_CM_01005}
namespace eevp
{
namespace simulation
{
/// @uptrace{SWS_CM_01006}
namespace skeleton
{
class VCS_BrakeSkeleton;
/// @uptrace{SWS_CM_01009}
namespace events
{
} /// namespace events
/// @uptrace{SWS_CM_01031}
namespace fields
{
} /// namespace fields
/// @uptrace{SWS_CM_00002}
class VCS_BrakeSkeleton
{
public:
    /// @uptrace{SWS_CM_00191}
    struct notifyMCPrsOutput
    {
        eevp::simulation::VCS_MCPrs VCS_MCPrs;
    };
    struct notifyTqOutput
    {
        eevp::simulation::VCS_TqCtrl VCS_TqCtrl;
    };
    struct setTargetAxOutput
    {
    };
    struct setTotalForceOutput
    {
    };
    /// @brief Constructor
    /// @uptrace{SWS_CM_00002, SWS_CM_00152}
    VCS_BrakeSkeleton(ara::core::InstanceSpecifier instanceSpec, ara::com::MethodCallProcessingMode mode = ara::com::MethodCallProcessingMode::kEvent)
        : mInterface(std::make_unique<para::com::SkeletonInterface>(instanceSpec, mode))
    {
        mInterface->SetMethodCallHandler(knotifyMCPrsCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlenotifyMCPrs(data, token);
        });
        mInterface->SetMethodCallHandler(knotifyTqCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlenotifyTq(data, token);
        });
        mInterface->SetMethodCallHandler(ksetTargetAxCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlesetTargetAx(data, token);
        });
        mInterface->SetMethodCallHandler(ksetTotalForceCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlesetTotalForce(data, token);
        });
        mInterface->SetE2EErrorHandler([this](const ara::com::e2e::E2EErrorDomain& errorCode, ara::com::e2e::DataID dataID, ara::com::e2e::MessageCounter messageCounter) {
            E2EErrorHandler(errorCode, dataID, messageCounter);
        });
    }
    /// @brief Destructor
    virtual ~VCS_BrakeSkeleton() = default;
    /// @brief Delete copy constructor
    /// @uptrace{SWS_CM_00134}
    VCS_BrakeSkeleton(const VCS_BrakeSkeleton& other) = delete;
    /// @brief Delete copy assignment
    /// @uptrace{SWS_CM_00134}
    VCS_BrakeSkeleton& operator=(const VCS_BrakeSkeleton& other) = delete;
    /// @brief Move constructor
    /// @uptrace{SWS_CM_00135}
    VCS_BrakeSkeleton(VCS_BrakeSkeleton&& other) noexcept
        : mInterface(std::move(other.mInterface))
    {
        mInterface->SetMethodCallHandler(knotifyMCPrsCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlenotifyMCPrs(data, token);
        });
        mInterface->SetMethodCallHandler(knotifyTqCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlenotifyTq(data, token);
        });
        mInterface->SetMethodCallHandler(ksetTargetAxCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlesetTargetAx(data, token);
        });
        mInterface->SetMethodCallHandler(ksetTotalForceCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlesetTotalForce(data, token);
        });
        mInterface->SetE2EErrorHandler([this](const ara::com::e2e::E2EErrorDomain& errorCode, ara::com::e2e::DataID dataID, ara::com::e2e::MessageCounter messageCounter) {
            E2EErrorHandler(errorCode, dataID, messageCounter);
        });
        other.mInterface.reset();
    }
    /// @brief Move assignment
    /// @uptrace{SWS_CM_00135}
    VCS_BrakeSkeleton& operator=(VCS_BrakeSkeleton&& other) noexcept
    {
        mInterface = std::move(other.mInterface);
        mInterface->SetMethodCallHandler(knotifyMCPrsCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlenotifyMCPrs(data, token);
        });
        mInterface->SetMethodCallHandler(knotifyTqCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlenotifyTq(data, token);
        });
        mInterface->SetMethodCallHandler(ksetTargetAxCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlesetTargetAx(data, token);
        });
        mInterface->SetMethodCallHandler(ksetTotalForceCallSign, [this](const std::vector<std::uint8_t>& data, const para::com::MethodToken token) {
            HandlesetTotalForce(data, token);
        });
        mInterface->SetE2EErrorHandler([this](const ara::com::e2e::E2EErrorDomain& errorCode, ara::com::e2e::DataID dataID, ara::com::e2e::MessageCounter messageCounter) {
            E2EErrorHandler(errorCode, dataID, messageCounter);
        });
        other.mInterface.reset();
        return *this;
    }
    /// @brief Send "OfferService" message to Communication Management
    /// @uptrace{SWS_CM_00101}
    ara::core::Result<void> OfferService()
    {
        return mInterface->OfferService();
    }
    /// @brief Send "StopOfferService" message to Communication Management
    /// @uptrace{SWS_CM_00111}
    void StopOfferService()
    {
        mInterface->StopOfferService();
    }
    /// @brief Allows the implementation providing the service method to trigger the execution of the next service consumer method call at a specific point of time
    ///        if the processing mode is set to kPoll.
    /// @note This function requires that ara::com::MethodCallProcessingMode is configured as kPoll by constructor
    /// @uptrace{SWS_CM_00199}
    ara::core::Future<bool> ProcessNextMethodCall()
    {
        ara::core::Promise<bool> promise{};
        auto ret = mInterface->ProcessNextMethodCall();
        if (ret.HasValue())
        {
            promise.set_value(ret.Value());
        }
        else
        {
            promise.SetError(ret.Error());
        }
        return promise.get_future();
    }
    /// @brief In case the call to E2E_check indicated a failed E2E check of the request message, the server application can get notified via an E2E error handler.
    /// @uptrace{SWS_CM_10470}
    virtual void E2EErrorHandler(const ara::com::e2e::E2EErrorDomain& errorCode, ara::com::e2e::DataID dataID, ara::com::e2e::MessageCounter messageCounter)
    {
    }
    
private:
    std::unique_ptr<para::com::SkeletonInterface> mInterface;
    
public:
    /// @brief Method, notifyMCPrs
    /// @uptrace{SWS_CM_00191}
    virtual ara::core::Future<notifyMCPrsOutput> notifyMCPrs() = 0;
    /// @brief Method, notifyTq
    /// @uptrace{SWS_CM_00191}
    virtual ara::core::Future<notifyTqOutput> notifyTq() = 0;
    /// @brief Method, setTargetAx
    /// @uptrace{SWS_CM_00191}
    virtual ara::core::Future<setTargetAxOutput> setTargetAx(const eevp::simulation::VCS_Acceleration& ax) = 0;
    /// @brief Method, setTotalForce
    /// @uptrace{SWS_CM_00191}
    virtual ara::core::Future<setTotalForceOutput> setTotalForce(const eevp::simulation::VCS_LgtBrkFTotal& lgtBrkFTotal) = 0;
    
private:
    void HandlenotifyMCPrs(const std::vector<std::uint8_t>& data, const para::com::MethodToken token)
    {
        std::uint8_t retResult{1};
        std::vector<std::uint8_t> retData{};
        auto future = notifyMCPrs();
        auto result = future.GetResult();
        if (result.HasValue())
        {
            notifyMCPrsOutput output = result.Value();
            para::serializer::Serializer serializer{};
            serializer.write(output.VCS_MCPrs);
            retData = serializer.ensure();
            retResult = 0;
        }
        else
        {
            ara::core::ErrorDomain::IdType domainId = result.Error().Domain().Id();
            ara::core::ErrorDomain::CodeType errorCode = result.Error().Value();
            para::serializer::Serializer serializer{};
            serializer.write(0, true, 0, domainId);
            serializer.write(0, true, 0, errorCode);
            retData = serializer.ensure();
            retResult = 1;
        }
        mInterface->ReturnMethod(knotifyMCPrsCallSign, retResult, retData, token);
    }
    void HandlenotifyTq(const std::vector<std::uint8_t>& data, const para::com::MethodToken token)
    {
        std::uint8_t retResult{1};
        std::vector<std::uint8_t> retData{};
        auto future = notifyTq();
        auto result = future.GetResult();
        if (result.HasValue())
        {
            notifyTqOutput output = result.Value();
            para::serializer::Serializer serializer{};
            serializer.write(output.VCS_TqCtrl);
            retData = serializer.ensure();
            retResult = 0;
        }
        else
        {
            ara::core::ErrorDomain::IdType domainId = result.Error().Domain().Id();
            ara::core::ErrorDomain::CodeType errorCode = result.Error().Value();
            para::serializer::Serializer serializer{};
            serializer.write(0, true, 0, domainId);
            serializer.write(0, true, 0, errorCode);
            retData = serializer.ensure();
            retResult = 1;
        }
        mInterface->ReturnMethod(knotifyTqCallSign, retResult, retData, token);
    }
    void HandlesetTargetAx(const std::vector<std::uint8_t>& data, const para::com::MethodToken token)
    {
        std::uint8_t retResult{1};
        std::vector<std::uint8_t> retData{};
        para::serializer::Deserializer deserializer{data};
        eevp::simulation::VCS_Acceleration _ax_;
        deserializer.read(_ax_);
        auto future = setTargetAx(_ax_);
        auto result = future.GetResult();
        if (result.HasValue())
        {
            retResult = 0;
        }
        else
        {
            ara::core::ErrorDomain::IdType domainId = result.Error().Domain().Id();
            ara::core::ErrorDomain::CodeType errorCode = result.Error().Value();
            para::serializer::Serializer serializer{};
            serializer.write(0, true, 0, domainId);
            serializer.write(0, true, 0, errorCode);
            retData = serializer.ensure();
            retResult = 1;
        }
        mInterface->ReturnMethod(ksetTargetAxCallSign, retResult, retData, token);
    }
    void HandlesetTotalForce(const std::vector<std::uint8_t>& data, const para::com::MethodToken token)
    {
        std::uint8_t retResult{1};
        std::vector<std::uint8_t> retData{};
        para::serializer::Deserializer deserializer{data};
        eevp::simulation::VCS_LgtBrkFTotal _lgtBrkFTotal_;
        deserializer.read(_lgtBrkFTotal_);
        auto future = setTotalForce(_lgtBrkFTotal_);
        auto result = future.GetResult();
        if (result.HasValue())
        {
            retResult = 0;
        }
        else
        {
            ara::core::ErrorDomain::IdType domainId = result.Error().Domain().Id();
            ara::core::ErrorDomain::CodeType errorCode = result.Error().Value();
            para::serializer::Serializer serializer{};
            serializer.write(0, true, 0, domainId);
            serializer.write(0, true, 0, errorCode);
            retData = serializer.ensure();
            retResult = 1;
        }
        mInterface->ReturnMethod(ksetTotalForceCallSign, retResult, retData, token);
    }
    const std::string knotifyMCPrsCallSign{"notifyMCPrs"};
    const std::string knotifyTqCallSign{"notifyTq"};
    const std::string ksetTargetAxCallSign{"setTargetAx"};
    const std::string ksetTotalForceCallSign{"setTotalForce"};
};
} /// namespace skeleton
} /// namespace simulation
} /// namespace eevp
#endif /// PARA_COM_GEN_SERVICE_INTERFACE_VCS_BRAKE_SKELETON_H