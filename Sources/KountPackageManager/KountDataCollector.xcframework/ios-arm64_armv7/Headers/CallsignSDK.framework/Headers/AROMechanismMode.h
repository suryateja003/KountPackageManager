//
//  AROMechanismMode.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

/**
 * Mechanism Mode of an authenticator, as configured in the Callsign Portal.
 */
typedef NS_ENUM(NSUInteger, AROMechanismMode) {
    AROMechanismModeUnknown = 0,
    /// `PRIMARY`
    AROMechanismModePrimary,
    /// `INTERNAL`
    AROMechanismModeInternal,
    /// `EXTERNAL`
    AROMechanismModeExternal,
    /// `OTP`
    AROMechanismModeOTP,
    /// `STEPUP`
    AROMechanismModeStepUp,
    /// `PRIMARY_BEHAVIOUR`
    AROMechanismModePrimaryBehaviour,
    /// `SIGN`
    AROMechanismModeSign,
    /// `IDENTIFY`
    AROMechanismModeIdentify,
    /// `RESPOND`
    AROMechanismModeRespond,
};
