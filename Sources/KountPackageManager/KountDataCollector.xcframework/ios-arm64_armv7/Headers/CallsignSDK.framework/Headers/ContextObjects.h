//
//  ContextObjects.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ACSTemplateContextObject;
@class AuthMechanismContextObject;
@class AuthMechanismFactorTypeContextObject;
@class AuthMechanismModeContextObject;
@class AuthMechanismTypeContextObject;
@class AuthenticatorContextObject;
@class AuthenticatorStatusContextObject;
@class AvailabilityStatusContextObject;
@class ChallengeDataContextObject;
@class CollectorContextObject;
@class CollectorTypeContextObject;
@class ComplianceRequirementContextObject;
@class ComplianceResultContextObject;
@class ComplianceResultTypeContextObject;
@class ConsentContextObject;
@class CriteriaContextObject;
@class CriteriaTypeContextObject;
@class CustomRequirementContextObject;
@class CustomRequirementParameterContextObject;
@class DeliveryModeContextObject;
@class DeviceChannelContextObject;
@class DeviceContextObject;
@class DeviceTypeContextObject;
@class ErrorMessageContextObject;
@class FilterContextObject;
@class FilterTypeContextObject;
@class FlowContextObject;
@class HierarchyContextObject;
@class InterventionTemplateContextObject;
@class LanguageTemplateParametersContextObject;
@class LocationContextObject;
@class MetadataContextObject;
@class OtherRequirementContextObject;
@class PaymentContextObject;
@class PriorityReasonContextObject;
@class ProviderContextObject;
@class Psd2FailureCodeContextObject;
@class Psd2RequirementContextObject;
@class Psd2ResultContextObject;
@class Psd2ScaExemptionTypeContextObject;
@class QualifiedIdentityContextObject;
@class RegulationTypeContextObject;
@class RequirementContextObject;
@class RequirementResultContextObject;
@class RequirementTypeContextObject;
@class RequirementsCombinationContextObject;
@class RequirementsCombinationResultContextObject;
@class RequirementsCombinationTypeContextObject;
@class RequirementsResultTypeContextObject;
@class RestrictionCriteriaContextObject;
@class RiskContextObject;
@class SelectionDataChoiceContextObject;
@class SelectionDataContextObject;
@class SelectionDataTypeContextObject;
@class TelephonyContextObject;
@class TelephonySubTypeContextObject;
@class TemplateContextObject;
@class TemplateKeyTypeContextObject;
@class TemplateParameterContextObject;
@class TransactionContextObject;
@class UserIdentityContextObject;
@class ValidationModeContextObject;
/**
 * ACSTemplate
 */
NS_SWIFT_NAME(ACSTemplateContextObject)
@interface ACSTemplateContextObject : NSObject

/**
 * Short Name of the ACS template
 */
@property (nonatomic, strong, nonnull) NSString* shortName;

/**
 * ACS Template Id
 */
@property (nonatomic, strong, nonnull) NSString* templateId;

@end
/**
 * An over authentication Mechanism, including the authentication mechanism policy to be applied
 */
NS_SWIFT_NAME(AuthMechanismContextObject)
@interface AuthMechanismContextObject : NSObject

/**
 * Suitable display name for authentication Mechanism
 */
@property (nonatomic, strong, nullable) NSString* displayName;

/**
 * The factors of the authenticator.
 */
@property (nonatomic, strong, nullable) NSArray<AuthMechanismFactorTypeContextObject*>* factorTypes;

/**
 * A more detailed description of the authenticator type
 */
@property (nonatomic, strong, nonnull) AuthMechanismTypeContextObject* mechanismType;

/**
 * The mode in which the authenticator is operating, if applicable
 */
@property (nonatomic, strong, nonnull) AuthMechanismModeContextObject* mode;

@end
/**
 * The highest level type of the authenticator. KNOWLEDGE, POSSESSION and INHERENCE.
 */
NS_SWIFT_NAME(AuthMechanismFactorTypeContextObject)
@interface AuthMechanismFactorTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) AuthMechanismFactorTypeContextObject* INHERENCE NS_SWIFT_NAME(inherence);
@property (nonatomic, class, readonly, nonnull) AuthMechanismFactorTypeContextObject* KNOWLEDGE NS_SWIFT_NAME(knowledge);
@property (nonatomic, class, readonly, nonnull) AuthMechanismFactorTypeContextObject* POSSESSION NS_SWIFT_NAME(possession);

@end
/**
 * The mode of operation of the authenticator. Some authenticators offer multiple modes. PRIMARY - The default mode. OTP - One time password mode. STEPUP - Stepup mode. SIGN - Sign a transaction. IDENTIFY - Identify user. RESPOND - Respond to a authentication event
 */
NS_SWIFT_NAME(AuthMechanismModeContextObject)
@interface AuthMechanismModeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) AuthMechanismModeContextObject* EXTERNAL NS_SWIFT_NAME(external);
@property (nonatomic, class, readonly, nonnull) AuthMechanismModeContextObject* IDENTIFY NS_SWIFT_NAME(identify);
@property (nonatomic, class, readonly, nonnull) AuthMechanismModeContextObject* INTERNAL NS_SWIFT_NAME(internal);
@property (nonatomic, class, readonly, nonnull) AuthMechanismModeContextObject* OTP NS_SWIFT_NAME(otp);
@property (nonatomic, class, readonly, nonnull) AuthMechanismModeContextObject* PRIMARY NS_SWIFT_NAME(primary);
@property (nonatomic, class, readonly, nonnull) AuthMechanismModeContextObject* PRIMARY_BEHAVIOUR NS_SWIFT_NAME(primaryBehaviour);
@property (nonatomic, class, readonly, nonnull) AuthMechanismModeContextObject* RESPOND NS_SWIFT_NAME(respond);
@property (nonatomic, class, readonly, nonnull) AuthMechanismModeContextObject* SIGN NS_SWIFT_NAME(sign);
@property (nonatomic, class, readonly, nonnull) AuthMechanismModeContextObject* STEPUP NS_SWIFT_NAME(stepup);

@end
/**
 * The specific implementation of the authentication type. May have multiple modes and classes.
 */
NS_SWIFT_NAME(AuthMechanismTypeContextObject)
@interface AuthMechanismTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* APPROVAL NS_SWIFT_NAME(approval);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* BIO NS_SWIFT_NAME(bio);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* CALLSIGN_OTP NS_SWIFT_NAME(callsignOtp);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* CALLSIGN_TOKEN NS_SWIFT_NAME(callsignToken);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* CARD NS_SWIFT_NAME(card);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* CARD_READER NS_SWIFT_NAME(cardReader);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* EMAIL_OTP NS_SWIFT_NAME(emailOtp);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* EXTERNAL NS_SWIFT_NAME(external);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* FACIAL NS_SWIFT_NAME(facial);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* KNOWLEDGE NS_SWIFT_NAME(knowledge);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* MANAGED_EXTERNAL NS_SWIFT_NAME(managedExternal);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* MI NS_SWIFT_NAME(mi);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* OTP NS_SWIFT_NAME(otp);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* PASSWORD NS_SWIFT_NAME(password);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* PATTERN NS_SWIFT_NAME(pattern);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* PHONECALL NS_SWIFT_NAME(phonecall);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* PIN NS_SWIFT_NAME(pin);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* SPIN NS_SWIFT_NAME(spin);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* SWIPE NS_SWIFT_NAME(swipe);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* TAC NS_SWIFT_NAME(tac);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* TOKEN NS_SWIFT_NAME(token);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* TOUCH_ID NS_SWIFT_NAME(touchId);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* UNP NS_SWIFT_NAME(unp);
@property (nonatomic, class, readonly, nonnull) AuthMechanismTypeContextObject* USERID NS_SWIFT_NAME(userid);

