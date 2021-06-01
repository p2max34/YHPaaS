//
//  CMSServiceAgent.h
//  CMSPaaS
//
//  Created by admin on 2020/9/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSServiceAgent : NSObject

+ (instancetype)sharedInstance;

- (void)executeServiceURL:(NSString *)url callback:(void(^)(NSString *result))callback;

//- (void)registerServiceOfName:(NSString *)serviceName serviceTarget:(id)target;

- (void)cancelServiceOfURL:(NSString *)url;

+ (void)registerService:(NSDictionary *)serviceClassDict;

@end

NS_ASSUME_NONNULL_END
