//
//  CMSStockQuotesTimeChartModel.h
//  CMSPaaS
//
//  Created by sway on 2021/4/21.
//

#import <Foundation/Foundation.h>
#import "CMSStockTimeChartItem.h"
#import "CMSStockQuotesProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSStockQuotesTimeChartModel : NSObject
@property (nonatomic, strong) NSArray <CMSStockTimeChartItem *> *charts;
@property (nonatomic, strong) id<CMSStockQuotesProtocol> quotes;

@end

NS_ASSUME_NONNULL_END
