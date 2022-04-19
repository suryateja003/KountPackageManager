//
//  ARORequirementsResult.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

/**
 * Possible outcome states of the authentication and response result from the platform
 */
typedef NS_ENUM(NSUInteger, ARORequirementsResult) {

    /// No result, or an result which is not known to the SDK
    ARORequirementsResultUnknown = 0,

    // MARK: Result of local authentication
    /// The authentication was completed, but the outcome is unknown
    ARORequirementsResultCompletedUnknownOutcome,
    /// Technical error
    ARORequirementsResultError,
    /// The authentication completed and succeeded
    ARORequirementsResultSuccess,
    /// The authentication completed and failed
    ARORequirementsResultFailure,
    /// The user rejected the request for authentication as not initiated by them
    ARORequirementsResultRejected,
    /// The user cancelled the request, but did initiate it
    ARORequirementsResultCancelled,
    /// The user chose a different method
    ARORequirementsResultNotChosen,
    /// The authenticator could not perform the required authentication
    ARORequirementsResultNotPossible,
    /// The user has fogotten their credentials for the authenticator
    ARORequirementsResultForgotCredentials,
    /// The user has changed their credentials for the authenticator and needs to rebind
    ARORequirementsResultChangedCredentials,

    // MARK: Response Result from platform
    /// The authenticator should confirm binding of an authentication mechanism
    ARORequirementsResultConfirmBinding,
    /// The authenticator should retry the previous authentication
    ARORequirementsResultRetry,
    /// The flow is incomplete and further steps are required
    ARORequirementsResultIncomplete,
};
