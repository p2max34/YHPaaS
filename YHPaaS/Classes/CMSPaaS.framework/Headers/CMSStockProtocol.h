//
//  CMSStockProtocol.h
//  CMSPaaS
//
//  Created by sway on 2021/1/7.
//

#import <Foundation/Foundation.h>
#import "CMSStockQuotesProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CMSStockProtocol <NSObject>
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *setCode;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, strong) id<CMSStockQuotesProtocol> quotes;

@end

NS_ASSUME_NONNULL_END
