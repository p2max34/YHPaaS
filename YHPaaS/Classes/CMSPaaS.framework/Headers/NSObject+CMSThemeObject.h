//
//  NSObject+CMSThemeObject.h
//  CMSPaaS
//
//  Created by admin on 2020/12/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (CMSThemeObject)
@property (nonatomic, strong) NSMutableDictionary<NSString *, id > *themes;
@end

NS_ASSUME_NONNULL_END