@end
/**
 * An authenticator
 */
NS_SWIFT_NAME(AuthenticatorContextObject)
@interface AuthenticatorContextObject : NSObject

/**
 * Additional attributes
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* additionalAttributes;

/**
 * Status of authenticator
 */
@property (nonatomic, strong, nonnull) AuthenticatorStatusContextObject* authenticatorStatus;

/**
 * Status reason
 */
@property (nonatomic, strong, nullable) NSString* authenticatorStatusReason;

/**
 * Name of target channel for binding (eg for OTP)
 */
@property (nonatomic, strong, nonnull) DeviceChannelContextObject* bindChannel;

/**
 * Timestamp until blocked
 */
@property (nonatomic, assign) long blockedUntilTimestamp;

/**
 * Name of target channel
 */
@property (nonatomic, strong, nonnull) DeviceChannelContextObject* channel;

/**
 * Name of class to which authenticator belongs
 */
@property (nonatomic, strong, nonnull) NSString* className;

/**
 * Current failure count
 */
@property (nonatomic, assign) int currentFailureCount;

/**
 * Default language
 */
@property (nonatomic, strong, nullable) NSString* defaultLanguage;

/**
 * Delivery mode
 */
@property (nonatomic, strong, nonnull) DeliveryModeContextObject* deliveryMode;

/**
 * Unique identifier of host device
 */
@property (nonatomic, strong, nullable) NSString* deviceInstanceId;

/**
 * Unique identifier for display
 */
@property (nonatomic, strong, nullable) NSString* displayId;

/**
 * Display name
 */
@property (nonatomic, strong, nullable) NSString* displayName;

/**
 * True if suitable for PSD2 dynamic linking
 */
@property (nonatomic, assign) BOOL dynamicLinkingFlag;

/**
 * Internal unique identifier
 */
@property (nonatomic, strong, nullable) NSString* internalId;

/**
 * Map of template parameters
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, LanguageTemplateParametersContextObject*>* languageTemplates;

/**
 * Most recent binding
 */
@property (nonatomic, assign) long lastBoundTimestamp;

/**
 * Last failure timestamp
 */
@property (nonatomic, assign) long lastFailureTimestamp;

/**
 * Last success timestamp
 */
@property (nonatomic, assign) long lastSuccessTimestamp;

/**
 * Mechanism of authenticator
 */
@property (nonatomic, strong, nonnull) AuthMechanismContextObject* mechanism;

/**
 * Optional phone number
 */
@property (nonatomic, strong, nullable) NSString* phoneNumber;

/**
 * Default preference for authenticator
 */
@property (nonatomic, assign) int preference;

/**
 * Flag showing if Authenticator is restricted
 */
@property (nonatomic, assign) BOOL restricted;

/**
 * Restrictions on authenticator class
 */
@property (nonatomic, strong, nullable) NSArray<RestrictionCriteriaContextObject*>* restrictions;

/**
 * Perceived strength of authenticator
 */
@property (nonatomic, assign) int strength;

/**
 * Map of template parameters
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, TemplateParameterContextObject*>* templates;

/**
 * Timestamp when authenticator information was gathered
 */
@property (nonatomic, assign) long timestamp;

/**
 * Validation mode
 */
@property (nonatomic, strong, nonnull) ValidationModeContextObject* validationMode;

@end
/**
 * The status of the Authenticator.
 */
NS_SWIFT_NAME(AuthenticatorStatusContextObject)
@interface AuthenticatorStatusContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) AuthenticatorStatusContextObject* ACTIVE NS_SWIFT_NAME(active);
@property (nonatomic, class, readonly, nonnull) AuthenticatorStatusContextObject* BIND_NOT_PERMITTED NS_SWIFT_NAME(bindNotPermitted);
@property (nonatomic, class, readonly, nonnull) AuthenticatorStatusContextObject* BIND_PERMITTED NS_SWIFT_NAME(bindPermitted);
@property (nonatomic, class, readonly, nonnull) AuthenticatorStatusContextObject* BLOCKED NS_SWIFT_NAME(blocked);
@property (nonatomic, class, readonly, nonnull) AuthenticatorStatusContextObject* CREATED NS_SWIFT_NAME(created);
@property (nonatomic, class, readonly, nonnull) AuthenticatorStatusContextObject* READY NS_SWIFT_NAME(ready);
@property (nonatomic, class, readonly, nonnull) AuthenticatorStatusContextObject* SUSPENDED NS_SWIFT_NAME(suspended);

@end
/**
 * Availabilty Status.
 */
NS_SWIFT_NAME(AvailabilityStatusContextObject)
@interface AvailabilityStatusContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) AvailabilityStatusContextObject* ACTIVE NS_SWIFT_NAME(active);
@property (nonatomic, class, readonly, nonnull) AvailabilityStatusContextObject* AVAILABLE NS_SWIFT_NAME(available);
@property (nonatomic, class, readonly, nonnull) AvailabilityStatusContextObject* BLOCKED NS_SWIFT_NAME(blocked);
@property (nonatomic, class, readonly, nonnull) AvailabilityStatusContextObject* CREATED NS_SWIFT_NAME(created);
@property (nonatomic, class, readonly, nonnull) AvailabilityStatusContextObject* FRAUD NS_SWIFT_NAME(fraud);
@property (nonatomic, class, readonly, nonnull) AvailabilityStatusContextObject* LOST NS_SWIFT_NAME(lost);
@property (nonatomic, class, readonly, nonnull) AvailabilityStatusContextObject* STOLEN NS_SWIFT_NAME(stolen);
@property (nonatomic, class, readonly, nonnull) AvailabilityStatusContextObject* SUSPENDED NS_SWIFT_NAME(suspended);
@property (nonatomic, class, readonly, nonnull) AvailabilityStatusContextObject* UNAVAILABLE NS_SWIFT_NAME(unavailable);

@end

NS_SWIFT_NAME(ChallengeDataContextObject)
@interface ChallengeDataContextObject : NSObject

/**
 * An array of further data to display.
 */
@property (nonatomic, strong, nullable) NSArray<ChallengeDataContextObject*>* challengeData;

/**
 * Display name of the display data.
 */
@property (nonatomic, strong, nullable) NSString* displayName;

/**
 * A value to display, if appropriate.
 */
@property (nonatomic, strong, nonnull) NSString* displayValue;

/**
 * The true id of the display data.
 */
@property (nonatomic, strong, nonnull) NSString* id;

@end
/**
 * An action to be take.
 */
NS_SWIFT_NAME(CollectorContextObject)
@interface CollectorContextObject : NSObject

/**
 * Additional attributes for the collector.
 */
@property (nonatomic, strong, nullable) NSArray<NSString*>* additionalAttributes;

/**
 * The classname of the collector
 */
@property (nonatomic, strong, nonnull) NSString* className;

/**
 * The types of collector
 */
@property (nonatomic, strong, nullable) NSArray<CollectorTypeContextObject*>* collectorTypes;

/**
 * The max duration to run the collection for
 */
@property (nonatomic, assign) long maxDuration;

/**
 * Boolean. True if collection is permitted
 */
