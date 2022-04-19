//
//  AROMechanismType.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

/**
 * Mechanism Type of an authenticator, as configured in the Callsign Portal.
 */
typedef NS_ENUM(NSUInteger, AROMechanismType) {
    AROMechanismTypeUnknown = 0,
    /// `APPROVAL`
    AROMechanismTypeApproval,
    /// `BIO`
    AROMechanismTypeBio,
    /// `OTP`
    AROMechanismTypeCallsignOTP,
    /// `CALLSIGN_TOKEN`
    AROMechanismTypeCallsignToken,
    /// `CARD`
    AROMechanismTypeCard,
    /// `CARD_READER`
    AROMechanismTypeCardReader,
    /// `EMAIL_OTP`
    AROMechanismTypeEmailOTP,
    /// `EXTERNAL`
    AROMechanismTypeExternal,
    /// `FACIAL`
    AROMechanismTypeFacial,
    /// `KNOWLEDGE`
    AROMechanismTypeKnowledge,
    /// `MANAGED_EXTERNAL`
    AROMechanismTypeManagedExternal,
    /// `MI`
    AROMechanismTypeMI,
    /// `OTP`
    AROMechanismTypeOTP,
    /// `PASSWORD`
    AROMechanismTypePassword,
    /// `PATTERN`
    AROMechanismTypePattern,
    /// `PHONECALL`
    AROMechanismTypePhoneCall,
    /// `PIN`
    AROMechanismTypePIN,
    /// `SPIN`
    AROMechanismTypeSPIN,
    /// `SWIPE`
    AROMechanismTypeSwipe,
    /// `TAC`
    AROMechanismTypeTAC,
    /// `TOKEN`
    AROMechanismTypeToken,
    /// `TOUCH_ID`
    AROMechanismTypeTouchId,
    /// `UNP`
    AROMechanismTypeUNP,
    /// `USERID`
    AROMechanismTypeUserId,             
};
