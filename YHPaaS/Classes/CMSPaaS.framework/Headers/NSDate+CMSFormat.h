//

//  NSDate+CMSFormat.h
//  CMSPaaS
//
//  Created by sway on 2020/10/23.


#import <Foundation/Foundation.h>

@interface NSDate (CMSFormat)

+ (NSDate *)cms_dateFromString:(NSString *)string dateFormat:(NSString *)format;
+ (NSString *)cms_format:(NSString *)format fromeTimeStamp:(NSInteger)timestamp;
+ (NSString *)cms_format:(NSString *)format FromDate:(NSDate *)date;

- (NSString *)cms_updateTimeForRow:(NSString *)timestamp;
- (NSString *)cms_stringWithFormat:(NSString *)format;

/// 增加 | 年 | 月 | 日
/// @param dYears 支持负数
- (NSDate *)cms_dateByAddingYears:(NSInteger)dYears;
- (NSDate *)cms_dateByAddingMonths:(NSInteger)dMonths;
- (NSDate *)cms_dateByAddingDays:(NSInteger)dDays;

@end