@property (nonatomic, assign) BOOL permissionRequired;

@end
/**
 * Choose the data you would like Callsign to collect via the Callsign SDKs.
 */
NS_SWIFT_NAME(CollectorTypeContextObject)
@interface CollectorTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) CollectorTypeContextObject* MOBILE_DEVICE NS_SWIFT_NAME(mobileDevice);
@property (nonatomic, class, readonly, nonnull) CollectorTypeContextObject* MOBILE_LOCATION NS_SWIFT_NAME(mobileLocation);
@property (nonatomic, class, readonly, nonnull) CollectorTypeContextObject* MOBILE_MALWARE NS_SWIFT_NAME(mobileMalware);

@end

NS_SWIFT_NAME(ComplianceRequirementContextObject)
@interface ComplianceRequirementContextObject : NSObject

/**
 * Information related to the enforcement of PSD2 compliance.
 */
@property (nonatomic, strong, nonnull) Psd2RequirementContextObject* psd2Requirement;

/**
 * The type of the regulation.
 */
@property (nonatomic, strong, nonnull) RegulationTypeContextObject* type;

@end

NS_SWIFT_NAME(ComplianceResultContextObject)
@interface ComplianceResultContextObject : NSObject

/**
 * The Psd2 compliance objects
 */
@property (nonatomic, strong, nullable) Psd2ResultContextObject* psd2;

/**
 * Has the specified compliance been achieved or not
 */
@property (nonatomic, strong, nonnull) ComplianceResultTypeContextObject* result;

/**
 * Timestamp of event creation expressed as a millisecond epoch.
 */
@property (nonatomic, assign) long timestamp;

/**
 * The type of the regulation.
 */
@property (nonatomic, strong, nonnull) RegulationTypeContextObject* type;

@end
/**
 * The outcome of the compliance attempt.
 */
NS_SWIFT_NAME(ComplianceResultTypeContextObject)
@interface ComplianceResultTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) ComplianceResultTypeContextObject* ACHIEVED_ENFORCED NS_SWIFT_NAME(achievedEnforced);
@property (nonatomic, class, readonly, nonnull) ComplianceResultTypeContextObject* ACHIEVED_EXEMPT NS_SWIFT_NAME(achievedExempt);
@property (nonatomic, class, readonly, nonnull) ComplianceResultTypeContextObject* NOT_ACHIEVED NS_SWIFT_NAME(notAchieved);
@property (nonatomic, class, readonly, nonnull) ComplianceResultTypeContextObject* REVOKED NS_SWIFT_NAME(revoked);
@property (nonatomic, class, readonly, nonnull) ComplianceResultTypeContextObject* UNKNOWN NS_SWIFT_NAME(unknown);

@end

NS_SWIFT_NAME(ConsentContextObject)
@interface ConsentContextObject : NSObject

/**
 * The type of the consent.
 */
@property (nonatomic, strong, nonnull) NSString* consentType;

/**
 * The entity to which consent is given.
 */
@property (nonatomic, strong, nonnull) NSString* entity;

/**
 * The target of the consent, if appropriate.
 */
@property (nonatomic, strong, nullable) NSString* target;

@end
/**
 * Context criteria used in authenticator restrictions.
 */
NS_SWIFT_NAME(CriteriaContextObject)
@interface CriteriaContextObject : NSObject

/**
 * A type of criteria like brand, channel, transaction type, customer service segments.
 */
@property (nonatomic, strong, nonnull) CriteriaTypeContextObject* type;

/**
 * List of value for criteria type.
 */
@property (nonatomic, strong, nonnull) NSArray<NSString*>* value;

@end
/**
 * Results from external service.
 */
NS_SWIFT_NAME(CriteriaTypeContextObject)
@interface CriteriaTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) CriteriaTypeContextObject* brand NS_SWIFT_NAME(brand);
@property (nonatomic, class, readonly, nonnull) CriteriaTypeContextObject* channel NS_SWIFT_NAME(channel);
@property (nonatomic, class, readonly, nonnull) CriteriaTypeContextObject* customer_segments NS_SWIFT_NAME(customerSegments);
@property (nonatomic, class, readonly, nonnull) CriteriaTypeContextObject* service NS_SWIFT_NAME(service);
@property (nonatomic, class, readonly, nonnull) CriteriaTypeContextObject* transaction_type NS_SWIFT_NAME(transactionType);

@end
/**
 * An action to be take.
 */
NS_SWIFT_NAME(CustomRequirementContextObject)
@interface CustomRequirementContextObject : NSObject

/**
 * The type of the requirement.
 */
@property (nonatomic, strong, nullable) NSString* customRequirementId;

@property (nonatomic, strong, nullable) NSArray<CustomRequirementParameterContextObject*>* customRequirementParameters;

@property (nonatomic, strong, nullable) NSString* customRequirementVerb;

@end

NS_SWIFT_NAME(CustomRequirementParameterContextObject)
@interface CustomRequirementParameterContextObject : NSObject

@property (nonatomic, strong, nonnull) NSString* name;

@property (nonatomic, strong, nullable) NSString* referenceId;

/**
 * this field used to be id
 */
@property (nonatomic, strong, nonnull) NSString* value;

@end
/**
 * The delivery mode of the requirement.
 */
NS_SWIFT_NAME(DeliveryModeContextObject)
@interface DeliveryModeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) DeliveryModeContextObject* CALL NS_SWIFT_NAME(call);
@property (nonatomic, class, readonly, nonnull) DeliveryModeContextObject* DEFAULT NS_SWIFT_NAME(default);
@property (nonatomic, class, readonly, nonnull) DeliveryModeContextObject* EXTERNAL NS_SWIFT_NAME(external);
@property (nonatomic, class, readonly, nonnull) DeliveryModeContextObject* POLICY NS_SWIFT_NAME(policy);
@property (nonatomic, class, readonly, nonnull) DeliveryModeContextObject* SMS NS_SWIFT_NAME(sms);
@property (nonatomic, class, readonly, nonnull) DeliveryModeContextObject* TELEPHONY_CALL NS_SWIFT_NAME(telephonyCall);
@property (nonatomic, class, readonly, nonnull) DeliveryModeContextObject* TELEPHONY_EMAIL NS_SWIFT_NAME(telephonyEmail);
@property (nonatomic, class, readonly, nonnull) DeliveryModeContextObject* TELEPHONY_SMS NS_SWIFT_NAME(telephonySms);

@end
/**
 * Choose the Device Channel.
 */
NS_SWIFT_NAME(DeviceChannelContextObject)
@interface DeviceChannelContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) DeviceChannelContextObject* ANY NS_SWIFT_NAME(any);
@property (nonatomic, class, readonly, nonnull) DeviceChannelContextObject* EXTERNAL NS_SWIFT_NAME(external);
@property (nonatomic, class, readonly, nonnull) DeviceChannelContextObject* MOBILE NS_SWIFT_NAME(mobile);
@property (nonatomic, class, readonly, nonnull) DeviceChannelContextObject* PASSIVE NS_SWIFT_NAME(passive);
@property (nonatomic, class, readonly, nonnull) DeviceChannelContextObject* TELEPHONY NS_SWIFT_NAME(telephony);
@property (nonatomic, class, readonly, nonnull) DeviceChannelContextObject* WEB NS_SWIFT_NAME(web);

@end

NS_SWIFT_NAME(DeviceContextObject)
@interface DeviceContextObject : NSObject

