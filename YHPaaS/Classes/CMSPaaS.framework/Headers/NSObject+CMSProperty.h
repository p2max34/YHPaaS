//

//  NSObject+CMSProperty.h
//  CMSPaaS
//
//  Created by liuyanliang on 2021/01/21.


#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface NSObject (CMSProperty)

- (NSArray<NSString *> *)cms_validProperties;

- (void)cms_setValue:(nullable id)value forKey:(NSString *)key;

- (nullable id)cms_valueForKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
