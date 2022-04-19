//
//  CallsignSDKStringKey.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;
#import <CallsignSDK/Macros.h>

/**
 * This enumeration is used with the `CallsignSDKDelegate` protocol's `callsignSDKLocalizedStringForKey:` method.
 *
 * **DO NOT** rely on the underlying constant, which may be subject to change between SDK releases.
 *
 * Implement the `CallsignSDKDelegate` protocol to override the default string searching logic:
 * 1. `callsignSDKLocalizedStringForKey:` implemented by host app (CallsignSDKDelegate)
 * 2. Localized `Callsign.strings` in the host app bundle
 * 3. `CallsignSDK.strings` in the SDK framework bundle
 *
 */
typedef NS_ENUM(NSUInteger, CallsignSDKStringKey) {

    CallsignSDKStringKeyNone,

    // MARK: Common Buttons
    CallsignSDKStringKeyOK        CS_STRINGS_FILE_KEY("OK")       CS_DEFAULT_VALUE("OK"),
    CallsignSDKStringKeyCancel    CS_STRINGS_FILE_KEY("Cancel")   CS_DEFAULT_VALUE("Cancel"),
    CallsignSDKStringKeyBack      CS_STRINGS_FILE_KEY("Back")     CS_DEFAULT_VALUE("Back"),
    CallsignSDKStringKeyDismiss   CS_STRINGS_FILE_KEY("Dismiss")  CS_DEFAULT_VALUE("Dismiss"),
    CallsignSDKStringKeyConfirm   CS_STRINGS_FILE_KEY("Confirm")  CS_DEFAULT_VALUE("Confirm"),
    CallsignSDKStringKeyReject    CS_STRINGS_FILE_KEY("REJECT")   CS_DEFAULT_VALUE("REJECT"),
    CallsignSDKStringKeyContinue  CS_STRINGS_FILE_KEY("CONTINUE") CS_DEFAULT_VALUE("CONTINUE"),
    CallsignSDKStringKeyRetry     CS_STRINGS_FILE_KEY("Retry")    CS_DEFAULT_VALUE("Retry"),
    CallsignSDKStringKeyApprove   CS_STRINGS_FILE_KEY("Approve")  CS_DEFAULT_VALUE("Approve"),

    // MARK: Activity Indicator
    CallsignSDKStringKeyPleaseWait                           CS_STRINGS_FILE_KEY("ActivityIndicator_PleaseWait")          CS_DEFAULT_VALUE("Please wait..."),

    // MARK: PIN Authenticator
    CallsignSDKStringKeyPinPadTitleText                      CS_UNAVAILABLE("No longer used"),
    CallsignSDKStringKeyPinPadTitleImageAccessibilityLabel   CS_UNAVAILABLE("No longer used"),
    CallsignSDKStringKeyPinPadSetPIN                         CS_STRINGS_FILE_KEY("PinPad_SetPIN")                         CS_DEFAULT_VALUE("Set your PIN"),
    CallsignSDKStringKeyPinPadSetPINMessage                  CS_STRINGS_FILE_KEY("PinPad_SetPINMessage")                  CS_DEFAULT_VALUE("Create a memorable PIN"),
    CallsignSDKStringKeyPinPadConfirmPIN                     CS_STRINGS_FILE_KEY("PinPad_ConfirmPIN")                     CS_DEFAULT_VALUE("Confirm your PIN"),
    CallsignSDKStringKeyPinPadConfirmPINMessage              CS_STRINGS_FILE_KEY("PinPad_ConfirmPINMessage")              CS_DEFAULT_VALUE("Enter your PIN again"),
    CallsignSDKStringKeyPinPadForgotPIN                      CS_STRINGS_FILE_KEY("PinPad_ForgotPIN")                      CS_DEFAULT_VALUE("Forgot PIN"),
    CallsignSDKStringKeyPinPadForgot                         CS_UNAVAILABLE("No longer used"),
    CallsignSDKStringKeyPinPadEnterPIN                       CS_STRINGS_FILE_KEY("PinPad_EnterPIN")                       CS_DEFAULT_VALUE("Enter your PIN"),
    CallsignSDKStringKeyPinPadResetPIN                       CS_STRINGS_FILE_KEY("PinPad_ResetPIN")                       CS_DEFAULT_VALUE("Reset PIN"),
    CallsignSDKStringKeyPinPadResetPINMessage                CS_STRINGS_FILE_KEY("PinPad_ResetPINMessage")                CS_DEFAULT_VALUE("Are you sure you want to reset your PIN?"),
    CallsignSDKStringKeyPinPadEnterVerificationCode          CS_STRINGS_FILE_KEY("PinPad_VerifyPhone")                    CS_DEFAULT_VALUE("Enter Verification Code"),
    CallsignSDKStringKeyPinPadEnterCode                      CS_STRINGS_FILE_KEY("PinPad_PhoneVerificationText")          CS_DEFAULT_VALUE("Enter code"),
    CallsignSDKStringKeyPinPadForgotAccessibilityLabel       CS_UNAVAILABLE("No longer used"),
    CallsignSDKStringKeyPinPadCreateMessage                  CS_UNAVAILABLE("No longer used"),
    CallsignSDKStringKeyPinPadSecurityCode                   CS_STRINGS_FILE_KEY("PinPad_SecurityCode")                   CS_DEFAULT_VALUE("SECURITY CODE"),
    CallsignSDKStringKeyPinPadAllowUpdate                    CS_STRINGS_FILE_KEY("PinPad_AllowUpdate")                    CS_DEFAULT_VALUE("Allow Update"),
    CallsignSDKStringKeyPinPadPINsDoNotMatchTitle            CS_STRINGS_FILE_KEY("PinPad_PINsDoNotMatch_Title")           CS_DEFAULT_VALUE("PINs do not match"),
    CallsignSDKStringKeyPinPadPINsDoNotMatchMessage          CS_STRINGS_FILE_KEY("PinPad_PINsDoNotMatch_Message")         CS_DEFAULT_VALUE("Please make sure you enter the same PIN sequence."),
    CallsignSDKStringKeyPinPadWeakSequenceTitle              CS_STRINGS_FILE_KEY("PinPad_WeakSequenceTitle")              CS_DEFAULT_VALUE("Invalid PIN sequence"),
    CallsignSDKStringKeyPinPadWeakSequenceSameDigits         CS_STRINGS_FILE_KEY("PinPad_WeakSequenceSameDigits")         CS_DEFAULT_VALUE("Please make sure your PIN is made up of different digits."),
    CallsignSDKStringKeyPinPadWeakSequenceConsecutiveDigits  CS_STRINGS_FILE_KEY("PinPad_WeakSequenceConsecutiveDigits")  CS_DEFAULT_VALUE("Please make sure your PIN is not consecutive digits."),
    CallsignSDKStringKeyPinPadCountOfDigitsEntered           CS_STRINGS_FILE_KEY("PinPad_CountOfDigitsEntered")           CS_DEFAULT_VALUE("of"),
    CallsignSDKStringKeyPinPadInvalidPIN                     CS_STRINGS_FILE_KEY("PinPad_InvalidPinMessage")              CS_DEFAULT_VALUE("Please check your PIN and try again"),
    CallsignSDKStringKeyPinPadInvalidSecurityCode            CS_STRINGS_FILE_KEY("PinPad_InvalidSecurityCode")            CS_DEFAULT_VALUE("Please check your code and try again"),

    // MARK: Reject Transaction
    CallsignSDKStringKeyRejectAreYouSure                     CS_STRINGS_FILE_KEY("Transaction_AreYouSureReject")          CS_DEFAULT_VALUE("Are you sure you want to reject this transaction?"),
    CallsignSDKStringKeyRejectButton                         CS_STRINGS_FILE_KEY("cs_transact_btn_deny_trans")            CS_DEFAULT_VALUE("Reject"),
    CallsignSDKStringKeyRejectPrompt                         CS_STRINGS_FILE_KEY("cs_transact_reason_decline")            CS_DEFAULT_VALUE("Why do you want to reject?"),
    CallsignSDKStringKeyRejectChangedMyMind                  CS_STRINGS_FILE_KEY("cs_transact_btn_changed_mind")          CS_DEFAULT_VALUE("I don't need it anymore"),
    CallsignSDKStringKeyRejectDidNotRequest                  CS_STRINGS_FILE_KEY("cs_transact_btn_did_not_request")       CS_DEFAULT_VALUE("I didn't request it"),
    CallsignSDKStringKeyRejectTryAgain                       CS_STRINGS_FILE_KEY("cs_transact_message_try_again")         CS_DEFAULT_VALUE("Try again."),
    CallsignSDKStringKeyRejectCancelAction                   CS_STRINGS_FILE_KEY("cs_transact_btn_cancel_deny_action")    CS_DEFAULT_VALUE("Back to approval"),
    
    // MARK: Approval Authenticator
    CallsignSDKStringKeyApprovalServiceName                  CS_STRINGS_FILE_KEY("cs_approval_service_name")              CS_DEFAULT_VALUE("Service Name"),
    CallsignSDKStringKeyApprovalRequest                      CS_STRINGS_FILE_KEY("cs_approval_request")                   CS_DEFAULT_VALUE("Approval request"),
    CallsignSDKStringKeyApprovalRequestMessage               CS_STRINGS_FILE_KEY("cs_approval_request_message")           CS_DEFAULT_VALUE("Check below and approve or reject"),

    // MARK: Swipe Authenticator
    CallsignSDKStringKeySwipeHelpUsageTitle                  CS_STRINGS_FILE_KEY("cs_swipe_overlay_usage_title")          CS_DEFAULT_VALUE("Using Swipe"),
    CallsignSDKStringKeySwipeHelpUsageDescription            CS_STRINGS_FILE_KEY("cs_swipe_overlay_usage_description")    CS_DEFAULT_VALUE("<h3 style=\"font-size: 17px;\">Approving &amp; rejecting</h3><br/><p style=\"font-size: 15px;\">Swipe the card on the previous page to approve the request. We&rsquo;ve remembered the way you swipe so we can tell if it&rsquo;s really you.</p><br/><p style=\"font-size: 15px;\"> If you weren&rsquo;t expecting this request or something doesn&rsquo;t look right, press &lsquo;Reject&rsquo; and we&rsquo;ll stop it going through.</p><br/><h3 style=\"font-size: 17px;\">Using a screen reader?</h3><br/><p style=\"font-size: 15px;\">You can swipe the card with two fingers to approve.</p>"),
    CallsignSDKStringKeySwipeHelpSetupTitle                  CS_STRINGS_FILE_KEY("cs_swipe_overlay_setup_title")          CS_DEFAULT_VALUE("Setting your 'Swipe'"),
    CallsignSDKStringKeySwipeHelpSetupDescription            CS_STRINGS_FILE_KEY("cs_swipe_overlay_setup_description")    CS_DEFAULT_VALUE("<h3 style=\"font-size: 17px;\">Setting your Swipe</h3><br/><p style=\"font-size: 15px;\">Swipe the card on the previous page to set your Swipe. We'll remember the way you swipe so we can tell if it's really you when we ask you to approve things in the Callsign app.</p><br/><h3 style=\"font-size: 17px;\">Using a screen reader?</h3><br/><p style=\"font-size: 15px;\">You can swipe the card with two fingers to approve.</p>"),
    CallsignSDKStringKeySwipeToApprove                       CS_STRINGS_FILE_KEY("cs_swipe_view_approval_title")          CS_DEFAULT_VALUE("Swipe to approve"),
    CallsignSDKStringKeySwipeSetYourSwipe                    CS_STRINGS_FILE_KEY("cs_swipe_view_setup_title")             CS_DEFAULT_VALUE("Set your swipe"),
    CallsignSDKStringKeySwipeNeedHelp                        CS_STRINGS_FILE_KEY("cs_swipe_card_help_button_title")       CS_DEFAULT_VALUE("Need help"),
    CallsignSDKStringKeySwipeHelpTitle                       CS_UNAVAILABLE("No longer used"),
    CallsignSDKStringKeySwipeHelpDescription                 CS_UNAVAILABLE("No longer used"),

    // MARK: Path Authenticator
    CallsignSDKStringKeyPathConfirmErrorTitle                CS_STRINGS_FILE_KEY("cs_path_confirm_error_title")           CS_DEFAULT_VALUE("Paths do not match"),
    CallsignSDKStringKeyPathCreateErrorTitle                 CS_STRINGS_FILE_KEY("cs_path_create_error_title")            CS_DEFAULT_VALUE("Path not correct"),
    CallsignSDKStringKeyPathCreateErrorMessage               CS_STRINGS_FILE_KEY("cs_path_create_error_message")          CS_DEFAULT_VALUE("You need to select at least 5 dots."),
    CallsignSDKStringKeyPathCreateMessage                    CS_STRINGS_FILE_KEY("cs_path_create_message")                CS_DEFAULT_VALUE("Please create a path composed of at least 5 dots."),
    CallsignSDKStringKeyPathCreateTitle                      CS_STRINGS_FILE_KEY("cs_path_create_title")                  CS_DEFAULT_VALUE("Set your Path"),
    CallsignSDKStringKeyPathReenterErrorMessage              CS_STRINGS_FILE_KEY("cs_path_reenter_error_message")         CS_DEFAULT_VALUE("Please make sure you enter the same path sequence."),
    CallsignSDKStringKeyPathReenterMessage                   CS_STRINGS_FILE_KEY("cs_path_reenter_message")               CS_DEFAULT_VALUE("Please confirm your path."),
    CallsignSDKStringKeyPathReenterTitle                     CS_STRINGS_FILE_KEY("cs_path_reenter_title")                 CS_DEFAULT_VALUE("Confirm your path"),
    CallsignSDKStringKeyPathAuthenticateTitle                CS_STRINGS_FILE_KEY("cs_path_authenticate_title")            CS_DEFAULT_VALUE("Verify your path"),
    CallsignSDKStringKeyPathAuthenticateMessage              CS_STRINGS_FILE_KEY("cs_path_authenticate_message")          CS_DEFAULT_VALUE("Enter your path to continue"),
    CallsignSDKStringKeyPathTooLongErrorMessage              CS_STRINGS_FILE_KEY("cs_path_too_long_error_message")        CS_DEFAULT_VALUE("Path sequence is too long."),
    CallsignSDKStringKeyPathInvalidPathMessage               CS_STRINGS_FILE_KEY("cs_path_invalid_path_message")          CS_DEFAULT_VALUE("Please check your path and try again"),
    CallsignSDKStringKeyPathForgotButtonTitle                CS_STRINGS_FILE_KEY("cs_path_forgot_button_title")           CS_DEFAULT_VALUE("Forgot Path"),
    CallsignSDKStringKeyPathForgotAlertTitle                 CS_STRINGS_FILE_KEY("cs_path_forgot_button_alert_title")     CS_DEFAULT_VALUE("Reset Path"),
    CallsignSDKStringKeyPathForgotAlertMessage               CS_STRINGS_FILE_KEY("cs_path_forgot_button_alert_message")   CS_DEFAULT_VALUE("Are you sure you want to reset your Path?"),
    CallsignSDKStringKeyPathSetupHelpTitle                   CS_STRINGS_FILE_KEY("cs_path_overlay_setup_title")           CS_DEFAULT_VALUE("Setting up Path"),
    CallsignSDKStringKeyPathSetupHelpDescription             CS_STRINGS_FILE_KEY("cs_path_overlay_setup_description")     CS_DEFAULT_VALUE("<h3 style=\"font-size: 17px;\">Setting your path</h3><br/><p style=\"font-size: 15px;\">Connect at least five dots to create a memorable pattern. You can even make diagonal connections if you like. When you&rsquo;re done, you&rsquo;ll be able to use this like a password to approve things in the future.</p>"),
    CallsignSDKStringKeyPathUsageHelpButtonTitle             CS_UNAVAILABLE("No longer used"),
    CallsignSDKStringKeyPathUsageHelpTitle                   CS_STRINGS_FILE_KEY("cs_path_overlay_usage_title")           CS_DEFAULT_VALUE("Using your Path"),
    CallsignSDKStringKeyPathUsageHelpDescription             CS_STRINGS_FILE_KEY("cs_path_overlay_usage_description")     CS_DEFAULT_VALUE("<h3 style=\"font-size: 17px;\">Approving with Path</h3><br/><p style=\"font-size: 15px;\">Enter your path to approve this request. It must connect at least five points and match the one you already set up.</p>"),
    CallsignSDKStringKeyPathNeedHelp                        CS_STRINGS_FILE_KEY("cs_path_help_button_title")       CS_DEFAULT_VALUE("Need help?"),

    // MARK: Wait Requirement
    CallsignSDKStringKeyWaitTitle                            CS_STRINGS_FILE_KEY("cs_wait_title")                         CS_DEFAULT_VALUE("Check your registered\ndevices to continue\nauthentication"),
    CallsignSDKStringKeyWaitDetails                          CS_STRINGS_FILE_KEY("cs_wait_details")                       CS_DEFAULT_VALUE("Please wait for a notification to appear"),
    CallsignSDKStringKeyWaitPrompt                           CS_STRINGS_FILE_KEY("cs_wait_prompt")                        CS_DEFAULT_VALUE("Unable to receive a notification?"),
    CallsignSDKStringKeyWaitTryAlternativeMethodButton       CS_STRINGS_FILE_KEY("cs_wait_try_alternative_method_button") CS_DEFAULT_VALUE("Try an alternative method"),
    CallsignSDKStringKeyWaitTryAlternativeMethodAlert        CS_STRINGS_FILE_KEY("cs_wait_try_alternative_method_alert")  CS_DEFAULT_VALUE("Are you sure you want to use an alternative method?"),

    // MARK: Intervention Requirement
    CallsignSDKStringKeyInterventionTitle                    CS_STRINGS_FILE_KEY("cs_intervention_title")                 CS_DEFAULT_VALUE("Answer a question"),
    CallsignSDKStringKeyInterventionSubTitle                 CS_STRINGS_FILE_KEY("cs_intervention_subTitle")              CS_DEFAULT_VALUE("Select an answer to continue"),

    // MARK: Errors displayed by the SDK
    CallsignSDKStringKeyNoNetwork                            CS_STRINGS_FILE_KEY("cs_error_no_network")                   CS_DEFAULT_VALUE("No network connection"),
    CallsignSDKStringKeyNetworkError                         CS_STRINGS_FILE_KEY("cs_error_network_error")                CS_DEFAULT_VALUE("A network error occurred"),

    CallsignSDKStringKeyNoString,
};

// This will get the deprecated keys used in CallsignSDK_deprecated.strings
NSString * _Nonnull NSStringFromCallsignSDKStringKey(CallsignSDKStringKey key) NS_SWIFT_NAME(StringFromCallsignSDKStringKey(_:));
