//
//  NSString+CMSCash.h
//  cmsmobilesecurities
//
//  Created by huzj on 16/10/14.
//  Copyright © 2016年 cms. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString(CMSCash)
-(NSString*)humanReadabilityCashFormat;
-(NSString*)humanReadabilitySimplifyCashFormat;
- (NSString*)dollarReadabilitySimplifyCashFormat;
- (double)floatValueByDecimal;
@end

@interface NSString(CMSEncode)

- (NSString *)encodeToPercentEscapeString;
- (NSString *)decodeFromPercentEscapeString;

@end

@interface NSString(Emoji)

+ (BOOL)stringContainsEmoji:(NSString *)string;

/// url解析获取其中的参数
- (NSDictionary *)cms_urlParsing;

@end
