//
//  CMSStockQuotesBinder.h
//  CMSPaaS
//
//  Created by sway on 2021/2/3.
//

#import <Foundation/Foundation.h>
#import "CMSStockProtocol.h"


@interface CMSStockQuotesBinder : NSObject
+ (instancetype)dataBinderWithStock:(id<CMSStockProtocol>)stock success:(void(^)(void))success;
+ (instancetype)dataBinderWithStock:(id<CMSStockProtocol>)stock updateWhenBind:(BOOL)updateWhenBind success:(void(^)(void))success;

@end