/**
 * Additional device context that does not fit into the data model.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* additionalDeviceContext;

/**
 * Authenticators array
 */
@property (nonatomic, strong, nullable) NSArray<AuthenticatorContextObject*>* authenticators;

/**
 * Availability Status of the device.
 */
@property (nonatomic, strong, nonnull) AvailabilityStatusContextObject* availabilityStatus;

/**
 * Device availability status reason.
 */
@property (nonatomic, strong, nullable) NSString* availabilityStatusReason;

/**
 * Brand of the Device Instance.
 */
@property (nonatomic, strong, nullable) NSString* brand;

/**
 * The millis epoch for device info gathered, or gathering was completed.
 */
@property (nonatomic, assign) long creationTimeStamp;

/**
 * Device channel type
 */
@property (nonatomic, strong, nonnull) DeviceChannelContextObject* deviceChannel;

/**
 * device id
 */
@property (nonatomic, strong, nullable) NSString* deviceId;

/**
 * Boolean used for iOS push notification certificate to use. True for sandbox, false for live.
 */
@property (nonatomic, assign) BOOL iosPushTokenSandboxCertificate;

/**
 * IP address of the device
 */
@property (nonatomic, strong, nullable) NSString* ipAddress;

/**
 * Languages supported ordered by preference.
 */
@property (nonatomic, strong, nullable) NSArray<NSString*>* languages;

/**
 * The millis epoch for device information updated.
 */
@property (nonatomic, assign) long lastUpdateTimestamp;

/**
 * Mobile OS of the Device Instance.
 */
@property (nonatomic, strong, nullable) NSString* mobileOs;

/**
 * mobile OS version of the Device Instance.
 */
@property (nonatomic, strong, nullable) NSString* mobileOsVersion;

/**
 * Model of the Device Instance.
 */
@property (nonatomic, strong, nullable) NSString* model;

/**
 * Name of the Device Instance.
 */
@property (nonatomic, strong, nullable) NSString* name;

/**
 * Device token used to enable push notifications.
 */
@property (nonatomic, strong, nullable) NSString* pushToken;

/**
 * Serial Information of the Device Instance.
 */
@property (nonatomic, strong, nullable) NSString* serial;

/**
 * Subscriber allocated to the device
 */
@property (nonatomic, strong, nullable) NSString* subscriberId;

/**
 * Device type
 */
@property (nonatomic, strong, nonnull) DeviceTypeContextObject* type;

/**
 * Version of the Device Instance.
 */
@property (nonatomic, strong, nullable) NSString* version;

@end
/**
 * Choose the Device Type.
 */
NS_SWIFT_NAME(DeviceTypeContextObject)
@interface DeviceTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) DeviceTypeContextObject* EVM_CARD_READER NS_SWIFT_NAME(evmCardReader);
@property (nonatomic, class, readonly, nonnull) DeviceTypeContextObject* HARDWARE_TOKEN NS_SWIFT_NAME(hardwareToken);
@property (nonatomic, class, readonly, nonnull) DeviceTypeContextObject* MOBILE_SDK NS_SWIFT_NAME(mobileSdk);
@property (nonatomic, class, readonly, nonnull) DeviceTypeContextObject* PHONE NS_SWIFT_NAME(phone);
@property (nonatomic, class, readonly, nonnull) DeviceTypeContextObject* WEB_SDK NS_SWIFT_NAME(webSdk);

@end
/**
 * Error messages
 */
NS_SWIFT_NAME(ErrorMessageContextObject)
@interface ErrorMessageContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_AUTHENTICATION_FAILED NS_SWIFT_NAME(errAuthenticationFailed);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_AUTH_CONFIGURATION_ERROR NS_SWIFT_NAME(errAuthConfigurationError);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_BAD_REQUEST NS_SWIFT_NAME(errBadRequest);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_DEVICE_ALREADY_BOUND NS_SWIFT_NAME(errDeviceAlreadyBound);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_DEVICE_NOT_FOUND NS_SWIFT_NAME(errDeviceNotFound);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_FIELD_ALREADY_EXISTS NS_SWIFT_NAME(errFieldAlreadyExists);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_FIELD_TYPE_UNKNOWN NS_SWIFT_NAME(errFieldTypeUnknown);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_FIELD_VALIDATION_FAILED NS_SWIFT_NAME(errFieldValidationFailed);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_GATEWAY_TIMEOUT NS_SWIFT_NAME(errGatewayTimeout);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_LIMIT_DEVICES_PER_USER_REACHED NS_SWIFT_NAME(errLimitDevicesPerUserReached);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_NO_RESULT NS_SWIFT_NAME(errNoResult);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_OTP_REQUIRED NS_SWIFT_NAME(errOtpRequired);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_PATTERN_BLOCKED NS_SWIFT_NAME(errPatternBlocked);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_PATTERN_INVALID NS_SWIFT_NAME(errPatternInvalid);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_PERMISSION_DENIED NS_SWIFT_NAME(errPermissionDenied);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_PIN_BLOCKED NS_SWIFT_NAME(errPinBlocked);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_PIN_INVALID NS_SWIFT_NAME(errPinInvalid);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_POLICY_ERROR NS_SWIFT_NAME(errPolicyError);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_POLICY_NOT_FOUND NS_SWIFT_NAME(errPolicyNotFound);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_RESOURCE_NOT_FOUND NS_SWIFT_NAME(errResourceNotFound);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_SECURITY_CODE_BLOCKED NS_SWIFT_NAME(errSecurityCodeBlocked);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_SECURITY_CODE_EXPIRED NS_SWIFT_NAME(errSecurityCodeExpired);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_SECURITY_CODE_INVALID NS_SWIFT_NAME(errSecurityCodeInvalid);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_SERVER_FAILURE NS_SWIFT_NAME(errServerFailure);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_SUBSCRIBER_BLOCKED NS_SWIFT_NAME(errSubscriberBlocked);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_TRANSACTION_ALREADY_IN_PROGRESS NS_SWIFT_NAME(errTransactionAlreadyInProgress);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_TRANSACTION_EXPIRED NS_SWIFT_NAME(errTransactionExpired);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_USER_ACTION_REQUIRED NS_SWIFT_NAME(errUserActionRequired);
@property (nonatomic, class, readonly, nonnull) ErrorMessageContextObject* ERR_VALIDATION_FAILED NS_SWIFT_NAME(errValidationFailed);

@end
/**
 * Allow users to specify a field to match against the authenticator context
 */
NS_SWIFT_NAME(FilterContextObject)
@interface FilterContextObject : NSObject

/**
 * The name of the field used to find the authenticator context
 */
@property (nonatomic, strong, nullable) NSString* field;

/**
 * Type of the filter operation
 */
@property (nonatomic, strong, nonnull) FilterTypeContextObject* type;

/**
 * The value of the field used to find the authenticator context
 */
@property (nonatomic, strong, nullable) NSString* value;

@end
/**
 * The operations applicable to the filter
 */
NS_SWIFT_NAME(FilterTypeContextObject)
@interface FilterTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) FilterTypeContextObject* EQUALS NS_SWIFT_NAME(equals);
@property (nonatomic, class, readonly, nonnull) FilterTypeContextObject* NOT_EQUALS NS_SWIFT_NAME(notEquals);

@end
/**
 * Flow
 */
NS_SWIFT_NAME(FlowContextObject)
@interface FlowContextObject : NSObject

/**
 * Flow Id
 */
@property (nonatomic, strong, nonnull) NSString* flowId;

