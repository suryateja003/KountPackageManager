//
//  AROActionType.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

/**
 * Actions which the authenticator could perform
 */
typedef NS_ENUM(NSUInteger, AROActionType) {
    AROActionTypeUnknown = 0,
    /// `AUTHENTICATE`
    AROActionTypeAuthenticate,
    /// `COLLECT`
    AROActionTypeCollect,
    /// `BIND`
    AROActionTypeBind,
    /// `WAIT`
    AROActionTypeWait,
    /// `INTERVENTION`
    AROActionTypeIntervention,
};
