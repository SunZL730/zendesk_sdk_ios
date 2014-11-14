//
//  ZDKDateUtil.h
//  ZendeskSDK
//
//  Created by Zendesk on 10/11/2014.
//  Copyright (c) 2014 Zendesk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZDKDateUtil : NSObject


/**
 * Get the NSDate object from an API date string (e.g. 2014-05-22T12:58:30Z).
 *
 * @param string the date string from the API
 * @return the NSDate representation of the string
 */
+ (NSDate*) dateForJsonString:(NSString*)string;


#pragma mark date conversions


/**
 * Convert the date to an NSNumber of the timeIntervalSince1970.
 *
 * @param date the date to be converted
 * @return the NSNumber of the timeIntervalSince1970
 */
+ (NSNumber*) dateAsNumber:(NSDate*)date;


/**
 * Convert the timeIntervalSince1970 into an NSDate object.
 *
 * @param date the NSNumber of the timeIntervalSince1970
 * @return the NDDate representation of that number
 */
+ (NSDate*) dateFromNumber:(NSNumber*)date;


/**
 * Obtain the date from the provided string using the specified format.
 *
 * @param string the date string
 * @param format the format to be used to read the string
 * @return the date object if it can be parsed, otherwise nil
 */
+ (NSDate*) dateFromString:(NSString*)string usingFormat:(NSString*)format;


/**
 * Generate a string from the date using the specified format.
 *
 * @param date the date to be used
 * @param format the format to be used to create the string
 * @return the string if it can be created, otherwise nil
 */
+ (NSString*) stringFromDate:(NSDate*)date usingFormat:(NSString*)format;


/**
 * Get a cached thread local formatter for the requested date format.
 *
 * @return the formatter
 */
+ (NSDateFormatter*) formatterForFormat:(NSString*) format;

@end