/**
 * Short Name of the Flow
 */
@property (nonatomic, strong, nonnull) NSString* shortName;

@end

NS_SWIFT_NAME(HierarchyContextObject)
@interface HierarchyContextObject : NSObject

/**
 * Any nested hierarchy
 */
@property (nonatomic, strong, nullable) HierarchyContextObject* subType;

/**
 * The value of the current hierarchy level.
 */
@property (nonatomic, strong, nonnull) NSString* value;

@end

NS_SWIFT_NAME(InterventionTemplateContextObject)
@interface InterventionTemplateContextObject : NSObject

/**
 * The question to be presented to the user.
 */
@property (nonatomic, strong, nonnull) NSString* content;

/**
 * Optional description of this intervention template.
 */
@property (nonatomic, strong, nullable) NSString* templateDescription;

/**
 * Identifier of this intervention template.
 */
@property (nonatomic, strong, nonnull) NSString* interventionTemplateId;

/**
 * Name of this intervention template.
 */
@property (nonatomic, strong, nonnull) NSString* name;

/**
 * The response options to be presented to the user.
 */
@property (nonatomic, strong, nonnull) NSDictionary<NSString *, NSString*>* responseOptions;

@end
/**
 * TemplateParameter for the authenticator
 */
NS_SWIFT_NAME(LanguageTemplateParametersContextObject)
@interface LanguageTemplateParametersContextObject : NSObject

/**
 * Map of template parameters which may be used by the authenticator.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, TemplateParameterContextObject*>* templates;

@end

NS_SWIFT_NAME(LocationContextObject)
@interface LocationContextObject : NSObject

/**
 * Additional key-value data which may be used by the organization to describe location.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* additionalLocationContext;

/**
 * City
 */
@property (nonatomic, strong, nullable) NSString* city;

/**
 * Country
 */
@property (nonatomic, strong, nullable) NSString* country;

/**
 * Country Code
 */
@property (nonatomic, strong, nullable) NSString* countryCode;

/**
 * The reported latitude in degrees, e.g. 51.903614
 */
@property (nonatomic, assign) double latitude;

/**
 * The reported longitude in degrees, e.g. 8.4756
 */
@property (nonatomic, assign) double longitude;

/**
 * Postcode
 */
@property (nonatomic, strong, nullable) NSString* postcode;

/**
 * Region
 */
@property (nonatomic, strong, nullable) NSString* region;

/**
 * The millisecond epoch when the location was gathered, or gathering was completed.
 */
@property (nonatomic, assign) long timestamp;

@end

NS_SWIFT_NAME(MetadataContextObject)
@interface MetadataContextObject : NSObject

/**
 * Additional key-value data which may be used by the organization to describe the transaction.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* additionalMetadata;

/**
 * The earliest used device instance ID in the transaction.
 */
@property (nonatomic, strong, nullable) NSString* earliestUsedDeviceId;

/**
 * The external session Id of the transaction
 */
@property (nonatomic, strong, nullable) NSString* externalSessionId;

/**
 * The language of the decision request.
 */
@property (nonatomic, strong, nullable) NSArray<NSString*>* language;

/**
 * The most recently used device instance ID in the transaction.
 */
@property (nonatomic, strong, nullable) NSString* mostRecentlyUsedDeviceId;

/**
 * The qualified identity is the alias to identify the user.
 */
@property (nonatomic, strong, nullable) QualifiedIdentityContextObject* qualifiedIdentity;

/**
 * The Callsign tenant ID of the organization
 */
@property (nonatomic, strong, nullable) NSString* tenantId;

/**
 * Timestamp of event creation expressed as a millisecond epoch.
 */
@property (nonatomic, assign) long timestamp;

/**
 * A unique ID associated with current business transaction. If not provided, will be generated.
 */
@property (nonatomic, strong, nullable) NSString* transactionId;

/**
 * A stable Id for use and reference within the policy manager (if known)
 */
@property (nonatomic, strong, nullable) NSString* userId;

@end
/**
 * An action to be take.
 */
NS_SWIFT_NAME(OtherRequirementContextObject)
@interface OtherRequirementContextObject : NSObject

/**
 * Additional attributes.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* additionalAttributes;

/**
 * The type of the requirement.
 */
@property (nonatomic, strong, nonnull) NSString* className;

@end

NS_SWIFT_NAME(PaymentContextObject)
@interface PaymentContextObject : NSObject

@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* additionalPaymentContext;

/**
 * The account number of the beneficiary
 */
@property (nonatomic, strong, nullable) NSString* beneficiaryAccountNumber;

/**
 * The BIC of the beneficiary
 */
@property (nonatomic, strong, nullable) NSString* beneficiaryBic;

/**
 * The IBAN of the beneficiary
 */
@property (nonatomic, strong, nullable) NSString* beneficiaryIban;

/**
 * The name of the beneficiary
 */
@property (nonatomic, strong, nullable) NSString* beneficiaryName;

/**
 * The sort code of the beneficiary
 */
@property (nonatomic, strong, nullable) NSString* beneficiarySortCode;

/**
 * The currency of the payment
 */
@property (nonatomic, strong, nullable) NSString* currency;

/**
 * A single view of the payee.
 */
@property (nonatomic, strong, nullable) NSString* debtor;

/**
 * The account number of the Payee
 */
@property (nonatomic, strong, nullable) NSString* debtorAccountNumber;

/**
 * The BIC of the payee
 */
@property (nonatomic, strong, nullable) NSString* debtorBic;

/**
 * The IBAN of the payee
 */
@property (nonatomic, strong, nullable) NSString* debtorIban;

/**
 * The sort code of the Payee
 */
@property (nonatomic, strong, nullable) NSString* debtorSortCode;

/**
 * Is the beneficiary known
 */
@property (nonatomic, assign) BOOL knownBeneficiaryFlag;

/**
 * The metadata associated with this risk data
 */
@property (nonatomic, strong, nullable) MetadataContextObject* metadata;

/**
 * A single view of the payee.
 */
@property (nonatomic, strong, nullable) NSString* payee;

/**
 * The type of the payment
 */
@property (nonatomic, strong, nullable) NSString* paymentId;

/**
 * The type of the payment
 */
@property (nonatomic, strong, nullable) NSString* paymentType;

/**
 * Is the payment a subscription?
 */
@property (nonatomic, assign) BOOL subscriptionFlag;

/**
 * The millisecond epoch when the location was gathered, or gathering was completed.
 */
@property (nonatomic, assign) long timestamp;

/**
 * The amount of the payment
 */
@property (nonatomic, assign) double paymentValue;

/**
 * Has the beneficiary been whitelisted by the user
 */
@property (nonatomic, assign) BOOL whiteListedBeneficiaryFlag;

@end
/**
 * The reason for a priority specified in a requirement.
 */
NS_SWIFT_NAME(PriorityReasonContextObject)
@interface PriorityReasonContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) PriorityReasonContextObject* NO_CHOICE NS_SWIFT_NAME(noChoice);
@property (nonatomic, class, readonly, nonnull) PriorityReasonContextObject* ORG_EXPLICIT NS_SWIFT_NAME(orgExplicit);
@property (nonatomic, class, readonly, nonnull) PriorityReasonContextObject* ORG_IMPLICIT NS_SWIFT_NAME(orgImplicit);
@property (nonatomic, class, readonly, nonnull) PriorityReasonContextObject* USER_EXPLICIT NS_SWIFT_NAME(userExplicit);
@property (nonatomic, class, readonly, nonnull) PriorityReasonContextObject* USER_IMPLICIT NS_SWIFT_NAME(userImplicit);

