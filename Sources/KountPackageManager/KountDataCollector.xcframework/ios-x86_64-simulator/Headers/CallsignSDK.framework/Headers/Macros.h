//
//  Macros.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

/**
 * The unavailable attribute results in an error if the function is used anywhere
 * in the source file.
 */
#define CS_UNAVAILABLE(_message) __attribute__((unavailable(_message)))

/**
 * The deprecated attribute results in a warning if the function is used anywhere
 * in the source file.
 *
 * @see https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html
 */
#ifndef CS_DEPRECATED
#define CS_DEPRECATED(_message) __attribute__((deprecated(_message)))
#endif

/**
 * Used as a marker for the deprecated strings file key of an enum, read by a script
 */
#define CS_STRINGS_FILE_KEY(value)

/**
 * Used as a marker for the default value of an enum, read by a script
 */
#define CS_DEFAULT_VALUE(value)
