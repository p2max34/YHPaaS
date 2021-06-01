//
//  CMSPatternDataBinderManager.h
//  CMSPaaS
//
//  Created by HJ on 2020/11/20.
//

#import <Foundation/Foundation.h>
#import "CMSPatternStringDataBinder.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSPatternDataBinderManager : NSObject
+ (instancetype)sharedInstance;
/// 添加了一个管理的binder 并且complete 返回
- (void)addDataBinderWithKey:(NSString *)key baseBinderContent:(NSString *)content complete:(void(^)(NSString *key,id response))complete ;
/// 把 binder 添加到 manager 中
- (void)addDataBinderWithKey:(NSString *)key binder:(CMSBasePatternDataBinder *)binder;
/// 根据 key 获取 binder
- (CMSBasePatternDataBinder *)readDataBinderByKey:(NSString *)key;
/// 根据 key 移除 manager 中的  binder
- (void)removeDataBinderByKey:(NSString *)key;
/// 根据 keys 移除 manager 中的  binder
- (void)removeDataBinderByKeys:(NSArray *)keys;
- (void)removeAllDataBinder;
@end

NS_ASSUME_NONNULL_END