@end
/**
 * Provider for telephony service
 */
NS_SWIFT_NAME(ProviderContextObject)
@interface ProviderContextObject : NSObject

/**
 * Provider Id
 */
@property (nonatomic, strong, nonnull) NSString* providerId;

/**
 * Short Name of the Provider
 */
@property (nonatomic, strong, nonnull) NSString* shortName;

@end
/**
 * Reasons for Psd2 compliance enforcement to fail.
 */
NS_SWIFT_NAME(Psd2FailureCodeContextObject)
@interface Psd2FailureCodeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) Psd2FailureCodeContextObject* INSUFFICIENT_AUTHENTICATORS_AVAILABLE NS_SWIFT_NAME(insufficientAuthenticatorsAvailable);
@property (nonatomic, class, readonly, nonnull) Psd2FailureCodeContextObject* INSUFFICIENT_INFORMATION NS_SWIFT_NAME(insufficientInformation);

@end

NS_SWIFT_NAME(Psd2RequirementContextObject)
@interface Psd2RequirementContextObject : NSObject

/**
 * The consent being sought.
 */
@property (nonatomic, strong, nonnull) ConsentContextObject* consent;

@end

NS_SWIFT_NAME(Psd2ResultContextObject)
@interface Psd2ResultContextObject : NSObject

/**
 * The consent being sought.
 */
@property (nonatomic, strong, nonnull) ConsentContextObject* consent;

/**
 * Codes associated with the failure of the compliance attempt.
 */
@property (nonatomic, strong, nullable) NSArray<Psd2FailureCodeContextObject*>* failureCodes;

/**
 * The SCA Authorization code resulting from the transaction.
 */
@property (nonatomic, strong, nullable) NSString* scaAuthorizationCode;

/**
 * Any context that is be provided with the decision request
 */
@property (nonatomic, strong, nullable) NSArray<Psd2ScaExemptionTypeContextObject*>* scaExemptionReasons;

@end
/**
 * The reason for PSD2 SCA exemption.
 */
NS_SWIFT_NAME(Psd2ScaExemptionTypeContextObject)
@interface Psd2ScaExemptionTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) Psd2ScaExemptionTypeContextObject* LOW_RISK NS_SWIFT_NAME(lowRisk);
@property (nonatomic, class, readonly, nonnull) Psd2ScaExemptionTypeContextObject* LOW_VALUE NS_SWIFT_NAME(lowValue);
@property (nonatomic, class, readonly, nonnull) Psd2ScaExemptionTypeContextObject* RECENT_SCA NS_SWIFT_NAME(recentSca);
@property (nonatomic, class, readonly, nonnull) Psd2ScaExemptionTypeContextObject* SECURE_CORPORATE NS_SWIFT_NAME(secureCorporate);
@property (nonatomic, class, readonly, nonnull) Psd2ScaExemptionTypeContextObject* SUBSCRIPTION_PAYMENT NS_SWIFT_NAME(subscriptionPayment);
@property (nonatomic, class, readonly, nonnull) Psd2ScaExemptionTypeContextObject* UNKNOWN NS_SWIFT_NAME(unknown);
@property (nonatomic, class, readonly, nonnull) Psd2ScaExemptionTypeContextObject* WHITELISTED_BENEFICIARY NS_SWIFT_NAME(whitelistedBeneficiary);

@end

NS_SWIFT_NAME(QualifiedIdentityContextObject)
@interface QualifiedIdentityContextObject : NSObject

/**
 * The identity itself.
 */
@property (nonatomic, strong, nonnull) NSString* id;

/**
 * The namespace where the identity is valid
 */
@property (nonatomic, strong, nonnull) NSString* namespace;

@end
/**
 * The regulation to which the compliance is related.
 */
NS_SWIFT_NAME(RegulationTypeContextObject)
@interface RegulationTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) RegulationTypeContextObject* PSD2 NS_SWIFT_NAME(psd2);

@end
/**
 * An action to be take.
 */
NS_SWIFT_NAME(RequirementContextObject)
@interface RequirementContextObject : NSObject

/**
 * The ACS template to be returned.
 */
@property (nonatomic, strong, nullable) ACSTemplateContextObject* acsTemplate;

/**
 * The authenticator that should be used.
 */
@property (nonatomic, strong, nullable) AuthenticatorContextObject* authenticator;

/**
 * Data to display with challenge, if appropriate.
 */
@property (nonatomic, strong, nullable) NSArray<ChallengeDataContextObject*>* challengeData;

/**
 * Name of target channel.
 */
@property (nonatomic, strong, nonnull) DeviceChannelContextObject* channel;

/**
 * The collector that should be used.
 */
@property (nonatomic, strong, nullable) CollectorContextObject* collector;

/**
 * Custom requirement.
 */
@property (nonatomic, strong, nullable) CustomRequirementContextObject* custom;

/**
 * The delivery mode for the requirement
 */
@property (nonatomic, strong, nonnull) DeliveryModeContextObject* deliveryMode;

/**
 * Id of target device.
 */
@property (nonatomic, strong, nullable) NSString* deviceId;

/**
 * Eligible deviceIds for the current requirement.
 */
@property (nonatomic, strong, nullable) NSArray<NSString*>* eligibleDeviceIds;

/**
 * The intervention template to be returned.
 */
@property (nonatomic, strong, nullable) InterventionTemplateContextObject* intervention;

/**
 * Requirement which does not fit into a category.
 */
@property (nonatomic, strong, nullable) OtherRequirementContextObject* other;

/**
 * The telephony with template/provider to be returned.
 */
@property (nonatomic, strong, nullable) TelephonyContextObject* telephony;

/**
 * Millisecond timestamp. The creation time of the requirement (not necessarily the creation time of components within the context)
 */
@property (nonatomic, assign) long timestamp;

/**
 * The type of the requirement.
 */
@property (nonatomic, strong, nonnull) RequirementTypeContextObject* type;

/**
 * The validation mode for the requirement
 */
@property (nonatomic, strong, nonnull) ValidationModeContextObject* validationMode;

@end
/**
 * The result of a RequirementsCombination
 */
NS_SWIFT_NAME(RequirementResultContextObject)
@interface RequirementResultContextObject : NSObject

/**
 * Client randomness data so that the data signed is not wholly controlled by the platform
 */
@property (nonatomic, strong, nullable) NSString* clientRandom;

/**
 * The error code.
 */
@property (nonatomic, strong, nullable) ErrorMessageContextObject* error;

/**
 * The data which was successfully presented on the device. For audit purposes.
 */
@property (nonatomic, strong, nullable) NSString* presentedData;

/**
 * The response from the device.
 */
@property (nonatomic, strong, nullable) NSString* response;

/**
 * The result of the overall requirement.
 */
@property (nonatomic, strong, nonnull) RequirementsResultTypeContextObject* result;

/**
 * Additional result codes that may be passed.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* resultCodes;

/**
 * The signature of the response and requirement.
 */
@property (nonatomic, strong, nullable) NSString* signature;

@end
/**
 * The different types of actions which can be required by the policy engine.
 */
