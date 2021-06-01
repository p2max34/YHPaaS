//
//  CMSQuotesSotckIndexModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>
#import "CMSQuoteIconTitleModel.h"
#import "CMSStock.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesSotckIndexModel : NSObject
@property (nonatomic, copy) NSArray<id<CMSStockProtocol>> *stockIndexs;
@property (nonatomic, copy) NSArray<CMSQuoteIconTitleModel *> *customItems;
@property (nonatomic, copy) NSArray<id<CMSStockProtocol>> *allStockIndexs;
@end

NS_ASSUME_NONNULL_END