NS_SWIFT_NAME(RequirementTypeContextObject)
@interface RequirementTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* ACS_CONNECT NS_SWIFT_NAME(acsConnect);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* AUTHENTICATE NS_SWIFT_NAME(authenticate);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* BIND NS_SWIFT_NAME(bind);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* BIND_DEVICE NS_SWIFT_NAME(bindDevice);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* BLOCK_DEVICE NS_SWIFT_NAME(blockDevice);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* COLLECT NS_SWIFT_NAME(collect);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* CUSTOM NS_SWIFT_NAME(custom);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* ENROLL NS_SWIFT_NAME(enroll);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* INTERVENTION NS_SWIFT_NAME(intervention);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* NO_ACTION NS_SWIFT_NAME(noAction);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* OTHER NS_SWIFT_NAME(other);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* TELEPHONY NS_SWIFT_NAME(telephony);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* UNBIND_DEVICE NS_SWIFT_NAME(unbindDevice);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* VERIFY NS_SWIFT_NAME(verify);
@property (nonatomic, class, readonly, nonnull) RequirementTypeContextObject* WAIT NS_SWIFT_NAME(wait);

@end
/**
 * Overall requirements object. May include a choice or combination of requirements.
 */
NS_SWIFT_NAME(RequirementsCombinationContextObject)
@interface RequirementsCombinationContextObject : NSObject

/**
 * deprecated - backward compat only
 */
@property (nonatomic, strong, nullable) NSArray<ChallengeDataContextObject*>* challengeData;

/**
 * The type of the requirements combination.
 */
@property (nonatomic, strong, nonnull) RequirementsCombinationTypeContextObject* combinationType;

/**
 * The current transaction id and type
 */
@property (nonatomic, strong, nullable) MetadataContextObject* metadata;

/**
 * The priority of the requirement, if involved in a choice.
 */
@property (nonatomic, assign) int priority;

/**
 * The reason for the specified priority.
 */
@property (nonatomic, strong, nullable) PriorityReasonContextObject* priorityReason;

/**
 * The requirement, if type is REFER.
 */
@property (nonatomic, strong, nullable) RequirementContextObject* requirement;

/**
 * The Id of the requirement combination request.
 */
@property (nonatomic, strong, nonnull) NSString* requirementId;

/**
 * An array of further combinations of requirements, following the type defined in combinationType.
 */
@property (nonatomic, strong, nullable) NSArray<RequirementsCombinationContextObject*>* requirementsCombination;

/**
 * Choice to display with/after challenge, if appropriate.
 */
@property (nonatomic, strong, nullable) SelectionDataContextObject* selectionData;

/**
 * Timestamp of event creation expressed as a millisecond epoch.
 */
@property (nonatomic, assign) long timestamp;

@end
/**
 * The result of a RequirementsCombination
 */
NS_SWIFT_NAME(RequirementsCombinationResultContextObject)
@interface RequirementsCombinationResultContextObject : NSObject

/**
 * Timestamp of event creation expressed as a millisecond epoch.
 */
@property (nonatomic, assign) long completedTimestamp;

/**
 * The requirements combination.
 */
@property (nonatomic, strong, nonnull) RequirementsCombinationContextObject* requirementsCombination;

/**
 * The result of the overall requirement.
 */
@property (nonatomic, strong, nullable) RequirementResultContextObject* result;

/**
 * A map of every requirement id and its outcome.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, RequirementResultContextObject*>* resultsMap;

/**
 * Returned selection indices in each requirement id
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSNumber*>* selectedDataChoiceIndices;

@end
/**
 * The type of the current requirement combination.
 */
NS_SWIFT_NAME(RequirementsCombinationTypeContextObject)
@interface RequirementsCombinationTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) RequirementsCombinationTypeContextObject* ATTEMPT_FALLBACK NS_SWIFT_NAME(attemptFallback);
@property (nonatomic, class, readonly, nonnull) RequirementsCombinationTypeContextObject* CHOICE NS_SWIFT_NAME(choice);
@property (nonatomic, class, readonly, nonnull) RequirementsCombinationTypeContextObject* REQUIREMENT NS_SWIFT_NAME(requirement);
@property (nonatomic, class, readonly, nonnull) RequirementsCombinationTypeContextObject* SEQUENCE NS_SWIFT_NAME(sequence);

@end
/**
 * COMPLETED_UNKNOWN_OUTCOME: The authentication (collection) was completed, but the outcome is unknown. Success: The authentication completed and succeeded. Failure: The authentication completed and failed. Abandoned: The user did not complete the authentication. Reject: The user rejected the request for authentication as not initiated by them. Cancelled: The user canceled the request, but did initiate it. Not_chosen: The user chose a different method.. Not_possible: The authenticator could not perform the required authentication. Error: Technical error. The overall result of an authentication combination. Retry: The requirement should be retried.
 */
NS_SWIFT_NAME(RequirementsResultTypeContextObject)
@interface RequirementsResultTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* ABANDONED NS_SWIFT_NAME(abandoned);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* CANCELLED NS_SWIFT_NAME(cancelled);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* CHOSEN NS_SWIFT_NAME(chosen);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* COMPLETED_UNKNOWN_OUTCOME NS_SWIFT_NAME(completedUnknownOutcome);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* CONFIRM_BINDING NS_SWIFT_NAME(confirmBinding);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* CREDENTIAL_CHANGED NS_SWIFT_NAME(credentialChanged);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* CREDENTIAL_FORGOT NS_SWIFT_NAME(credentialForgot);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* CREDENTIAL_INVALID NS_SWIFT_NAME(credentialInvalid);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* CREDENTIAL_NO_INPUT NS_SWIFT_NAME(credentialNoInput);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* CREDENTIAL_VALID NS_SWIFT_NAME(credentialValid);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* ERROR NS_SWIFT_NAME(error);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* FAILURE NS_SWIFT_NAME(failure);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* INCOMPLETE NS_SWIFT_NAME(incomplete);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* NOT_CHOSEN NS_SWIFT_NAME(notChosen);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* NOT_POSSIBLE NS_SWIFT_NAME(notPossible);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* OTP_GENERATED NS_SWIFT_NAME(otpGenerated);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* REBIND NS_SWIFT_NAME(rebind);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* REJECT NS_SWIFT_NAME(reject);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* RETRY NS_SWIFT_NAME(retry);
@property (nonatomic, class, readonly, nonnull) RequirementsResultTypeContextObject* SUCCESS NS_SWIFT_NAME(success);

@end
/**
 * Restriction criteria used in authenticators.
 */
NS_SWIFT_NAME(RestrictionCriteriaContextObject)
@interface RestrictionCriteriaContextObject : NSObject

/**
 * id of restriction criteria.
 */
@property (nonatomic, strong, nullable) NSString* contextId;

/**
 * List of value for criteria.
 */
@property (nonatomic, strong, nonnull) NSArray<CriteriaContextObject*>* criteria;

@end
/**
 * The output of a general Risk Engine
 */
NS_SWIFT_NAME(RiskContextObject)
@interface RiskContextObject : NSObject

/**
 * Additional key-value data which may be used by the organization to describe risk.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* additionalRiskContext;

/**
 * A list of codes produced by a risk/intelligence engine, e.g. BAD_LOCATION, GOOD_DEVICE
 */
@property (nonatomic, strong, nullable) NSArray<NSString*>* codes;

/**
 * A list of boolean flags produced by a risk/intelligence engine, e.g. BLACKLIST: true
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSNumber*>* flags;

/**
 * The metadata associated with this risk data
 */
@property (nonatomic, strong, nullable) MetadataContextObject* metadata;

/**
 * A string result produced by a risk/intelligence engine, e.g. LOW_RISK
 */
@property (nonatomic, strong, nullable) NSString* result;

/**
 * A numerical score produced by a risk/intelligence engine
 */
@property (nonatomic, assign) double score;

/**
 * The millisecond epoch when the risk data was gathered, or gathering was completed.
 */
@property (nonatomic, assign) long timestamp;

@end
/**
 * A record of the index of the choice made by the user
 */
NS_SWIFT_NAME(SelectionDataChoiceContextObject)
@interface SelectionDataChoiceContextObject : NSObject

/**
 * Display name of the display data.
 */
@property (nonatomic, strong, nonnull) NSString* displayName;

/**
 * The index of the choice.
 */
@property (nonatomic, strong, nonnull) NSString* index;

@end
/**
 * Data to be displayed on the device for user selection
 */
NS_SWIFT_NAME(SelectionDataContextObject)
@interface SelectionDataContextObject : NSObject

/**
 * The type of the choice.
 */
@property (nonatomic, strong, nonnull) SelectionDataTypeContextObject* choiceType;

/**
 * The choices to display for selection
 */
@property (nonatomic, strong, nullable) NSArray<SelectionDataChoiceContextObject*>* choices;

/**
 * Display name of the display data.
 */
@property (nonatomic, strong, nonnull) NSString* displayName;

/**
 * The true id of the display data.
 */
@property (nonatomic, strong, nonnull) NSString* id;

@end
/**
 * The type of the data to be selected by the user.
 */
NS_SWIFT_NAME(SelectionDataTypeContextObject)
@interface SelectionDataTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) SelectionDataTypeContextObject* SINGLE_SELECT NS_SWIFT_NAME(singleSelect);

@end

NS_SWIFT_NAME(TelephonyContextObject)
@interface TelephonyContextObject : NSObject

/**
 * Information related to the flow that will be returned.
 */
@property (nonatomic, strong, nullable) FlowContextObject* flow;

/**
 * Information related to the provider that will be returned.
 */
@property (nonatomic, strong, nullable) ProviderContextObject* provider;

/**
 * Type of the telephony requirement
 */
@property (nonatomic, strong, nonnull) TelephonySubTypeContextObject* subType;

/**
 * Information related to the template that will be returned.
 */
@property (nonatomic, strong, nullable) TemplateContextObject* template;

@end
/**
 * Telephony Sub type
 */
NS_SWIFT_NAME(TelephonySubTypeContextObject)
@interface TelephonySubTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) TelephonySubTypeContextObject* FLOW NS_SWIFT_NAME(flow);
@property (nonatomic, class, readonly, nonnull) TelephonySubTypeContextObject* PROVIDER NS_SWIFT_NAME(provider);
@property (nonatomic, class, readonly, nonnull) TelephonySubTypeContextObject* TEMPLATE NS_SWIFT_NAME(template);

@end
/**
 * Template
 */
NS_SWIFT_NAME(TemplateContextObject)
@interface TemplateContextObject : NSObject

/**
 * Short Name of the template
 */
@property (nonatomic, strong, nonnull) NSString* shortName;

/**
 * Template Id
 */
@property (nonatomic, strong, nonnull) NSString* templateId;

@end
/**
 * The type of the template key in the authenticator
 */
NS_SWIFT_NAME(TemplateKeyTypeContextObject)
@interface TemplateKeyTypeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) TemplateKeyTypeContextObject* DYNAMIC NS_SWIFT_NAME(dynamic);
@property (nonatomic, class, readonly, nonnull) TemplateKeyTypeContextObject* STATIC NS_SWIFT_NAME(static);

@end
/**
 * TemplateParameter for the authenticator
 */
NS_SWIFT_NAME(TemplateParameterContextObject)
@interface TemplateParameterContextObject : NSObject

/**
 * Filter of template
 */
@property (nonatomic, strong, nullable) FilterContextObject* filter;

/**
 * In case of multiple context of same type, if the identifier is mentioned, will return a map of templateKeyIdentifier with value of templateKey. The template Key Value will be null.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* identifiedValues;

/**
 * Identifier required if there are more than 1 context of the same type and the value should be unique. Eg: $$context.payment.beneficiaryAccountNumber$$
 */
@property (nonatomic, strong, nullable) NSString* identifier;

/**
 * Parameter for template key. Eg: $$context.payment.value$$
 */
@property (nonatomic, strong, nullable) NSString* key;

/**
 * Type of the template key
 */
@property (nonatomic, strong, nonnull) TemplateKeyTypeContextObject* type;

/**
 * Value for the template key
 */
@property (nonatomic, strong, nullable) NSString* value;

@end

NS_SWIFT_NAME(TransactionContextObject)
@interface TransactionContextObject : NSObject

/**
 * Additional Ids which may be used by the organization to describe the transaction.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* additionalTransactionInformation;

/**
 * The brand of the transaction.
 */
@property (nonatomic, strong, nullable) HierarchyContextObject* brand;

/**
 * The channel of a specific transaction (mobile, internet etc.).
 */
@property (nonatomic, strong, nullable) HierarchyContextObject* channel;

/**
 * The brand of the transaction.
 */
@property (nonatomic, strong, nullable) HierarchyContextObject* segment;

/**
 * The brand of the transaction.
 */
@property (nonatomic, strong, nullable) HierarchyContextObject* service;

/**
 * Timestamp of event creation expressed as a millisecond epoch.
 */
@property (nonatomic, assign) long timestamp;

/**
 * Any tags to be applied to the transaction.
 */
@property (nonatomic, strong, nullable) NSArray<NSString*>* transactionTags;

/**
 * The type of transaction (Login, make payment etc.).
 */
@property (nonatomic, strong, nullable) HierarchyContextObject* type;

@end

NS_SWIFT_NAME(UserIdentityContextObject)
@interface UserIdentityContextObject : NSObject

/**
 * Additional attributes which may be used by the organization to describe the user.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* additionalAttributes;

/**
 * The external unique Id of the user within the organization.
 */
@property (nonatomic, strong, nullable) NSString* externalUniqueId;

/**
 * The groups of the user with an organization.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* groups;

/**
 * User Ids used to log in to services that require qualification.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, QualifiedIdentityContextObject*>* loginIds;

/**
 * The current transaction id and type
 */
@property (nonatomic, strong, nullable) MetadataContextObject* metadata;

/**
 * The roles of the user with an organization.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString*>* roles;

/**
 * The state of the user.
 */
@property (nonatomic, strong, nullable) NSString* state;

/**
 * The millisecond epoch when the user information was gathered, or gathering was completed.
 */
@property (nonatomic, assign) long timestamp;

/**
 * User identities that require qualification.
 */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, QualifiedIdentityContextObject*>* userIds;

@end
/**
 * Whether this authentication requirement should be validated internally or externally.
 */
NS_SWIFT_NAME(ValidationModeContextObject)
@interface ValidationModeContextObject : NSObject <NSCopying>

@property (nonatomic, class, readonly, nonnull) ValidationModeContextObject* EXTERNAL NS_SWIFT_NAME(external);
@property (nonatomic, class, readonly, nonnull) ValidationModeContextObject* INTERNAL NS_SWIFT_NAME(internal);
@property (nonatomic, class, readonly, nonnull) ValidationModeContextObject* POLICY NS_SWIFT_NAME(policy);
@property (nonatomic, class, readonly, nonnull) ValidationModeContextObject* POLICY_ENGINE NS_SWIFT_NAME(policyEngine);

@end
